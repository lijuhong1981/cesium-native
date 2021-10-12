// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "NamedObjectJsonHandler.h"

#include <CesiumGltf/Skin.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltf {
class SkinJsonHandler : public NamedObjectJsonHandler {
public:
  using ValueType = Skin;

  SkinJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, Skin* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeySkin(
      const std::string& objectType,
      const std::string_view& str,
      Skin& o);

private:
  Skin* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _inverseBindMatrices;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _skeleton;
  CesiumJsonReader::
      ArrayJsonHandler<int32_t, CesiumJsonReader::IntegerJsonHandler<int32_t>>
          _joints;
};
} // namespace CesiumGltf
