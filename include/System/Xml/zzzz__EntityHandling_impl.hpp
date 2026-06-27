#pragma once
// IWYU pragma private; include "System/Xml/EntityHandling.hpp"
#include "System/Xml/zzzz__EntityHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::EntityHandling::EntityHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::EntityHandling::EntityHandling()   {
}
constexpr ::System::Xml::EntityHandling  System::Xml::EntityHandling::ExpandEntities{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::EntityHandling  System::Xml::EntityHandling::ExpandCharEntities{static_cast<int32_t>(0x2)};
