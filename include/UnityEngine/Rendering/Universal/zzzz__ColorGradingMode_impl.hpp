#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ColorGradingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode::ColorGradingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode::ColorGradingMode() {}
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode UnityEngine::Rendering::Universal::ColorGradingMode::LowDynamicRange{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode UnityEngine::Rendering::Universal::ColorGradingMode::HighDynamicRange{ static_cast<int32_t>(0x1) };
