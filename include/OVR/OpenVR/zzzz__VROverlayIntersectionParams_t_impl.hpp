#pragma once
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_impl.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionParams_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
// Ctor Parameters [CppParam { name: "vSource", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vDirection", ty: "::OVR::OpenVR::HmdVector3_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "eOrigin", ty: "::OVR::OpenVR::ETrackingUniverseOrigin", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayIntersectionParams_t::VROverlayIntersectionParams_t(::OVR::OpenVR::HmdVector3_t vSource, ::OVR::OpenVR::HmdVector3_t vDirection,
                                                                                      ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin) noexcept {
  this->vSource = vSource;
  this->vDirection = vDirection;
  this->eOrigin = eOrigin;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VROverlayIntersectionParams_t::VROverlayIntersectionParams_t() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
