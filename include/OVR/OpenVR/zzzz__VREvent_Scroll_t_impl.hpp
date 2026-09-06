#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Scroll_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Scroll_t_def.hpp"
// Ctor Parameters [CppParam { name: "xdelta", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ydelta", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "repeatCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::OVR::OpenVR::VREvent_Scroll_t::VREvent_Scroll_t(float_t xdelta, float_t ydelta, uint32_t repeatCount) noexcept {
  this->xdelta = xdelta;
  this->ydelta = ydelta;
  this->repeatCount = repeatCount;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Scroll_t::VREvent_Scroll_t() {}
