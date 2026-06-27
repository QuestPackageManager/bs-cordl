#pragma once
// IWYU pragma private; include "System/Xml/DtdProcessing.hpp"
#include "System/Xml/zzzz__DtdProcessing_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::DtdProcessing::DtdProcessing(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::DtdProcessing::DtdProcessing()   {
}
constexpr ::System::Xml::DtdProcessing  System::Xml::DtdProcessing::Prohibit{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::DtdProcessing  System::Xml::DtdProcessing::Ignore{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::DtdProcessing  System::Xml::DtdProcessing::Parse{static_cast<int32_t>(0x2)};
