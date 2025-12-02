#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugGizmoType.hpp"
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType::DebugGizmoType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType::DebugGizmoType() {}
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::None{ static_cast<int32_t>(0x0) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::Axis{ static_cast<int32_t>(0x1) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::Point{ static_cast<int32_t>(0x2) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::Line{ static_cast<int32_t>(0x3) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::Lines{ static_cast<int32_t>(0x4) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::Plane{ static_cast<int32_t>(0x5) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::Cube{ static_cast<int32_t>(0x6) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::TopCenterBox{ static_cast<int32_t>(0x7) };
constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType Meta::XR::ImmersiveDebugger::DebugGizmoType::Box{ static_cast<int32_t>(0x8) };
