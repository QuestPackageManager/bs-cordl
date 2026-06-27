#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/EComparison.hpp"
#include "System/Data/SqlTypes/zzzz__EComparison_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::SqlTypes::EComparison::EComparison(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::EComparison::EComparison()   {
}
constexpr ::System::Data::SqlTypes::EComparison  System::Data::SqlTypes::EComparison::LT{static_cast<int32_t>(0x0)};
constexpr ::System::Data::SqlTypes::EComparison  System::Data::SqlTypes::EComparison::LE{static_cast<int32_t>(0x1)};
constexpr ::System::Data::SqlTypes::EComparison  System::Data::SqlTypes::EComparison::EQ{static_cast<int32_t>(0x2)};
constexpr ::System::Data::SqlTypes::EComparison  System::Data::SqlTypes::EComparison::GE{static_cast<int32_t>(0x3)};
constexpr ::System::Data::SqlTypes::EComparison  System::Data::SqlTypes::EComparison::GT{static_cast<int32_t>(0x4)};
constexpr ::System::Data::SqlTypes::EComparison  System::Data::SqlTypes::EComparison::NE{static_cast<int32_t>(0x5)};
