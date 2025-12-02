#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Axis.hpp"
#include "UnityEngine/UIElements/zzzz__Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Axis::Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Axis::Axis() {}
constexpr ::UnityEngine::UIElements::Axis UnityEngine::UIElements::Axis::X{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::Axis UnityEngine::UIElements::Axis::Y{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UIElements::Axis UnityEngine::UIElements::Axis::Z{ static_cast<int32_t>(0x2) };
