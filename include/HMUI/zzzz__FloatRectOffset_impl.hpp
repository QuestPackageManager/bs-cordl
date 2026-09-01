#pragma once
// IWYU pragma private; include "HMUI\FloatRectOffset.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__FloatRectOffset_def.hpp"
//  Writing Method size for method: ::HMUI::FloatRectOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FloatRectOffset::*)()>(&::HMUI::FloatRectOffset::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587bd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FloatRectOffset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::FloatRectOffset::__cordl_internal_get_left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
constexpr float_t const& HMUI::FloatRectOffset::__cordl_internal_get_left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___left;
}
constexpr void HMUI::FloatRectOffset::__cordl_internal_set_left(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___left = value;
}
constexpr float_t& HMUI::FloatRectOffset::__cordl_internal_get_right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr float_t const& HMUI::FloatRectOffset::__cordl_internal_get_right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___right;
}
constexpr void HMUI::FloatRectOffset::__cordl_internal_set_right(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___right = value;
}
constexpr float_t& HMUI::FloatRectOffset::__cordl_internal_get_top() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr float_t const& HMUI::FloatRectOffset::__cordl_internal_get_top() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___top;
}
constexpr void HMUI::FloatRectOffset::__cordl_internal_set_top(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___top = value;
}
constexpr float_t& HMUI::FloatRectOffset::__cordl_internal_get_bottom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottom;
}
constexpr float_t const& HMUI::FloatRectOffset::__cordl_internal_get_bottom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottom;
}
constexpr void HMUI::FloatRectOffset::__cordl_internal_set_bottom(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottom = value;
}
inline void HMUI::FloatRectOffset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FloatRectOffset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FloatRectOffset* HMUI::FloatRectOffset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FloatRectOffset*>());
}
// Ctor Parameters []
constexpr ::HMUI::FloatRectOffset::FloatRectOffset() {}
