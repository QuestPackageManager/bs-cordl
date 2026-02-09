#pragma once
// IWYU pragma private; include "System/TypeCode.hpp"
#include "System/zzzz__TypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::TypeCode::TypeCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::TypeCode::TypeCode()   {
}
constexpr ::System::TypeCode  System::TypeCode::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::TypeCode  System::TypeCode::Object{static_cast<int32_t>(0x1)};
constexpr ::System::TypeCode  System::TypeCode::DBNull{static_cast<int32_t>(0x2)};
constexpr ::System::TypeCode  System::TypeCode::Boolean{static_cast<int32_t>(0x3)};
constexpr ::System::TypeCode  System::TypeCode::Char{static_cast<int32_t>(0x4)};
constexpr ::System::TypeCode  System::TypeCode::SByte{static_cast<int32_t>(0x5)};
constexpr ::System::TypeCode  System::TypeCode::Byte{static_cast<int32_t>(0x6)};
constexpr ::System::TypeCode  System::TypeCode::Int16{static_cast<int32_t>(0x7)};
constexpr ::System::TypeCode  System::TypeCode::UInt16{static_cast<int32_t>(0x8)};
constexpr ::System::TypeCode  System::TypeCode::Int32{static_cast<int32_t>(0x9)};
constexpr ::System::TypeCode  System::TypeCode::UInt32{static_cast<int32_t>(0xa)};
constexpr ::System::TypeCode  System::TypeCode::Int64{static_cast<int32_t>(0xb)};
constexpr ::System::TypeCode  System::TypeCode::UInt64{static_cast<int32_t>(0xc)};
constexpr ::System::TypeCode  System::TypeCode::Single{static_cast<int32_t>(0xd)};
constexpr ::System::TypeCode  System::TypeCode::Double{static_cast<int32_t>(0xe)};
constexpr ::System::TypeCode  System::TypeCode::Decimal{static_cast<int32_t>(0xf)};
constexpr ::System::TypeCode  System::TypeCode::DateTime{static_cast<int32_t>(0x10)};
constexpr ::System::TypeCode  System::TypeCode::String{static_cast<int32_t>(0x12)};
