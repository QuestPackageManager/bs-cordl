#pragma once
#include "BeatmapSaveDataCommon/zzzz__RotationDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataCommon::RotationDirection::RotationDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataCommon::RotationDirection::RotationDirection() {}
constexpr ::BeatmapSaveDataCommon::RotationDirection BeatmapSaveDataCommon::RotationDirection::Automatic{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataCommon::RotationDirection BeatmapSaveDataCommon::RotationDirection::Clockwise{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataCommon::RotationDirection BeatmapSaveDataCommon::RotationDirection::Counterclockwise{ static_cast<int32_t>(0x2) };
