#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/PoseDataFlags.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags::PoseDataFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags::PoseDataFlags() {}
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::PoseDataFlags::NoData{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::PoseDataFlags::Position{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::PoseDataFlags::Rotation{ static_cast<int32_t>(0x2) };
