#pragma once
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CannotStartGameReason::CannotStartGameReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CannotStartGameReason::CannotStartGameReason() {}
constexpr ::GlobalNamespace::CannotStartGameReason GlobalNamespace::CannotStartGameReason::None{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::CannotStartGameReason GlobalNamespace::CannotStartGameReason::AllPlayersSpectating{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::CannotStartGameReason GlobalNamespace::CannotStartGameReason::NoSongSelected{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::CannotStartGameReason GlobalNamespace::CannotStartGameReason::AllPlayersNotInLobby{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::CannotStartGameReason GlobalNamespace::CannotStartGameReason::DoNotOwnSong{ static_cast<int32_t>(0x5) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
