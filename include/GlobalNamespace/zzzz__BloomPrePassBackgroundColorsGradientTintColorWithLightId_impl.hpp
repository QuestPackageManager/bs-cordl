#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundColorsGradientTintColorWithLightId.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientTintColorWithLightId_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x586ed14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::*)()>(
    &::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x586ed88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient>&
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_get__bloomPrePassBackgroundColorsGradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> const&
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_get__bloomPrePassBackgroundColorsGradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomPrePassBackgroundColorsGradient;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_set__bloomPrePassBackgroundColorsGradient(
    ::UnityW<::GlobalNamespace::BloomPrePassBackgroundColorsGradient> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomPrePassBackgroundColorsGradient = value;
}
constexpr bool& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_get__useGrayscale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGrayscale;
}
constexpr bool const& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_get__useGrayscale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGrayscale;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_set__useGrayscale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useGrayscale = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_get_grayscaleFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___grayscaleFactor;
}
constexpr float_t const& GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_get_grayscaleFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___grayscaleFactor;
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__cordl_internal_set_grayscaleFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___grayscaleFactor = value;
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId* GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::BloomPrePassBackgroundColorsGradientTintColorWithLightId() {}
