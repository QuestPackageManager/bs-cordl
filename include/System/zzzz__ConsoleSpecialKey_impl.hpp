#pragma once
// IWYU pragma private; include "System/ConsoleSpecialKey.hpp"
#include "System/zzzz__ConsoleSpecialKey_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ConsoleSpecialKey::ConsoleSpecialKey(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ConsoleSpecialKey::ConsoleSpecialKey()   {
}
constexpr ::System::ConsoleSpecialKey  System::ConsoleSpecialKey::ControlC{static_cast<int32_t>(0x0)};
constexpr ::System::ConsoleSpecialKey  System::ConsoleSpecialKey::ControlBreak{static_cast<int32_t>(0x1)};
