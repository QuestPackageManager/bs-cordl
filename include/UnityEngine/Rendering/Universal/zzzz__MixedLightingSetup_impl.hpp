#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MixedLightingSetup.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MixedLightingSetup_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup::MixedLightingSetup(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup::MixedLightingSetup() {}
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup UnityEngine::Rendering::Universal::MixedLightingSetup::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup UnityEngine::Rendering::Universal::MixedLightingSetup::ShadowMask{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::MixedLightingSetup UnityEngine::Rendering::Universal::MixedLightingSetup::Subtractive{ static_cast<int32_t>(0x2) };
