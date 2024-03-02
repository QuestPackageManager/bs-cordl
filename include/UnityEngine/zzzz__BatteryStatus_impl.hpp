#pragma once
#include "UnityEngine/zzzz__BatteryStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::BatteryStatus::BatteryStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::BatteryStatus::BatteryStatus() {}
constexpr ::UnityEngine::BatteryStatus UnityEngine::BatteryStatus::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::BatteryStatus UnityEngine::BatteryStatus::Charging{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::BatteryStatus UnityEngine::BatteryStatus::Discharging{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::BatteryStatus UnityEngine::BatteryStatus::NotCharging{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::BatteryStatus UnityEngine::BatteryStatus::Full{ static_cast<int32_t>(0x4) };
