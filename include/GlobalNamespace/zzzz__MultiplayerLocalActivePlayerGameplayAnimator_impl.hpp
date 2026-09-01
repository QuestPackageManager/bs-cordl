#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLocalActivePlayerGameplayAnimator.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameplayAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerGameplayAnimator_def.hpp"
#include "GlobalNamespace/zzzz__CoreGameHUDController_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsPublisher_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPositionHUDController_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59c6180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator.InitializeIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::InitializeIfNeeded)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x59c628c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), { "InitializeIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator.HandleStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::HandleStateChanged)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x59c63d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator.AnimateNewLeaderSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::*)(bool)>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::AnimateNewLeaderSelected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59c6630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator.TransitionIntoFailedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::TransitionIntoFailedState)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59c658c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), { "TransitionIntoFailedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator.HandlePlayerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::HandlePlayerDidFinish)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59c6700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(),
                                                             { "HandlePlayerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59c6724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator._InitializeIfNeeded_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::*)(float_t)>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::_InitializeIfNeeded_b__6_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59c6734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), { "<InitializeIfNeeded>b__6_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::CoreGameHUDController>& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__coreGameHUDController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coreGameHUDController;
}
constexpr ::UnityW<::GlobalNamespace::CoreGameHUDController> const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__coreGameHUDController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coreGameHUDController;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_set__coreGameHUDController(::UnityW<::GlobalNamespace::CoreGameHUDController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coreGameHUDController = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPositionHUDController>& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__multiplayerPositionHUDController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPositionHUDController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPositionHUDController> const&
GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__multiplayerPositionHUDController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPositionHUDController;
}
constexpr void
GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_set__multiplayerPositionHUDController(::UnityW<::GlobalNamespace::MultiplayerPositionHUDController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerPositionHUDController = value;
}
constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__levelEndActionsPublisher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelEndActionsPublisher;
}
constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__levelEndActionsPublisher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelEndActionsPublisher;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_set__levelEndActionsPublisher(::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelEndActionsPublisher = value;
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__fadeOutHUDTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutHUDTween;
}
constexpr ::Tweening::FloatTween* const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__fadeOutHUDTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutHUDTween;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_set__fadeOutHUDTween(::Tweening::FloatTween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutHUDTween = value;
}
constexpr bool& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::InitializeIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), { "InitializeIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::HandleStateChanged(::GlobalNamespace::MultiplayerController_State state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::AnimateNewLeaderSelected(bool isLeading) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeading);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::TransitionIntoFailedState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), { "TransitionIntoFailedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::HandlePlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(),
                                                           { "HandlePlayerDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::_InitializeIfNeeded_b__6_0(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>(), { "<InitializeIfNeeded>b__6_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator* GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayAnimator::MultiplayerLocalActivePlayerGameplayAnimator() {}
