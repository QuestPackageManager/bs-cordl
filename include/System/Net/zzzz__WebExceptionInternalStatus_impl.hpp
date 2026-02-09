#pragma once
// IWYU pragma private; include "System/Net/WebExceptionInternalStatus.hpp"
#include "System/Net/zzzz__WebExceptionInternalStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebExceptionInternalStatus::WebExceptionInternalStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebExceptionInternalStatus::WebExceptionInternalStatus()   {
}
constexpr ::System::Net::WebExceptionInternalStatus  System::Net::WebExceptionInternalStatus::RequestFatal{static_cast<int32_t>(0x0)};
constexpr ::System::Net::WebExceptionInternalStatus  System::Net::WebExceptionInternalStatus::ServicePointFatal{static_cast<int32_t>(0x1)};
constexpr ::System::Net::WebExceptionInternalStatus  System::Net::WebExceptionInternalStatus::Recoverable{static_cast<int32_t>(0x2)};
constexpr ::System::Net::WebExceptionInternalStatus  System::Net::WebExceptionInternalStatus::Isolated{static_cast<int32_t>(0x3)};
