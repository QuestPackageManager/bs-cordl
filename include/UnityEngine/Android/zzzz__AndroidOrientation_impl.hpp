#pragma once
// IWYU pragma private; include "UnityEngine/Android/AndroidOrientation.hpp"
#include "UnityEngine/Android/zzzz__AndroidOrientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Android::AndroidOrientation::AndroidOrientation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Android::AndroidOrientation::AndroidOrientation() {}
constexpr ::UnityEngine::Android::AndroidOrientation UnityEngine::Android::AndroidOrientation::Undefined{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Android::AndroidOrientation UnityEngine::Android::AndroidOrientation::Portrait{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Android::AndroidOrientation UnityEngine::Android::AndroidOrientation::Landscape{ static_cast<int32_t>(0x2) };
