#pragma once
// IWYU pragma private; include "OVR/OpenVR/VREvent_TouchPadMove_t.hpp"
#include "OVR/OpenVR/zzzz__VREvent_TouchPadMove_t_def.hpp"
// Ctor Parameters [CppParam { name: "bFingerDown", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "flSecondsFingerDown", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fValueXFirst", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fValueYFirst", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fValueXRaw", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fValueYRaw", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VREvent_TouchPadMove_t::VREvent_TouchPadMove_t(bool  bFingerDown, float_t  flSecondsFingerDown, float_t  fValueXFirst, float_t  fValueYFirst, float_t  fValueXRaw, float_t  fValueYRaw) noexcept  {
this->bFingerDown = bFingerDown;
this->flSecondsFingerDown = flSecondsFingerDown;
this->fValueXFirst = fValueXFirst;
this->fValueYFirst = fValueYFirst;
this->fValueXRaw = fValueXRaw;
this->fValueYRaw = fValueYRaw;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VREvent_TouchPadMove_t::VREvent_TouchPadMove_t()   {
}
