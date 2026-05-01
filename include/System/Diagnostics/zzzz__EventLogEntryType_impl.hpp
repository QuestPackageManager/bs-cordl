#pragma once
// IWYU pragma private; include "System/Diagnostics/EventLogEntryType.hpp"
#include "System/Diagnostics/zzzz__EventLogEntryType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::EventLogEntryType::EventLogEntryType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::EventLogEntryType::EventLogEntryType() {}
constexpr ::System::Diagnostics::EventLogEntryType System::Diagnostics::EventLogEntryType::Error{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::EventLogEntryType System::Diagnostics::EventLogEntryType::Warning{ static_cast<int32_t>(0x2) };
constexpr ::System::Diagnostics::EventLogEntryType System::Diagnostics::EventLogEntryType::Information{ static_cast<int32_t>(0x4) };
constexpr ::System::Diagnostics::EventLogEntryType System::Diagnostics::EventLogEntryType::SuccessAudit{ static_cast<int32_t>(0x8) };
constexpr ::System::Diagnostics::EventLogEntryType System::Diagnostics::EventLogEntryType::FailureAudit{ static_cast<int32_t>(0x10) };
