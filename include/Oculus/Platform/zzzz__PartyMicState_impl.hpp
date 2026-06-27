#pragma once
// IWYU pragma private; include "Oculus/Platform/PartyMicState.hpp"
#include "Oculus/Platform/zzzz__PartyMicState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::PartyMicState::PartyMicState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PartyMicState::PartyMicState()   {
}
constexpr ::Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::Party{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::App{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::Mute{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::Inactive{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::PartyMicState  Oculus::Platform::PartyMicState::InputShared{static_cast<int32_t>(0x5)};
