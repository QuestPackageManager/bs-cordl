#pragma once
// IWYU pragma private; include "System/Data/ValueType.hpp"
#include "System/Data/zzzz__ValueType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::ValueType::ValueType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::ValueType::ValueType()   {
}
constexpr ::System::Data::ValueType  System::Data::ValueType::Unknown{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Data::ValueType  System::Data::ValueType::Null{static_cast<int32_t>(0x0)};
constexpr ::System::Data::ValueType  System::Data::ValueType::Bool{static_cast<int32_t>(0x1)};
constexpr ::System::Data::ValueType  System::Data::ValueType::Numeric{static_cast<int32_t>(0x2)};
constexpr ::System::Data::ValueType  System::Data::ValueType::Str{static_cast<int32_t>(0x3)};
constexpr ::System::Data::ValueType  System::Data::ValueType::Float{static_cast<int32_t>(0x4)};
constexpr ::System::Data::ValueType  System::Data::ValueType::Decimal{static_cast<int32_t>(0x5)};
constexpr ::System::Data::ValueType  System::Data::ValueType::Object{static_cast<int32_t>(0x6)};
constexpr ::System::Data::ValueType  System::Data::ValueType::Date{static_cast<int32_t>(0x7)};
