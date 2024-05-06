#pragma once
#include "BeatSaber/PerformancePresets/zzzz__FoveatedRenderingLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel::FoveatedRenderingLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel::FoveatedRenderingLevel() {}
constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel BeatSaber::PerformancePresets::FoveatedRenderingLevel::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel BeatSaber::PerformancePresets::FoveatedRenderingLevel::Low{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel BeatSaber::PerformancePresets::FoveatedRenderingLevel::Medium{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel BeatSaber::PerformancePresets::FoveatedRenderingLevel::High{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::PerformancePresets::FoveatedRenderingLevel BeatSaber::PerformancePresets::FoveatedRenderingLevel::HighTop{ static_cast<int32_t>(0x4) };
