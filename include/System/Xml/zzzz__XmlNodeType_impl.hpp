#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeType.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNodeType::XmlNodeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNodeType::XmlNodeType()   {
}
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Element{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Attribute{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Text{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::CDATA{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::EntityReference{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Entity{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::ProcessingInstruction{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Comment{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Document{static_cast<int32_t>(0x9)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::DocumentType{static_cast<int32_t>(0xa)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::DocumentFragment{static_cast<int32_t>(0xb)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Notation{static_cast<int32_t>(0xc)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::Whitespace{static_cast<int32_t>(0xd)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::SignificantWhitespace{static_cast<int32_t>(0xe)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::EndElement{static_cast<int32_t>(0xf)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::EndEntity{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::XmlNodeType  System::Xml::XmlNodeType::XmlDeclaration{static_cast<int32_t>(0x11)};
