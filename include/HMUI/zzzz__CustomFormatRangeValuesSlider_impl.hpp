#pragma once
// IWYU pragma private; include "HMUI\CustomFormatRangeValuesSlider.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__CustomFormatRangeValuesSlider_def.hpp"
//  Writing Method size for method: ::HMUI::CustomFormatRangeValuesSlider.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::CustomFormatRangeValuesSlider::*)(float_t)>(&::HMUI::CustomFormatRangeValuesSlider::TextForValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x587e104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::CustomFormatRangeValuesSlider*>(), { ::i2c::class_of<::HMUI::CustomFormatRangeValuesSlider*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::CustomFormatRangeValuesSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::CustomFormatRangeValuesSlider::*)()>(&::HMUI::CustomFormatRangeValuesSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x587e160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CustomFormatRangeValuesSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& HMUI::CustomFormatRangeValuesSlider::__cordl_internal_get__formatString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString;
}
constexpr ::StringW const& HMUI::CustomFormatRangeValuesSlider::__cordl_internal_get__formatString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formatString;
}
constexpr void HMUI::CustomFormatRangeValuesSlider::__cordl_internal_set__formatString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formatString = value;
}
inline ::StringW HMUI::CustomFormatRangeValuesSlider::TextForValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::CustomFormatRangeValuesSlider*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void HMUI::CustomFormatRangeValuesSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::CustomFormatRangeValuesSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::CustomFormatRangeValuesSlider* HMUI::CustomFormatRangeValuesSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::CustomFormatRangeValuesSlider*>());
}
// Ctor Parameters []
constexpr ::HMUI::CustomFormatRangeValuesSlider::CustomFormatRangeValuesSlider() {}
