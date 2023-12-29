#pragma once
#include "UnityEngine/Analytics/zzzz__AnalyticsResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Analytics::AnalyticsResult::AnalyticsResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsResult::AnalyticsResult() {}
constexpr ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsResult::Ok{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsResult::NotInitialized{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsResult::AnalyticsDisabled{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsResult::TooManyItems{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsResult::SizeLimitReached{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsResult::TooManyRequests{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsResult::InvalidData{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Analytics::AnalyticsResult UnityEngine::Analytics::AnalyticsResult::UnsupportedPlatform{ static_cast<int32_t>(0x7) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
