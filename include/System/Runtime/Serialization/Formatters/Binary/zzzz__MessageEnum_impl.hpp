#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/MessageEnum.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::MessageEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum::MessageEnum()   {
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::NoArgs{static_cast<int32_t>(0x1)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ArgsInline{static_cast<int32_t>(0x2)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ArgsIsArray{static_cast<int32_t>(0x4)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ArgsInArray{static_cast<int32_t>(0x8)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::NoContext{static_cast<int32_t>(0x10)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ContextInline{static_cast<int32_t>(0x20)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ContextInArray{static_cast<int32_t>(0x40)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::MethodSignatureInArray{static_cast<int32_t>(0x80)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::PropertyInArray{static_cast<int32_t>(0x100)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::NoReturnValue{static_cast<int32_t>(0x200)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ReturnValueVoid{static_cast<int32_t>(0x400)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ReturnValueInline{static_cast<int32_t>(0x800)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ReturnValueInArray{static_cast<int32_t>(0x1000)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::ExceptionInArray{static_cast<int32_t>(0x2000)};
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum  System::Runtime::Serialization::Formatters::Binary::MessageEnum::GenericMethod{static_cast<int32_t>(0x8000)};
