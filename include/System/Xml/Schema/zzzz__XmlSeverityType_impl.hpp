#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSeverityType.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSeverityType::XmlSeverityType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSeverityType::XmlSeverityType()   {
}
constexpr ::System::Xml::Schema::XmlSeverityType  System::Xml::Schema::XmlSeverityType::Error{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSeverityType  System::Xml::Schema::XmlSeverityType::Warning{static_cast<int32_t>(0x1)};
