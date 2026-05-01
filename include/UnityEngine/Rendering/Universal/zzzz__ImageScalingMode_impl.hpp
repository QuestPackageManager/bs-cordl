#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ImageScalingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageScalingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode::ImageScalingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode::ImageScalingMode() {}
constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode UnityEngine::Rendering::Universal::ImageScalingMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode UnityEngine::Rendering::Universal::ImageScalingMode::Upscaling{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode UnityEngine::Rendering::Universal::ImageScalingMode::Downscaling{ static_cast<int32_t>(0x2) };
