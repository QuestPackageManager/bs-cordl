#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererCullingOutput.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
// Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "localToWorldMatrix", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPlanes", ty: "::cordl_internals::Ptr<::UnityEngine::Plane>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "cullingPlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "receiverPlaneOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "receiverPlaneCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingSplits", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::CullingSplit>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cullingSplitCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewType", ty:
// "::UnityEngine::Rendering::BatchCullingViewType", modifiers: "", def_value: Some("{}") }, CppParam { name: "projectionType", ty: "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "cullingFlags", ty: "::UnityEngine::Rendering::BatchCullingFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "viewID", ty: "uint64_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "drawCommands", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::BatchRendererCullingOutput::BatchRendererCullingOutput(
    ::Unity::Jobs::JobHandle cullingJobsFence, ::UnityEngine::Matrix4x4 localToWorldMatrix, ::cordl_internals::Ptr<::UnityEngine::Plane> cullingPlanes, int32_t cullingPlaneCount,
    int32_t receiverPlaneOffset, int32_t receiverPlaneCount, ::cordl_internals::Ptr<::UnityEngine::Rendering::CullingSplit> cullingSplits, int32_t cullingSplitCount,
    ::UnityEngine::Rendering::BatchCullingViewType viewType, ::UnityEngine::Rendering::BatchCullingProjectionType projectionType, ::UnityEngine::Rendering::BatchCullingFlags cullingFlags,
    uint64_t viewID, uint32_t cullingLayerMask, uint64_t sceneCullingMask, ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> drawCommands) noexcept {
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
  this->sceneCullingMask = sceneCullingMask;
  this->drawCommands = drawCommands;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererCullingOutput::BatchRendererCullingOutput() {}
