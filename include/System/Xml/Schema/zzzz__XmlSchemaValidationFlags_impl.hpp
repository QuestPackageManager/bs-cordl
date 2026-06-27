#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaValidationFlags.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags::XmlSchemaValidationFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags::XmlSchemaValidationFlags()   {
}
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::ProcessInlineSchema{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::ProcessSchemaLocation{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::ReportValidationWarnings{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::ProcessIdentityConstraints{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::XmlSchemaValidationFlags  System::Xml::Schema::XmlSchemaValidationFlags::AllowXmlAttributes{static_cast<int32_t>(0x10)};
