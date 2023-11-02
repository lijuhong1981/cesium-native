#pragma once

#include "readFile.h"

#include <Cesium3DTilesContent/B3dmToGltfConverter.h>
#include <Cesium3DTilesContent/PntsToGltfConverter.h>

#include <filesystem>

namespace Cesium3DTilesSelection {

class ConvertTileToGltf {
public:
  static GltfConverterResult fromB3dm(const std::filesystem::path& filePath) {
    return B3dmToGltfConverter::convert(readFile(filePath), {});
  }

  static GltfConverterResult fromPnts(const std::filesystem::path& filePath) {
    return PntsToGltfConverter::convert(readFile(filePath), {});
  }
};
} // namespace Cesium3DTilesSelection
