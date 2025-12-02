#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugColor.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugColor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::DebugColor::DebugColor(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugColor::DebugColor() {}
constexpr ::Meta::XR::ImmersiveDebugger::DebugColor Meta::XR::ImmersiveDebugger::DebugColor::Red{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugColor Meta::XR::ImmersiveDebugger::DebugColor::Gray{ static_cast<int32_t>(0x1) };
