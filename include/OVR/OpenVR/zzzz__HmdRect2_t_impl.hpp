#pragma once
#include "OVR/OpenVR/zzzz__HmdVector2_t_impl.hpp"
#include "OVR/OpenVR/zzzz__HmdRect2_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
// Ctor Parameters [CppParam { name: "vTopLeft", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vBottomRight", ty: "::OVR::OpenVR::HmdVector2_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::HmdRect2_t::HmdRect2_t(::OVR::OpenVR::HmdVector2_t vTopLeft, ::OVR::OpenVR::HmdVector2_t vBottomRight) noexcept {
  this->vTopLeft = vTopLeft;
  this->vBottomRight = vBottomRight;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::HmdRect2_t::HmdRect2_t() {}
