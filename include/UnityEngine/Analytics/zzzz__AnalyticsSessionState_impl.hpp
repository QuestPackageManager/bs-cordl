#pragma once
#include "UnityEngine/Analytics/zzzz__AnalyticsSessionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Analytics::AnalyticsSessionState::AnalyticsSessionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsSessionState::AnalyticsSessionState() {}
constexpr ::UnityEngine::Analytics::AnalyticsSessionState UnityEngine::Analytics::AnalyticsSessionState::kSessionStopped{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Analytics::AnalyticsSessionState UnityEngine::Analytics::AnalyticsSessionState::kSessionStarted{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Analytics::AnalyticsSessionState UnityEngine::Analytics::AnalyticsSessionState::kSessionPaused{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Analytics::AnalyticsSessionState UnityEngine::Analytics::AnalyticsSessionState::kSessionResumed{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
