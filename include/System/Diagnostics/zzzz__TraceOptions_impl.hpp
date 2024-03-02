#pragma once
#include "System/Diagnostics/zzzz__TraceOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::TraceOptions::TraceOptions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceOptions::TraceOptions() {}
constexpr ::System::Diagnostics::TraceOptions System::Diagnostics::TraceOptions::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Diagnostics::TraceOptions System::Diagnostics::TraceOptions::LogicalOperationStack{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::TraceOptions System::Diagnostics::TraceOptions::DateTime{ static_cast<int32_t>(0x2) };
constexpr ::System::Diagnostics::TraceOptions System::Diagnostics::TraceOptions::Timestamp{ static_cast<int32_t>(0x4) };
constexpr ::System::Diagnostics::TraceOptions System::Diagnostics::TraceOptions::ProcessId{ static_cast<int32_t>(0x8) };
constexpr ::System::Diagnostics::TraceOptions System::Diagnostics::TraceOptions::ThreadId{ static_cast<int32_t>(0x10) };
constexpr ::System::Diagnostics::TraceOptions System::Diagnostics::TraceOptions::Callstack{ static_cast<int32_t>(0x20) };
