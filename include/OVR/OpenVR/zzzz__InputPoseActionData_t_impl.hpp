#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputPoseActionData_t.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_impl.hpp"
#include "OVR/OpenVR/zzzz__InputPoseActionData_t_def.hpp"
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::InputPoseActionData_t::InputPoseActionData_t(bool  bActive, uint64_t  activeOrigin, ::OVR::OpenVR::TrackedDevicePose_t  pose) noexcept  {
this->bActive = bActive;
this->activeOrigin = activeOrigin;
this->pose = pose;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::InputPoseActionData_t::InputPoseActionData_t()   {
}
