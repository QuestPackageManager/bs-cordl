#pragma once
// IWYU pragma private; include "System/Diagnostics/SourceLevels.hpp"
#include "System/Diagnostics/zzzz__SourceLevels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::SourceLevels::SourceLevels(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Diagnostics::SourceLevels::SourceLevels() {}
constexpr ::System::Diagnostics::SourceLevels System::Diagnostics::SourceLevels::Off{ static_cast<int32_t>(0x0) };
constexpr ::System::Diagnostics::SourceLevels System::Diagnostics::SourceLevels::Critical{ static_cast<int32_t>(0x1) };
constexpr ::System::Diagnostics::SourceLevels System::Diagnostics::SourceLevels::Error{ static_cast<int32_t>(0x3) };
constexpr ::System::Diagnostics::SourceLevels System::Diagnostics::SourceLevels::Warning{ static_cast<int32_t>(0x7) };
constexpr ::System::Diagnostics::SourceLevels System::Diagnostics::SourceLevels::Information{ static_cast<int32_t>(0xf) };
constexpr ::System::Diagnostics::SourceLevels System::Diagnostics::SourceLevels::Verbose{ static_cast<int32_t>(0x1f) };
constexpr ::System::Diagnostics::SourceLevels System::Diagnostics::SourceLevels::ActivityTracing{ static_cast<int32_t>(0xff00) };
constexpr ::System::Diagnostics::SourceLevels System::Diagnostics::SourceLevels::All{ static_cast<int32_t>(0xffffffff) };
