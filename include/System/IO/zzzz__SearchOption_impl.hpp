#pragma once
// IWYU pragma private; include "System/IO/SearchOption.hpp"
#include "System/IO/zzzz__SearchOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::SearchOption::SearchOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::IO::SearchOption::SearchOption()   {
}
constexpr ::System::IO::SearchOption  System::IO::SearchOption::TopDirectoryOnly{static_cast<int32_t>(0x0)};
constexpr ::System::IO::SearchOption  System::IO::SearchOption::AllDirectories{static_cast<int32_t>(0x1)};
