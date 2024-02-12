#pragma once
#include "UnityEngine/zzzz__RotationDriveMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::RotationDriveMode::RotationDriveMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::RotationDriveMode::RotationDriveMode() {}
constexpr ::UnityEngine::RotationDriveMode UnityEngine::RotationDriveMode::XYAndZ{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::RotationDriveMode UnityEngine::RotationDriveMode::Slerp{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
