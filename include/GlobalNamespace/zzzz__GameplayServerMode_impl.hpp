#pragma once
#include "GlobalNamespace/zzzz__GameplayServerMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayServerMode::GameplayServerMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayServerMode::GameplayServerMode() {}
constexpr ::GlobalNamespace::GameplayServerMode GlobalNamespace::GameplayServerMode::Countdown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayServerMode GlobalNamespace::GameplayServerMode::Managed{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameplayServerMode GlobalNamespace::GameplayServerMode::QuickStartOneSong{ static_cast<int32_t>(0x2) };
