#pragma once
// IWYU pragma private; include "UnityEngine/JointDriveMode.hpp"
#include "UnityEngine/zzzz__JointDriveMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::JointDriveMode::JointDriveMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::JointDriveMode::JointDriveMode() {}
constexpr ::UnityEngine::JointDriveMode UnityEngine::JointDriveMode::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::JointDriveMode UnityEngine::JointDriveMode::Position{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::JointDriveMode UnityEngine::JointDriveMode::Velocity{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::JointDriveMode UnityEngine::JointDriveMode::PositionAndVelocity{ static_cast<int32_t>(0x3) };
