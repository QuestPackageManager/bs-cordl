#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidColorModeHdr.hpp"
#include "UnityEngine/Android/zzzz__AndroidColorModeHdr_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidColorModeHdr::AndroidColorModeHdr(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidColorModeHdr::AndroidColorModeHdr() {}
constexpr ::UnityEngine::Android::AndroidColorModeHdr UnityEngine::Android::AndroidColorModeHdr::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidColorModeHdr UnityEngine::Android::AndroidColorModeHdr::No{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Android::AndroidColorModeHdr UnityEngine::Android::AndroidColorModeHdr::Yes{ static_cast<int32_t>(0x8) };
