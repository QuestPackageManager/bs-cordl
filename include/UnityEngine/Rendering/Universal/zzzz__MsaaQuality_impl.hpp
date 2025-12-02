#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/MsaaQuality.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MsaaQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::MsaaQuality::MsaaQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::MsaaQuality::MsaaQuality() {}
constexpr ::UnityEngine::Rendering::Universal::MsaaQuality UnityEngine::Rendering::Universal::MsaaQuality::Disabled{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::MsaaQuality UnityEngine::Rendering::Universal::MsaaQuality::_2x{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::MsaaQuality UnityEngine::Rendering::Universal::MsaaQuality::_4x{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::MsaaQuality UnityEngine::Rendering::Universal::MsaaQuality::_8x{ static_cast<int32_t>(0x8) };
