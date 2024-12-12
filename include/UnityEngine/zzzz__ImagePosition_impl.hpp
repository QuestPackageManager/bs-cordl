#pragma once
// IWYU pragma private; include "UnityEngine/ImagePosition.hpp"
#include "UnityEngine/zzzz__ImagePosition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ImagePosition::ImagePosition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ImagePosition::ImagePosition() {}
constexpr ::UnityEngine::ImagePosition UnityEngine::ImagePosition::ImageLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ImagePosition UnityEngine::ImagePosition::ImageAbove{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ImagePosition UnityEngine::ImagePosition::ImageOnly{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ImagePosition UnityEngine::ImagePosition::TextOnly{ static_cast<int32_t>(0x3) };
