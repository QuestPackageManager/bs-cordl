#pragma once
// IWYU pragma private; include "System/Data/Common/StorageType.hpp"
#include "System/Data/Common/zzzz__StorageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::Common::StorageType::StorageType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::Common::StorageType::StorageType()   {
}
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Object{static_cast<int32_t>(0x1)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::DBNull{static_cast<int32_t>(0x2)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Boolean{static_cast<int32_t>(0x3)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Char{static_cast<int32_t>(0x4)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SByte{static_cast<int32_t>(0x5)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Byte{static_cast<int32_t>(0x6)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Int16{static_cast<int32_t>(0x7)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::UInt16{static_cast<int32_t>(0x8)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Int32{static_cast<int32_t>(0x9)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::UInt32{static_cast<int32_t>(0xa)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Int64{static_cast<int32_t>(0xb)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::UInt64{static_cast<int32_t>(0xc)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Single{static_cast<int32_t>(0xd)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Double{static_cast<int32_t>(0xe)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Decimal{static_cast<int32_t>(0xf)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::DateTime{static_cast<int32_t>(0x10)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::TimeSpan{static_cast<int32_t>(0x11)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::String{static_cast<int32_t>(0x12)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Guid{static_cast<int32_t>(0x13)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::ByteArray{static_cast<int32_t>(0x14)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::CharArray{static_cast<int32_t>(0x15)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Type{static_cast<int32_t>(0x16)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::DateTimeOffset{static_cast<int32_t>(0x17)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::BigInteger{static_cast<int32_t>(0x18)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::Uri{static_cast<int32_t>(0x19)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlBinary{static_cast<int32_t>(0x1a)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlBoolean{static_cast<int32_t>(0x1b)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlByte{static_cast<int32_t>(0x1c)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlBytes{static_cast<int32_t>(0x1d)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlChars{static_cast<int32_t>(0x1e)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlDateTime{static_cast<int32_t>(0x1f)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlDecimal{static_cast<int32_t>(0x20)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlDouble{static_cast<int32_t>(0x21)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlGuid{static_cast<int32_t>(0x22)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlInt16{static_cast<int32_t>(0x23)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlInt32{static_cast<int32_t>(0x24)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlInt64{static_cast<int32_t>(0x25)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlMoney{static_cast<int32_t>(0x26)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlSingle{static_cast<int32_t>(0x27)};
constexpr ::System::Data::Common::StorageType  System::Data::Common::StorageType::SqlString{static_cast<int32_t>(0x28)};
