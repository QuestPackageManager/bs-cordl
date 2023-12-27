#pragma once
#include "GlobalNamespace/zzzz__UpdateConnectionStateReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::UpdateConnectionStateReason::UpdateConnectionStateReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UpdateConnectionStateReason::UpdateConnectionStateReason() {}
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::Init{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::PlayerOrderChanged{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::Connected{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::StartSession{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::StartDedicatedServer{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::SyncTimeInitialized{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::ManualDisconnect{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::RemoteDisconnect{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::ConnectionFailed{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::UpdateConnectionStateReason GlobalNamespace::UpdateConnectionStateReason::OnDestroy{ static_cast<int32_t>(0x9) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
