#pragma once
// IWYU pragma private; include "System/Xml/Linq/SaveOptions.hpp"
#include "System/Xml/Linq/zzzz__SaveOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Linq::SaveOptions::SaveOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::SaveOptions::SaveOptions()   {
}
constexpr ::System::Xml::Linq::SaveOptions  System::Xml::Linq::SaveOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Linq::SaveOptions  System::Xml::Linq::SaveOptions::DisableFormatting{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Linq::SaveOptions  System::Xml::Linq::SaveOptions::OmitDuplicateNamespaces{static_cast<int32_t>(0x2)};
