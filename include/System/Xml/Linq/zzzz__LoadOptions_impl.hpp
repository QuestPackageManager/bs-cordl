#pragma once
// IWYU pragma private; include "System/Xml/Linq/LoadOptions.hpp"
#include "System/Xml/Linq/zzzz__LoadOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Linq::LoadOptions::LoadOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::LoadOptions::LoadOptions()   {
}
constexpr ::System::Xml::Linq::LoadOptions  System::Xml::Linq::LoadOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Linq::LoadOptions  System::Xml::Linq::LoadOptions::PreserveWhitespace{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Linq::LoadOptions  System::Xml::Linq::LoadOptions::SetBaseUri{static_cast<int32_t>(0x2)};
constexpr ::System::Xml::Linq::LoadOptions  System::Xml::Linq::LoadOptions::SetLineInfo{static_cast<int32_t>(0x4)};
