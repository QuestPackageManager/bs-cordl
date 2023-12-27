#pragma once
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerLobbyState::MultiplayerLobbyState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyState::MultiplayerLobbyState() {}
constexpr ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::MultiplayerLobbyState::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::MultiplayerLobbyState::LobbySetup{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::MultiplayerLobbyState::LobbyCountdown{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::MultiplayerLobbyState::GameStarting{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::MultiplayerLobbyState::GameRunning{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::MultiplayerLobbyState::Error{ static_cast<int32_t>(0x5) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
