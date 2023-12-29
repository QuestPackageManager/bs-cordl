#pragma once
#include "GameLift/zzzz__GameLiftMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GameLift::GameLiftMessageType::GameLiftMessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GameLift::GameLiftMessageType::GameLiftMessageType() {}
constexpr ::GameLift::GameLiftMessageType GameLift::GameLiftMessageType::AuthenticateUserRequest{ static_cast<int32_t>(0x0) };
constexpr ::GameLift::GameLiftMessageType GameLift::GameLiftMessageType::AuthenticateUserResponse{ static_cast<int32_t>(0x1) };
constexpr ::GameLift::GameLiftMessageType GameLift::GameLiftMessageType::MessageReceivedAcknowledge{ static_cast<int32_t>(0x2) };
constexpr ::GameLift::GameLiftMessageType GameLift::GameLiftMessageType::MultipartMessage{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
