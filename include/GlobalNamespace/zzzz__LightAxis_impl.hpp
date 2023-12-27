#pragma once
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LightAxis::LightAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightAxis::LightAxis() {}
constexpr ::GlobalNamespace::LightAxis GlobalNamespace::LightAxis::X{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::LightAxis GlobalNamespace::LightAxis::Y{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::LightAxis GlobalNamespace::LightAxis::Z{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
