#pragma once
// IWYU pragma private; include "System/Runtime/TraceEventOpcode.hpp"
#include "System/Runtime/zzzz__TraceEventOpcode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::TraceEventOpcode::TraceEventOpcode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::TraceEventOpcode::TraceEventOpcode() {}
constexpr ::System::Runtime::TraceEventOpcode System::Runtime::TraceEventOpcode::Info{ static_cast<int32_t>(0x0) };
constexpr ::System::Runtime::TraceEventOpcode System::Runtime::TraceEventOpcode::Start{ static_cast<int32_t>(0x1) };
constexpr ::System::Runtime::TraceEventOpcode System::Runtime::TraceEventOpcode::Stop{ static_cast<int32_t>(0x2) };
constexpr ::System::Runtime::TraceEventOpcode System::Runtime::TraceEventOpcode::Reply{ static_cast<int32_t>(0x6) };
constexpr ::System::Runtime::TraceEventOpcode System::Runtime::TraceEventOpcode::Resume{ static_cast<int32_t>(0x7) };
constexpr ::System::Runtime::TraceEventOpcode System::Runtime::TraceEventOpcode::Suspend{ static_cast<int32_t>(0x8) };
constexpr ::System::Runtime::TraceEventOpcode System::Runtime::TraceEventOpcode::Send{ static_cast<int32_t>(0x9) };
constexpr ::System::Runtime::TraceEventOpcode System::Runtime::TraceEventOpcode::Receive{ static_cast<int32_t>(0xf0) };
