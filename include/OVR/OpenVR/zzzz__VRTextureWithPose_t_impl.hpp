#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRTextureWithPose_t.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VRTextureWithPose_t_def.hpp"
// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRTextureWithPose_t::VRTextureWithPose_t(::OVR::OpenVR::HmdMatrix34_t  mDeviceToAbsoluteTracking) noexcept  {
this->mDeviceToAbsoluteTracking = mDeviceToAbsoluteTracking;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VRTextureWithPose_t::VRTextureWithPose_t()   {
}
