#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkMessageType.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NetworkMessageType::NetworkMessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkMessageType::NetworkMessageType() {}
constexpr ::GlobalNamespace::NetworkMessageType GlobalNamespace::NetworkMessageType::MenuRpc{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::NetworkMessageType GlobalNamespace::NetworkMessageType::GameplayRpc{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::NetworkMessageType GlobalNamespace::NetworkMessageType::NodePoseSyncState{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::NetworkMessageType GlobalNamespace::NetworkMessageType::ScoreSyncState{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::NetworkMessageType GlobalNamespace::NetworkMessageType::NodePoseSyncStateDelta{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::NetworkMessageType GlobalNamespace::NetworkMessageType::ScoreSyncStateDelta{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::NetworkMessageType GlobalNamespace::NetworkMessageType::OptionalAvatarData{ static_cast<uint8_t>(0x6u) };
