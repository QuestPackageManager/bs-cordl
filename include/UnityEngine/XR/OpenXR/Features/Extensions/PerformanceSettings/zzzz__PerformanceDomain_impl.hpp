#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/PerformanceDomain.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceDomain_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain::PerformanceDomain(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain::PerformanceDomain() {}
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain::Cpu{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain::Gpu{
  static_cast<int32_t>(0x2)
};
