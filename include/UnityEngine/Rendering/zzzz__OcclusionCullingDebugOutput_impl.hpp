#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingDebugOutput.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugShaderVariables_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugOutput_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "occluderDepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "occlusionDebugOverlay", ty:
// "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cb", ty: "::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingDebugOutput::OcclusionCullingDebugOutput(::UnityEngine::Rendering::RTHandle* occluderDepthPyramid,
                                                                                             ::UnityEngine::GraphicsBuffer* occlusionDebugOverlay,
                                                                                             ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables cb) noexcept {
  this->occluderDepthPyramid = occluderDepthPyramid;
  this->occlusionDebugOverlay = occlusionDebugOverlay;
  this->cb = cb;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingDebugOutput::OcclusionCullingDebugOutput() {}
