#pragma once
#include "UnityEngine/zzzz__FogMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::FogMode::FogMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::FogMode::FogMode() {}
constexpr ::UnityEngine::FogMode UnityEngine::FogMode::Linear{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::FogMode UnityEngine::FogMode::Exponential{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::FogMode UnityEngine::FogMode::ExponentialSquared{ static_cast<int32_t>(0x3) };
