#pragma once
// IWYU pragma private; include "System/Data/Rule.hpp"
#include "System/Data/zzzz__Rule_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::Rule::Rule(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::Rule::Rule()   {
}
constexpr ::System::Data::Rule  System::Data::Rule::None{static_cast<int32_t>(0x0)};
constexpr ::System::Data::Rule  System::Data::Rule::Cascade{static_cast<int32_t>(0x1)};
constexpr ::System::Data::Rule  System::Data::Rule::SetNull{static_cast<int32_t>(0x2)};
constexpr ::System::Data::Rule  System::Data::Rule::SetDefault{static_cast<int32_t>(0x3)};
