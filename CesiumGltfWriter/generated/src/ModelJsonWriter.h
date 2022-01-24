// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

// forward declarations
namespace CesiumJsonWriter {
class JsonWriter;
class ExtensionWriterContext;
} // namespace CesiumJsonWriter

// forward declarations
namespace CesiumGltf {
struct ExtensionKhrDracoMeshCompression;
struct ExtensionKhrMaterialsUnlit;
struct ExtensionExtMeshGpuInstancing;
struct ExtensionBufferExtMeshoptCompression;
struct ExtensionBufferViewExtMeshoptCompression;
struct ExtensionModelExtFeatureMetadata;
struct ExtensionMeshPrimitiveExtFeatureMetadata;
struct ExtensionCesiumTileEdges;
struct ExtensionModelExtMeshFeatures;
struct ExtensionMeshPrimitiveExtMeshFeatures;
struct ExtensionNodeExtMeshFeatures;
struct ExtensionExtMeshFeaturesFeatureId;
struct TextureInfo;
struct ExtensionExtMeshFeaturesPropertyTexture;
struct ExtensionExtMeshFeaturesPropertyTable;
struct ExtensionExtMeshFeaturesPropertyTableProperty;
struct ExtensionExtMeshFeaturesSchema;
struct ExtensionExtMeshFeaturesEnum;
struct ExtensionExtMeshFeaturesEnumValue;
struct ExtensionExtMeshFeaturesClass;
struct ExtensionExtMeshFeaturesClassProperty;
struct FeatureIDTexture;
struct TextureAccessor;
struct FeatureIDAttribute;
struct FeatureIDs;
struct FeatureTexture;
struct FeatureTable;
struct FeatureTableProperty;
struct Statistics;
struct ClassStatistics;
struct PropertyStatistics;
struct Schema;
struct Enum;
struct EnumValue;
struct Class;
struct ClassProperty;
struct Model;
struct Texture;
struct Skin;
struct Scene;
struct Sampler;
struct Node;
struct Mesh;
struct MeshPrimitive;
struct Material;
struct MaterialOcclusionTextureInfo;
struct MaterialNormalTextureInfo;
struct MaterialPBRMetallicRoughness;
struct Image;
struct Camera;
struct CameraPerspective;
struct CameraOrthographic;
struct BufferView;
struct Buffer;
struct Asset;
struct Animation;
struct AnimationSampler;
struct AnimationChannel;
struct AnimationChannelTarget;
struct Accessor;
struct AccessorSparse;
struct AccessorSparseValues;
struct AccessorSparseIndices;
} // namespace CesiumGltf

namespace CesiumGltfWriter {

struct ExtensionKhrDracoMeshCompressionJsonWriter {
  using ValueType = CesiumGltf::ExtensionKhrDracoMeshCompression;

  static inline constexpr const char* ExtensionName =
      "KHR_draco_mesh_compression";

