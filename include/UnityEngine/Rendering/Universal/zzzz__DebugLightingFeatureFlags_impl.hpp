#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugLightingFeatureFlags.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugLightingFeatureFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::DebugLightingFeatureFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::DebugLightingFeatureFlags() {}
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::GlobalIllumination{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::MainLight{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::AdditionalLights{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::VertexLighting{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::Emission{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingFeatureFlags UnityEngine::Rendering::Universal::DebugLightingFeatureFlags::AmbientOcclusion{ static_cast<int32_t>(0x20) };
