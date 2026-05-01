#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugLightingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugLightingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode::DebugLightingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode::DebugLightingMode() {}
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode UnityEngine::Rendering::Universal::DebugLightingMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode UnityEngine::Rendering::Universal::DebugLightingMode::ShadowCascades{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode UnityEngine::Rendering::Universal::DebugLightingMode::LightingWithoutNormalMaps{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode UnityEngine::Rendering::Universal::DebugLightingMode::LightingWithNormalMaps{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode UnityEngine::Rendering::Universal::DebugLightingMode::Reflections{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode UnityEngine::Rendering::Universal::DebugLightingMode::ReflectionsWithSmoothness{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::Universal::DebugLightingMode UnityEngine::Rendering::Universal::DebugLightingMode::GlobalIllumination{ static_cast<int32_t>(0x6) };
