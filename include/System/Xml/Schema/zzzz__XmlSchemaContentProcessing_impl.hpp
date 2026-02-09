#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaContentProcessing.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing::XmlSchemaContentProcessing(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing::XmlSchemaContentProcessing()   {
}
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing  System::Xml::Schema::XmlSchemaContentProcessing::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing  System::Xml::Schema::XmlSchemaContentProcessing::Skip{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing  System::Xml::Schema::XmlSchemaContentProcessing::Lax{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::XmlSchemaContentProcessing  System::Xml::Schema::XmlSchemaContentProcessing::Strict{static_cast<int32_t>(0x3)};
