#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaForm.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaForm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaForm::XmlSchemaForm(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaForm::XmlSchemaForm()   {
}
constexpr ::System::Xml::Schema::XmlSchemaForm  System::Xml::Schema::XmlSchemaForm::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaForm  System::Xml::Schema::XmlSchemaForm::Qualified{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaForm  System::Xml::Schema::XmlSchemaForm::Unqualified{static_cast<int32_t>(0x2)};
