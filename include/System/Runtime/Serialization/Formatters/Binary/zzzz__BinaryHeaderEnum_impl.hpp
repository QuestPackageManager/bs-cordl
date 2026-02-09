#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::BinaryHeaderEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::BinaryHeaderEnum()   {
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::SerializedStreamHeader{static_cast<int32_t>(0x0)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::Object{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectWithMap{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectWithMapAssemId{static_cast<int32_t>(0x3)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectWithMapTyped{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectWithMapTypedAssemId{static_cast<int32_t>(0x5)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectString{static_cast<int32_t>(0x6)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::Array{static_cast<int32_t>(0x7)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MemberPrimitiveTyped{static_cast<int32_t>(0x8)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MemberReference{static_cast<int32_t>(0x9)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectNull{static_cast<int32_t>(0xa)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MessageEnd{static_cast<int32_t>(0xb)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::Assembly{static_cast<int32_t>(0xc)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectNullMultiple256{static_cast<int32_t>(0xd)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ObjectNullMultiple{static_cast<int32_t>(0xe)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ArraySinglePrimitive{static_cast<int32_t>(0xf)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ArraySingleObject{static_cast<int32_t>(0x10)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::ArraySingleString{static_cast<int32_t>(0x11)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::CrossAppDomainMap{static_cast<int32_t>(0x12)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::CrossAppDomainString{static_cast<int32_t>(0x13)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::CrossAppDomainAssembly{static_cast<int32_t>(0x14)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MethodCall{static_cast<int32_t>(0x15)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum  System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum::MethodReturn{static_cast<int32_t>(0x16)};
