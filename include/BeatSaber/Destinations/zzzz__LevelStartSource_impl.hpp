#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/LevelStartSource.hpp"
#include "BeatSaber/Destinations/zzzz__LevelStartSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BeatSaber::Destinations::LevelStartSource::LevelStartSource(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::LevelStartSource::LevelStartSource() {}
constexpr ::BeatSaber::Destinations::LevelStartSource BeatSaber::Destinations::LevelStartSource::Unspecified{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Destinations::LevelStartSource BeatSaber::Destinations::LevelStartSource::UnityEditor{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Destinations::LevelStartSource BeatSaber::Destinations::LevelStartSource::Test{ static_cast<int32_t>(0x2) };
