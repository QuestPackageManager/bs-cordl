#pragma once
// IWYU pragma private; include "System/Data/XmlReadMode.hpp"
#include "System/Data/zzzz__XmlReadMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::XmlReadMode::XmlReadMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::XmlReadMode::XmlReadMode()   {
}
constexpr ::System::Data::XmlReadMode  System::Data::XmlReadMode::Auto{static_cast<int32_t>(0x0)};
constexpr ::System::Data::XmlReadMode  System::Data::XmlReadMode::ReadSchema{static_cast<int32_t>(0x1)};
constexpr ::System::Data::XmlReadMode  System::Data::XmlReadMode::IgnoreSchema{static_cast<int32_t>(0x2)};
constexpr ::System::Data::XmlReadMode  System::Data::XmlReadMode::InferSchema{static_cast<int32_t>(0x3)};
constexpr ::System::Data::XmlReadMode  System::Data::XmlReadMode::DiffGram{static_cast<int32_t>(0x4)};
constexpr ::System::Data::XmlReadMode  System::Data::XmlReadMode::Fragment{static_cast<int32_t>(0x5)};
constexpr ::System::Data::XmlReadMode  System::Data::XmlReadMode::InferTypedSchema{static_cast<int32_t>(0x6)};
