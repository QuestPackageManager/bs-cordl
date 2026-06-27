#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRApplicationTransitionState.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationTransitionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRApplicationTransitionState::EVRApplicationTransitionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRApplicationTransitionState::EVRApplicationTransitionState()   {
}
constexpr ::OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_OldAppQuitSent{static_cast<int32_t>(0xa)};
constexpr ::OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_WaitingForExternalLaunch{static_cast<int32_t>(0xb)};
constexpr ::OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_NewAppLaunched{static_cast<int32_t>(0x14)};
