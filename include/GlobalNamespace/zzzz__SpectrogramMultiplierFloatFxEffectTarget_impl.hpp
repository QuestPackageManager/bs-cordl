#pragma once
// IWYU pragma private; include "GlobalNamespace/SpectrogramMultiplierFloatFxEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__SpectrogramMultiplierFloatFxEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__SpectrogramRowPropertyAnimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x598f938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x598f9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::*)()>(&::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598fa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator>& GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::__cordl_internal_get__spectrogram() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogram;
}
constexpr ::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator> const& GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::__cordl_internal_get__spectrogram() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectrogram;
}
constexpr void GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::__cordl_internal_set__spectrogram(::UnityW<::GlobalNamespace::SpectrogramRowPropertyAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectrogram = value;
}
inline void GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget* GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpectrogramMultiplierFloatFxEffectTarget::SpectrogramMultiplierFloatFxEffectTarget() {}
