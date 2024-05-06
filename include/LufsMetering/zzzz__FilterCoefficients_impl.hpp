#pragma once
#include "LufsMetering/zzzz__FilterCoefficients_def.hpp"
// Ctor Parameters [CppParam { name: "a0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "a2",
// ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "b0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "b1", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "b2", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LufsMetering::FilterCoefficients::FilterCoefficients(float_t a0, float_t a1, float_t a2, float_t b0, float_t b1, float_t b2) noexcept {
  this->a0 = a0;
  this->a1 = a1;
  this->a2 = a2;
  this->b0 = b0;
  this->b1 = b1;
  this->b2 = b2;
}
// Ctor Parameters []
constexpr ::LufsMetering::FilterCoefficients::FilterCoefficients() {}
