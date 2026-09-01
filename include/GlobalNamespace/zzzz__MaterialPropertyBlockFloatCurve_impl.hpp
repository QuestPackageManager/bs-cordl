#pragma once
// IWYU pragma private; include "GlobalNamespace\MaterialPropertyBlockFloatCurve.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockFloatCurve_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockFloatCurve.SetProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockFloatCurve::*)()>(&::GlobalNamespace::MaterialPropertyBlockFloatCurve::SetProperty)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5872368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>(), { ::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockFloatCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockFloatCurve::*)()>(&::GlobalNamespace::MaterialPropertyBlockFloatCurve::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5872418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_get__curve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_get__curve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curve;
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_set__curve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curve = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_get__valueMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_get__valueMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueMultiplier;
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_set__valueMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueMultiplier = value;
}
constexpr float_t& GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_get__speedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedMultiplier;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_get__speedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speedMultiplier;
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatCurve::__cordl_internal_set__speedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speedMultiplier = value;
}
inline void GlobalNamespace::MaterialPropertyBlockFloatCurve::SetProperty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyBlockFloatCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockFloatCurve* GlobalNamespace::MaterialPropertyBlockFloatCurve::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MaterialPropertyBlockFloatCurve*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockFloatCurve::MaterialPropertyBlockFloatCurve() {}
