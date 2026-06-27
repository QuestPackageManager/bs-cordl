#pragma once
// IWYU pragma private; include "System/Xml/XmlSpace.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlSpace::XmlSpace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlSpace::XmlSpace()   {
}
constexpr ::System::Xml::XmlSpace  System::Xml::XmlSpace::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XmlSpace  System::Xml::XmlSpace::Default{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XmlSpace  System::Xml::XmlSpace::Preserve{static_cast<int32_t>(0x2)};
