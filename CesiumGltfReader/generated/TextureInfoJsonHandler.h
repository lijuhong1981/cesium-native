// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/TextureInfo.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>

namespace CesiumJsonReader {
class ExtensionReaderContext;
}

namespace CesiumGltf {
class TextureInfoJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler {
public:
  using ValueType = TextureInfo;

  TextureInfoJsonHandler(
      const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, TextureInfo* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyTextureInfo(
      const std::string& objectType,
      const std::string_view& str,
      TextureInfo& o);

private:
  TextureInfo* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _index;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _texCoord;
};
} // namespace CesiumGltf
