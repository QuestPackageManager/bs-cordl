#pragma once
// IWYU pragma private; include "OVR/OpenVR/DistortionCoordinates_t.hpp"
#include "OVR/OpenVR/zzzz__DistortionCoordinates_t_def.hpp"
// Ctor Parameters [CppParam { name: "rfRed0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfRed1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfGreen0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfGreen1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfBlue0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfBlue1", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::DistortionCoordinates_t::DistortionCoordinates_t(float_t  rfRed0, float_t  rfRed1, float_t  rfGreen0, float_t  rfGreen1, float_t  rfBlue0, float_t  rfBlue1) noexcept  {
this->rfRed0 = rfRed0;
this->rfRed1 = rfRed1;
this->rfGreen0 = rfGreen0;
this->rfGreen1 = rfGreen1;
this->rfBlue0 = rfBlue0;
this->rfBlue1 = rfBlue1;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::DistortionCoordinates_t::DistortionCoordinates_t()   {
}
