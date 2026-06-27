#pragma once
// IWYU pragma private; include "System/MidpointRounding.hpp"
#include "System/zzzz__MidpointRounding_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::MidpointRounding::MidpointRounding(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::MidpointRounding::MidpointRounding()   {
}
constexpr ::System::MidpointRounding  System::MidpointRounding::ToEven{static_cast<int32_t>(0x0)};
constexpr ::System::MidpointRounding  System::MidpointRounding::AwayFromZero{static_cast<int32_t>(0x1)};
