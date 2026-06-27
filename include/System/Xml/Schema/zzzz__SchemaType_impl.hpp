#pragma once
// IWYU pragma private; include "System/Xml/Schema/SchemaType.hpp"
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::SchemaType::SchemaType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaType::SchemaType()   {
}
constexpr ::System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::DTD{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::XDR{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::XSD{static_cast<int32_t>(0x3)};
