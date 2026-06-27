#pragma once
// IWYU pragma private; include "System/Data/XmlWriteMode.hpp"
#include "System/Data/zzzz__XmlWriteMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::XmlWriteMode::XmlWriteMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::XmlWriteMode::XmlWriteMode()   {
}
constexpr ::System::Data::XmlWriteMode  System::Data::XmlWriteMode::WriteSchema{static_cast<int32_t>(0x0)};
constexpr ::System::Data::XmlWriteMode  System::Data::XmlWriteMode::IgnoreSchema{static_cast<int32_t>(0x1)};
constexpr ::System::Data::XmlWriteMode  System::Data::XmlWriteMode::DiffGram{static_cast<int32_t>(0x2)};
