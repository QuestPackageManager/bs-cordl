#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputAnalogActionData_t.hpp"
#include "OVR/OpenVR/zzzz__InputAnalogActionData_t_def.hpp"
// Ctor Parameters [CppParam { name: "bActive", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activeOrigin", ty: "uint64_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "x", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: Some("{}"),
// comment: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deltaX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "deltaY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deltaZ", ty: "float_t", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "fUpdateTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::OVR::OpenVR::InputAnalogActionData_t::InputAnalogActionData_t(bool bActive, uint64_t activeOrigin, float_t x, float_t y, float_t z, float_t deltaX, float_t deltaY, float_t deltaZ,
                                                                          float_t fUpdateTime) noexcept {
  this->bActive = bActive;
  this->activeOrigin = activeOrigin;
  this->x = x;
  this->y = y;
  this->z = z;
  this->deltaX = deltaX;
  this->deltaY = deltaY;
  this->deltaZ = deltaZ;
  this->fUpdateTime = fUpdateTime;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::InputAnalogActionData_t::InputAnalogActionData_t() {}
