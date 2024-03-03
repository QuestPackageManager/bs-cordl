#pragma once
#include "LiteNetLib/zzzz__UnconnectedMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::UnconnectedMessageType::UnconnectedMessageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::UnconnectedMessageType::UnconnectedMessageType() {}
constexpr ::LiteNetLib::UnconnectedMessageType LiteNetLib::UnconnectedMessageType::BasicMessage{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::UnconnectedMessageType LiteNetLib::UnconnectedMessageType::Broadcast{ static_cast<int32_t>(0x1) };
