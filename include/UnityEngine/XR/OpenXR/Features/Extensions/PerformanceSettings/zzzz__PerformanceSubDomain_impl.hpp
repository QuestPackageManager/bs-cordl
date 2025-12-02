#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/PerformanceSubDomain.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceSubDomain_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain::PerformanceSubDomain(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain::PerformanceSubDomain() {}
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain
    UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain::Compositing{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain
    UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain::Rendering{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain::Thermal{
  static_cast<int32_t>(0x3)
};
