#pragma once
// IWYU pragma private; include "System/Xml/Linq/XObjectChange.hpp"
#include "System/Xml/Linq/zzzz__XObjectChange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Linq::XObjectChange::XObjectChange(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::XObjectChange::XObjectChange()   {
}
constexpr ::System::Xml::Linq::XObjectChange  System::Xml::Linq::XObjectChange::Add{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Linq::XObjectChange  System::Xml::Linq::XObjectChange::Remove{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Linq::XObjectChange  System::Xml::Linq::XObjectChange::Name{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Linq::XObjectChange  System::Xml::Linq::XObjectChange::Value{static_cast<int32_t>(0x3)};
