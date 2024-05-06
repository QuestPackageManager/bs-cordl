#pragma once
// IWYU pragma private; include "BeatSaber/TrackDefinitions/DataModels/TrackToolbarType.hpp"
#include "BeatSaber/TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::TrackToolbarType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::TrackToolbarType() {}
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::Lights{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::Toggle{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::FloatValue{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::IntValue{ static_cast<int32_t>(0x4) };
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::BtsCharacterSelection{ static_cast<int32_t>(0x5) };
constexpr ::BeatSaber::TrackDefinitions::DataModels::TrackToolbarType BeatSaber::TrackDefinitions::DataModels::TrackToolbarType::CarSelection{ static_cast<int32_t>(0x6) };
