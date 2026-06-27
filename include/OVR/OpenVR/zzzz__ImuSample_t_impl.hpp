#pragma once
// IWYU pragma private; include "OVR/OpenVR/ImuSample_t.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3d_t_impl.hpp"
#include "OVR/OpenVR/zzzz__ImuSample_t_def.hpp"
// Ctor Parameters [CppParam { name: "fSampleTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vAccel", ty: "::OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vGyro", ty: "::OVR::OpenVR::HmdVector3d_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unOffScaleFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ImuSample_t::ImuSample_t(double_t  fSampleTime, ::OVR::OpenVR::HmdVector3d_t  vAccel, ::OVR::OpenVR::HmdVector3d_t  vGyro, uint32_t  unOffScaleFlags) noexcept  {
this->fSampleTime = fSampleTime;
this->vAccel = vAccel;
this->vGyro = vGyro;
this->unOffScaleFlags = unOffScaleFlags;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::ImuSample_t::ImuSample_t()   {
}
