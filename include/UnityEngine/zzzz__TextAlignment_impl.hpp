#pragma once
// IWYU pragma private; include "UnityEngine/TextAlignment.hpp"
#include "UnityEngine/zzzz__TextAlignment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextAlignment::TextAlignment(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextAlignment::TextAlignment() {}
constexpr ::UnityEngine::TextAlignment UnityEngine::TextAlignment::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::TextAlignment UnityEngine::TextAlignment::Center{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::TextAlignment UnityEngine::TextAlignment::Right{ static_cast<int32_t>(0x2) };
