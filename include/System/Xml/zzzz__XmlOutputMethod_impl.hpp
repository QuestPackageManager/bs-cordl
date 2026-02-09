#pragma once
// IWYU pragma private; include "System/Xml/XmlOutputMethod.hpp"
#include "System/Xml/zzzz__XmlOutputMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlOutputMethod::XmlOutputMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlOutputMethod::XmlOutputMethod()   {
}
constexpr ::System::Xml::XmlOutputMethod  System::Xml::XmlOutputMethod::Xml{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XmlOutputMethod  System::Xml::XmlOutputMethod::Html{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XmlOutputMethod  System::Xml::XmlOutputMethod::Text{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::XmlOutputMethod  System::Xml::XmlOutputMethod::AutoDetect{static_cast<int32_t>(0x3)};
