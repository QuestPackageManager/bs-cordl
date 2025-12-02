#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/PerformanceChangeNotification.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceDomain_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceNotificationLevel_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceSubDomain_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Extensions/PerformanceSettings/zzzz__PerformanceChangeNotification_def.hpp"
// Ctor Parameters [CppParam { name: "domain", ty: "::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "subDomain", ty: "::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain", modifiers: "", def_value: Some("{}") }, CppParam { name: "fromLevel", ty:
// "::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "toLevel", ty:
// "::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification::PerformanceChangeNotification(
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceDomain domain,
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceSubDomain subDomain,
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel fromLevel,
    ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceNotificationLevel toLevel) noexcept {
  this->domain = domain;
  this->subDomain = subDomain;
  this->fromLevel = fromLevel;
  this->toLevel = toLevel;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceChangeNotification::PerformanceChangeNotification() {}
