#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidKeyboard.hpp"
#include "UnityEngine/Android/zzzz__AndroidKeyboard_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidKeyboard::AndroidKeyboard(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidKeyboard::AndroidKeyboard() {}
constexpr ::UnityEngine::Android::AndroidKeyboard UnityEngine::Android::AndroidKeyboard::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidKeyboard UnityEngine::Android::AndroidKeyboard::NoKeys{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Android::AndroidKeyboard UnityEngine::Android::AndroidKeyboard::Qwerty{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Android::AndroidKeyboard UnityEngine::Android::AndroidKeyboard::_12Key{ static_cast<int32_t>(0x3) };
