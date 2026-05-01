#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DepthPrimingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode::DepthPrimingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode::DepthPrimingMode() {}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode UnityEngine::Rendering::Universal::DepthPrimingMode::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode UnityEngine::Rendering::Universal::DepthPrimingMode::Auto{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode UnityEngine::Rendering::Universal::DepthPrimingMode::Forced{ static_cast<int32_t>(0x2) };
