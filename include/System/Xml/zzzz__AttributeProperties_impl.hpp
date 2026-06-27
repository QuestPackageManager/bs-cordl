#pragma once
// IWYU pragma private; include "System/Xml/AttributeProperties.hpp"
#include "System/Xml/zzzz__AttributeProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::AttributeProperties::AttributeProperties(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::AttributeProperties::AttributeProperties()   {
}
constexpr ::System::Xml::AttributeProperties  System::Xml::AttributeProperties::DEFAULT{static_cast<uint32_t>(0x0u)};
constexpr ::System::Xml::AttributeProperties  System::Xml::AttributeProperties::URI{static_cast<uint32_t>(0x1u)};
constexpr ::System::Xml::AttributeProperties  System::Xml::AttributeProperties::BOOLEAN{static_cast<uint32_t>(0x2u)};
constexpr ::System::Xml::AttributeProperties  System::Xml::AttributeProperties::NAME{static_cast<uint32_t>(0x4u)};
