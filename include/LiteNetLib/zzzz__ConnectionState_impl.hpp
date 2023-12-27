#pragma once
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::ConnectionState::ConnectionState(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::ConnectionState::ConnectionState() {}
constexpr ::LiteNetLib::ConnectionState LiteNetLib::ConnectionState::Outgoing{ static_cast<uint8_t>(0x2u) };
constexpr ::LiteNetLib::ConnectionState LiteNetLib::ConnectionState::Connected{ static_cast<uint8_t>(0x4u) };
constexpr ::LiteNetLib::ConnectionState LiteNetLib::ConnectionState::ShutdownRequested{ static_cast<uint8_t>(0x8u) };
constexpr ::LiteNetLib::ConnectionState LiteNetLib::ConnectionState::Disconnected{ static_cast<uint8_t>(0x10u) };
constexpr ::LiteNetLib::ConnectionState LiteNetLib::ConnectionState::Any{ static_cast<uint8_t>(0xeu) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
