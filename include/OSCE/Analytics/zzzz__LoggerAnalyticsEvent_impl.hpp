#pragma once
// IWYU pragma private; include "OSCE/Analytics/LoggerAnalyticsEvent.hpp"
#include "OSCE/Analytics/zzzz__LoggerAnalyticsEvent_def.hpp"
// Ctor Parameters [CppParam { name: "logger", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "analytics_event", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Analytics::LoggerAnalyticsEvent::LoggerAnalyticsEvent(::StringW logger, ::StringW analytics_event) noexcept {
  this->logger = logger;
  this->analytics_event = analytics_event;
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::LoggerAnalyticsEvent::LoggerAnalyticsEvent() {}
