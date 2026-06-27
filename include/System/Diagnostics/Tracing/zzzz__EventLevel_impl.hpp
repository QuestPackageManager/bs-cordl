#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventLevel.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::Tracing::EventLevel::EventLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Tracing::EventLevel::EventLevel()   {
}
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::LogAlways{static_cast<int32_t>(0x0)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Critical{static_cast<int32_t>(0x1)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Error{static_cast<int32_t>(0x2)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Warning{static_cast<int32_t>(0x3)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Informational{static_cast<int32_t>(0x4)};
constexpr ::System::Diagnostics::Tracing::EventLevel  System::Diagnostics::Tracing::EventLevel::Verbose{static_cast<int32_t>(0x5)};
