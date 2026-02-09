#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipSampleRate.hpp"
#include "Oculus/Platform/zzzz__VoipSampleRate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::VoipSampleRate::VoipSampleRate(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipSampleRate::VoipSampleRate()   {
}
constexpr ::Oculus::Platform::VoipSampleRate  Oculus::Platform::VoipSampleRate::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::VoipSampleRate  Oculus::Platform::VoipSampleRate::HZ24000{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::VoipSampleRate  Oculus::Platform::VoipSampleRate::HZ44100{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::VoipSampleRate  Oculus::Platform::VoipSampleRate::HZ48000{static_cast<int32_t>(0x3)};
