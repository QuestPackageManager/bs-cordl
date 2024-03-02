#pragma once
#include "UnityEngine/zzzz__WrapMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::WrapMode::WrapMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::WrapMode::WrapMode() {}
constexpr ::UnityEngine::WrapMode UnityEngine::WrapMode::Once{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::WrapMode UnityEngine::WrapMode::Loop{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::WrapMode UnityEngine::WrapMode::PingPong{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::WrapMode UnityEngine::WrapMode::Default{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::WrapMode UnityEngine::WrapMode::ClampForever{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::WrapMode UnityEngine::WrapMode::Clamp{ static_cast<int32_t>(0x1) };
