#pragma once
// IWYU pragma private; include "OSCE/Analytics/AnalyticsSystemModeEnum.hpp"
#include "OSCE/Analytics/zzzz__AnalyticsSystemModeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum::AnalyticsSystemModeEnum(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum::AnalyticsSystemModeEnum() {}
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum OSCE::Analytics::AnalyticsSystemModeEnum::ACTIVE{ static_cast<int32_t>(0x0) };
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum OSCE::Analytics::AnalyticsSystemModeEnum::PAUSED{ static_cast<int32_t>(0x1) };
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum OSCE::Analytics::AnalyticsSystemModeEnum::DISABLED{ static_cast<int32_t>(0x2) };
constexpr ::OSCE::Analytics::AnalyticsSystemModeEnum OSCE::Analytics::AnalyticsSystemModeEnum::UNINITIALIZED{ static_cast<int32_t>(0x3) };
