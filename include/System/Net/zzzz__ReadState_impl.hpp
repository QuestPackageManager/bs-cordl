#pragma once
// IWYU pragma private; include "System/Net/ReadState.hpp"
#include "System/Net/zzzz__ReadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::ReadState::ReadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::ReadState::ReadState()   {
}
constexpr ::System::Net::ReadState  System::Net::ReadState::None{static_cast<int32_t>(0x0)};
constexpr ::System::Net::ReadState  System::Net::ReadState::Status{static_cast<int32_t>(0x1)};
constexpr ::System::Net::ReadState  System::Net::ReadState::Headers{static_cast<int32_t>(0x2)};
constexpr ::System::Net::ReadState  System::Net::ReadState::Content{static_cast<int32_t>(0x3)};
constexpr ::System::Net::ReadState  System::Net::ReadState::Aborted{static_cast<int32_t>(0x4)};
