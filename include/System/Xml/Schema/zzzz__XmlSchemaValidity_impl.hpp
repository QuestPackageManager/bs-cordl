#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaValidity.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaValidity::XmlSchemaValidity(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaValidity::XmlSchemaValidity()   {
}
constexpr ::System::Xml::Schema::XmlSchemaValidity  System::Xml::Schema::XmlSchemaValidity::NotKnown{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaValidity  System::Xml::Schema::XmlSchemaValidity::Valid{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaValidity  System::Xml::Schema::XmlSchemaValidity::Invalid{static_cast<int32_t>(0x2)};
