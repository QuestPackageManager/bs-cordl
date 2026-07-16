#pragma once
// IWYU pragma private; include "GlobalNamespace/XRSystemEventType.hpp"
#include "GlobalNamespace/zzzz__XRSystemEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::XRSystemEventType::XRSystemEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRSystemEventType::XRSystemEventType() {}
constexpr ::GlobalNamespace::XRSystemEventType GlobalNamespace::XRSystemEventType::InputFocusLost{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::XRSystemEventType GlobalNamespace::XRSystemEventType::InputFocusAcquired{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::XRSystemEventType GlobalNamespace::XRSystemEventType::VRFocusLost{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::XRSystemEventType GlobalNamespace::XRSystemEventType::VRFocusAcquired{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::XRSystemEventType GlobalNamespace::XRSystemEventType::HmdUnmounted{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::XRSystemEventType GlobalNamespace::XRSystemEventType::HmdMounted{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::XRSystemEventType GlobalNamespace::XRSystemEventType::ControllersDidChangeReference{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::XRSystemEventType GlobalNamespace::XRSystemEventType::ControllersDidDisconnect{ static_cast<int32_t>(0x7) };
