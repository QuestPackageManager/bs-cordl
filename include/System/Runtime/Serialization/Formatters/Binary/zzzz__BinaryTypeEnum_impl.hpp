#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::BinaryTypeEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::BinaryTypeEnum()   {
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::Primitive{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::String{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::Object{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectUrt{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectUser{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::ObjectArray{static_cast<int32_t>(0x5)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::StringArray{static_cast<int32_t>(0x6)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum::PrimitiveArray{static_cast<int32_t>(0x7)};
