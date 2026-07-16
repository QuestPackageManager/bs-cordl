#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/MissionObjectiveType.hpp"
#include "BeatSaber/Destinations/zzzz__MissionObjectiveType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Destinations::MissionObjectiveType::MissionObjectiveType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::MissionObjectiveType::MissionObjectiveType() {}
constexpr ::BeatSaber::Destinations::MissionObjectiveType BeatSaber::Destinations::MissionObjectiveType::BadCuts{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Destinations::MissionObjectiveType BeatSaber::Destinations::MissionObjectiveType::Combo{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Destinations::MissionObjectiveType BeatSaber::Destinations::MissionObjectiveType::FullCombo{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Destinations::MissionObjectiveType BeatSaber::Destinations::MissionObjectiveType::HandsMovement{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Destinations::MissionObjectiveType BeatSaber::Destinations::MissionObjectiveType::Miss{ static_cast<int32_t>(0x4) };
constexpr ::BeatSaber::Destinations::MissionObjectiveType BeatSaber::Destinations::MissionObjectiveType::Score{ static_cast<int32_t>(0x5) };
