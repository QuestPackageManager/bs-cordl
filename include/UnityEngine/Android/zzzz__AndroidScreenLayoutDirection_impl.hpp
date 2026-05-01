#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidScreenLayoutDirection.hpp"
#include "UnityEngine/Android/zzzz__AndroidScreenLayoutDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidScreenLayoutDirection::AndroidScreenLayoutDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidScreenLayoutDirection::AndroidScreenLayoutDirection() {}
constexpr ::UnityEngine::Android::AndroidScreenLayoutDirection UnityEngine::Android::AndroidScreenLayoutDirection::LTR{ static_cast<int32_t>(0x40) };
constexpr ::UnityEngine::Android::AndroidScreenLayoutDirection UnityEngine::Android::AndroidScreenLayoutDirection::RTL{ static_cast<int32_t>(0x80) };
