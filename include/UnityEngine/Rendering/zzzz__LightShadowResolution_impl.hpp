#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LightShadowResolution.hpp"
#include "UnityEngine/Rendering/zzzz__LightShadowResolution_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::LightShadowResolution::LightShadowResolution(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LightShadowResolution::LightShadowResolution() {}
constexpr ::UnityEngine::Rendering::LightShadowResolution UnityEngine::Rendering::LightShadowResolution::FromQualitySettings{ static_cast<int32_t>(0xffffffff) };
constexpr ::UnityEngine::Rendering::LightShadowResolution UnityEngine::Rendering::LightShadowResolution::Low{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::LightShadowResolution UnityEngine::Rendering::LightShadowResolution::Medium{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::LightShadowResolution UnityEngine::Rendering::LightShadowResolution::High{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::LightShadowResolution UnityEngine::Rendering::LightShadowResolution::VeryHigh{ static_cast<int32_t>(0x3) };
