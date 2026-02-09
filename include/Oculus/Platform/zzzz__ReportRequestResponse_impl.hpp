#pragma once
// IWYU pragma private; include "Oculus/Platform/ReportRequestResponse.hpp"
#include "Oculus/Platform/zzzz__ReportRequestResponse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::ReportRequestResponse::ReportRequestResponse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::ReportRequestResponse::ReportRequestResponse()   {
}
constexpr ::Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Handled{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unhandled{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::ReportRequestResponse  Oculus::Platform::ReportRequestResponse::Unavailable{static_cast<int32_t>(0x3)};
