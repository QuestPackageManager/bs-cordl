#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRTextureDepthInfo_t.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__VRTextureDepthInfo_t_def.hpp"
// Ctor Parameters [CppParam { name: "handle", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "mProjection", ty: "::OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vRange", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRTextureDepthInfo_t::VRTextureDepthInfo_t(::System::IntPtr  handle, ::OVR::OpenVR::HmdMatrix44_t  mProjection, ::OVR::OpenVR::HmdVector2_t  vRange) noexcept  {
this->handle = handle;
this->mProjection = mProjection;
this->vRange = vRange;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VRTextureDepthInfo_t::VRTextureDepthInfo_t()   {
}
