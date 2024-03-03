#pragma once
#include "GlobalNamespace/zzzz__SongSelectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::SongSelectionMode::SongSelectionMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongSelectionMode::SongSelectionMode() {}
constexpr ::GlobalNamespace::SongSelectionMode GlobalNamespace::SongSelectionMode::Vote{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::SongSelectionMode GlobalNamespace::SongSelectionMode::Random{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::SongSelectionMode GlobalNamespace::SongSelectionMode::OwnerPicks{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::SongSelectionMode GlobalNamespace::SongSelectionMode::RandomPlayerPicks{ static_cast<int32_t>(0x3) };
