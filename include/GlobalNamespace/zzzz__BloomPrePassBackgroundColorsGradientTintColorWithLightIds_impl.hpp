#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradientTintColorWithLightIds.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientTintColorWithLightIds_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586edb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x586edcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>&
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__cordl_internal_get__bloomPrePassBackgroundColorsGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const&
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__cordl_internal_get__bloomPrePassBackgroundColorsGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__cordl_internal_set__bloomPrePassBackgroundColorsGradient(
    ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassBackgroundColorsGradient = value;
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds* GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::BloomPrePassBackgroundColorsGradientTintColorWithLightIds() {}
