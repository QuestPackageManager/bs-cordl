#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectTypeE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE::InternalObjectTypeE(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE::InternalObjectTypeE()   {
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE  System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE  System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE::Object{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE  System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE::Array{static_cast<int32_t>(0x2)};
