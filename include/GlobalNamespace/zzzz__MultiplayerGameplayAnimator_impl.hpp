#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerGameplayAnimator.hpp"
#include "GlobalNamespace/zzzz__LightsAnimator_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeadPlayerProvider_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::Start)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59d78d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::OnDestroy)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x59d79a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.AnimateNewLeaderSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(bool)>(&::GlobalNamespace::MultiplayerGameplayAnimator::AnimateNewLeaderSelected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.HandleStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59d7c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator.HandleNewLeaderWasSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59d7e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), { "HandleNewLeaderWasSelected", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerGameplayAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerGameplayAnimator::*)()>(&::GlobalNamespace::MultiplayerGameplayAnimator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59d7f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__activeLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLightsColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__activeLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__activeLightsColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeLightsColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadingLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingLightsColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadingLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__leadingLightsColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leadingLightsColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__failedLightsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLightsColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__failedLightsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLightsColor;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__failedLightsColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedLightsColor = value;
}
constexpr float_t& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadingSwitchCrossFadeDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingSwitchCrossFadeDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadingSwitchCrossFadeDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadingSwitchCrossFadeDuration;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__leadingSwitchCrossFadeDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leadingSwitchCrossFadeDuration = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__gameplayLightsAnimators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLightsAnimators;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__gameplayLightsAnimators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLightsAnimators;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__gameplayLightsAnimators(::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayLightsAnimators = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__allLightsAnimators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLightsAnimators;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__allLightsAnimators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLightsAnimators;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__allLightsAnimators(::ArrayW<::UnityW<::GlobalNamespace::LightsAnimator>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allLightsAnimators = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadPlayerProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__leadPlayerProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leadPlayerProvider;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__leadPlayerProvider(::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leadPlayerProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerController = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get_tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get_tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set_tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tweeningManager = value;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get_connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_get_connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerGameplayAnimator::__cordl_internal_set_connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectedPlayer = value;
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::Start() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::AnimateNewLeaderSelected(bool isLeading) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeading);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::HandleStateChanged(::GlobalNamespace::MultiplayerController_State state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::HandleNewLeaderWasSelected(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), { "HandleNewLeaderWasSelected", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MultiplayerGameplayAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerGameplayAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerGameplayAnimator* GlobalNamespace::MultiplayerGameplayAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerGameplayAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerGameplayAnimator::MultiplayerGameplayAnimator() {}
