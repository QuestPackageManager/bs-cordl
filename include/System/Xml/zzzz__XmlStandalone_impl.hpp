#pragma once
// IWYU pragma private; include "System/Xml/XmlStandalone.hpp"
#include "System/Xml/zzzz__XmlStandalone_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlStandalone::XmlStandalone(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlStandalone::XmlStandalone()   {
}
constexpr ::System::Xml::XmlStandalone  System::Xml::XmlStandalone::Omit{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XmlStandalone  System::Xml::XmlStandalone::Yes{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XmlStandalone  System::Xml::XmlStandalone::No{static_cast<int32_t>(0x2)};
