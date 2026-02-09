#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_ComponentState_t.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_ComponentState_t_def.hpp"
// Ctor Parameters [CppParam { name: "mTrackingToComponentRenderModel", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mTrackingToComponentLocal", ty: "::OVR::OpenVR::HmdMatrix34_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uProperties", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_ComponentState_t::RenderModel_ComponentState_t(::OVR::OpenVR::HmdMatrix34_t  mTrackingToComponentRenderModel, ::OVR::OpenVR::HmdMatrix34_t  mTrackingToComponentLocal, uint32_t  uProperties) noexcept  {
this->mTrackingToComponentRenderModel = mTrackingToComponentRenderModel;
this->mTrackingToComponentLocal = mTrackingToComponentLocal;
this->uProperties = uProperties;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::RenderModel_ComponentState_t::RenderModel_ComponentState_t()   {
}
