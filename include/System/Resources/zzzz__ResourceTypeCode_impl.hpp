#pragma once
// IWYU pragma private; include "System/Resources/ResourceTypeCode.hpp"
#include "System/Resources/zzzz__ResourceTypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Resources::ResourceTypeCode::ResourceTypeCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Resources::ResourceTypeCode::ResourceTypeCode()   {
}
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Null{static_cast<int32_t>(0x0)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::String{static_cast<int32_t>(0x1)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Boolean{static_cast<int32_t>(0x2)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Char{static_cast<int32_t>(0x3)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Byte{static_cast<int32_t>(0x4)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::SByte{static_cast<int32_t>(0x5)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Int16{static_cast<int32_t>(0x6)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::UInt16{static_cast<int32_t>(0x7)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Int32{static_cast<int32_t>(0x8)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::UInt32{static_cast<int32_t>(0x9)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Int64{static_cast<int32_t>(0xa)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::UInt64{static_cast<int32_t>(0xb)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Single{static_cast<int32_t>(0xc)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Double{static_cast<int32_t>(0xd)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Decimal{static_cast<int32_t>(0xe)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::DateTime{static_cast<int32_t>(0xf)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::TimeSpan{static_cast<int32_t>(0x10)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::LastPrimitive{static_cast<int32_t>(0x10)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::ByteArray{static_cast<int32_t>(0x20)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::Stream{static_cast<int32_t>(0x21)};
constexpr ::System::Resources::ResourceTypeCode  System::Resources::ResourceTypeCode::StartOfUserTypes{static_cast<int32_t>(0x40)};
