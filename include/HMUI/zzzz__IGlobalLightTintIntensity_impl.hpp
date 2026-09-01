#pragma once
// IWYU pragma private; include "HMUI\IGlobalLightTintIntensity.hpp"
#include "HMUI/zzzz__IGlobalLightTintIntensity_def.hpp"
//  Writing Method size for method: ::HMUI::IGlobalLightTintIntensity.get_globalLightTintIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::IGlobalLightTintIntensity::*)()>(&::HMUI::IGlobalLightTintIntensity::get_globalLightTintIntensity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::IGlobalLightTintIntensity*>(), { ::i2c::class_of<::HMUI::IGlobalLightTintIntensity*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IGlobalLightTintIntensity.set_globalLightTintIntensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IGlobalLightTintIntensity::*)(float_t)>(&::HMUI::IGlobalLightTintIntensity::set_globalLightTintIntensity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::IGlobalLightTintIntensity*>(), { ::i2c::class_of<::HMUI::IGlobalLightTintIntensity*>(), 1 }));
    return ___internal_method;
  }
};
inline float_t HMUI::IGlobalLightTintIntensity::get_globalLightTintIntensity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::IGlobalLightTintIntensity*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::IGlobalLightTintIntensity::set_globalLightTintIntensity(float_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::IGlobalLightTintIntensity*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
