#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceLevel.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::TraceLevel::TraceLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::TraceLevel::TraceLevel()   {
}
constexpr ::System::Diagnostics::TraceLevel  System::Diagnostics::TraceLevel::Off{static_cast<int32_t>(0x0)};
constexpr ::System::Diagnostics::TraceLevel  System::Diagnostics::TraceLevel::Error{static_cast<int32_t>(0x1)};
constexpr ::System::Diagnostics::TraceLevel  System::Diagnostics::TraceLevel::Warning{static_cast<int32_t>(0x2)};
constexpr ::System::Diagnostics::TraceLevel  System::Diagnostics::TraceLevel::Info{static_cast<int32_t>(0x3)};
constexpr ::System::Diagnostics::TraceLevel  System::Diagnostics::TraceLevel::Verbose{static_cast<int32_t>(0x4)};
