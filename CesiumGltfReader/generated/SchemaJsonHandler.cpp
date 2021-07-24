// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "SchemaJsonHandler.h"
#include "CesiumGltf/Schema.h"

#include <cassert>
#include <string>

using namespace CesiumGltf;

SchemaJsonHandler::SchemaJsonHandler(const ReaderContext& context) noexcept
    : ExtensibleObjectJsonHandler(context),
      _name(),
      _description(),
      _version(),
      _classes(context),
      _enums(context) {}

void SchemaJsonHandler::reset(
    CesiumJsonReader::IJsonHandler* pParentHandler,
    Schema* pObject) {
  ExtensibleObjectJsonHandler::reset(pParentHandler, pObject);
  this->_pObject = pObject;
}

CesiumJsonReader::IJsonHandler*
SchemaJsonHandler::readObjectKey(const std::string_view& str) {
  assert(this->_pObject);
  return this->readObjectKeySchema(Schema::TypeName, str, *this->_pObject);
}

CesiumJsonReader::IJsonHandler* SchemaJsonHandler::readObjectKeySchema(
    const std::string& objectType,
    const std::string_view& str,
    Schema& o) {
  using namespace std::string_literals;

  if ("name"s == str)
    return property("name", this->_name, o.name);
  if ("description"s == str)
    return property("description", this->_description, o.description);
  if ("version"s == str)
    return property("version", this->_version, o.version);
  if ("classes"s == str)
    return property("classes", this->_classes, o.classes);
  if ("enums"s == str)
    return property("enums", this->_enums, o.enums);

  return this->readObjectKeyExtensibleObject(objectType, str, *this->_pObject);
}
