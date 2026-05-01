#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/BeatmapCharacteristic.hpp"
#include "BeatSaber/Destinations/zzzz__BeatmapCharacteristic_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic::BeatmapCharacteristic(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic::BeatmapCharacteristic() {}
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::BeatmapCharacteristic::Standard{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::BeatmapCharacteristic::Circular90Degree{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::BeatmapCharacteristic::Circular360Degree{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::BeatmapCharacteristic::Legacy{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::BeatmapCharacteristic::NoArrows{ static_cast<int32_t>(0x4) };
constexpr ::BeatSaber::Destinations::BeatmapCharacteristic BeatSaber::Destinations::BeatmapCharacteristic::OneColor{ static_cast<int32_t>(0x5) };
