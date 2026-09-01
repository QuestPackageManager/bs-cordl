#pragma once
// IWYU pragma private; include "HMUI\PercentSlider.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_impl.hpp"
#include "HMUI/zzzz__PercentSlider_def.hpp"
//  Writing Method size for method: ::HMUI::PercentSlider.TextForValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::PercentSlider::*)(float_t)>(&::HMUI::PercentSlider::TextForValue)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x587e178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::PercentSlider*>(), { ::i2c::class_of<::HMUI::PercentSlider*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PercentSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::PercentSlider::*)()>(&::HMUI::PercentSlider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x587e220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::PercentSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW HMUI::PercentSlider::TextForValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::PercentSlider*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void HMUI::PercentSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::PercentSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::PercentSlider* HMUI::PercentSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::PercentSlider*>());
}
// Ctor Parameters []
constexpr ::HMUI::PercentSlider::PercentSlider() {}