  static void write(
      const CesiumGltf::ExtensionKhrDracoMeshCompression& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionKhrMaterialsUnlitJsonWriter {
  using ValueType = CesiumGltf::ExtensionKhrMaterialsUnlit;

  static inline constexpr const char* ExtensionName = "KHR_materials_unlit";

  static void write(
      const CesiumGltf::ExtensionKhrMaterialsUnlit& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshGpuInstancingJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshGpuInstancing;

  static inline constexpr const char* ExtensionName = "EXT_mesh_gpu_instancing";

  static void write(
      const CesiumGltf::ExtensionExtMeshGpuInstancing& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionBufferExtMeshoptCompressionJsonWriter {
  using ValueType = CesiumGltf::ExtensionBufferExtMeshoptCompression;

  static inline constexpr const char* ExtensionName = "EXT_meshopt_compression";

  static void write(
      const CesiumGltf::ExtensionBufferExtMeshoptCompression& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionBufferViewExtMeshoptCompressionJsonWriter {
  using ValueType = CesiumGltf::ExtensionBufferViewExtMeshoptCompression;

  static inline constexpr const char* ExtensionName = "EXT_meshopt_compression";

  static void write(
      const CesiumGltf::ExtensionBufferViewExtMeshoptCompression& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionModelExtFeatureMetadataJsonWriter {
  using ValueType = CesiumGltf::ExtensionModelExtFeatureMetadata;

  static inline constexpr const char* ExtensionName = "EXT_feature_metadata";

  static void write(
      const CesiumGltf::ExtensionModelExtFeatureMetadata& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionMeshPrimitiveExtFeatureMetadataJsonWriter {
  using ValueType = CesiumGltf::ExtensionMeshPrimitiveExtFeatureMetadata;

  static inline constexpr const char* ExtensionName = "EXT_feature_metadata";

  static void write(
      const CesiumGltf::ExtensionMeshPrimitiveExtFeatureMetadata& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionCesiumTileEdgesJsonWriter {
  using ValueType = CesiumGltf::ExtensionCesiumTileEdges;

  static inline constexpr const char* ExtensionName = "CESIUM_tile_edges";

  static void write(
      const CesiumGltf::ExtensionCesiumTileEdges& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionModelExtMeshFeaturesJsonWriter {
  using ValueType = CesiumGltf::ExtensionModelExtMeshFeatures;

  static inline constexpr const char* ExtensionName = "EXT_mesh_features";

  static void write(
      const CesiumGltf::ExtensionModelExtMeshFeatures& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionMeshPrimitiveExtMeshFeaturesJsonWriter {
  using ValueType = CesiumGltf::ExtensionMeshPrimitiveExtMeshFeatures;

  static inline constexpr const char* ExtensionName = "EXT_mesh_features";

  static void write(
      const CesiumGltf::ExtensionMeshPrimitiveExtMeshFeatures& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionNodeExtMeshFeaturesJsonWriter {
  using ValueType = CesiumGltf::ExtensionNodeExtMeshFeatures;

  static inline constexpr const char* ExtensionName = "EXT_mesh_features";

  static void write(
      const CesiumGltf::ExtensionNodeExtMeshFeatures& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesFeatureIdJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesFeatureId;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesFeatureId& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct TextureInfoJsonWriter {
  using ValueType = CesiumGltf::TextureInfo;

  static void write(
      const CesiumGltf::TextureInfo& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesPropertyTextureJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesPropertyTexture;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesPropertyTexture& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesPropertyTableJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesPropertyTable;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesPropertyTable& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesPropertyTablePropertyJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesPropertyTableProperty;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesPropertyTableProperty& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesSchemaJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesSchema;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesSchema& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesEnumJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesEnum;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesEnum& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesEnumValueJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesEnumValue;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesEnumValue& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesClassJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesClass;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesClass& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ExtensionExtMeshFeaturesClassPropertyJsonWriter {
  using ValueType = CesiumGltf::ExtensionExtMeshFeaturesClassProperty;

  static void write(
      const CesiumGltf::ExtensionExtMeshFeaturesClassProperty& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct FeatureIDTextureJsonWriter {
  using ValueType = CesiumGltf::FeatureIDTexture;

  static void write(
      const CesiumGltf::FeatureIDTexture& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct TextureAccessorJsonWriter {
  using ValueType = CesiumGltf::TextureAccessor;

  static void write(
      const CesiumGltf::TextureAccessor& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct FeatureIDAttributeJsonWriter {
  using ValueType = CesiumGltf::FeatureIDAttribute;

  static void write(
      const CesiumGltf::FeatureIDAttribute& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct FeatureIDsJsonWriter {
  using ValueType = CesiumGltf::FeatureIDs;

  static void write(
      const CesiumGltf::FeatureIDs& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct FeatureTextureJsonWriter {
  using ValueType = CesiumGltf::FeatureTexture;

  static void write(
      const CesiumGltf::FeatureTexture& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct FeatureTableJsonWriter {
  using ValueType = CesiumGltf::FeatureTable;

  static void write(
      const CesiumGltf::FeatureTable& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct FeatureTablePropertyJsonWriter {
  using ValueType = CesiumGltf::FeatureTableProperty;

  static void write(
      const CesiumGltf::FeatureTableProperty& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct StatisticsJsonWriter {
  using ValueType = CesiumGltf::Statistics;

  static void write(
      const CesiumGltf::Statistics& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ClassStatisticsJsonWriter {
  using ValueType = CesiumGltf::ClassStatistics;

  static void write(
      const CesiumGltf::ClassStatistics& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct PropertyStatisticsJsonWriter {
  using ValueType = CesiumGltf::PropertyStatistics;

  static void write(
      const CesiumGltf::PropertyStatistics& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct SchemaJsonWriter {
  using ValueType = CesiumGltf::Schema;

  static void write(
      const CesiumGltf::Schema& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct EnumJsonWriter {
  using ValueType = CesiumGltf::Enum;

  static void write(
      const CesiumGltf::Enum& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct EnumValueJsonWriter {
  using ValueType = CesiumGltf::EnumValue;

  static void write(
      const CesiumGltf::EnumValue& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ClassJsonWriter {
  using ValueType = CesiumGltf::Class;

  static void write(
      const CesiumGltf::Class& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ClassPropertyJsonWriter {
  using ValueType = CesiumGltf::ClassProperty;

  static void write(
      const CesiumGltf::ClassProperty& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ModelJsonWriter {
  using ValueType = CesiumGltf::Model;

  static void write(
      const CesiumGltf::Model& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct TextureJsonWriter {
  using ValueType = CesiumGltf::Texture;

  static void write(
      const CesiumGltf::Texture& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct SkinJsonWriter {
  using ValueType = CesiumGltf::Skin;

  static void write(
      const CesiumGltf::Skin& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct SceneJsonWriter {
  using ValueType = CesiumGltf::Scene;

  static void write(
      const CesiumGltf::Scene& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct SamplerJsonWriter {
  using ValueType = CesiumGltf::Sampler;

  static void write(
      const CesiumGltf::Sampler& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct NodeJsonWriter {
  using ValueType = CesiumGltf::Node;

  static void write(
      const CesiumGltf::Node& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MeshJsonWriter {
  using ValueType = CesiumGltf::Mesh;

  static void write(
      const CesiumGltf::Mesh& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MeshPrimitiveJsonWriter {
  using ValueType = CesiumGltf::MeshPrimitive;

  static void write(
      const CesiumGltf::MeshPrimitive& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MaterialJsonWriter {
  using ValueType = CesiumGltf::Material;

  static void write(
      const CesiumGltf::Material& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MaterialOcclusionTextureInfoJsonWriter {
  using ValueType = CesiumGltf::MaterialOcclusionTextureInfo;

  static void write(
      const CesiumGltf::MaterialOcclusionTextureInfo& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MaterialNormalTextureInfoJsonWriter {
  using ValueType = CesiumGltf::MaterialNormalTextureInfo;

  static void write(
      const CesiumGltf::MaterialNormalTextureInfo& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct MaterialPBRMetallicRoughnessJsonWriter {
  using ValueType = CesiumGltf::MaterialPBRMetallicRoughness;

  static void write(
      const CesiumGltf::MaterialPBRMetallicRoughness& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct ImageJsonWriter {
  using ValueType = CesiumGltf::Image;

  static void write(
      const CesiumGltf::Image& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct CameraJsonWriter {
  using ValueType = CesiumGltf::Camera;

  static void write(
      const CesiumGltf::Camera& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct CameraPerspectiveJsonWriter {
  using ValueType = CesiumGltf::CameraPerspective;

  static void write(
      const CesiumGltf::CameraPerspective& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct CameraOrthographicJsonWriter {
  using ValueType = CesiumGltf::CameraOrthographic;

  static void write(
      const CesiumGltf::CameraOrthographic& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct BufferViewJsonWriter {
  using ValueType = CesiumGltf::BufferView;

  static void write(
      const CesiumGltf::BufferView& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct BufferJsonWriter {
  using ValueType = CesiumGltf::Buffer;

  static void write(
      const CesiumGltf::Buffer& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AssetJsonWriter {
  using ValueType = CesiumGltf::Asset;

  static void write(
      const CesiumGltf::Asset& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AnimationJsonWriter {
  using ValueType = CesiumGltf::Animation;

  static void write(
      const CesiumGltf::Animation& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AnimationSamplerJsonWriter {
  using ValueType = CesiumGltf::AnimationSampler;

  static void write(
      const CesiumGltf::AnimationSampler& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AnimationChannelJsonWriter {
  using ValueType = CesiumGltf::AnimationChannel;

  static void write(
      const CesiumGltf::AnimationChannel& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AnimationChannelTargetJsonWriter {
  using ValueType = CesiumGltf::AnimationChannelTarget;

  static void write(
      const CesiumGltf::AnimationChannelTarget& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AccessorJsonWriter {
  using ValueType = CesiumGltf::Accessor;

  static void write(
      const CesiumGltf::Accessor& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AccessorSparseJsonWriter {
  using ValueType = CesiumGltf::AccessorSparse;

  static void write(
      const CesiumGltf::AccessorSparse& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AccessorSparseValuesJsonWriter {
  using ValueType = CesiumGltf::AccessorSparseValues;

  static void write(
      const CesiumGltf::AccessorSparseValues& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

struct AccessorSparseIndicesJsonWriter {
  using ValueType = CesiumGltf::AccessorSparseIndices;

  static void write(
      const CesiumGltf::AccessorSparseIndices& obj,
      CesiumJsonWriter::JsonWriter& jsonWriter,
      const CesiumJsonWriter::ExtensionWriterContext& context);
};

} // namespace CesiumGltfWriter
