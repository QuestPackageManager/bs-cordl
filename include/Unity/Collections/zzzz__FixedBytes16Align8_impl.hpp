#pragma once
// IWYU pragma private; include "Unity/Collections/FixedBytes16Align8.hpp"
#include "Unity/Collections/zzzz__FixedBytes16Align8_def.hpp"
constexpr uint64_t& Unity::Collections::FixedBytes16Align8::__cordl_internal_get_byte0000() {
  return this->___byte0000;
}
constexpr uint64_t const& Unity::Collections::FixedBytes16Align8::__cordl_internal_get_byte0000() const {
  return this->___byte0000;
}
constexpr void Unity::Collections::FixedBytes16Align8::__cordl_internal_set_byte0000(uint64_t value) {
  this->___byte0000 = value;
}
constexpr uint64_t& Unity::Collections::FixedBytes16Align8::__cordl_internal_get_byte0008() {
  return this->___byte0008;
}
constexpr uint64_t const& Unity::Collections::FixedBytes16Align8::__cordl_internal_get_byte0008() const {
  return this->___byte0008;
}
constexpr void Unity::Collections::FixedBytes16Align8::__cordl_internal_set_byte0008(uint64_t value) {
  this->___byte0008 = value;
}
// Ctor Parameters [CppParam { name: "byte0000", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "byte0008", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::FixedBytes16Align8::FixedBytes16Align8(uint64_t byte0000, uint64_t byte0008) noexcept {
  this->byte0000 = byte0000;
  this->byte0008 = byte0008;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedBytes16Align8::FixedBytes16Align8() {}
