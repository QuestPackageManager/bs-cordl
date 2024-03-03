#pragma once
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSensitivityFlag::PlayerSensitivityFlag(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSensitivityFlag::PlayerSensitivityFlag() {}
constexpr ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::PlayerSensitivityFlag::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::PlayerSensitivityFlag::Safe{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::PlayerSensitivityFlag::Themes{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::PlayerSensitivityFlag::Explicit{ static_cast<int32_t>(0x3) };
