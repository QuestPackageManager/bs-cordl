#pragma once
// IWYU pragma private; include "Oculus/Platform/NetSyncConnectionStatus.hpp"
#include "Oculus/Platform/zzzz__NetSyncConnectionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::NetSyncConnectionStatus::NetSyncConnectionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::NetSyncConnectionStatus::NetSyncConnectionStatus()   {
}
constexpr ::Oculus::Platform::NetSyncConnectionStatus  Oculus::Platform::NetSyncConnectionStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::NetSyncConnectionStatus  Oculus::Platform::NetSyncConnectionStatus::Connecting{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::NetSyncConnectionStatus  Oculus::Platform::NetSyncConnectionStatus::Disconnected{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::NetSyncConnectionStatus  Oculus::Platform::NetSyncConnectionStatus::Connected{static_cast<int32_t>(0x3)};
