#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AntialiasingMode.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode::AntialiasingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode::AntialiasingMode() {}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode UnityEngine::Rendering::Universal::AntialiasingMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode UnityEngine::Rendering::Universal::AntialiasingMode::FastApproximateAntialiasing{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode UnityEngine::Rendering::Universal::AntialiasingMode::SubpixelMorphologicalAntiAliasing{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode UnityEngine::Rendering::Universal::AntialiasingMode::TemporalAntiAliasing{ static_cast<int32_t>(0x3) };
