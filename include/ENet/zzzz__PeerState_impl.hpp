#pragma once
// IWYU pragma private; include "ENet/PeerState.hpp"
#include "ENet/zzzz__PeerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::PeerState::PeerState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::ENet::PeerState::PeerState() {}
constexpr ::ENet::PeerState ENet::PeerState::Uninitialized{ static_cast<int32_t>(0xffffffff) };
constexpr ::ENet::PeerState ENet::PeerState::Disconnected{ static_cast<int32_t>(0x0) };
constexpr ::ENet::PeerState ENet::PeerState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::ENet::PeerState ENet::PeerState::AcknowledgingConnect{ static_cast<int32_t>(0x2) };
constexpr ::ENet::PeerState ENet::PeerState::ConnectionPending{ static_cast<int32_t>(0x3) };
constexpr ::ENet::PeerState ENet::PeerState::ConnectionSucceeded{ static_cast<int32_t>(0x4) };
constexpr ::ENet::PeerState ENet::PeerState::Connected{ static_cast<int32_t>(0x5) };
constexpr ::ENet::PeerState ENet::PeerState::DisconnectLater{ static_cast<int32_t>(0x6) };
constexpr ::ENet::PeerState ENet::PeerState::Disconnecting{ static_cast<int32_t>(0x7) };
constexpr ::ENet::PeerState ENet::PeerState::AcknowledgingDisconnect{ static_cast<int32_t>(0x8) };
constexpr ::ENet::PeerState ENet::PeerState::Zombie{ static_cast<int32_t>(0x9) };
