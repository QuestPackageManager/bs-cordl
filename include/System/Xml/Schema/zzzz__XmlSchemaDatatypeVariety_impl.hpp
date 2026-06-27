#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaDatatypeVariety.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatypeVariety_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety::XmlSchemaDatatypeVariety(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety::XmlSchemaDatatypeVariety()   {
}
constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety  System::Xml::Schema::XmlSchemaDatatypeVariety::Atomic{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety  System::Xml::Schema::XmlSchemaDatatypeVariety::List{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety  System::Xml::Schema::XmlSchemaDatatypeVariety::Union{static_cast<int32_t>(0x2)};
