#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlTypeCode.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlTypeCode::XmlTypeCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlTypeCode::XmlTypeCode()   {
}
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Item{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Node{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Document{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Element{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Attribute{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Namespace{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::ProcessingInstruction{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Comment{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Text{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::AnyAtomicType{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::UntypedAtomic{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::String{static_cast<int32_t>(0xc)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Boolean{static_cast<int32_t>(0xd)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Decimal{static_cast<int32_t>(0xe)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Float{static_cast<int32_t>(0xf)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Double{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Duration{static_cast<int32_t>(0x11)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::DateTime{static_cast<int32_t>(0x12)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Time{static_cast<int32_t>(0x13)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Date{static_cast<int32_t>(0x14)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::GYearMonth{static_cast<int32_t>(0x15)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::GYear{static_cast<int32_t>(0x16)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::GMonthDay{static_cast<int32_t>(0x17)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::GDay{static_cast<int32_t>(0x18)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::GMonth{static_cast<int32_t>(0x19)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::HexBinary{static_cast<int32_t>(0x1a)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Base64Binary{static_cast<int32_t>(0x1b)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::AnyUri{static_cast<int32_t>(0x1c)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::QName{static_cast<int32_t>(0x1d)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Notation{static_cast<int32_t>(0x1e)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::NormalizedString{static_cast<int32_t>(0x1f)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Token{static_cast<int32_t>(0x20)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Language{static_cast<int32_t>(0x21)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::NmToken{static_cast<int32_t>(0x22)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Name{static_cast<int32_t>(0x23)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::NCName{static_cast<int32_t>(0x24)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Id{static_cast<int32_t>(0x25)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Idref{static_cast<int32_t>(0x26)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Entity{static_cast<int32_t>(0x27)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Integer{static_cast<int32_t>(0x28)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::NonPositiveInteger{static_cast<int32_t>(0x29)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::NegativeInteger{static_cast<int32_t>(0x2a)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Long{static_cast<int32_t>(0x2b)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Int{static_cast<int32_t>(0x2c)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Short{static_cast<int32_t>(0x2d)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::Byte{static_cast<int32_t>(0x2e)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::NonNegativeInteger{static_cast<int32_t>(0x2f)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::UnsignedLong{static_cast<int32_t>(0x30)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::UnsignedInt{static_cast<int32_t>(0x31)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::UnsignedShort{static_cast<int32_t>(0x32)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::UnsignedByte{static_cast<int32_t>(0x33)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::PositiveInteger{static_cast<int32_t>(0x34)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::YearMonthDuration{static_cast<int32_t>(0x35)};
constexpr ::System::Xml::Schema::XmlTypeCode  System::Xml::Schema::XmlTypeCode::DayTimeDuration{static_cast<int32_t>(0x36)};
