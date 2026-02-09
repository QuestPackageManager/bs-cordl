#pragma once
// IWYU pragma private; include "System/Net/TriState.hpp"
#include "System/Net/zzzz__TriState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::TriState::TriState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::TriState::TriState()   {
}
constexpr ::System::Net::TriState  System::Net::TriState::Unspecified{static_cast<int32_t>(0xffffffff)};
constexpr ::System::Net::TriState  System::Net::TriState::False{static_cast<int32_t>(0x0)};
constexpr ::System::Net::TriState  System::Net::TriState::True{static_cast<int32_t>(0x1)};
