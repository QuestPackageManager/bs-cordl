#pragma once
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__SliderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderType::SliderType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderType::SliderType() {}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderType BeatmapSaveDataVersion2_6_0AndEarlier::SliderType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::SliderType BeatmapSaveDataVersion2_6_0AndEarlier::SliderType::Burst{ static_cast<int32_t>(0x1) };
