#pragma once
// IWYU pragma private; include "System/Xml/ValidationType.hpp"
#include "System/Xml/zzzz__ValidationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ValidationType::ValidationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::ValidationType::ValidationType()   {
}
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::Auto{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::DTD{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::XDR{static_cast<int32_t>(0x3)};
constexpr ::System::Xml::ValidationType  System::Xml::ValidationType::Schema{static_cast<int32_t>(0x4)};
