#pragma once
// IWYU pragma private; include "GlobalNamespace/SliderMidAnchorMode.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SliderMidAnchorMode::SliderMidAnchorMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMidAnchorMode::SliderMidAnchorMode() {}
constexpr ::GlobalNamespace::SliderMidAnchorMode GlobalNamespace::SliderMidAnchorMode::Straight{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SliderMidAnchorMode GlobalNamespace::SliderMidAnchorMode::Clockwise{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SliderMidAnchorMode GlobalNamespace::SliderMidAnchorMode::CounterClockwise{ static_cast<int32_t>(0x2) };
