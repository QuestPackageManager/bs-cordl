#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererGroupDataNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenRendererGroupDataNative)
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedRendererData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererEditorData;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MotionVectorGenerationMode;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupDataNative;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenRendererGroupDataNative
struct CORDL_TYPE GPUDrivenRendererGroupDataNative {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenRendererGroupDataNative();

  // Ctor Parameters [CppParam { name: "rendererGroupID", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "localBounds", ty: "::UnityEngine::Bounds*", modifiers: "", def_value: None
  // }, CppParam { name: "lightmapScaleOffset", ty: "::UnityEngine::Vector4*", modifiers: "", def_value: None }, CppParam { name: "gameObjectLayer", ty: "int32_t*", modifiers: "", def_value: None },
  // CppParam { name: "renderingLayerMask", ty: "uint32_t*", modifiers: "", def_value: None }, CppParam { name: "lodGroupID", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name:
  // "motionVecGenMode", ty: "::UnityEngine::MotionVectorGenerationMode*", modifiers: "", def_value: None }, CppParam { name: "packedRendererData", ty:
  // "::UnityEngine::Rendering::GPUDrivenPackedRendererData*", modifiers: "", def_value: None }, CppParam { name: "rendererPriority", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name:
  // "meshIndex", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "subMeshStartIndex", ty: "int16_t*", modifiers: "", def_value: None }, CppParam { name: "materialsOffset", ty:
  // "int32_t*", modifiers: "", def_value: None }, CppParam { name: "materialsCount", ty: "int16_t*", modifiers: "", def_value: None }, CppParam { name: "instancesOffset", ty: "int32_t*", modifiers:
  // "", def_value: None }, CppParam { name: "instancesCount", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "editorData", ty:
  // "::UnityEngine::Rendering::GPUDrivenRendererEditorData*", modifiers: "", def_value: None }, CppParam { name: "rendererGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "invalidRendererGroupID", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "invalidRendererGroupIDCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4*", modifiers: "", def_value: None }, CppParam { name: "prevLocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4*", modifiers: "", def_value: None
  // }, CppParam { name: "rendererGroupIndex", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "meshID", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "subMeshCount", ty: "int16_t*", modifiers: "", def_value: None }, CppParam { name: "subMeshDescOffset", ty:
  // "int32_t*", modifiers: "", def_value: None }, CppParam { name: "meshCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "subMeshDesc", ty:
  // "::UnityEngine::Rendering::SubMeshDescriptor*", modifiers: "", def_value: None }, CppParam { name: "subMeshDescCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "materialIndex", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "materialIndexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "materialID", ty:
  // "int32_t*", modifiers: "", def_value: None }, CppParam { name: "packedMaterialData", ty: "::UnityEngine::Rendering::GPUDrivenPackedMaterialData*", modifiers: "", def_value: None }, CppParam {
  // name: "materialFilterFlags", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "materialCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GPUDrivenRendererGroupDataNative(int32_t* rendererGroupID, ::UnityEngine::Bounds* localBounds, ::UnityEngine::Vector4* lightmapScaleOffset, int32_t* gameObjectLayer,
                                             uint32_t* renderingLayerMask, int32_t* lodGroupID, ::UnityEngine::MotionVectorGenerationMode* motionVecGenMode,
                                             ::UnityEngine::Rendering::GPUDrivenPackedRendererData* packedRendererData, int32_t* rendererPriority, int32_t* meshIndex, int16_t* subMeshStartIndex,
                                             int32_t* materialsOffset, int16_t* materialsCount, int32_t* instancesOffset, int32_t* instancesCount,
                                             ::UnityEngine::Rendering::GPUDrivenRendererEditorData* editorData, int32_t rendererGroupCount, int32_t* invalidRendererGroupID,
                                             int32_t invalidRendererGroupIDCount, ::UnityEngine::Matrix4x4* localToWorldMatrix, ::UnityEngine::Matrix4x4* prevLocalToWorldMatrix,
                                             int32_t* rendererGroupIndex, int32_t instanceCount, int32_t* meshID, int16_t* subMeshCount, int32_t* subMeshDescOffset, int32_t meshCount,
                                             ::UnityEngine::Rendering::SubMeshDescriptor* subMeshDesc, int32_t subMeshDescCount, int32_t* materialIndex, int32_t materialIndexCount,
                                             int32_t* materialID, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData* packedMaterialData, int32_t* materialFilterFlags,
                                             int32_t materialCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10860 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x118 };

  /// @brief Field rendererGroupID, offset: 0x0, size: 0x8, def value: None
  int32_t* rendererGroupID;

  /// @brief Field localBounds, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Bounds* localBounds;

  /// @brief Field lightmapScaleOffset, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector4* lightmapScaleOffset;

  /// @brief Field gameObjectLayer, offset: 0x18, size: 0x8, def value: None
  int32_t* gameObjectLayer;

  /// @brief Field renderingLayerMask, offset: 0x20, size: 0x8, def value: None
  uint32_t* renderingLayerMask;

  /// @brief Field lodGroupID, offset: 0x28, size: 0x8, def value: None
  int32_t* lodGroupID;

  /// @brief Field motionVecGenMode, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::MotionVectorGenerationMode* motionVecGenMode;

  /// @brief Field packedRendererData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenPackedRendererData* packedRendererData;

  /// @brief Field rendererPriority, offset: 0x40, size: 0x8, def value: None
  int32_t* rendererPriority;

  /// @brief Field meshIndex, offset: 0x48, size: 0x8, def value: None
  int32_t* meshIndex;

  /// @brief Field subMeshStartIndex, offset: 0x50, size: 0x8, def value: None
  int16_t* subMeshStartIndex;

  /// @brief Field materialsOffset, offset: 0x58, size: 0x8, def value: None
  int32_t* materialsOffset;

  /// @brief Field materialsCount, offset: 0x60, size: 0x8, def value: None
  int16_t* materialsCount;

  /// @brief Field instancesOffset, offset: 0x68, size: 0x8, def value: None
  int32_t* instancesOffset;

  /// @brief Field instancesCount, offset: 0x70, size: 0x8, def value: None
  int32_t* instancesCount;

  /// @brief Field editorData, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenRendererEditorData* editorData;

  /// @brief Field rendererGroupCount, offset: 0x80, size: 0x4, def value: None
  int32_t rendererGroupCount;

  /// @brief Field invalidRendererGroupID, offset: 0x88, size: 0x8, def value: None
  int32_t* invalidRendererGroupID;

  /// @brief Field invalidRendererGroupIDCount, offset: 0x90, size: 0x4, def value: None
  int32_t invalidRendererGroupIDCount;

  /// @brief Field localToWorldMatrix, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Matrix4x4* localToWorldMatrix;

  /// @brief Field prevLocalToWorldMatrix, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Matrix4x4* prevLocalToWorldMatrix;

  /// @brief Field rendererGroupIndex, offset: 0xa8, size: 0x8, def value: None
  int32_t* rendererGroupIndex;

  /// @brief Field instanceCount, offset: 0xb0, size: 0x4, def value: None
  int32_t instanceCount;

  /// @brief Field meshID, offset: 0xb8, size: 0x8, def value: None
  int32_t* meshID;

  /// @brief Field subMeshCount, offset: 0xc0, size: 0x8, def value: None
  int16_t* subMeshCount;

  /// @brief Field subMeshDescOffset, offset: 0xc8, size: 0x8, def value: None
  int32_t* subMeshDescOffset;

  /// @brief Field meshCount, offset: 0xd0, size: 0x4, def value: None
  int32_t meshCount;

  /// @brief Field subMeshDesc, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::SubMeshDescriptor* subMeshDesc;

  /// @brief Field subMeshDescCount, offset: 0xe0, size: 0x4, def value: None
  int32_t subMeshDescCount;

  /// @brief Field materialIndex, offset: 0xe8, size: 0x8, def value: None
  int32_t* materialIndex;

  /// @brief Field materialIndexCount, offset: 0xf0, size: 0x4, def value: None
  int32_t materialIndexCount;

  /// @brief Field materialID, offset: 0xf8, size: 0x8, def value: None
  int32_t* materialID;

  /// @brief Field packedMaterialData, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Rendering::GPUDrivenPackedMaterialData* packedMaterialData;

  /// @brief Field materialFilterFlags, offset: 0x108, size: 0x8, def value: None
  int32_t* materialFilterFlags;

  /// @brief Field materialCount, offset: 0x110, size: 0x4, def value: None
  int32_t materialCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, rendererGroupID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, localBounds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, lightmapScaleOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, gameObjectLayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, renderingLayerMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, lodGroupID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, motionVecGenMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, packedRendererData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, rendererPriority) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, meshIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, subMeshStartIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, materialsOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, materialsCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, instancesOffset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, instancesCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, editorData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, rendererGroupCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, invalidRendererGroupID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, invalidRendererGroupIDCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, localToWorldMatrix) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, prevLocalToWorldMatrix) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, rendererGroupIndex) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, instanceCount) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, meshID) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, subMeshCount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, subMeshDescOffset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, meshCount) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, subMeshDesc) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, subMeshDescCount) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, materialIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, materialIndexCount) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, materialID) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, packedMaterialData) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, materialFilterFlags) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, materialCount) == 0x110, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, 0x118>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative, "UnityEngine.Rendering", "GPUDrivenRendererGroupDataNative");
