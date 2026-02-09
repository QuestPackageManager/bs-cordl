#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaUse.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaUse_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaUse::XmlSchemaUse(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaUse::XmlSchemaUse()   {
}
constexpr ::System::Xml::Schema::XmlSchemaUse  System::Xml::Schema::XmlSchemaUse::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaUse  System::Xml::Schema::XmlSchemaUse::Optional{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaUse  System::Xml::Schema::XmlSchemaUse::Prohibited{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlSchemaUse  System::Xml::Schema::XmlSchemaUse::Required{static_cast<int32_t>(0x3)};
