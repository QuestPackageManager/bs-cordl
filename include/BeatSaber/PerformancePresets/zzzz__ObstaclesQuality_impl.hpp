#pragma once
// IWYU pragma private; include "BeatSaber/PerformancePresets/ObstaclesQuality.hpp"
#include "BeatSaber/PerformancePresets/zzzz__ObstaclesQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality::ObstaclesQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality::ObstaclesQuality() {}
constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality BeatSaber::PerformancePresets::ObstaclesQuality::DefaultObstacleQualityBaseOnDisplacement{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality BeatSaber::PerformancePresets::ObstaclesQuality::TexturedObstacle{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality BeatSaber::PerformancePresets::ObstaclesQuality::ObstacleLW{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality BeatSaber::PerformancePresets::ObstaclesQuality::ObstacleHW{ static_cast<int32_t>(0x3) };
