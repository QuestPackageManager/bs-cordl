#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventKeywords.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventKeywords_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::Tracing::EventKeywords::EventKeywords(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::EventKeywords::EventKeywords()   {
}
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::None{static_cast<int64_t>(0x0)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::All{static_cast<int64_t>(0xffffffffffffffff)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::MicrosoftTelemetry{static_cast<int64_t>(0x2000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::WdiContext{static_cast<int64_t>(0x2000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::WdiDiagnostic{static_cast<int64_t>(0x4000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::Sqm{static_cast<int64_t>(0x8000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::AuditFailure{static_cast<int64_t>(0x10000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::AuditSuccess{static_cast<int64_t>(0x20000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::CorrelationHint{static_cast<int64_t>(0x10000000000000)};
constexpr ::System::Diagnostics::Tracing::EventKeywords  System::Diagnostics::Tracing::EventKeywords::EventLogClassic{static_cast<int64_t>(0x80000000000000)};
