#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DistanceMetric.hpp"
#include "UnityEngine/Rendering/zzzz__DistanceMetric_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DistanceMetric::DistanceMetric(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DistanceMetric::DistanceMetric() {}
constexpr ::UnityEngine::Rendering::DistanceMetric UnityEngine::Rendering::DistanceMetric::Perspective{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::DistanceMetric UnityEngine::Rendering::DistanceMetric::Orthographic{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::DistanceMetric UnityEngine::Rendering::DistanceMetric::CustomAxis{ static_cast<int32_t>(0x2) };
