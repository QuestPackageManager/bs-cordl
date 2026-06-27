#pragma once
// IWYU pragma private; include "System/Net/CloseExState.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::CloseExState::CloseExState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::CloseExState::CloseExState()   {
}
constexpr ::System::Net::CloseExState  System::Net::CloseExState::Normal{static_cast<int32_t>(0x0)};
constexpr ::System::Net::CloseExState  System::Net::CloseExState::Abort{static_cast<int32_t>(0x1)};
constexpr ::System::Net::CloseExState  System::Net::CloseExState::Silent{static_cast<int32_t>(0x2)};
