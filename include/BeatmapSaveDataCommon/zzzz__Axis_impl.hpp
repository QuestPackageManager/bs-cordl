#pragma once
#include "BeatmapSaveDataCommon/zzzz__Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::Axis::Axis(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::Axis::Axis() {}
constexpr ::BeatmapSaveDataCommon::Axis BeatmapSaveDataCommon::Axis::X{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::Axis BeatmapSaveDataCommon::Axis::Y{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::Axis BeatmapSaveDataCommon::Axis::Z{ static_cast<int32_t>(0x2) };
