#pragma once
// IWYU pragma private; include "System/Xml/ElementProperties.hpp"
#include "System/Xml/zzzz__ElementProperties_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ElementProperties::ElementProperties(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::ElementProperties::ElementProperties()   {
}
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::DEFAULT{static_cast<uint32_t>(0x0u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::URI_PARENT{static_cast<uint32_t>(0x1u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::BOOL_PARENT{static_cast<uint32_t>(0x2u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::NAME_PARENT{static_cast<uint32_t>(0x4u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::EMPTY{static_cast<uint32_t>(0x8u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::NO_ENTITIES{static_cast<uint32_t>(0x10u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::HEAD{static_cast<uint32_t>(0x20u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::BLOCK_WS{static_cast<uint32_t>(0x40u)};
constexpr ::System::Xml::ElementProperties  System::Xml::ElementProperties::HAS_NS{static_cast<uint32_t>(0x80u)};
