#pragma once
// IWYU pragma private; include "System/Xml/WhitespaceHandling.hpp"
#include "System/Xml/zzzz__WhitespaceHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::WhitespaceHandling::WhitespaceHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::WhitespaceHandling::WhitespaceHandling()   {
}
constexpr ::System::Xml::WhitespaceHandling  System::Xml::WhitespaceHandling::All{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::WhitespaceHandling  System::Xml::WhitespaceHandling::Significant{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::WhitespaceHandling  System::Xml::WhitespaceHandling::None{static_cast<int32_t>(0x2)};
