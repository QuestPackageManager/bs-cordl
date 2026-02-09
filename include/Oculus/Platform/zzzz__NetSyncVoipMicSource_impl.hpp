#pragma once
// IWYU pragma private; include "Oculus/Platform/NetSyncVoipMicSource.hpp"
#include "Oculus/Platform/zzzz__NetSyncVoipMicSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::NetSyncVoipMicSource::NetSyncVoipMicSource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::NetSyncVoipMicSource::NetSyncVoipMicSource()   {
}
constexpr ::Oculus::Platform::NetSyncVoipMicSource  Oculus::Platform::NetSyncVoipMicSource::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::NetSyncVoipMicSource  Oculus::Platform::NetSyncVoipMicSource::None{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::NetSyncVoipMicSource  Oculus::Platform::NetSyncVoipMicSource::Internal{static_cast<int32_t>(0x2)};
