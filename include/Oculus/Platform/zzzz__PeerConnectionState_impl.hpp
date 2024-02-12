#pragma once
#include "Oculus/Platform/zzzz__PeerConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PeerConnectionState::PeerConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PeerConnectionState::PeerConnectionState() {}
constexpr ::Oculus::Platform::PeerConnectionState Oculus::Platform::PeerConnectionState::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::Oculus::Platform::PeerConnectionState Oculus::Platform::PeerConnectionState::Connected{ static_cast<int32_t>(0x1) };
constexpr ::Oculus::Platform::PeerConnectionState Oculus::Platform::PeerConnectionState::Timeout{ static_cast<int32_t>(0x2) };
constexpr ::Oculus::Platform::PeerConnectionState Oculus::Platform::PeerConnectionState::Closed{ static_cast<int32_t>(0x3) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
