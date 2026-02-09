#pragma once
// IWYU pragma private; include "Oculus/Platform/LivestreamingMicrophoneStatus.hpp"
#include "Oculus/Platform/zzzz__LivestreamingMicrophoneStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus::LivestreamingMicrophoneStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus::LivestreamingMicrophoneStatus()   {
}
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus  Oculus::Platform::LivestreamingMicrophoneStatus::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus  Oculus::Platform::LivestreamingMicrophoneStatus::MicrophoneOn{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus  Oculus::Platform::LivestreamingMicrophoneStatus::MicrophoneOff{static_cast<int32_t>(0x2)};
