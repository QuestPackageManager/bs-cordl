#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingAllocationInfo.hpp"
#include "UnityEngine/Rendering/zzzz__CullingAllocationInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_def.hpp"
// Ctor Parameters [CppParam { name: "visibleLightsPtr", ty: "::UnityEngine::Rendering::VisibleLight*", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleOffscreenVertexLightsPtr", ty:
// "::UnityEngine::Rendering::VisibleLight*", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleReflectionProbesPtr", ty: "::UnityEngine::Rendering::VisibleReflectionProbe*", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "visibleLightCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleOffscreenVertexLightCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleReflectionProbeCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::CullingAllocationInfo::CullingAllocationInfo(::UnityEngine::Rendering::VisibleLight* visibleLightsPtr,
                                                                                 ::UnityEngine::Rendering::VisibleLight* visibleOffscreenVertexLightsPtr,
                                                                                 ::UnityEngine::Rendering::VisibleReflectionProbe* visibleReflectionProbesPtr, int32_t visibleLightCount,
                                                                                 int32_t visibleOffscreenVertexLightCount, int32_t visibleReflectionProbeCount) noexcept {
  this->visibleLightsPtr = visibleLightsPtr;
  this->visibleOffscreenVertexLightsPtr = visibleOffscreenVertexLightsPtr;
  this->visibleReflectionProbesPtr = visibleReflectionProbesPtr;
  this->visibleLightCount = visibleLightCount;
  this->visibleOffscreenVertexLightCount = visibleOffscreenVertexLightCount;
  this->visibleReflectionProbeCount = visibleReflectionProbeCount;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CullingAllocationInfo::CullingAllocationInfo() {}
