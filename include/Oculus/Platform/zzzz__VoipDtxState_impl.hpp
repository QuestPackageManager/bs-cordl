#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipDtxState.hpp"
#include "Oculus/Platform/zzzz__VoipDtxState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::VoipDtxState::VoipDtxState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipDtxState::VoipDtxState()   {
}
constexpr ::Oculus::Platform::VoipDtxState  Oculus::Platform::VoipDtxState::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::VoipDtxState  Oculus::Platform::VoipDtxState::Enabled{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::VoipDtxState  Oculus::Platform::VoipDtxState::Disabled{static_cast<int32_t>(0x2)};
