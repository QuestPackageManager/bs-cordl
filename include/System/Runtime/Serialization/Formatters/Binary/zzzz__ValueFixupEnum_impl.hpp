#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/ValueFixupEnum.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixupEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum::ValueFixupEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum::ValueFixupEnum()   {
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum  System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum  System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum::Array{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum  System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum::Header{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum  System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum::Member{static_cast<int32_t>(0x3)};
