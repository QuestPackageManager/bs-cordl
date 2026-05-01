#pragma once
// IWYU pragma private; include "Unity/Collections/FixedBytes32Align8.hpp"
#include "Unity/Collections/zzzz__FixedBytes16Align8_impl.hpp"
#include "Unity/Collections/zzzz__FixedBytes32Align8_def.hpp"
constexpr ::Unity::Collections::FixedBytes16Align8& Unity::Collections::FixedBytes32Align8::__cordl_internal_get_offset0000() {
  return this->___offset0000;
}
constexpr ::Unity::Collections::FixedBytes16Align8 const& Unity::Collections::FixedBytes32Align8::__cordl_internal_get_offset0000() const {
  return this->___offset0000;
}
constexpr void Unity::Collections::FixedBytes32Align8::__cordl_internal_set_offset0000(::Unity::Collections::FixedBytes16Align8 value) {
  this->___offset0000 = value;
}
constexpr ::Unity::Collections::FixedBytes16Align8& Unity::Collections::FixedBytes32Align8::__cordl_internal_get_offset0016() {
  return this->___offset0016;
}
constexpr ::Unity::Collections::FixedBytes16Align8 const& Unity::Collections::FixedBytes32Align8::__cordl_internal_get_offset0016() const {
  return this->___offset0016;
}
constexpr void Unity::Collections::FixedBytes32Align8::__cordl_internal_set_offset0016(::Unity::Collections::FixedBytes16Align8 value) {
  this->___offset0016 = value;
}
// Ctor Parameters [CppParam { name: "offset0000", ty: "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset0016", ty:
// "::Unity::Collections::FixedBytes16Align8", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::FixedBytes32Align8::FixedBytes32Align8(::Unity::Collections::FixedBytes16Align8 offset0000, ::Unity::Collections::FixedBytes16Align8 offset0016) noexcept {
  this->offset0000 = offset0000;
  this->offset0016 = offset0016;
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedBytes32Align8::FixedBytes32Align8() {}
