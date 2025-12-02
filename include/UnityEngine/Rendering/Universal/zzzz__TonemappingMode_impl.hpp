#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TonemappingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode::TonemappingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode::TonemappingMode() {}
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode UnityEngine::Rendering::Universal::TonemappingMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode UnityEngine::Rendering::Universal::TonemappingMode::Neutral{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode UnityEngine::Rendering::Universal::TonemappingMode::ACES{ static_cast<int32_t>(0x2) };
