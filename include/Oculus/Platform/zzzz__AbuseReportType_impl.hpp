#pragma once
// IWYU pragma private; include "Oculus/Platform/AbuseReportType.hpp"
#include "Oculus/Platform/zzzz__AbuseReportType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::AbuseReportType::AbuseReportType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AbuseReportType::AbuseReportType()   {
}
constexpr ::Oculus::Platform::AbuseReportType  Oculus::Platform::AbuseReportType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::AbuseReportType  Oculus::Platform::AbuseReportType::Object{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::AbuseReportType  Oculus::Platform::AbuseReportType::User{static_cast<int32_t>(0x2)};
