#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputDigitalActionData_t.hpp"
#include "OVR/OpenVR/zzzz__InputDigitalActionData_t_def.hpp"
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bState", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bChanged", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::InputDigitalActionData_t::InputDigitalActionData_t(bool  bActive, uint64_t  activeOrigin, bool  bState, bool  bChanged, float_t  fUpdateTime) noexcept  {
this->bActive = bActive;
this->activeOrigin = activeOrigin;
this->bState = bState;
this->bChanged = bChanged;
this->fUpdateTime = fUpdateTime;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::InputDigitalActionData_t::InputDigitalActionData_t()   {
}
