#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRTextureBounds_t.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
// Ctor Parameters [CppParam { name: "uMin", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vMin", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "uMax", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "vMax", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }]
constexpr ::OVR::OpenVR::VRTextureBounds_t::VRTextureBounds_t(float_t uMin, float_t vMin, float_t uMax, float_t vMax) noexcept {
  this->uMin = uMin;
  this->vMin = vMin;
  this->uMax = uMax;
  this->vMax = vMax;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VRTextureBounds_t::VRTextureBounds_t() {}
