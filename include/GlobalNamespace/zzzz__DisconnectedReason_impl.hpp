#pragma once
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::DisconnectedReason::DisconnectedReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisconnectedReason::DisconnectedReason() {}
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::Unknown{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::UserInitiated{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::Timeout{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::Kicked{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::ServerAtCapacity{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::ServerConnectionClosed{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::MasterServerUnreachable{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::ClientConnectionClosed{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::NetworkDisconnected{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::DisconnectedReason GlobalNamespace::DisconnectedReason::ServerTerminated{ static_cast<int32_t>(0xa) };
