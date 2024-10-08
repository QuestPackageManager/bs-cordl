#pragma once
// IWYU pragma private; include "UnityEngine/GradientMode.hpp"
#include "UnityEngine/zzzz__GradientMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::GradientMode::GradientMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::GradientMode::GradientMode() {}
constexpr ::UnityEngine::GradientMode UnityEngine::GradientMode::Blend{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::GradientMode UnityEngine::GradientMode::Fixed{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::GradientMode UnityEngine::GradientMode::PerceptualBlend{ static_cast<int32_t>(0x2) };
