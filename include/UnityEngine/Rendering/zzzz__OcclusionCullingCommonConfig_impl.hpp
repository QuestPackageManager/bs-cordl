#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommonConfig.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonConfig_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonConfig::OcclusionCullingCommonConfig(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonConfig::OcclusionCullingCommonConfig() {}
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonConfig UnityEngine::Rendering::OcclusionCullingCommonConfig::MaxOccluderMips{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonConfig UnityEngine::Rendering::OcclusionCullingCommonConfig::MaxOccluderSilhouettePlanes{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonConfig UnityEngine::Rendering::OcclusionCullingCommonConfig::MaxSubviewsPerView{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::OcclusionCullingCommonConfig UnityEngine::Rendering::OcclusionCullingCommonConfig::DebugPyramidOffset{ static_cast<int32_t>(0x4) };
