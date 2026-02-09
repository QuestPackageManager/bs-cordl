#pragma once
// IWYU pragma private; include "System/Data/AcceptRejectRule.hpp"
#include "System/Data/zzzz__AcceptRejectRule_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Data::AcceptRejectRule::AcceptRejectRule(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Data::AcceptRejectRule::AcceptRejectRule()   {
}
constexpr ::System::Data::AcceptRejectRule  System::Data::AcceptRejectRule::None{static_cast<int32_t>(0x0)};
constexpr ::System::Data::AcceptRejectRule  System::Data::AcceptRejectRule::Cascade{static_cast<int32_t>(0x1)};
