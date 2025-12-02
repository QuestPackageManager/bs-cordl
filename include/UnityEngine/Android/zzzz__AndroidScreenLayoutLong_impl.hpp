#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidScreenLayoutLong.hpp"
#include "UnityEngine/Android/zzzz__AndroidScreenLayoutLong_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidScreenLayoutLong::AndroidScreenLayoutLong(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidScreenLayoutLong::AndroidScreenLayoutLong() {}
constexpr ::UnityEngine::Android::AndroidScreenLayoutLong UnityEngine::Android::AndroidScreenLayoutLong::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidScreenLayoutLong UnityEngine::Android::AndroidScreenLayoutLong::No{ static_cast<int32_t>(0x10) };
constexpr ::UnityEngine::Android::AndroidScreenLayoutLong UnityEngine::Android::AndroidScreenLayoutLong::Yes{ static_cast<int32_t>(0x20) };
