#pragma once
// IWYU pragma private; include "System/Runtime/TraceEventLevel.hpp"
#include "System/Runtime/zzzz__TraceEventLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::TraceEventLevel::TraceEventLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::TraceEventLevel::TraceEventLevel() {}
constexpr ::System::Runtime::TraceEventLevel System::Runtime::TraceEventLevel::LogAlways{ static_cast<int32_t>(0x0) };
constexpr ::System::Runtime::TraceEventLevel System::Runtime::TraceEventLevel::Critical{ static_cast<int32_t>(0x1) };
constexpr ::System::Runtime::TraceEventLevel System::Runtime::TraceEventLevel::Error{ static_cast<int32_t>(0x2) };
constexpr ::System::Runtime::TraceEventLevel System::Runtime::TraceEventLevel::Warning{ static_cast<int32_t>(0x3) };
constexpr ::System::Runtime::TraceEventLevel System::Runtime::TraceEventLevel::Informational{ static_cast<int32_t>(0x4) };
constexpr ::System::Runtime::TraceEventLevel System::Runtime::TraceEventLevel::Verbose{ static_cast<int32_t>(0x5) };
