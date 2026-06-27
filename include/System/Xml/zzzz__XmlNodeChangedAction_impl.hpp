#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeChangedAction.hpp"
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlNodeChangedAction::XmlNodeChangedAction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNodeChangedAction::XmlNodeChangedAction()   {
}
constexpr ::System::Xml::XmlNodeChangedAction  System::Xml::XmlNodeChangedAction::Insert{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::XmlNodeChangedAction  System::Xml::XmlNodeChangedAction::Remove{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::XmlNodeChangedAction  System::Xml::XmlNodeChangedAction::Change{static_cast<int32_t>(0x2)};
