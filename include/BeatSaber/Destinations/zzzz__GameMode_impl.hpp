#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/GameMode.hpp"
#include "BeatSaber/Destinations/zzzz__GameMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Destinations::GameMode::GameMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::GameMode::GameMode() {}
constexpr ::BeatSaber::Destinations::GameMode BeatSaber::Destinations::GameMode::Simple{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Destinations::GameMode BeatSaber::Destinations::GameMode::Solo{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Destinations::GameMode BeatSaber::Destinations::GameMode::Editor{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Destinations::GameMode BeatSaber::Destinations::GameMode::Test{ static_cast<int32_t>(0x3) };
