#pragma once
// IWYU pragma private; include "System/StringSplitOptions.hpp"
#include "System/zzzz__StringSplitOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::StringSplitOptions::StringSplitOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::StringSplitOptions::StringSplitOptions()   {
}
constexpr ::System::StringSplitOptions  System::StringSplitOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::StringSplitOptions  System::StringSplitOptions::RemoveEmptyEntries{static_cast<int32_t>(0x1)};
