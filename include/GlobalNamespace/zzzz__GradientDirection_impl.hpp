#pragma once
// IWYU pragma private; include "GlobalNamespace/GradientDirection.hpp"
#include "GlobalNamespace/zzzz__GradientDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GradientDirection::GradientDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GradientDirection::GradientDirection() {}
constexpr ::GlobalNamespace::GradientDirection GlobalNamespace::GradientDirection::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GradientDirection GlobalNamespace::GradientDirection::Vertical{ static_cast<int32_t>(0x1) };
