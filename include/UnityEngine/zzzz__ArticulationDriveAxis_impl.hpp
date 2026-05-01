#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationDriveAxis.hpp"
#include "UnityEngine/zzzz__ArticulationDriveAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ArticulationDriveAxis::ArticulationDriveAxis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationDriveAxis::ArticulationDriveAxis() {}
constexpr ::UnityEngine::ArticulationDriveAxis UnityEngine::ArticulationDriveAxis::X{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ArticulationDriveAxis UnityEngine::ArticulationDriveAxis::Y{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ArticulationDriveAxis UnityEngine::ArticulationDriveAxis::Z{ static_cast<int32_t>(0x2) };
