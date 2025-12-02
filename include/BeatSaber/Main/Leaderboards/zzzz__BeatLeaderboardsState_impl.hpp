#pragma once
// IWYU pragma private; include "BeatSaber/Main/Leaderboards/BeatLeaderboardsState.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__BeatLeaderboardsState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState::BeatLeaderboardsState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState::BeatLeaderboardsState() {}
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState BeatSaber::Main::Leaderboards::BeatLeaderboardsState::ErroredOrUninitialized{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState BeatSaber::Main::Leaderboards::BeatLeaderboardsState::Disabled{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboardsState BeatSaber::Main::Leaderboards::BeatLeaderboardsState::Ready{ static_cast<int32_t>(0x2) };
