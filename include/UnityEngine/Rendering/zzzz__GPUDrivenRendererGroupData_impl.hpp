#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererGroupData.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedRendererData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererEditorData_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
// Ctor Parameters [CppParam { name: "rendererGroupID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localBounds", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapScaleOffset", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameObjectLayer", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "renderingLayerMask", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "lodGroupID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightmapIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "packedRendererData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedRendererData>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rendererPriority", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshIndex", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "subMeshStartIndex", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "materialsOffset", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialsCount", ty:
// "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "instancesOffset", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "instancesCount", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "editorData", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenRendererEditorData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "invalidRendererGroupID", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldMatrix", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "prevLocalToWorldMatrix", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "rendererGroupIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshID", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "subMeshCount", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "subMeshDescOffset", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "subMeshDesc", ty:
// "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubMeshDescriptor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIndex", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "packedMaterialData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "materialFilterFlags", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUDrivenRendererGroupData::GPUDrivenRendererGroupData(
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
    ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialData, ::Unity::Collections::NativeArray_1<int32_t> materialFilterFlags) noexcept {
  this->rendererGroupID = rendererGroupID;
  this->localBounds = localBounds;
  this->lightmapScaleOffset = lightmapScaleOffset;
  this->gameObjectLayer = gameObjectLayer;
  this->renderingLayerMask = renderingLayerMask;
  this->lodGroupID = lodGroupID;
  this->lightmapIndex = lightmapIndex;
  this->packedRendererData = packedRendererData;
  this->rendererPriority = rendererPriority;
  this->meshIndex = meshIndex;
  this->subMeshStartIndex = subMeshStartIndex;
  this->materialsOffset = materialsOffset;
  this->materialsCount = materialsCount;
  this->instancesOffset = instancesOffset;
  this->instancesCount = instancesCount;
  this->editorData = editorData;
  this->invalidRendererGroupID = invalidRendererGroupID;
  this->localToWorldMatrix = localToWorldMatrix;
  this->prevLocalToWorldMatrix = prevLocalToWorldMatrix;
  this->rendererGroupIndex = rendererGroupIndex;
  this->meshID = meshID;
  this->subMeshCount = subMeshCount;
  this->subMeshDescOffset = subMeshDescOffset;
  this->subMeshDesc = subMeshDesc;
  this->materialIndex = materialIndex;
  this->materialID = materialID;
  this->packedMaterialData = packedMaterialData;
  this->materialFilterFlags = materialFilterFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenRendererGroupData::GPUDrivenRendererGroupData() {}
