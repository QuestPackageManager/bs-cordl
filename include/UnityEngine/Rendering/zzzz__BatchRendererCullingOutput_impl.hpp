#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererCullingOutput.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
// Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPlanes", ty: "::UnityEngine::Plane*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPlaneCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverPlaneOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverPlaneCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingSplits", ty: "::UnityEngine::Rendering::CullingSplit*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cullingSplitCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewType", ty: "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "projectionType", ty: "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingFlags", ty:
// "::UnityEngine::Rendering::BatchCullingFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "cullingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "splitExclusionMask", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "drawCommands", ty: "::UnityEngine::Rendering::BatchCullingOutputDrawCommands*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "brgId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionBuffer", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "customCullingResult", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchRendererCullingOutput::BatchRendererCullingOutput(
    ::Unity::Jobs::JobHandle cullingJobsFence, ::UnityEngine::Matrix4x4 localToWorldMatrix, ::UnityEngine::Plane* cullingPlanes, int32_t cullingPlaneCount, int32_t receiverPlaneOffset,
    int32_t receiverPlaneCount, ::UnityEngine::Rendering::CullingSplit* cullingSplits, int32_t cullingSplitCount, ::UnityEngine::Rendering::BatchCullingViewType viewType,
    ::UnityEngine::Rendering::BatchCullingProjectionType projectionType, ::UnityEngine::Rendering::BatchCullingFlags cullingFlags, uint64_t viewID, uint32_t cullingLayerMask,
    uint8_t splitExclusionMask, uint64_t sceneCullingMask, ::UnityEngine::Rendering::BatchCullingOutputDrawCommands* drawCommands, uint32_t brgId, ::System::IntPtr occlusionBuffer,
    ::System::IntPtr customCullingResult) noexcept {
  this->cullingJobsFence = cullingJobsFence;
  this->localToWorldMatrix = localToWorldMatrix;
  this->cullingPlanes = cullingPlanes;
  this->cullingPlaneCount = cullingPlaneCount;
  this->receiverPlaneOffset = receiverPlaneOffset;
  this->receiverPlaneCount = receiverPlaneCount;
  this->cullingSplits = cullingSplits;
  this->cullingSplitCount = cullingSplitCount;
  this->viewType = viewType;
  this->projectionType = projectionType;
  this->cullingFlags = cullingFlags;
  this->viewID = viewID;
  this->cullingLayerMask = cullingLayerMask;
  this->splitExclusionMask = splitExclusionMask;
  this->sceneCullingMask = sceneCullingMask;
  this->drawCommands = drawCommands;
  this->brgId = brgId;
  this->occlusionBuffer = occlusionBuffer;
  this->customCullingResult = customCullingResult;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererCullingOutput::BatchRendererCullingOutput() {}
