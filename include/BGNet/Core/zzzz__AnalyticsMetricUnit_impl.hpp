#pragma once
#include "BGNet/Core/zzzz__AnalyticsMetricUnit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Core::AnalyticsMetricUnit::AnalyticsMetricUnit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGNet::Core::AnalyticsMetricUnit::AnalyticsMetricUnit() {}
constexpr ::BGNet::Core::AnalyticsMetricUnit BGNet::Core::AnalyticsMetricUnit::None{ static_cast<int32_t>(0x0) };
constexpr ::BGNet::Core::AnalyticsMetricUnit BGNet::Core::AnalyticsMetricUnit::Count{ static_cast<int32_t>(0x1) };
constexpr ::BGNet::Core::AnalyticsMetricUnit BGNet::Core::AnalyticsMetricUnit::Percent{ static_cast<int32_t>(0x2) };
constexpr ::BGNet::Core::AnalyticsMetricUnit BGNet::Core::AnalyticsMetricUnit::Seconds{ static_cast<int32_t>(0x3) };
constexpr ::BGNet::Core::AnalyticsMetricUnit BGNet::Core::AnalyticsMetricUnit::Milliseconds{ static_cast<int32_t>(0x4) };
constexpr ::BGNet::Core::AnalyticsMetricUnit BGNet::Core::AnalyticsMetricUnit::Microseconds{ static_cast<int32_t>(0x5) };
constexpr ::BGNet::Core::AnalyticsMetricUnit BGNet::Core::AnalyticsMetricUnit::Bytes{ static_cast<int32_t>(0x6) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
