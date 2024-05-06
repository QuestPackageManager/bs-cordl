#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerUnavailableReason.hpp"
#include "GlobalNamespace/zzzz__MultiplayerUnavailableReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerUnavailableReason::MultiplayerUnavailableReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerUnavailableReason::MultiplayerUnavailableReason() {}
constexpr ::GlobalNamespace::MultiplayerUnavailableReason GlobalNamespace::MultiplayerUnavailableReason::NetworkUnreachable{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerUnavailableReason GlobalNamespace::MultiplayerUnavailableReason::UpdateRequired{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::MultiplayerUnavailableReason GlobalNamespace::MultiplayerUnavailableReason::ServerOffline{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::MultiplayerUnavailableReason GlobalNamespace::MultiplayerUnavailableReason::MaintenanceMode{ static_cast<int32_t>(0x4) };
