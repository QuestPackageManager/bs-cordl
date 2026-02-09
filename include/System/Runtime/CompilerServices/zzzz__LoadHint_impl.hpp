#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/LoadHint.hpp"
#include "System/Runtime/CompilerServices/zzzz__LoadHint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::CompilerServices::LoadHint::LoadHint(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::LoadHint::LoadHint()   {
}
constexpr ::System::Runtime::CompilerServices::LoadHint  System::Runtime::CompilerServices::LoadHint::Default{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::CompilerServices::LoadHint  System::Runtime::CompilerServices::LoadHint::Always{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::CompilerServices::LoadHint  System::Runtime::CompilerServices::LoadHint::Sometimes{static_cast<int32_t>(0x2)};
