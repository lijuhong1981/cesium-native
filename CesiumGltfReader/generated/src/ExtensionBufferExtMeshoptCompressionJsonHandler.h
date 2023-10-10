// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/ExtensionBufferExtMeshoptCompression.h>
#include <CesiumJsonReader/BoolJsonHandler.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>

namespace CesiumJsonReader {
class JsonReaderOptions;
}

namespace CesiumGltfReader {
class ExtensionBufferExtMeshoptCompressionJsonHandler
    : public CesiumJsonReader::ExtensibleObjectJsonHandler,
      public CesiumJsonReader::IExtensionJsonHandler {
public:
  using ValueType = CesiumGltf::ExtensionBufferExtMeshoptCompression;

  static inline constexpr const char* ExtensionName = "EXT_meshopt_compression";

  ExtensionBufferExtMeshoptCompressionJsonHandler(
      const CesiumJsonReader::JsonReaderOptions& options) noexcept;
  void reset(
      IJsonHandler* pParentHandler,
      CesiumGltf::ExtensionBufferExtMeshoptCompression* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  virtual void reset(
      IJsonHandler* pParentHandler,
      CesiumUtility::ExtensibleObject& o,
      const std::string_view& extensionName) override;

  virtual IJsonHandler& getHandler() override { return *this; }

protected:
  IJsonHandler* readObjectKeyExtensionBufferExtMeshoptCompression(
      const std::string& objectType,
      const std::string_view& str,
      CesiumGltf::ExtensionBufferExtMeshoptCompression& o);

private:
  CesiumGltf::ExtensionBufferExtMeshoptCompression* _pObject = nullptr;
  CesiumJsonReader::BoolJsonHandler _fallback;
};
} // namespace CesiumGltfReader
