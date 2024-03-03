#pragma once
#include "LiteNetLib/zzzz__PacketProperty_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::PacketProperty::PacketProperty(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::PacketProperty::PacketProperty() {}
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Unreliable{ static_cast<uint8_t>(0x0u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Channeled{ static_cast<uint8_t>(0x1u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Ack{ static_cast<uint8_t>(0x2u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Ping{ static_cast<uint8_t>(0x3u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Pong{ static_cast<uint8_t>(0x4u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::ConnectRequest{ static_cast<uint8_t>(0x5u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::ConnectAccept{ static_cast<uint8_t>(0x6u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Disconnect{ static_cast<uint8_t>(0x7u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::UnconnectedMessage{ static_cast<uint8_t>(0x8u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::MtuCheck{ static_cast<uint8_t>(0x9u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::MtuOk{ static_cast<uint8_t>(0xau) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Broadcast{ static_cast<uint8_t>(0xbu) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Merged{ static_cast<uint8_t>(0xcu) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::ShutdownOk{ static_cast<uint8_t>(0xdu) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::PeerNotFound{ static_cast<uint8_t>(0xeu) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::InvalidProtocol{ static_cast<uint8_t>(0xfu) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::NatMessage{ static_cast<uint8_t>(0x10u) };
constexpr ::LiteNetLib::PacketProperty LiteNetLib::PacketProperty::Empty{ static_cast<uint8_t>(0x11u) };
