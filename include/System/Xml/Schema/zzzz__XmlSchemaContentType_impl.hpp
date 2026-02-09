#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaContentType.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaContentType::XmlSchemaContentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaContentType::XmlSchemaContentType()   {
}
constexpr ::System::Xml::Schema::XmlSchemaContentType  System::Xml::Schema::XmlSchemaContentType::TextOnly{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaContentType  System::Xml::Schema::XmlSchemaContentType::Empty{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaContentType  System::Xml::Schema::XmlSchemaContentType::ElementOnly{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlSchemaContentType  System::Xml::Schema::XmlSchemaContentType::Mixed{static_cast<int32_t>(0x3)};
