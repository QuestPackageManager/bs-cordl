#pragma once
#include "System/Xml/zzzz__AttributeProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::AttributeProperties::AttributeProperties(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::AttributeProperties::AttributeProperties() {}
constexpr ::System::Xml::AttributeProperties System::Xml::AttributeProperties::DEFAULT{ static_cast<uint32_t>(0x4020100u) };
constexpr ::System::Xml::AttributeProperties System::Xml::AttributeProperties::URI{ static_cast<uint32_t>(0x40201u) };
constexpr ::System::Xml::AttributeProperties System::Xml::AttributeProperties::BOOLEAN{ static_cast<uint32_t>(0x2000402u) };
constexpr ::System::Xml::AttributeProperties System::Xml::AttributeProperties::NAME{ static_cast<uint32_t>(0x4020004u) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
