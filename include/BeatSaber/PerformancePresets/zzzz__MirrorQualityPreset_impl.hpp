#pragma once
#include "BeatSaber/PerformancePresets/zzzz__MirrorQualityPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::PerformancePresets::MirrorQualityPreset::MirrorQualityPreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::PerformancePresets::MirrorQualityPreset::MirrorQualityPreset() {}
constexpr ::BeatSaber::PerformancePresets::MirrorQualityPreset BeatSaber::PerformancePresets::MirrorQualityPreset::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::PerformancePresets::MirrorQualityPreset BeatSaber::PerformancePresets::MirrorQualityPreset::Fake{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::PerformancePresets::MirrorQualityPreset BeatSaber::PerformancePresets::MirrorQualityPreset::RenderedLQ{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::PerformancePresets::MirrorQualityPreset BeatSaber::PerformancePresets::MirrorQualityPreset::RenderedHQ{ static_cast<int32_t>(0x3) };
