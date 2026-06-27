#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalArrayTypeE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::InternalArrayTypeE(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::InternalArrayTypeE()   {
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Single{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Jagged{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Rectangular{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE::Base64{static_cast<int32_t>(0x4)};
