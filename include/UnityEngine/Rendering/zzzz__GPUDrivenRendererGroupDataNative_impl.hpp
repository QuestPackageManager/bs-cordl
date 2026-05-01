#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUDrivenRendererGroupDataNative.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupDataNative_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedRendererData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererEditorData_def.hpp"
#include "UnityEngine/Rendering/zzzz__SubMeshDescriptor_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "rendererGroupID", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "localBounds", ty: "::UnityEngine::Bounds*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "lightmapScaleOffset", ty: "::UnityEngine::Vector4*", modifiers: "", def_value: Some("{}") }, CppParam { name: "gameObjectLayer", ty: "int32_t*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "renderingLayerMask", ty: "uint32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lodGroupID", ty: "int32_t*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "motionVecGenMode", ty: "::UnityEngine::MotionVectorGenerationMode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedRendererData", ty:
// "::UnityEngine::Rendering::GPUDrivenPackedRendererData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererPriority", ty: "int32_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "meshIndex", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "subMeshStartIndex", ty: "int16_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "materialsOffset", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialsCount", ty: "int16_t*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "instancesOffset", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "instancesCount", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "editorData",
// ty: "::UnityEngine::Rendering::GPUDrivenRendererEditorData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroupCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "invalidRendererGroupID", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "invalidRendererGroupIDCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4*", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevLocalToWorldMatrix", ty:
// "::UnityEngine::Matrix4x4*", modifiers: "", def_value: Some("{}") }, CppParam { name: "rendererGroupIndex", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "instanceCount",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshID", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "subMeshCount", ty: "int16_t*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "subMeshDescOffset", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "subMeshDesc", ty: "::UnityEngine::Rendering::SubMeshDescriptor*", modifiers: "", def_value: Some("{}") }, CppParam { name: "subMeshDescCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIndex", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialIndexCount", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "materialID", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "packedMaterialData", ty:
// "::UnityEngine::Rendering::GPUDrivenPackedMaterialData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialFilterFlags", ty: "int32_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "materialCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative::GPUDrivenRendererGroupDataNative(
    int32_t* rendererGroupID, ::UnityEngine::Bounds* localBounds, ::UnityEngine::Vector4* lightmapScaleOffset, int32_t* gameObjectLayer, uint32_t* renderingLayerMask, int32_t* lodGroupID,
    ::UnityEngine::MotionVectorGenerationMode* motionVecGenMode, ::UnityEngine::Rendering::GPUDrivenPackedRendererData* packedRendererData, int32_t* rendererPriority, int32_t* meshIndex,
    int16_t* subMeshStartIndex, int32_t* materialsOffset, int16_t* materialsCount, int32_t* instancesOffset, int32_t* instancesCount, ::UnityEngine::Rendering::GPUDrivenRendererEditorData* editorData,
    int32_t rendererGroupCount, int32_t* invalidRendererGroupID, int32_t invalidRendererGroupIDCount, ::UnityEngine::Matrix4x4* localToWorldMatrix, ::UnityEngine::Matrix4x4* prevLocalToWorldMatrix,
    int32_t* rendererGroupIndex, int32_t instanceCount, int32_t* meshID, int16_t* subMeshCount, int32_t* subMeshDescOffset, int32_t meshCount, ::UnityEngine::Rendering::SubMeshDescriptor* subMeshDesc,
    int32_t subMeshDescCount, int32_t* materialIndex, int32_t materialIndexCount, int32_t* materialID, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData* packedMaterialData,
    int32_t* materialFilterFlags, int32_t materialCount) noexcept {
  this->rendererGroupID = rendererGroupID;
  this->localBounds = localBounds;
  this->lightmapScaleOffset = lightmapScaleOffset;
  this->gameObjectLayer = gameObjectLayer;
  this->renderingLayerMask = renderingLayerMask;
  this->lodGroupID = lodGroupID;
  this->motionVecGenMode = motionVecGenMode;
  this->packedRendererData = packedRendererData;
  this->rendererPriority = rendererPriority;
  this->meshIndex = meshIndex;
  this->subMeshStartIndex = subMeshStartIndex;
  this->materialsOffset = materialsOffset;
  this->materialsCount = materialsCount;
  this->instancesOffset = instancesOffset;
  this->instancesCount = instancesCount;
  this->editorData = editorData;
  this->rendererGroupCount = rendererGroupCount;
  this->invalidRendererGroupID = invalidRendererGroupID;
  this->invalidRendererGroupIDCount = invalidRendererGroupIDCount;
  this->localToWorldMatrix = localToWorldMatrix;
  this->prevLocalToWorldMatrix = prevLocalToWorldMatrix;
  this->rendererGroupIndex = rendererGroupIndex;
  this->instanceCount = instanceCount;
  this->meshID = meshID;
  this->subMeshCount = subMeshCount;
  this->subMeshDescOffset = subMeshDescOffset;
  this->meshCount = meshCount;
  this->subMeshDesc = subMeshDesc;
  this->subMeshDescCount = subMeshDescCount;
  this->materialIndex = materialIndex;
  this->materialIndexCount = materialIndexCount;
  this->materialID = materialID;
  this->packedMaterialData = packedMaterialData;
  this->materialFilterFlags = materialFilterFlags;
  this->materialCount = materialCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GPUDrivenRendererGroupDataNative::GPUDrivenRendererGroupDataNative() {}
