#pragma once
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::TraceEventType::TraceEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceEventType::TraceEventType() {}
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Critical{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Error{ static_cast<int32_t>(0x2) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Warning{ static_cast<int32_t>(0x4) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Information{ static_cast<int32_t>(0x8) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Verbose{ static_cast<int32_t>(0x10) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Start{ static_cast<int32_t>(0x100) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Stop{ static_cast<int32_t>(0x200) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Suspend{ static_cast<int32_t>(0x400) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Resume{ static_cast<int32_t>(0x800) };
constexpr ::System::Diagnostics::TraceEventType System::Diagnostics::TraceEventType::Transfer{ static_cast<int32_t>(0x1000) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
