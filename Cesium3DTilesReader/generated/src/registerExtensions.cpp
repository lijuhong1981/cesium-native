// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!

#include "registerExtensions.h"

#include "Extension3dTilesBoundingVolumeS2JsonHandler.h"
#include "Extension3dTilesContentGltfJsonHandler.h"
#include "Extension3dTilesImplicitTilingJsonHandler.h"
#include "Extension3dTilesMultipleContentsJsonHandler.h"
#include "ExtensionContent3dTilesMetadataJsonHandler.h"
#include "ExtensionSubtree3dTilesMetadataJsonHandler.h"
#include "ExtensionSubtree3dTilesMultipleContentsJsonHandler.h"
#include "ExtensionTile3dTilesMetadataJsonHandler.h"
#include "ExtensionTileset3dTilesMetadataJsonHandler.h"

#include <Cesium3DTiles/BoundingVolume.h>
#include <Cesium3DTiles/Content.h>
#include <Cesium3DTiles/Subtree.h>
#include <Cesium3DTiles/Tile.h>
#include <Cesium3DTiles/Tileset.h>
#include <CesiumJsonReader/ExtensionReaderContext.h>

namespace Cesium3DTilesReader {

void registerExtensions(CesiumJsonReader::ExtensionReaderContext& context) {
  (void)context;
  context.registerExtension<
      Cesium3DTiles::Tileset,
      Extension3dTilesContentGltfJsonHandler>();
  context.registerExtension<
      Cesium3DTiles::Tileset,
      ExtensionTileset3dTilesMetadataJsonHandler>();
  context.registerExtension<
      Cesium3DTiles::Tile,
      Extension3dTilesMultipleContentsJsonHandler>();
  context.registerExtension<
      Cesium3DTiles::Tile,
      Extension3dTilesImplicitTilingJsonHandler>();
  context.registerExtension<
      Cesium3DTiles::Tile,
      ExtensionTile3dTilesMetadataJsonHandler>();
  context.registerExtension<
      Cesium3DTiles::BoundingVolume,
      Extension3dTilesBoundingVolumeS2JsonHandler>();
  context.registerExtension<
      Cesium3DTiles::Subtree,
      ExtensionSubtree3dTilesMultipleContentsJsonHandler>();
  context.registerExtension<
      Cesium3DTiles::Subtree,
      ExtensionSubtree3dTilesMetadataJsonHandler>();
  context.registerExtension<
      Cesium3DTiles::Content,
      ExtensionContent3dTilesMetadataJsonHandler>();
}
} // namespace Cesium3DTilesReader
