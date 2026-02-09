#pragma once
// IWYU pragma private; include "Oculus/Platform/AbuseReportVideoMode.hpp"
#include "Oculus/Platform/zzzz__AbuseReportVideoMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::AbuseReportVideoMode::AbuseReportVideoMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AbuseReportVideoMode::AbuseReportVideoMode()   {
}
constexpr ::Oculus::Platform::AbuseReportVideoMode  Oculus::Platform::AbuseReportVideoMode::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::AbuseReportVideoMode  Oculus::Platform::AbuseReportVideoMode::Collect{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::AbuseReportVideoMode  Oculus::Platform::AbuseReportVideoMode::Optional{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::AbuseReportVideoMode  Oculus::Platform::AbuseReportVideoMode::Skip{static_cast<int32_t>(0x3)};
