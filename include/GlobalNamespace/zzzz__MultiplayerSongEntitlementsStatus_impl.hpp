#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSongEntitlementsStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerSongEntitlementsStatus::MultiplayerSongEntitlementsStatus(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSongEntitlementsStatus::MultiplayerSongEntitlementsStatus() {}
constexpr ::GlobalNamespace::MultiplayerSongEntitlementsStatus GlobalNamespace::MultiplayerSongEntitlementsStatus::Ok{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerSongEntitlementsStatus GlobalNamespace::MultiplayerSongEntitlementsStatus::Invalid{ static_cast<int32_t>(0x1) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
