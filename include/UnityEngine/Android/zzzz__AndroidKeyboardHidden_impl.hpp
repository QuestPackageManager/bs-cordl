#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidKeyboardHidden.hpp"
#include "UnityEngine/Android/zzzz__AndroidKeyboardHidden_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidKeyboardHidden::AndroidKeyboardHidden(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidKeyboardHidden::AndroidKeyboardHidden() {}
constexpr ::UnityEngine::Android::AndroidKeyboardHidden UnityEngine::Android::AndroidKeyboardHidden::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidKeyboardHidden UnityEngine::Android::AndroidKeyboardHidden::No{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Android::AndroidKeyboardHidden UnityEngine::Android::AndroidKeyboardHidden::Yes{ static_cast<int32_t>(0x2) };
