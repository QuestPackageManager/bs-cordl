#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyCenterScreenLayoutAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterScreenLayoutAnimator_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.StartCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StartCountdown)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a09a10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(), { "StartCountdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.StopCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(bool)>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StopCountdown)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a09c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(), { "StopCountdown", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator.Move
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::Move)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5a09a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(),
                                                             { "Move", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a09cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator._Move_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_Move_b__7_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a09cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(), { "<Move>b__7_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__nextLevelTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__nextLevelTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelTransform;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_set__nextLevelTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextLevelTransform = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__nextLevelBasePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelBasePosition;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__nextLevelBasePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelBasePosition;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_set__nextLevelBasePosition(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextLevelBasePosition = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__nextLevelCountdownPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelCountdownPosition;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__nextLevelCountdownPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLevelCountdownPosition;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_set__nextLevelCountdownPosition(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextLevelCountdownPosition = value;
}
constexpr float_t& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__transitionDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__transitionDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transitionDuration;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_set__transitionDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transitionDuration = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StartCountdown() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(), { "StartCountdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::StopCountdown(bool instant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(), { "StopCountdown", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instant);
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::Move(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(),
                                                           { "Move", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, duration);
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::_Move_b__7_0(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>(), { "<Move>b__7_0", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator* GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator::MultiplayerLobbyCenterScreenLayoutAnimator() {}
