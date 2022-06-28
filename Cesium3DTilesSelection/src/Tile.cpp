#include "Cesium3DTilesSelection/Tile.h"

#include <CesiumGeometry/Axis.h>
#include <CesiumGeometry/AxisTransforms.h>
#include <CesiumGeometry/Rectangle.h>
#include <CesiumGeospatial/Transforms.h>
#include <CesiumGltf/Model.h>
#include <CesiumUtility/JsonHelpers.h>
#include <CesiumUtility/Tracing.h>

#include <cstddef>

using namespace CesiumGeometry;
using namespace CesiumGeospatial;
using namespace CesiumUtility;
using namespace std::string_literals;

namespace Cesium3DTilesSelection {
Tile::Tile(TilesetContentLoader* pLoader) noexcept
    : Tile(TileConstructorImpl{}, pLoader) {}

Tile::Tile(
    TilesetContentLoader* pLoader,
    TileExternalContent externalContent) noexcept
    : Tile(TileConstructorImpl{}, pLoader, externalContent) {}

Tile::Tile(
    TilesetContentLoader* pLoader,
    TileEmptyContent emptyContent) noexcept
    : Tile(TileConstructorImpl{}, pLoader, emptyContent) {}

template <typename... TileContentArgs, typename TileContentEnable>
Tile::Tile(TileConstructorImpl, TileContentArgs&&... args)
    : _pParent(nullptr),
      _children(),
      _id(""s),
      _boundingVolume(OrientedBoundingBox(glm::dvec3(), glm::dmat3())),
      _viewerRequestVolume(),
      _contentBoundingVolume(),
      _geometricError(0.0),
      _refine(TileRefine::Replace),
      _transform(1.0),
      _lastSelectionState(),
      _loadedTilesLinks(),
      _pContent{std::make_unique<TileContent>(
          std::forward<TileContentArgs>(args)...)} {}

Tile::Tile(Tile&& rhs) noexcept
    : _pParent(rhs._pParent),
      _children(std::move(rhs._children)),
      _id(std::move(rhs._id)),
      _boundingVolume(rhs._boundingVolume),
      _viewerRequestVolume(rhs._viewerRequestVolume),
      _contentBoundingVolume(rhs._contentBoundingVolume),
      _geometricError(rhs._geometricError),
      _refine(rhs._refine),
      _transform(rhs._transform),
      _lastSelectionState(rhs._lastSelectionState),
      _loadedTilesLinks(),
      _pContent(std::move(rhs._pContent)) {
  // since children of rhs will have the parent pointed to rhs,
  // we will reparent them to this tile as rhs will be destroyed after this
  for (Tile& tile : this->_children) {
    tile.setParent(this);
  }
}

Tile& Tile::operator=(Tile&& rhs) noexcept {
  if (this != &rhs) {
    this->_loadedTilesLinks = rhs._loadedTilesLinks;

    // since children of rhs will have the parent pointed to rhs,
    // we will reparent them to this tile as rhs will be destroyed after this
    this->_pParent = rhs._pParent;
    this->_children = std::move(rhs._children);
    for (Tile& tile : this->_children) {
      tile.setParent(this);
    }

    this->_id = std::move(rhs._id);
    this->_boundingVolume = rhs._boundingVolume;
    this->_viewerRequestVolume = rhs._viewerRequestVolume;
    this->_contentBoundingVolume = rhs._contentBoundingVolume;
    this->_geometricError = rhs._geometricError;
    this->_refine = rhs._refine;
    this->_transform = rhs._transform;
    this->_lastSelectionState = rhs._lastSelectionState;
    this->_pContent = std::move(rhs._pContent);
  }

  return *this;
}

void Tile::createChildTiles(std::vector<Tile>&& children) {
  if (!this->_children.empty()) {
    throw std::runtime_error("Children already created.");
  }

  this->_children = std::move(children);
  for (Tile& tile : this->_children) {
    tile.setParent(this);
  }
}

double Tile::getNonZeroGeometricError() const noexcept {
  double geometricError = this->getGeometricError();
  if (geometricError > Math::Epsilon5) {
    // Tile's geometric error is good.
    return geometricError;
  }

  const Tile* pParent = this->getParent();
  double divisor = 1.0;

  while (pParent) {
    if (!pParent->getUnconditionallyRefine()) {
      divisor *= 2.0;
      double ancestorError = pParent->getGeometricError();
      if (ancestorError > Math::Epsilon5) {
        return ancestorError / divisor;
      }
    }

    pParent = pParent->getParent();
  }

  // No sensible geometric error all the way to the root of the tile tree.
  // So just use a tiny geometric error and raster selection will be limited by
  // quadtree tile count or texture resolution size.
  return Math::Epsilon5;
}

int64_t Tile::computeByteSize() const noexcept {
  int64_t bytes = 0;

  const TileContent& content = this->getContent();
  const TileRenderContent* pRenderContent = content.getRenderContent();
  if (pRenderContent && pRenderContent->model) {
    const CesiumGltf::Model& model = pRenderContent->model.value();

    // Add up the glTF buffers
    for (const CesiumGltf::Buffer& buffer : model.buffers) {
      bytes += int64_t(buffer.cesium.data.size());
    }

    const std::vector<CesiumGltf::BufferView>& bufferViews = model.bufferViews;
    for (const CesiumGltf::Image& image : model.images) {
      const int32_t bufferView = image.bufferView;
      // For images loaded from buffers, subtract the buffer size before adding
      // the decoded image size.
      if (bufferView >= 0 &&
          bufferView < static_cast<int32_t>(bufferViews.size())) {
        bytes -= bufferViews[size_t(bufferView)].byteLength;
      }

      bytes += int64_t(image.cesium.pixelData.size());
    }
  }

  return bytes;
}

bool Tile::isRenderable() const noexcept {
  if (getState() >= TileLoadState::ContentLoaded) {
    if (!isExternalContent()) {
      return true;
    }
  } 

  return false;
}

bool Tile::isRenderContent() const noexcept {
  return _pContent->isRenderContent();
}

bool Tile::isExternalContent() const noexcept {
  return _pContent->isExternalContent();
}

bool Tile::isEmptyContent() const noexcept {
  return _pContent->isEmptyContent();
}

TileLoadState Tile::getState() const noexcept { return _pContent->getState(); }
} // namespace Cesium3DTilesSelection
