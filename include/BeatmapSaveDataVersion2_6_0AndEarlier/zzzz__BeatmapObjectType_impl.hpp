#pragma once
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapObjectType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType::BeatmapObjectType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType::BeatmapObjectType() {}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType::Note{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType::Obstacle{ static_cast<int32_t>(0x2) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapObjectType::Slider{ static_cast<int32_t>(0x3) };
