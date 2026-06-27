#pragma once
// IWYU pragma private; include "System/Xml/NewLineHandling.hpp"
#include "System/Xml/zzzz__NewLineHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::NewLineHandling::NewLineHandling(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::NewLineHandling::NewLineHandling()   {
}
constexpr ::System::Xml::NewLineHandling  System::Xml::NewLineHandling::Replace{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::NewLineHandling  System::Xml::NewLineHandling::Entitize{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::NewLineHandling  System::Xml::NewLineHandling::None{static_cast<int32_t>(0x2)};
