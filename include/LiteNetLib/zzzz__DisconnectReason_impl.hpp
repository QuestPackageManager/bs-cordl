#pragma once
#include "LiteNetLib/zzzz__DisconnectReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::DisconnectReason::DisconnectReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::LiteNetLib::DisconnectReason::DisconnectReason() {}
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::ConnectionFailed{ static_cast<int32_t>(0x0) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::Timeout{ static_cast<int32_t>(0x1) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::HostUnreachable{ static_cast<int32_t>(0x2) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::NetworkUnreachable{ static_cast<int32_t>(0x3) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::RemoteConnectionClose{ static_cast<int32_t>(0x4) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::DisconnectPeerCalled{ static_cast<int32_t>(0x5) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::ConnectionRejected{ static_cast<int32_t>(0x6) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::InvalidProtocol{ static_cast<int32_t>(0x7) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::UnknownHost{ static_cast<int32_t>(0x8) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::Reconnect{ static_cast<int32_t>(0x9) };
constexpr ::LiteNetLib::DisconnectReason LiteNetLib::DisconnectReason::PeerToPeerConnection{ static_cast<int32_t>(0xa) };
