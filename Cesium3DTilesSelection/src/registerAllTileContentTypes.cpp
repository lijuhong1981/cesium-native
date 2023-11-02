#include "CmptToGltfConverter.h"

#include <Cesium3DTilesContent/B3dmToGltfConverter.h>
#include <Cesium3DTilesContent/BinaryToGltfConverter.h>
#include <Cesium3DTilesContent/PntsToGltfConverter.h>
#include <Cesium3DTilesSelection/GltfConverters.h>
#include <Cesium3DTilesSelection/registerAllTileContentTypes.h>

namespace Cesium3DTilesSelection {

void registerAllTileContentTypes() {
  GltfConverters::registerMagic("glTF", BinaryToGltfConverter::convert);
  GltfConverters::registerMagic("b3dm", B3dmToGltfConverter::convert);
  GltfConverters::registerMagic("cmpt", CmptToGltfConverter::convert);
  GltfConverters::registerMagic("pnts", PntsToGltfConverter::convert);

  GltfConverters::registerFileExtension(
      ".gltf",
      BinaryToGltfConverter::convert);
  GltfConverters::registerFileExtension(".glb", BinaryToGltfConverter::convert);
}

} // namespace Cesium3DTilesSelection
