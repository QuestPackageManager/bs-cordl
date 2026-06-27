#pragma once
// IWYU pragma private; include "System/Xml/XmlNamespaceScope.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNamespaceScope::XmlNamespaceScope(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNamespaceScope::XmlNamespaceScope()   {
}
constexpr ::System::Xml::XmlNamespaceScope  System::Xml::XmlNamespaceScope::All{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XmlNamespaceScope  System::Xml::XmlNamespaceScope::ExcludeXml{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XmlNamespaceScope  System::Xml::XmlNamespaceScope::Local{static_cast<int32_t>(0x2)};
