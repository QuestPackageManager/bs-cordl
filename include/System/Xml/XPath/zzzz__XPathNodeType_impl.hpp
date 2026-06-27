#pragma once
// IWYU pragma private; include "System/Xml/XPath/XPathNodeType.hpp"
#include "System/Xml/XPath/zzzz__XPathNodeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XPath::XPathNodeType::XPathNodeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XPath::XPathNodeType::XPathNodeType()   {
}
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Root{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Element{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Attribute{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Namespace{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Text{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::SignificantWhitespace{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Whitespace{static_cast<int32_t>(0x6)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::ProcessingInstruction{static_cast<int32_t>(0x7)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::Comment{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::XPath::XPathNodeType  System::Xml::XPath::XPathNodeType::All{static_cast<int32_t>(0x9)};
