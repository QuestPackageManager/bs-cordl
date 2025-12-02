#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererGroupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedRendererData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererEditorData_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUDrivenRendererGroupData)
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUDrivenRendererGroupData);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Bounds, UnityEngine.Matrix4x4, UnityEngine.Rendering.GPUDrivenPackedMaterialData, UnityEngine.Rendering.GPUDrivenPackedRendererData,
// UnityEngine.Rendering.GPUDrivenRendererEditorData, UnityEngine.Rendering.SubMeshDescriptor, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUDrivenRendererGroupData
struct CORDL_TYPE GPUDrivenRendererGroupData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUDrivenRendererGroupData();

  // Ctor Parameters [CppParam { name: "rendererGroupID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "localBounds", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>", modifiers: "", def_value: None }, CppParam { name: "lightmapScaleOffset", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }, CppParam { name: "gameObjectLayer", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
  // "", def_value: None }, CppParam { name: "renderingLayerMask", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "lodGroupID", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "lightmapIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "packedRendererData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>", modifiers: "", def_value: None }, CppParam { name:
  // "rendererPriority", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "meshIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }, CppParam { name: "subMeshStartIndex", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "materialsOffset",
  // ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialsCount", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "",
  // def_value: None }, CppParam { name: "instancesOffset", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instancesCount", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "editorData", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData>", modifiers: "", def_value: None }, CppParam { name: "invalidRendererGroupID", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "localToWorldMatrix", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>",
  // modifiers: "", def_value: None }, CppParam { name: "prevLocalToWorldMatrix", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None }, CppParam {
  // name: "rendererGroupIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "meshID", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }, CppParam { name: "subMeshCount", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "subMeshDescOffset", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "subMeshDesc", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor>", modifiers: "", def_value: None }, CppParam { name: "materialIndex", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None
  // }, CppParam { name: "packedMaterialData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None }, CppParam { name:
  // "materialFilterFlags", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr GPUDrivenRendererGroupData(
      ::Unity::Collections::NativeArray_1<int32_t> rendererGroupID, ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> localBounds,
      ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> lightmapScaleOffset, ::Unity::Collections::NativeArray_1<int32_t> gameObjectLayer,
      ::Unity::Collections::NativeArray_1<uint32_t> renderingLayerMask, ::Unity::Collections::NativeArray_1<int32_t> lodGroupID, ::Unity::Collections::NativeArray_1<int32_t> lightmapIndex,
      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> packedRendererData, ::Unity::Collections::NativeArray_1<int32_t> rendererPriority,
      ::Unity::Collections::NativeArray_1<int32_t> meshIndex, ::Unity::Collections::NativeArray_1<int16_t> subMeshStartIndex, ::Unity::Collections::NativeArray_1<int32_t> materialsOffset,
      ::Unity::Collections::NativeArray_1<int16_t> materialsCount, ::Unity::Collections::NativeArray_1<int32_t> instancesOffset, ::Unity::Collections::NativeArray_1<int32_t> instancesCount,
      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData> editorData, ::Unity::Collections::NativeArray_1<int32_t> invalidRendererGroupID,
      ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrix, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrix,
      ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIndex, ::Unity::Collections::NativeArray_1<int32_t> meshID, ::Unity::Collections::NativeArray_1<int16_t> subMeshCount,
      ::Unity::Collections::NativeArray_1<int32_t> subMeshDescOffset, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor> subMeshDesc,
      ::Unity::Collections::NativeArray_1<int32_t> materialIndex, ::Unity::Collections::NativeArray_1<int32_t> materialID,
      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialData, ::Unity::Collections::NativeArray_1<int32_t> materialFilterFlags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10860 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c0 };

  /// @brief Field rendererGroupID, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererGroupID;

  /// @brief Field localBounds, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds> localBounds;

  /// @brief Field lightmapScaleOffset, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> lightmapScaleOffset;

  /// @brief Field gameObjectLayer, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> gameObjectLayer;

  /// @brief Field renderingLayerMask, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> renderingLayerMask;

  /// @brief Field lodGroupID, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> lodGroupID;

  /// @brief Field lightmapIndex, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> lightmapIndex;

  /// @brief Field packedRendererData, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData> packedRendererData;

  /// @brief Field rendererPriority, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererPriority;

  /// @brief Field meshIndex, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> meshIndex;

  /// @brief Field subMeshStartIndex, offset: 0xa0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int16_t> subMeshStartIndex;

  /// @brief Field materialsOffset, offset: 0xb0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> materialsOffset;

  /// @brief Field materialsCount, offset: 0xc0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int16_t> materialsCount;

  /// @brief Field instancesOffset, offset: 0xd0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesOffset;

  /// @brief Field instancesCount, offset: 0xe0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> instancesCount;

  /// @brief Field editorData, offset: 0xf0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData> editorData;

  /// @brief Field invalidRendererGroupID, offset: 0x100, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> invalidRendererGroupID;

  /// @brief Field localToWorldMatrix, offset: 0x110, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> localToWorldMatrix;

  /// @brief Field prevLocalToWorldMatrix, offset: 0x120, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> prevLocalToWorldMatrix;

  /// @brief Field rendererGroupIndex, offset: 0x130, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> rendererGroupIndex;

  /// @brief Field meshID, offset: 0x140, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> meshID;

  /// @brief Field subMeshCount, offset: 0x150, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int16_t> subMeshCount;

  /// @brief Field subMeshDescOffset, offset: 0x160, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> subMeshDescOffset;

  /// @brief Field subMeshDesc, offset: 0x170, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor> subMeshDesc;

  /// @brief Field materialIndex, offset: 0x180, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> materialIndex;

  /// @brief Field materialID, offset: 0x190, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> materialID;

  /// @brief Field packedMaterialData, offset: 0x1a0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialData;

  /// @brief Field materialFilterFlags, offset: 0x1b0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> materialFilterFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, rendererGroupID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, localBounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, lightmapScaleOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, gameObjectLayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, renderingLayerMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, lodGroupID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, lightmapIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, packedRendererData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, rendererPriority) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, meshIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, subMeshStartIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, materialsOffset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, materialsCount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, instancesOffset) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, instancesCount) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, editorData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, invalidRendererGroupID) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, localToWorldMatrix) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, prevLocalToWorldMatrix) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, rendererGroupIndex) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, meshID) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, subMeshCount) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, subMeshDescOffset) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, subMeshDesc) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, materialIndex) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, materialID) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, packedMaterialData) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUDrivenRendererGroupData, materialFilterFlags) == 0x1b0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUDrivenRendererGroupData, 0x1c0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUDrivenRendererGroupData, "UnityEngine.Rendering", "GPUDrivenRendererGroupData");
