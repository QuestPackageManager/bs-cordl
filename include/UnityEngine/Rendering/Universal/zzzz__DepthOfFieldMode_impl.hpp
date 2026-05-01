#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DepthOfFieldMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfFieldMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DepthOfFieldMode::DepthOfFieldMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DepthOfFieldMode::DepthOfFieldMode() {}
constexpr ::UnityEngine::Rendering::Universal::DepthOfFieldMode UnityEngine::Rendering::Universal::DepthOfFieldMode::Off{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DepthOfFieldMode UnityEngine::Rendering::Universal::DepthOfFieldMode::Gaussian{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DepthOfFieldMode UnityEngine::Rendering::Universal::DepthOfFieldMode::Bokeh{ static_cast<int32_t>(0x2) };
