#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalObjectPositionE.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectPositionE_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::InternalObjectPositionE(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::InternalObjectPositionE()   {
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::Top{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::Child{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE  System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE::Headers{static_cast<int32_t>(0x3)};
