#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerDuelConnectedPlayerGameplayAnimator.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerDuelConnectedPlayerGameplayAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerLevelFailController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__ScaleAnimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::OnDestroy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x59b67e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator.TransitionIntoFailedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::TransitionIntoFailedState)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59b68fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), { "TransitionIntoFailedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator.AnimateNewLeaderSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)(bool)>(
    &::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::AnimateNewLeaderSelected)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59b69c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator.HandleStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::HandleStateChanged)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59b6a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator.HandlePlayerDidFail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::HandlePlayerDidFail)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b6bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), { "HandlePlayerDidFail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59b6bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ScaleAnimator>& GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::__cordl_internal_get__avatarScaleAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarScaleAnimator;
}
constexpr ::UnityW<::GlobalNamespace::ScaleAnimator> const& GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::__cordl_internal_get__avatarScaleAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarScaleAnimator;
}
constexpr void GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::__cordl_internal_set__avatarScaleAnimator(::UnityW<::GlobalNamespace::ScaleAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarScaleAnimator = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController>& GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::__cordl_internal_get__failController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> const&
GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::__cordl_internal_get__failController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failController;
}
constexpr void GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::__cordl_internal_set__failController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerLevelFailController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failController = value;
}
inline void GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::TransitionIntoFailedState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), { "TransitionIntoFailedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::AnimateNewLeaderSelected(bool isLeading) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeading);
}
inline void GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::HandleStateChanged(::GlobalNamespace::MultiplayerController_State state) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::HandlePlayerDidFail() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), { "HandlePlayerDidFail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator* GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerDuelConnectedPlayerGameplayAnimator::MultiplayerDuelConnectedPlayerGameplayAnimator() {}
