#pragma once
// IWYU pragma private; include "System/IO/MatchCasing.hpp"
#include "System/IO/zzzz__MatchCasing_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::MatchCasing::MatchCasing(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::MatchCasing::MatchCasing()   {
}
constexpr ::System::IO::MatchCasing  System::IO::MatchCasing::PlatformDefault{static_cast<int32_t>(0x0)};
constexpr ::System::IO::MatchCasing  System::IO::MatchCasing::CaseSensitive{static_cast<int32_t>(0x1)};
constexpr ::System::IO::MatchCasing  System::IO::MatchCasing::CaseInsensitive{static_cast<int32_t>(0x2)};
