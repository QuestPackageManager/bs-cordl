#pragma once
// IWYU pragma private; include "GlobalNamespace/GameMode.hpp"
#include "GlobalNamespace/zzzz__GameMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameMode::GameMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameMode::GameMode() {}
constexpr ::GlobalNamespace::GameMode GlobalNamespace::GameMode::Solo{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameMode GlobalNamespace::GameMode::Practice{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameMode GlobalNamespace::GameMode::Multiplayer{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::GameMode GlobalNamespace::GameMode::Campaign{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::GameMode GlobalNamespace::GameMode::Party{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::GameMode GlobalNamespace::GameMode::Development{ static_cast<int32_t>(0x5) };
