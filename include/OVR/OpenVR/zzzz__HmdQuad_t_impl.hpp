#pragma once
// IWYU pragma private; include "OVR/OpenVR/HmdQuad_t.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
// Ctor Parameters [CppParam { name: "vCorners0", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vCorners1", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vCorners2", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vCorners3", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::HmdQuad_t::HmdQuad_t(::OVR::OpenVR::HmdVector3_t  vCorners0, ::OVR::OpenVR::HmdVector3_t  vCorners1, ::OVR::OpenVR::HmdVector3_t  vCorners2, ::OVR::OpenVR::HmdVector3_t  vCorners3) noexcept  {
this->vCorners0 = vCorners0;
this->vCorners1 = vCorners1;
this->vCorners2 = vCorners2;
this->vCorners3 = vCorners3;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::HmdQuad_t::HmdQuad_t()   {
}
