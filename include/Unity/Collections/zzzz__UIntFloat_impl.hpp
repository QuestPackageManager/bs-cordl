#pragma once
// IWYU pragma private; include "Unity/Collections/UIntFloat.hpp"
#include "Unity/Collections/zzzz__UIntFloat_def.hpp"
constexpr float_t& Unity::Collections::UIntFloat::__cordl_internal_get_floatValue() {
  return this->___floatValue;
}
constexpr float_t const& Unity::Collections::UIntFloat::__cordl_internal_get_floatValue() const {
  return this->___floatValue;
}
constexpr void Unity::Collections::UIntFloat::__cordl_internal_set_floatValue(float_t value) {
  this->___floatValue = value;
}
constexpr uint32_t& Unity::Collections::UIntFloat::__cordl_internal_get_intValue() {
  return this->___intValue;
}
constexpr uint32_t const& Unity::Collections::UIntFloat::__cordl_internal_get_intValue() const {
  return this->___intValue;
}
constexpr void Unity::Collections::UIntFloat::__cordl_internal_set_intValue(uint32_t value) {
  this->___intValue = value;
}
constexpr double_t& Unity::Collections::UIntFloat::__cordl_internal_get_doubleValue() {
  return this->___doubleValue;
}
constexpr double_t const& Unity::Collections::UIntFloat::__cordl_internal_get_doubleValue() const {
  return this->___doubleValue;
}
constexpr void Unity::Collections::UIntFloat::__cordl_internal_set_doubleValue(double_t value) {
  this->___doubleValue = value;
}
constexpr uint64_t& Unity::Collections::UIntFloat::__cordl_internal_get_longValue() {
  return this->___longValue;
}
constexpr uint64_t const& Unity::Collections::UIntFloat::__cordl_internal_get_longValue() const {
  return this->___longValue;
}
constexpr void Unity::Collections::UIntFloat::__cordl_internal_set_longValue(uint64_t value) {
  this->___longValue = value;
}
// Ctor Parameters [CppParam { name: "floatValue", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "intValue", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "doubleValue", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "longValue", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::UIntFloat::UIntFloat(float_t floatValue, uint32_t intValue, double_t doubleValue, uint64_t longValue) noexcept {
  this->floatValue = floatValue;
  this->intValue = intValue;
  this->doubleValue = doubleValue;
  this->longValue = longValue;
}
// Ctor Parameters []
constexpr ::Unity::Collections::UIntFloat::UIntFloat() {}
