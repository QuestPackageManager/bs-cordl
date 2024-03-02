#pragma once
#include "BeatmapSaveDataVersion3/zzzz__TransitionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::TransitionType::TransitionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::TransitionType::TransitionType() {}
constexpr ::BeatmapSaveDataVersion3::TransitionType BeatmapSaveDataVersion3::TransitionType::Instant{ static_cast<int32_t>(0x0) };
constexpr ::BeatmapSaveDataVersion3::TransitionType BeatmapSaveDataVersion3::TransitionType::Interpolate{ static_cast<int32_t>(0x1) };
constexpr ::BeatmapSaveDataVersion3::TransitionType BeatmapSaveDataVersion3::TransitionType::Extend{ static_cast<int32_t>(0x2) };
