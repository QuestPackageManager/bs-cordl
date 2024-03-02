#pragma once
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode::SliderMidAnchorMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode::SliderMidAnchorMode() {}
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode BeatmapSaveDataCommon::SliderMidAnchorMode::Straight{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode BeatmapSaveDataCommon::SliderMidAnchorMode::Clockwise{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode BeatmapSaveDataCommon::SliderMidAnchorMode::CounterClockwise{ static_cast<int32_t>(0x2) };
