#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRBoneTransform_t.hpp"
#include "OVR/OpenVR/zzzz__HmdQuaternionf_t_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdVector4_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VRBoneTransform_t_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::OVR::OpenVR::HmdVector4_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "::OVR::OpenVR::HmdQuaternionf_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRBoneTransform_t::VRBoneTransform_t(::OVR::OpenVR::HmdVector4_t  position, ::OVR::OpenVR::HmdQuaternionf_t  orientation) noexcept  {
this->position = position;
this->orientation = orientation;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VRBoneTransform_t::VRBoneTransform_t()   {
}
