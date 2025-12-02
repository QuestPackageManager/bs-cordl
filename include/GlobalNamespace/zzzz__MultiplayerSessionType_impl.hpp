#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSessionType.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerSessionType::MultiplayerSessionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSessionType::MultiplayerSessionType() {}
constexpr ::GlobalNamespace::MultiplayerSessionType GlobalNamespace::MultiplayerSessionType::Player{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerSessionType GlobalNamespace::MultiplayerSessionType::Spectator{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerSessionType GlobalNamespace::MultiplayerSessionType::DedicatedServer{ static_cast<int32_t>(0x2) };
