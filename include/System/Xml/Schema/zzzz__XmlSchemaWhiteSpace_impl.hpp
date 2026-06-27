#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaWhiteSpace.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaWhiteSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace::XmlSchemaWhiteSpace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace::XmlSchemaWhiteSpace()   {
}
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace  System::Xml::Schema::XmlSchemaWhiteSpace::Preserve{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace  System::Xml::Schema::XmlSchemaWhiteSpace::Replace{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaWhiteSpace  System::Xml::Schema::XmlSchemaWhiteSpace::Collapse{static_cast<int32_t>(0x2)};
