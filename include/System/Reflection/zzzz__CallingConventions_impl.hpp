#pragma once
// IWYU pragma private; include "System/Reflection/CallingConventions.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::CallingConventions::CallingConventions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Reflection::CallingConventions::CallingConventions()   {
}
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::Standard{static_cast<int32_t>(0x1)};
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::VarArgs{static_cast<int32_t>(0x2)};
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::Any{static_cast<int32_t>(0x3)};
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::HasThis{static_cast<int32_t>(0x20)};
constexpr ::System::Reflection::CallingConventions  System::Reflection::CallingConventions::ExplicitThis{static_cast<int32_t>(0x40)};
