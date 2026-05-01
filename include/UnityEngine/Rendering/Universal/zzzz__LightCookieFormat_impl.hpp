#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieFormat.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat::LightCookieFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat::LightCookieFormat() {}
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat UnityEngine::Rendering::Universal::LightCookieFormat::GrayscaleLow{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat UnityEngine::Rendering::Universal::LightCookieFormat::GrayscaleHigh{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat UnityEngine::Rendering::Universal::LightCookieFormat::ColorLow{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat UnityEngine::Rendering::Universal::LightCookieFormat::ColorHigh{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat UnityEngine::Rendering::Universal::LightCookieFormat::ColorHDR{ static_cast<int32_t>(0x4) };
