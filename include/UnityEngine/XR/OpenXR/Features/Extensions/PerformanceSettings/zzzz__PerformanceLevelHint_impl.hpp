#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/PerformanceLevelHint.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceLevelHint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint::PerformanceLevelHint(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint::PerformanceLevelHint() {}
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint
    UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint::PowerSavings{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint
    UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint::SustainedLow{ static_cast<int32_t>(0x19) };
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint
    UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint::SustainedHigh{ static_cast<int32_t>(0x32) };
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint::Boost{
  static_cast<int32_t>(0x4b)
};
