#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/SoftShadowQuality.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SoftShadowQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality::SoftShadowQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality::SoftShadowQuality() {}
constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality UnityEngine::Rendering::Universal::SoftShadowQuality::UsePipelineSettings{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality UnityEngine::Rendering::Universal::SoftShadowQuality::Low{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality UnityEngine::Rendering::Universal::SoftShadowQuality::Medium{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality UnityEngine::Rendering::Universal::SoftShadowQuality::High{ static_cast<int32_t>(0x3) };
