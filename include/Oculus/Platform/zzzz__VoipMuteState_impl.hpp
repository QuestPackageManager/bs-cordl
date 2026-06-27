#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipMuteState.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::VoipMuteState::VoipMuteState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipMuteState::VoipMuteState()   {
}
constexpr ::Oculus::Platform::VoipMuteState  Oculus::Platform::VoipMuteState::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::VoipMuteState  Oculus::Platform::VoipMuteState::Muted{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::VoipMuteState  Oculus::Platform::VoipMuteState::Unmuted{static_cast<int32_t>(0x2)};
