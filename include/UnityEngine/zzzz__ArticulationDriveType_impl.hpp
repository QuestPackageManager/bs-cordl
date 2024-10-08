#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationDriveType.hpp"
#include "UnityEngine/zzzz__ArticulationDriveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ArticulationDriveType::ArticulationDriveType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ArticulationDriveType::ArticulationDriveType() {}
constexpr ::UnityEngine::ArticulationDriveType UnityEngine::ArticulationDriveType::Force{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::ArticulationDriveType UnityEngine::ArticulationDriveType::Acceleration{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::ArticulationDriveType UnityEngine::ArticulationDriveType::Target{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::ArticulationDriveType UnityEngine::ArticulationDriveType::Velocity{ static_cast<int32_t>(0x3) };
