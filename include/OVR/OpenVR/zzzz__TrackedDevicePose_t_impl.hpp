#pragma once
// IWYU pragma private; include "OVR/OpenVR/TrackedDevicePose_t.hpp"
#include "OVR/OpenVR/zzzz__ETrackingResult_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_impl.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
// Ctor Parameters [CppParam { name: "mDeviceToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vVelocity", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vAngularVelocity", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eTrackingResult", ty: "::OVR::OpenVR::ETrackingResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "bPoseIsValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bDeviceIsConnected", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::TrackedDevicePose_t::TrackedDevicePose_t(::OVR::OpenVR::HmdMatrix34_t  mDeviceToAbsoluteTracking, ::OVR::OpenVR::HmdVector3_t  vVelocity, ::OVR::OpenVR::HmdVector3_t  vAngularVelocity, ::OVR::OpenVR::ETrackingResult  eTrackingResult, bool  bPoseIsValid, bool  bDeviceIsConnected) noexcept  {
this->mDeviceToAbsoluteTracking = mDeviceToAbsoluteTracking;
this->vVelocity = vVelocity;
this->vAngularVelocity = vAngularVelocity;
this->eTrackingResult = eTrackingResult;
this->bPoseIsValid = bPoseIsValid;
this->bDeviceIsConnected = bDeviceIsConnected;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::TrackedDevicePose_t::TrackedDevicePose_t()   {
}
