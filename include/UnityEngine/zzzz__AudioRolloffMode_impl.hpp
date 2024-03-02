#pragma once
#include "UnityEngine/zzzz__AudioRolloffMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioRolloffMode::AudioRolloffMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioRolloffMode::AudioRolloffMode() {}
constexpr ::UnityEngine::AudioRolloffMode UnityEngine::AudioRolloffMode::Logarithmic{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AudioRolloffMode UnityEngine::AudioRolloffMode::Linear{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AudioRolloffMode UnityEngine::AudioRolloffMode::Custom{ static_cast<int32_t>(0x2) };
