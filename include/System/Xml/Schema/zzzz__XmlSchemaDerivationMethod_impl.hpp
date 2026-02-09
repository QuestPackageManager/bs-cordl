#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaDerivationMethod.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod::XmlSchemaDerivationMethod(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod::XmlSchemaDerivationMethod()   {
}
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Empty{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Substitution{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Extension{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Restriction{static_cast<int32_t>(0x4)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::List{static_cast<int32_t>(0x8)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::Union{static_cast<int32_t>(0x10)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::All{static_cast<int32_t>(0xff)};
constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod  System::Xml::Schema::XmlSchemaDerivationMethod::None{static_cast<int32_t>(0x100)};
