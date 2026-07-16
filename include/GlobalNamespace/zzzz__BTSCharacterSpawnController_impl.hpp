#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterSpawnController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterSpawnAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterSpawnEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.get_isCharacterVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::get_isCharacterVisible)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32842d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "get_isCharacterVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.get_isSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::get_isSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32842ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "get_isSpawned", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::Start)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x32842f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::OnDestroy)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x32847ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.HandleStartCharacterAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)(::GlobalNamespace::BTSCharacter*)>(
    &::GlobalNamespace::BTSCharacterSpawnController::HandleStartCharacterAnimation)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3284d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(),
                                                                                           { "HandleStartCharacterAnimation", {}, { ::i2c::type_of<::GlobalNamespace::BTSCharacter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.HandleGamePauseDidPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidPause)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3284dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleGamePauseDidPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.HandleGamePauseWillResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseWillResume)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3284e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleGamePauseWillResume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.HandleGamePauseDidResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidResume)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3284e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleGamePauseDidResume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.HandleLevelEndActionsLevelFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::HandleLevelEndActionsLevelFailed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3284e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleLevelEndActionsLevelFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController.HandleAnimationFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::HandleAnimationFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleAnimationFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnController::*)()>(&::GlobalNamespace::BTSCharacterSpawnController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3284ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnAnimationController>& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__characterSpawnAnimationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterSpawnAnimationController;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnAnimationController> const& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__characterSpawnAnimationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterSpawnAnimationController;
}
constexpr void GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_set__characterSpawnAnimationController(::UnityW<::GlobalNamespace::BTSCharacterSpawnAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characterSpawnAnimationController = value;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnEventEffect>& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__btsCharacterSpawnEventEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterSpawnEventEffect;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacterSpawnEventEffect> const& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__btsCharacterSpawnEventEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____btsCharacterSpawnEventEffect;
}
constexpr void GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_set__btsCharacterSpawnEventEffect(::UnityW<::GlobalNamespace::BTSCharacterSpawnEventEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____btsCharacterSpawnEventEffect = value;
}
constexpr ::GlobalNamespace::IGamePause*& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__gamePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr ::GlobalNamespace::IGamePause* const& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__gamePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr void GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gamePause = value;
}
constexpr ::GlobalNamespace::ILevelEndActions*& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__levelEndActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelEndActions;
}
constexpr ::GlobalNamespace::ILevelEndActions* const& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__levelEndActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelEndActions;
}
constexpr void GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_set__levelEndActions(::GlobalNamespace::ILevelEndActions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelEndActions = value;
}
constexpr bool& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__characterSpawned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterSpawned;
}
constexpr bool const& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__characterSpawned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterSpawned;
}
constexpr void GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_set__characterSpawned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characterSpawned = value;
}
constexpr double_t& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__playableDirectorTimeBeforePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playableDirectorTimeBeforePause;
}
constexpr double_t const& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__playableDirectorTimeBeforePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playableDirectorTimeBeforePause;
}
constexpr void GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_set__playableDirectorTimeBeforePause(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playableDirectorTimeBeforePause = value;
}
constexpr float_t& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__animatorNormalizedTimeBeforePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animatorNormalizedTimeBeforePause;
}
constexpr float_t const& GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_get__animatorNormalizedTimeBeforePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animatorNormalizedTimeBeforePause;
}
constexpr void GlobalNamespace::BTSCharacterSpawnController::__cordl_internal_set__animatorNormalizedTimeBeforePause(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animatorNormalizedTimeBeforePause = value;
}
inline bool GlobalNamespace::BTSCharacterSpawnController::get_isCharacterVisible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "get_isCharacterVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BTSCharacterSpawnController::get_isSpawned() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "get_isSpawned", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnController::HandleStartCharacterAnimation(::GlobalNamespace::BTSCharacter* btsCharacter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(),
                                                                                         { "HandleStartCharacterAnimation", {}, { ::i2c::type_of<::GlobalNamespace::BTSCharacter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, btsCharacter);
}
inline void GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidPause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleGamePauseDidPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseWillResume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleGamePauseWillResume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidResume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleGamePauseDidResume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnController::HandleLevelEndActionsLevelFailed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleLevelEndActionsLevelFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnController::HandleAnimationFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { "HandleAnimationFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterSpawnController* GlobalNamespace::BTSCharacterSpawnController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterSpawnController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterSpawnController::BTSCharacterSpawnController() {}
