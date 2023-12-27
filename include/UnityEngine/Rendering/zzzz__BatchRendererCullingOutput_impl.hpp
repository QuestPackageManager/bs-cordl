#pragma once
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererCullingOutput_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMatrix", ty: "::UnityEngine::Matrix4x4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingPlanes", ty: "::cordl_internals::Ptr<::UnityEngine::Plane>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "batchVisibility", ty: "::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "visibleIndices", ty:
// "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "visibleIndicesY", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "cullingPlanesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "batchVisibilityCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "visibleIndicesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BatchRendererCullingOutput::BatchRendererCullingOutput(::Unity::Jobs::JobHandle cullingJobsFence, ::UnityEngine::Matrix4x4 cullingMatrix,
                                                                                           ::cordl_internals::Ptr<::UnityEngine::Plane> cullingPlanes,
                                                                                           ::cordl_internals::Ptr<::UnityEngine::Rendering::BatchVisibility> batchVisibility,
                                                                                           ::cordl_internals::Ptr<int32_t> visibleIndices, ::cordl_internals::Ptr<int32_t> visibleIndicesY,
                                                                                           int32_t cullingPlanesCount, int32_t batchVisibilityCount, int32_t visibleIndicesCount,
                                                                                           float_t nearPlane) noexcept {
  this->cullingJobsFence = cullingJobsFence;
  this->cullingMatrix = cullingMatrix;
  this->cullingPlanes = cullingPlanes;
  this->batchVisibility = batchVisibility;
  this->visibleIndices = visibleIndices;
  this->visibleIndicesY = visibleIndicesY;
  this->cullingPlanesCount = cullingPlanesCount;
  this->batchVisibilityCount = batchVisibilityCount;
  this->visibleIndicesCount = visibleIndicesCount;
  this->nearPlane = nearPlane;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BatchRendererCullingOutput::BatchRendererCullingOutput() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
