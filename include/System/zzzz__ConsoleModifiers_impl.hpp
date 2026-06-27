#pragma once
// IWYU pragma private; include "System/ConsoleModifiers.hpp"
#include "System/zzzz__ConsoleModifiers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ConsoleModifiers::ConsoleModifiers(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ConsoleModifiers::ConsoleModifiers()   {
}
constexpr ::System::ConsoleModifiers  System::ConsoleModifiers::Alt{static_cast<int32_t>(0x1)};
constexpr ::System::ConsoleModifiers  System::ConsoleModifiers::Shift{static_cast<int32_t>(0x2)};
constexpr ::System::ConsoleModifiers  System::ConsoleModifiers::Control{static_cast<int32_t>(0x4)};
