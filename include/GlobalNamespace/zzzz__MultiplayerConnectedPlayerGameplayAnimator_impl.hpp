#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerGameplayAnimator.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameplayAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBigAvatarAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerLevelFailController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSpectatingSpot_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__ScaleAnimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::Start)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59baec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::OnDestroy)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x59bafa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator.TransitionIntoFailedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::TransitionIntoFailedState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59bb22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), { "TransitionIntoFailedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator.AnimateNewLeaderSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)(bool)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::AnimateNewLeaderSelected)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x59bb424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator.HandleStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandleStateChanged)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59bb558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator.HandlePlayerDidFail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandlePlayerDidFail)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bb750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), { "HandlePlayerDidFail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator.HandleIsObservedChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)(bool)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandleIsObservedChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59bb754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), { "HandleIsObservedChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59bb810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator>& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__bigAvatarAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigAvatarAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> const& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__bigAvatarAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bigAvatarAnimator;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_set__bigAvatarAnimator(::UnityW<::GlobalNamespace::MultiplayerBigAvatarAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bigAvatarAnimator = value;
}
constexpr ::UnityW<::GlobalNamespace::ScaleAnimator>& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__avatarScaleAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarScaleAnimator;
}
constexpr ::UnityW<::GlobalNamespace::ScaleAnimator> const& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__avatarScaleAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarScaleAnimator;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_set__avatarScaleAnimator(::UnityW<::GlobalNamespace::ScaleAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarScaleAnimator = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__defaultLightsWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsWidth;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__defaultLightsWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLightsWidth;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_set__defaultLightsWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultLightsWidth = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__observedLightsWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____observedLightsWidth;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__observedLightsWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____observedLightsWidth;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_set__observedLightsWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____observedLightsWidth = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController>& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__failController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> const& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__failController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failController;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_set__failController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failController = value;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__multiplayerLayoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLayoutProvider;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__multiplayerLayoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLayoutProvider;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_set__multiplayerLayoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLayoutProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot>& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__playerSpectatingSpot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpectatingSpot;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot> const& GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_get__playerSpectatingSpot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpectatingSpot;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::__cordl_internal_set__playerSpectatingSpot(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerSpectatingSpot = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::Start() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::TransitionIntoFailedState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), { "TransitionIntoFailedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::AnimateNewLeaderSelected(bool isLeading) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeading);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandleStateChanged(::GlobalNamespace::MultiplayerController_State state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandlePlayerDidFail() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), { "HandlePlayerDidFail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::HandleIsObservedChanged(bool isObserved) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), { "HandleIsObservedChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isObserved);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator* GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator::MultiplayerConnectedPlayerGameplayAnimator() {}
