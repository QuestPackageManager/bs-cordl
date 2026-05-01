#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidScreenLayoutSize.hpp"
#include "UnityEngine/Android/zzzz__AndroidScreenLayoutSize_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidScreenLayoutSize::AndroidScreenLayoutSize(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidScreenLayoutSize::AndroidScreenLayoutSize() {}
constexpr ::UnityEngine::Android::AndroidScreenLayoutSize UnityEngine::Android::AndroidScreenLayoutSize::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidScreenLayoutSize UnityEngine::Android::AndroidScreenLayoutSize::Small{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Android::AndroidScreenLayoutSize UnityEngine::Android::AndroidScreenLayoutSize::Normal{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Android::AndroidScreenLayoutSize UnityEngine::Android::AndroidScreenLayoutSize::Large{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Android::AndroidScreenLayoutSize UnityEngine::Android::AndroidScreenLayoutSize::XLarge{ static_cast<int32_t>(0x4) };
