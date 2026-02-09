#pragma once
// IWYU pragma private; include "System/Xml/ConformanceLevel.hpp"
#include "System/Xml/zzzz__ConformanceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::ConformanceLevel::ConformanceLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::ConformanceLevel::ConformanceLevel()   {
}
constexpr ::System::Xml::ConformanceLevel  System::Xml::ConformanceLevel::Auto{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::ConformanceLevel  System::Xml::ConformanceLevel::Fragment{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::ConformanceLevel  System::Xml::ConformanceLevel::Document{static_cast<int32_t>(0x2)};
