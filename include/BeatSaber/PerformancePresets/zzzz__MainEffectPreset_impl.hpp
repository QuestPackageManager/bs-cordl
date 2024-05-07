#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/MainEffectPreset.hpp"
#include "BeatSaber/PerformancePresets/zzzz__MainEffectPreset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::PerformancePresets::MainEffectPreset::MainEffectPreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::PerformancePresets::MainEffectPreset::MainEffectPreset() {}
constexpr ::BeatSaber::PerformancePresets::MainEffectPreset BeatSaber::PerformancePresets::MainEffectPreset::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::PerformancePresets::MainEffectPreset BeatSaber::PerformancePresets::MainEffectPreset::Pyramid{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::PerformancePresets::MainEffectPreset BeatSaber::PerformancePresets::MainEffectPreset::PyramidForBaking{ static_cast<int32_t>(0x2) };
