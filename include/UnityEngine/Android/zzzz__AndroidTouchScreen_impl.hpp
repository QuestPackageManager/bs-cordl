#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidTouchScreen.hpp"
#include "UnityEngine/Android/zzzz__AndroidTouchScreen_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidTouchScreen::AndroidTouchScreen(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidTouchScreen::AndroidTouchScreen() {}
constexpr ::UnityEngine::Android::AndroidTouchScreen UnityEngine::Android::AndroidTouchScreen::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidTouchScreen UnityEngine::Android::AndroidTouchScreen::NoTouch{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Android::AndroidTouchScreen UnityEngine::Android::AndroidTouchScreen::Finger{ static_cast<int32_t>(0x3) };
