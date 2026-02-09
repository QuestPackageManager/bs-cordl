#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/PrimitiveTypeCode.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__PrimitiveTypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode::PrimitiveTypeCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode::PrimitiveTypeCode()   {
}
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Empty{static_cast<int32_t>(0x0)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Object{static_cast<int32_t>(0x1)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Char{static_cast<int32_t>(0x2)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::CharNullable{static_cast<int32_t>(0x3)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Boolean{static_cast<int32_t>(0x4)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::BooleanNullable{static_cast<int32_t>(0x5)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::SByte{static_cast<int32_t>(0x6)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::SByteNullable{static_cast<int32_t>(0x7)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int16{static_cast<int32_t>(0x8)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int16Nullable{static_cast<int32_t>(0x9)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt16{static_cast<int32_t>(0xa)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt16Nullable{static_cast<int32_t>(0xb)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int32{static_cast<int32_t>(0xc)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int32Nullable{static_cast<int32_t>(0xd)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Byte{static_cast<int32_t>(0xe)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::ByteNullable{static_cast<int32_t>(0xf)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt32{static_cast<int32_t>(0x10)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt32Nullable{static_cast<int32_t>(0x11)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int64{static_cast<int32_t>(0x12)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Int64Nullable{static_cast<int32_t>(0x13)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt64{static_cast<int32_t>(0x14)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::UInt64Nullable{static_cast<int32_t>(0x15)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Single{static_cast<int32_t>(0x16)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::SingleNullable{static_cast<int32_t>(0x17)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Double{static_cast<int32_t>(0x18)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DoubleNullable{static_cast<int32_t>(0x19)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DateTime{static_cast<int32_t>(0x1a)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DateTimeNullable{static_cast<int32_t>(0x1b)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DateTimeOffset{static_cast<int32_t>(0x1c)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DateTimeOffsetNullable{static_cast<int32_t>(0x1d)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Decimal{static_cast<int32_t>(0x1e)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DecimalNullable{static_cast<int32_t>(0x1f)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Guid{static_cast<int32_t>(0x20)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::GuidNullable{static_cast<int32_t>(0x21)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::TimeSpan{static_cast<int32_t>(0x22)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::TimeSpanNullable{static_cast<int32_t>(0x23)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::BigInteger{static_cast<int32_t>(0x24)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::BigIntegerNullable{static_cast<int32_t>(0x25)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Uri{static_cast<int32_t>(0x26)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::String{static_cast<int32_t>(0x27)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::Bytes{static_cast<int32_t>(0x28)};
constexpr ::Newtonsoft::Json::Utilities::PrimitiveTypeCode  Newtonsoft::Json::Utilities::PrimitiveTypeCode::DBNull{static_cast<int32_t>(0x29)};
