#pragma once
// IWYU pragma private; include "GlobalNamespace\Parametric3SliceSpriteWidthEndFloatFxEffectTarget.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceSpriteWidthEndFloatFxEffectTarget_def.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceSpriteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::SetValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5997c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::*)(int32_t, int32_t, float_t)>(
    &::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::TriggerValue)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5997cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::*)()>(
    &::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5997d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>& GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_get__parametric3SliceSpriteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parametric3SliceSpriteController;
}
constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> const&
GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_get__parametric3SliceSpriteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parametric3SliceSpriteController;
}
constexpr void
GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_set__parametric3SliceSpriteController(::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parametric3SliceSpriteController = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_get__valueBounds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_get__valueBounds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueBounds;
}
constexpr void GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_set__valueBounds(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueBounds = value;
}
constexpr float_t& GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_get__valueMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueMultiplier;
}
constexpr float_t const& GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_get__valueMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valueMultiplier;
}
constexpr void GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::__cordl_internal_set__valueMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valueMultiplier = value;
}
inline void GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::SetValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::TriggerValue(int32_t groupId, int32_t elementId, float_t value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupId, elementId, value);
}
inline void GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget* GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Parametric3SliceSpriteWidthEndFloatFxEffectTarget::Parametric3SliceSpriteWidthEndFloatFxEffectTarget() {}
