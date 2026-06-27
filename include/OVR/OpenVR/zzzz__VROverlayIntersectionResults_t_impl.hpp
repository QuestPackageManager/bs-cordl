#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayIntersectionResults_t.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionResults_t_def.hpp"
// Ctor Parameters [CppParam { name: "vPoint", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vNormal", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vUVs", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayIntersectionResults_t::VROverlayIntersectionResults_t(::OVR::OpenVR::HmdVector3_t  vPoint, ::OVR::OpenVR::HmdVector3_t  vNormal, ::OVR::OpenVR::HmdVector2_t  vUVs, float_t  fDistance) noexcept  {
this->vPoint = vPoint;
this->vNormal = vNormal;
this->vUVs = vUVs;
this->fDistance = fDistance;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VROverlayIntersectionResults_t::VROverlayIntersectionResults_t()   {
}
