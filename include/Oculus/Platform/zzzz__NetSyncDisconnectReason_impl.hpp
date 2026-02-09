#pragma once
// IWYU pragma private; include "Oculus/Platform/NetSyncDisconnectReason.hpp"
#include "Oculus/Platform/zzzz__NetSyncDisconnectReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::NetSyncDisconnectReason::NetSyncDisconnectReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::NetSyncDisconnectReason::NetSyncDisconnectReason()   {
}
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::LocalTerminated{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::ServerTerminated{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::Failed{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::NetSyncDisconnectReason  Oculus::Platform::NetSyncDisconnectReason::Lost{static_cast<int32_t>(0x4)};
