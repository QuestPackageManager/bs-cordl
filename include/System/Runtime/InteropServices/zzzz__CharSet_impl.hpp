#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/CharSet.hpp"
#include "System/Runtime/InteropServices/zzzz__CharSet_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::CharSet::CharSet(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::CharSet::CharSet()   {
}
constexpr ::System::Runtime::InteropServices::CharSet  System::Runtime::InteropServices::CharSet::None{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::InteropServices::CharSet  System::Runtime::InteropServices::CharSet::Ansi{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::InteropServices::CharSet  System::Runtime::InteropServices::CharSet::Unicode{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::InteropServices::CharSet  System::Runtime::InteropServices::CharSet::Auto{static_cast<int32_t>(0x4)};
