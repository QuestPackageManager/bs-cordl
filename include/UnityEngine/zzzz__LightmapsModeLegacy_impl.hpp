#pragma once
#include "UnityEngine/zzzz__LightmapsModeLegacy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::LightmapsModeLegacy::LightmapsModeLegacy(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::LightmapsModeLegacy::LightmapsModeLegacy() {}
constexpr ::UnityEngine::LightmapsModeLegacy UnityEngine::LightmapsModeLegacy::Single{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::LightmapsModeLegacy UnityEngine::LightmapsModeLegacy::Dual{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::LightmapsModeLegacy UnityEngine::LightmapsModeLegacy::Directional{ static_cast<int32_t>(0x2) };
