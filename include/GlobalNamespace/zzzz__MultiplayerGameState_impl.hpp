#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerGameState.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerGameState::MultiplayerGameState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerGameState::MultiplayerGameState() {}
constexpr ::GlobalNamespace::MultiplayerGameState GlobalNamespace::MultiplayerGameState::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerGameState GlobalNamespace::MultiplayerGameState::Lobby{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerGameState GlobalNamespace::MultiplayerGameState::Game{ static_cast<int32_t>(0x2) };
