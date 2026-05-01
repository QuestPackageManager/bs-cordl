#pragma once
// IWYU pragma private; include "UnityEngine/TextClipping.hpp"
#include "UnityEngine/zzzz__TextClipping_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextClipping::TextClipping(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextClipping::TextClipping() {}
constexpr ::UnityEngine::TextClipping UnityEngine::TextClipping::Overflow{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextClipping UnityEngine::TextClipping::Clip{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextClipping UnityEngine::TextClipping::Ellipsis{ static_cast<int32_t>(0x2) };
