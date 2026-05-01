#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PerformanceBottleneck.hpp"
#include "UnityEngine/Rendering/zzzz__PerformanceBottleneck_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PerformanceBottleneck::PerformanceBottleneck(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PerformanceBottleneck::PerformanceBottleneck() {}
constexpr ::UnityEngine::Rendering::PerformanceBottleneck UnityEngine::Rendering::PerformanceBottleneck::Indeterminate{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::PerformanceBottleneck UnityEngine::Rendering::PerformanceBottleneck::PresentLimited{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::PerformanceBottleneck UnityEngine::Rendering::PerformanceBottleneck::CPU{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::PerformanceBottleneck UnityEngine::Rendering::PerformanceBottleneck::GPU{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::PerformanceBottleneck UnityEngine::Rendering::PerformanceBottleneck::Balanced{ static_cast<int32_t>(0x4) };
