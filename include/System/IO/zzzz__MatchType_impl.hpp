#pragma once
// IWYU pragma private; include "System/IO/MatchType.hpp"
#include "System/IO/zzzz__MatchType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MatchType::MatchType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::MatchType::MatchType()   {
}
constexpr ::System::IO::MatchType  System::IO::MatchType::Simple{static_cast<int32_t>(0x0)};
constexpr ::System::IO::MatchType  System::IO::MatchType::Win32{static_cast<int32_t>(0x1)};
