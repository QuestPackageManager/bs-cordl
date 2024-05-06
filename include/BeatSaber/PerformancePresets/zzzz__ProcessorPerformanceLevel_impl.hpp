#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/ProcessorPerformanceLevel.hpp"
#include "BeatSaber/PerformancePresets/zzzz__ProcessorPerformanceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel::ProcessorPerformanceLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel::ProcessorPerformanceLevel() {}
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel BeatSaber::PerformancePresets::ProcessorPerformanceLevel::Unknown{ static_cast<int32_t>(0xffffffff) };
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel BeatSaber::PerformancePresets::ProcessorPerformanceLevel::PowerSavings{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel BeatSaber::PerformancePresets::ProcessorPerformanceLevel::SustainedLow{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel BeatSaber::PerformancePresets::ProcessorPerformanceLevel::SustainedHigh{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::PerformancePresets::ProcessorPerformanceLevel BeatSaber::PerformancePresets::ProcessorPerformanceLevel::Boost{ static_cast<int32_t>(0x3) };
