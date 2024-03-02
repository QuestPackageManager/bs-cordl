#pragma once
#include "UnityEngine/zzzz__AudioVelocityUpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::AudioVelocityUpdateMode::AudioVelocityUpdateMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioVelocityUpdateMode::AudioVelocityUpdateMode() {}
constexpr ::UnityEngine::AudioVelocityUpdateMode UnityEngine::AudioVelocityUpdateMode::Auto{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::AudioVelocityUpdateMode UnityEngine::AudioVelocityUpdateMode::Fixed{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::AudioVelocityUpdateMode UnityEngine::AudioVelocityUpdateMode::Dynamic{ static_cast<int32_t>(0x2) };
