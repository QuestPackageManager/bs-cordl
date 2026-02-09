#pragma once
// IWYU pragma private; include "OVR/OpenVR/SpatialAnchorPose_t.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_impl.hpp"
#include "OVR/OpenVR/zzzz__SpatialAnchorPose_t_def.hpp"
// Ctor Parameters [CppParam { name: "mAnchorToAbsoluteTracking", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::SpatialAnchorPose_t::SpatialAnchorPose_t(::OVR::OpenVR::HmdMatrix34_t  mAnchorToAbsoluteTracking) noexcept  {
this->mAnchorToAbsoluteTracking = mAnchorToAbsoluteTracking;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::SpatialAnchorPose_t::SpatialAnchorPose_t()   {
}
