#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRState.hpp"
#include "OVR/OpenVR/zzzz__EVRState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRState::EVRState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRState::EVRState()   {
}
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Undefined{static_cast<int32_t>(0xffffffff)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Off{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Searching{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Searching_Alert{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready{static_cast<int32_t>(0x3)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready_Alert{static_cast<int32_t>(0x4)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::NotReady{static_cast<int32_t>(0x5)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Standby{static_cast<int32_t>(0x6)};
constexpr ::OVR::OpenVR::EVRState  OVR::OpenVR::EVRState::Ready_Alert_Low{static_cast<int32_t>(0x7)};
