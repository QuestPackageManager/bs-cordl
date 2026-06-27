#pragma once
// IWYU pragma private; include "Oculus/Platform/TimeWindow.hpp"
#include "Oculus/Platform/zzzz__TimeWindow_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::TimeWindow::TimeWindow(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::TimeWindow::TimeWindow()   {
}
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneHour{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneDay{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::OneWeek{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::ThirtyDays{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::TimeWindow  Oculus::Platform::TimeWindow::NinetyDays{static_cast<int32_t>(0x5)};
