#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightRenderingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightRenderingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode::LightRenderingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode::LightRenderingMode() {}
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode UnityEngine::Rendering::Universal::LightRenderingMode::Disabled{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode UnityEngine::Rendering::Universal::LightRenderingMode::PerVertex{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode UnityEngine::Rendering::Universal::LightRenderingMode::PerPixel{ static_cast<int32_t>(0x1) };
