#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryArrayTypeEnum.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryArrayTypeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::BinaryArrayTypeEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::BinaryArrayTypeEnum()   {
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::Single{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::Jagged{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::Rectangular{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::SingleOffset{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::JaggedOffset{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryArrayTypeEnum::RectangularOffset{static_cast<int32_t>(0x5)};
