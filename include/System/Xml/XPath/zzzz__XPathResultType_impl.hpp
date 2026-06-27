#pragma once
// IWYU pragma private; include "System/Xml/XPath/XPathResultType.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XPath::XPathResultType::XPathResultType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XPath::XPathResultType::XPathResultType()   {
}
constexpr ::System::Xml::XPath::XPathResultType  System::Xml::XPath::XPathResultType::Number{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XPath::XPathResultType  System::Xml::XPath::XPathResultType::String{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XPath::XPathResultType  System::Xml::XPath::XPathResultType::Boolean{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::XPath::XPathResultType  System::Xml::XPath::XPathResultType::NodeSet{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::XPath::XPathResultType  System::Xml::XPath::XPathResultType::Navigator{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XPath::XPathResultType  System::Xml::XPath::XPathResultType::Any{static_cast<int32_t>(0x5)};
constexpr ::System::Xml::XPath::XPathResultType  System::Xml::XPath::XPathResultType::Error{static_cast<int32_t>(0x6)};
