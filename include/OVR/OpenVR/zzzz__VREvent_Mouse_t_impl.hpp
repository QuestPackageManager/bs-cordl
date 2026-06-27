#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_Mouse_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_Mouse_t_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "button", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_Mouse_t::VREvent_Mouse_t(float_t  x, float_t  y, uint32_t  button) noexcept  {
this->x = x;
this->y = y;
this->button = button;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_Mouse_t::VREvent_Mouse_t()   {
}
