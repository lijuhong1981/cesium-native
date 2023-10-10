// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "NamedObjectJsonHandler.h"

#include <CesiumGltf/Image.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
class JsonReaderOptions;
}

namespace CesiumGltfReader {
class ImageJsonHandler : public CesiumGltfReader::NamedObjectJsonHandler {
public:
  using ValueType = CesiumGltf::Image;

  ImageJsonHandler(const CesiumJsonReader::JsonReaderOptions& options) noexcept;
  void reset(IJsonHandler* pParentHandler, CesiumGltf::Image* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyImage(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::Image& o);

private:
  CesiumGltf::Image* _pObject = nullptr;
  CesiumJsonReader::StringJsonHandler _uri;
  CesiumJsonReader::StringJsonHandler _mimeType;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _bufferView;
};
} // namespace CesiumGltfReader
