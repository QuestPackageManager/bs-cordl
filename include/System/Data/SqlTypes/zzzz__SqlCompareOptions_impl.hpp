#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlCompareOptions.hpp"
#include "System/Data/SqlTypes/zzzz__SqlCompareOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::SqlCompareOptions::SqlCompareOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlCompareOptions::SqlCompareOptions()   {
}
constexpr ::System::Data::SqlTypes::SqlCompareOptions  System::Data::SqlTypes::SqlCompareOptions::None{static_cast<int32_t>(0x0)};
constexpr ::System::Data::SqlTypes::SqlCompareOptions  System::Data::SqlTypes::SqlCompareOptions::IgnoreCase{static_cast<int32_t>(0x1)};
constexpr ::System::Data::SqlTypes::SqlCompareOptions  System::Data::SqlTypes::SqlCompareOptions::IgnoreNonSpace{static_cast<int32_t>(0x2)};
constexpr ::System::Data::SqlTypes::SqlCompareOptions  System::Data::SqlTypes::SqlCompareOptions::IgnoreKanaType{static_cast<int32_t>(0x8)};
constexpr ::System::Data::SqlTypes::SqlCompareOptions  System::Data::SqlTypes::SqlCompareOptions::IgnoreWidth{static_cast<int32_t>(0x10)};
constexpr ::System::Data::SqlTypes::SqlCompareOptions  System::Data::SqlTypes::SqlCompareOptions::BinarySort{static_cast<int32_t>(0x8000)};
constexpr ::System::Data::SqlTypes::SqlCompareOptions  System::Data::SqlTypes::SqlCompareOptions::BinarySort2{static_cast<int32_t>(0x4000)};
