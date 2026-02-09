#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_DualAnalog_t.hpp"
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_impl.hpp"
#include "OVR/OpenVR/zzzz__VREvent_DualAnalog_t_def.hpp"
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformedX", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformedY", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "which", ty: "::OVR::OpenVR::EDualAnalogWhich", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_DualAnalog_t::VREvent_DualAnalog_t(float_t  x, float_t  y, float_t  transformedX, float_t  transformedY, ::OVR::OpenVR::EDualAnalogWhich  which) noexcept  {
this->x = x;
this->y = y;
this->transformedX = transformedX;
this->transformedY = transformedY;
this->which = which;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_DualAnalog_t::VREvent_DualAnalog_t()   {
}
