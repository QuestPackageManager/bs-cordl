#pragma once
// IWYU pragma private; include "System/Xml/Formatting.hpp"
#include "System/Xml/zzzz__Formatting_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Formatting::Formatting(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Formatting::Formatting()   {
}
constexpr ::System::Xml::Formatting  System::Xml::Formatting::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Formatting  System::Xml::Formatting::Indented{static_cast<int32_t>(0x1)};
