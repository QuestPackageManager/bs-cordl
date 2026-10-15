#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupAxis.hpp"
#include "GlobalNamespace/zzzz__LightGroupAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LightGroupAxis::LightGroupAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupAxis::LightGroupAxis() {}
constexpr ::GlobalNamespace::LightGroupAxis GlobalNamespace::LightGroupAxis::X{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LightGroupAxis GlobalNamespace::LightGroupAxis::Y{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LightGroupAxis GlobalNamespace::LightGroupAxis::Z{ static_cast<int32_t>(0x2) };
