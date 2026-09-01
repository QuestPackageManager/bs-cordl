#pragma once
// IWYU pragma private; include "GlobalNamespace\FlyingObjectEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.get_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* (::GlobalNamespace::FlyingObjectEffect::*)()>(
    &::GlobalNamespace::FlyingObjectEffect::get_didFinishEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5982888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), { "get_didFinishEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.InitAndPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)(float_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(
    &::GlobalNamespace::FlyingObjectEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5982890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(),
                            { "InitAndPresent", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)()>(&::GlobalNamespace::FlyingObjectEffect::Update)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5982978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)(float_t)>(&::GlobalNamespace::FlyingObjectEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), { ::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingObjectEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingObjectEffect::*)()>(&::GlobalNamespace::FlyingObjectEffect::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5982d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__moveAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__moveAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveAnimationCurve;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__moveAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveAnimationCurve = value;
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shakeFrequency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeFrequency;
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shakeFrequency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeFrequency;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__shakeFrequency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shakeFrequency = value;
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shakeStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeStrength;
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shakeStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeStrength;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__shakeStrength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shakeStrength = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shakeStrengthAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeStrengthAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shakeStrengthAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeStrengthAnimationCurve;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__shakeStrengthAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shakeStrengthAnimationCurve = value;
}
constexpr bool& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shakeRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shakeRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shakeRotation;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__shakeRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shakeRotation = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__rotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation = value;
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__elapsedTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime;
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__elapsedTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__elapsedTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__startPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__startPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPos;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__startPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__targetPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__targetPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetPos;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__targetPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetPos = value;
}
constexpr float_t& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr bool& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr bool const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__shake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shake;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__shake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shake = value;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* const& GlobalNamespace::FlyingObjectEffect::__cordl_internal_get__didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didFinishEvent;
}
constexpr void GlobalNamespace::FlyingObjectEffect::__cordl_internal_set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didFinishEvent = value;
}
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>* GlobalNamespace::FlyingObjectEffect::get_didFinishEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), { "get_didFinishEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>*>(this, ___internal_method);
}
inline void GlobalNamespace::FlyingObjectEffect::InitAndPresent(float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, bool shake) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(),
                          { "InitAndPresent", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration, targetPos, rotation, shake);
}
inline void GlobalNamespace::FlyingObjectEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlyingObjectEffect::ManualUpdate(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::FlyingObjectEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingObjectEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlyingObjectEffect* GlobalNamespace::FlyingObjectEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlyingObjectEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingObjectEffect::FlyingObjectEffect() {}
