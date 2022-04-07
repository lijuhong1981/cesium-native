#pragma once

#include <Cesium3DTilesSelection/Exp_GltfConverterResult.h>
#include <CesiumGltf/Model.h>

#include <gsl/span>

#include <optional>

namespace Cesium3DTilesSelection {
struct B3dmToGltfConverter {
  static GltfConverterResult
  convert(const gsl::span<const std::byte>& b3dmBinary);
};
} // namespace Cesium3DTilesSelection
