#pragma once
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ObstaclesQuality::ObstaclesQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstaclesQuality::ObstaclesQuality() {}
constexpr ::GlobalNamespace::ObstaclesQuality GlobalNamespace::ObstaclesQuality::DefaultObstacleQualityBaseOnDisplacement{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ObstaclesQuality GlobalNamespace::ObstaclesQuality::TexturedObstacle{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ObstaclesQuality GlobalNamespace::ObstaclesQuality::ObstacleLW{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::ObstaclesQuality GlobalNamespace::ObstaclesQuality::ObstacleHW{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
