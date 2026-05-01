#pragma once
// IWYU pragma private; include "System/Xml/ValueHandleType.hpp"
#include "System/Xml/zzzz__ValueHandleType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ValueHandleType::ValueHandleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::ValueHandleType::ValueHandleType() {}
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Empty{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::True{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::False{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Zero{ static_cast<int32_t>(0x3) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::One{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Int8{ static_cast<int32_t>(0x5) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Int16{ static_cast<int32_t>(0x6) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Int32{ static_cast<int32_t>(0x7) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Int64{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::UInt64{ static_cast<int32_t>(0x9) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Single{ static_cast<int32_t>(0xa) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Double{ static_cast<int32_t>(0xb) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Decimal{ static_cast<int32_t>(0xc) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::DateTime{ static_cast<int32_t>(0xd) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::TimeSpan{ static_cast<int32_t>(0xe) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Guid{ static_cast<int32_t>(0xf) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::UniqueId{ static_cast<int32_t>(0x10) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::UTF8{ static_cast<int32_t>(0x11) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::EscapedUTF8{ static_cast<int32_t>(0x12) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Base64{ static_cast<int32_t>(0x13) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Dictionary{ static_cast<int32_t>(0x14) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::List{ static_cast<int32_t>(0x15) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Char{ static_cast<int32_t>(0x16) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::Unicode{ static_cast<int32_t>(0x17) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::QName{ static_cast<int32_t>(0x18) };
constexpr ::System::Xml::ValueHandleType System::Xml::ValueHandleType::ConstString{ static_cast<int32_t>(0x19) };
