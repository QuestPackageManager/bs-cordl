#pragma once
// IWYU pragma private; include "Oculus/Platform/NetSyncVoipStreamMode.hpp"
#include "Oculus/Platform/zzzz__NetSyncVoipStreamMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::NetSyncVoipStreamMode::NetSyncVoipStreamMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::NetSyncVoipStreamMode::NetSyncVoipStreamMode()   {
}
constexpr ::Oculus::Platform::NetSyncVoipStreamMode  Oculus::Platform::NetSyncVoipStreamMode::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::NetSyncVoipStreamMode  Oculus::Platform::NetSyncVoipStreamMode::Ambisonic{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::NetSyncVoipStreamMode  Oculus::Platform::NetSyncVoipStreamMode::Mono{static_cast<int32_t>(0x2)};
