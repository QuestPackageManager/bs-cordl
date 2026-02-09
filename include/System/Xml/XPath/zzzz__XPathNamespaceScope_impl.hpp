#pragma once
// IWYU pragma private; include "System/Xml/XPath/XPathNamespaceScope.hpp"
#include "System/Xml/XPath/zzzz__XPathNamespaceScope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XPath::XPathNamespaceScope::XPathNamespaceScope(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XPath::XPathNamespaceScope::XPathNamespaceScope()   {
}
constexpr ::System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::All{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::ExcludeXml{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XPath::XPathNamespaceScope  System::Xml::XPath::XPathNamespaceScope::Local{static_cast<int32_t>(0x2)};
