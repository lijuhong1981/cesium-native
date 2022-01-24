// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensionExtMeshFeaturesEnumValue.h"
#include "CesiumGltf/Library.h"

#include <CesiumUtility/ExtensibleObject.h>

#include <optional>
#include <string>
#include <vector>

namespace CesiumGltf {
/**
 * @brief An object defining the values of an enum.
 */
struct CESIUMGLTF_API ExtensionExtMeshFeaturesEnum final
    : public CesiumUtility::ExtensibleObject {
  static inline constexpr const char* TypeName = "ExtensionExtMeshFeaturesEnum";

  /**
   * @brief Known values for The type of the integer enum value.
   */
  struct ValueType {
    inline static const std::string INT8 = "INT8";

    inline static const std::string UINT8 = "UINT8";

    inline static const std::string INT16 = "INT16";

    inline static const std::string UINT16 = "UINT16";

    inline static const std::string INT32 = "INT32";

    inline static const std::string UINT32 = "UINT32";

    inline static const std::string INT64 = "INT64";

    inline static const std::string UINT64 = "UINT64";
  };

  /**
   * @brief The name of the enum, e.g. for display purposes.
   */
  std::optional<std::string> name;

  /**
   * @brief The description of the enum.
   */
  std::optional<std::string> description;

  /**
   * @brief The type of the integer enum value.
   *
   * Known values are defined in {@link ValueType}.
   *
   */
  std::string valueType = ValueType::UINT16;

  /**
   * @brief An array of enum values. Duplicate names or duplicate integer values
   * are not allowed.
   */
  std::vector<CesiumGltf::ExtensionExtMeshFeaturesEnumValue> values;
};
} // namespace CesiumGltf
