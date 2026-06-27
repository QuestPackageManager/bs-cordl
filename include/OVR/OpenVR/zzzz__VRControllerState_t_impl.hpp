#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRControllerState_t.hpp"
#include "OVR/OpenVR/zzzz__VRControllerAxis_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
// Ctor Parameters [CppParam { name: "unPacketNum", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulButtonPressed", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulButtonTouched", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis0", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis1", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis2", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis3", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rAxis4", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRControllerState_t::VRControllerState_t(uint32_t  unPacketNum, uint64_t  ulButtonPressed, uint64_t  ulButtonTouched, ::OVR::OpenVR::VRControllerAxis_t  rAxis0, ::OVR::OpenVR::VRControllerAxis_t  rAxis1, ::OVR::OpenVR::VRControllerAxis_t  rAxis2, ::OVR::OpenVR::VRControllerAxis_t  rAxis3, ::OVR::OpenVR::VRControllerAxis_t  rAxis4) noexcept  {
this->unPacketNum = unPacketNum;
this->ulButtonPressed = ulButtonPressed;
this->ulButtonTouched = ulButtonTouched;
this->rAxis0 = rAxis0;
this->rAxis1 = rAxis1;
this->rAxis2 = rAxis2;
this->rAxis3 = rAxis3;
this->rAxis4 = rAxis4;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VRControllerState_t::VRControllerState_t()   {
}
