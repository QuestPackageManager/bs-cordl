#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/SliderType.hpp"
#include "BeatmapSaveDataVersion3/zzzz__SliderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::SliderType::SliderType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::SliderType::SliderType() {}
constexpr ::BeatmapSaveDataVersion3::SliderType BeatmapSaveDataVersion3::SliderType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::SliderType BeatmapSaveDataVersion3::SliderType::Burst{ static_cast<int32_t>(0x1) };
