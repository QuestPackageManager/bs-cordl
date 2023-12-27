#pragma once
#include "RootMotion/zzzz__Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::RootMotion::Axis::Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::RootMotion::Axis::Axis() {}
constexpr ::RootMotion::Axis RootMotion::Axis::X{ static_cast<int32_t>(0x0) };
constexpr ::RootMotion::Axis RootMotion::Axis::Y{ static_cast<int32_t>(0x1) };
constexpr ::RootMotion::Axis RootMotion::Axis::Z{ static_cast<int32_t>(0x2) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
