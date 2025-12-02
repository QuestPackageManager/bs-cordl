#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AntialiasingQuality.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality::AntialiasingQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality::AntialiasingQuality() {}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality UnityEngine::Rendering::Universal::AntialiasingQuality::Low{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality UnityEngine::Rendering::Universal::AntialiasingQuality::Medium{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality UnityEngine::Rendering::Universal::AntialiasingQuality::High{ static_cast<int32_t>(0x2) };
