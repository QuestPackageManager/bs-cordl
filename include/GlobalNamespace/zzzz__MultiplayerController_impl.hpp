#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerController.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerIntroAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelFinishedController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOutroAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__SceneStartSyncController_def.hpp"
#include "GlobalNamespace/zzzz__SongStartSyncController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerController_State::MultiplayerController_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerController_State::MultiplayerController_State() {}
constexpr ::GlobalNamespace::MultiplayerController_State GlobalNamespace::MultiplayerController_State::CheckingLobbyState{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MultiplayerController_State GlobalNamespace::MultiplayerController_State::WaitingForPlayers{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MultiplayerController_State GlobalNamespace::MultiplayerController_State::SongStartSync{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::MultiplayerController_State GlobalNamespace::MultiplayerController_State::Intro{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::MultiplayerController_State GlobalNamespace::MultiplayerController_State::Gameplay{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::MultiplayerController_State GlobalNamespace::MultiplayerController_State::Outro{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::MultiplayerController_State GlobalNamespace::MultiplayerController_State::Finished{ static_cast<int32_t>(0x6) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController___c::*)()>(&::GlobalNamespace::MultiplayerController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ce508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController___c._EndGameplay_b__50_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerController___c::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::MultiplayerController___c::_EndGameplay_b__50_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59ce50c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController___c*>(),
                                                             { "<EndGameplay>b__50_0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerController___c::setStaticF___9(::GlobalNamespace::MultiplayerController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiplayerController___c*, "<>9", ::GlobalNamespace::MultiplayerController___c*>(
      std::forward<::GlobalNamespace::MultiplayerController___c*>(value));
}
inline ::GlobalNamespace::MultiplayerController___c* GlobalNamespace::MultiplayerController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiplayerController___c*, "<>9", ::GlobalNamespace::MultiplayerController___c*>();
}
inline void GlobalNamespace::MultiplayerController___c::setStaticF___9__50_0(::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>*, "<>9__50_0", ::GlobalNamespace::MultiplayerController___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>* GlobalNamespace::MultiplayerController___c::getStaticF___9__50_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::MultiplayerLevelCompletionResults*, bool>*, "<>9__50_0", ::GlobalNamespace::MultiplayerController___c*>();
}
inline void GlobalNamespace::MultiplayerController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerController___c::_EndGameplay_b__50_0(::GlobalNamespace::MultiplayerLevelCompletionResults* result) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController___c*>(),
                                                                                         { "<EndGameplay>b__50_0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MultiplayerController___c* GlobalNamespace::MultiplayerController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerController___c::MultiplayerController___c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController___c__DisplayClass45_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController___c__DisplayClass45_0::*)()>(
    &::GlobalNamespace::MultiplayerController___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ccd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController___c__DisplayClass45_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController___c__DisplayClass45_0._HandleSongStartSyncControllerSyncStartSuccess_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController___c__DisplayClass45_0::*)()>(
    &::GlobalNamespace::MultiplayerController___c__DisplayClass45_0::_HandleSongStartSyncControllerSyncStartSuccess_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59ce528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController___c__DisplayClass45_0*>(), { "<HandleSongStartSyncControllerSyncStartSuccess>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerController___c__DisplayClass45_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerController___c__DisplayClass45_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MultiplayerController___c__DisplayClass45_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerController___c__DisplayClass45_0::__cordl_internal_get_introAnimationStartSyncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___introAnimationStartSyncTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerController___c__DisplayClass45_0::__cordl_internal_get_introAnimationStartSyncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___introAnimationStartSyncTime;
}
constexpr void GlobalNamespace::MultiplayerController___c__DisplayClass45_0::__cordl_internal_set_introAnimationStartSyncTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___introAnimationStartSyncTime = value;
}
inline void GlobalNamespace::MultiplayerController___c__DisplayClass45_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController___c__DisplayClass45_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController___c__DisplayClass45_0::_HandleSongStartSyncControllerSyncStartSuccess_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController___c__DisplayClass45_0*>(), { "<HandleSongStartSyncControllerSyncStartSuccess>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerController___c__DisplayClass45_0* GlobalNamespace::MultiplayerController___c__DisplayClass45_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerController___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerController___c__DisplayClass45_0::MultiplayerController___c__DisplayClass45_0() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cc37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::*)()>(
    &::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ce544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::*)()>(
    &::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::MoveNext)> {
  constexpr static std::size_t size = 0xa30;
  constexpr static std::size_t addrs = 0x59ce548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::*)()>(
    &::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cfe58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::*)()>(
    &::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59cfe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::*)()>(
    &::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cfe98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get_localPlayerSyncState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPlayerSyncState;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get_localPlayerSyncState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPlayerSyncState;
}
constexpr void GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_set_localPlayerSyncState(::GlobalNamespace::MultiplayerPlayerStartState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localPlayerSyncState = value;
}
constexpr ::GlobalNamespace::IStartSeekSongController*& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get__songController_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songController_5__2;
}
constexpr ::GlobalNamespace::IStartSeekSongController* const& GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_get__songController_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songController_5__2;
}
constexpr void GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::__cordl_internal_set__songController_5__2(::GlobalNamespace::IStartSeekSongController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songController_5__2 = value;
}
inline void GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39* GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerController__PerformSongStartSync_d__39::MultiplayerController__PerformSongStartSync_d__39() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerController_State (::GlobalNamespace::MultiplayerController::*)()>(
    &::GlobalNamespace::MultiplayerController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cac28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.add_stateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::System::Action_1<::GlobalNamespace::MultiplayerController_State>*)>(
    &::GlobalNamespace::MultiplayerController::add_stateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59cac30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                             { "add_stateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerController_State>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.remove_stateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::System::Action_1<::GlobalNamespace::MultiplayerController_State>*)>(
    &::GlobalNamespace::MultiplayerController::remove_stateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59cacf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                             { "remove_stateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerController_State>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::Start)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x59cadb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::OnDestroy)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x59cb6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleIsDisconnectedDuringLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleIsDisconnectedDuringLoading)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cbecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleIsDisconnectedDuringLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::StringW, ::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::MultiplayerController::HandleSetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x59cbf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                             { "HandleSetMultiplayerGameState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.CreateAndBindPlayersSpecificSettingsAtGameStartModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(
    &::GlobalNamespace::MultiplayerController::CreateAndBindPlayersSpecificSettingsAtGameStartModel)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x59cb268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "CreateAndBindPlayersSpecificSettingsAtGameStartModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.StartSceneLoadSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::StartSceneLoadSync)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x59cc164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "StartSceneLoadSync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.PerformSongStartSync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MultiplayerController::*)(::GlobalNamespace::MultiplayerPlayerStartState)>(
    &::GlobalNamespace::MultiplayerController::PerformSongStartSync)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59cc318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                                                           { "PerformSongStartSync", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerStartState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleDidSwitchPlayerToInactive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleDidSwitchPlayerToInactive)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x59cc384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleDidSwitchPlayerToInactive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidSuccess)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59cc5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSceneStartSyncControllerSyncStartDidSuccess", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidReceiveTooLate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidReceiveTooLate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59cc618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                                                           { "HandleSceneStartSyncControllerSyncStartDidReceiveTooLate", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleInitialGetGameStateFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleInitialGetGameStateFailed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x59cc640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleInitialGetGameStateFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSceneStartSyncControllerSyncStartDidFail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(
    &::GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidFail)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59cc730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSceneStartSyncControllerSyncStartDidFail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncStartSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(int64_t)>(
    &::GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartSuccess)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x59cca80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSongStartSyncControllerSyncStartSuccess", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(int64_t)>(
    &::GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncResume)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x59cdb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSongStartSyncControllerSyncResume", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleSongStartSyncControllerSyncStartFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartFailed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59ce050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSongStartSyncControllerSyncStartFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.StartGameplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(int64_t)>(&::GlobalNamespace::MultiplayerController::StartGameplay)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0x59cd2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "StartGameplay", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleAllResultsCollected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::MultiplayerController::HandleAllResultsCollected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ce0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                { "HandleAllResultsCollected",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.EndGameplay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::MultiplayerController::EndGameplay)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x59cc7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                { "EndGameplay",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleOutroAnimationDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::HandleOutroAnimationDidFinish)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x59ce2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleOutroAnimationDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleRpcReturnToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::StringW)>(&::GlobalNamespace::MultiplayerController::HandleRpcReturnToMenu)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x59ce308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleRpcReturnToMenu", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.HandleDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::MultiplayerController::HandleDisconnected)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x59cbed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.ChangeState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerController::ChangeState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59cb6a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "ChangeState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.GetCurrentSongTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerController::*)(int64_t)>(&::GlobalNamespace::MultiplayerController::GetCurrentSongTime)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59cc524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "GetCurrentSongTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController.GetSongStartSyncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MultiplayerController::*)(int64_t)>(&::GlobalNamespace::MultiplayerController::GetSongStartSyncTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59cc4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "GetSongStartSyncTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerController::*)()>(&::GlobalNamespace::MultiplayerController::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59ce49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerController::__cordl_internal_get__loadingEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingEnvironment;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__loadingEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingEnvironment;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__loadingEnvironment(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loadingEnvironment = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& GlobalNamespace::MultiplayerController::__cordl_internal_get__multiplayerLevelSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelSceneSetupData;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__multiplayerLevelSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelSceneSetupData;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__multiplayerLevelSceneSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelSceneSetupData = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::MultiplayerController::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerController::__cordl_internal_get__playersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__playersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersManager;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__playersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersManager = value;
}
constexpr ::UnityW<::GlobalNamespace::SceneStartSyncController>& GlobalNamespace::MultiplayerController::__cordl_internal_get__sceneStartSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneStartSyncController;
}
constexpr ::UnityW<::GlobalNamespace::SceneStartSyncController> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__sceneStartSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneStartSyncController;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__sceneStartSyncController(::UnityW<::GlobalNamespace::SceneStartSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneStartSyncController = value;
}
constexpr ::UnityW<::GlobalNamespace::SongStartSyncController>& GlobalNamespace::MultiplayerController::__cordl_internal_get__songStartSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartSyncController;
}
constexpr ::UnityW<::GlobalNamespace::SongStartSyncController> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__songStartSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartSyncController;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__songStartSyncController(::UnityW<::GlobalNamespace::SongStartSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songStartSyncController = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController>& GlobalNamespace::MultiplayerController::__cordl_internal_get__multiplayerLevelFinishedController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelFinishedController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__multiplayerLevelFinishedController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelFinishedController;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__multiplayerLevelFinishedController(::UnityW<::GlobalNamespace::MultiplayerLevelFinishedController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelFinishedController = value;
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& GlobalNamespace::MultiplayerController::__cordl_internal_get__fadeInOutController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOutController;
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__fadeInOutController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOutController;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__fadeInOutController(::UnityW<::GlobalNamespace::FadeInOutController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInOutController = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerIntroAnimationController>& GlobalNamespace::MultiplayerController::__cordl_internal_get__introAnimationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introAnimationController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerIntroAnimationController> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__introAnimationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introAnimationController;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__introAnimationController(::UnityW<::GlobalNamespace::MultiplayerIntroAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____introAnimationController = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerOutroAnimationController>& GlobalNamespace::MultiplayerController::__cordl_internal_get__outroAnimationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroAnimationController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerOutroAnimationController> const& GlobalNamespace::MultiplayerController::__cordl_internal_get__outroAnimationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroAnimationController;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__outroAnimationController(::UnityW<::GlobalNamespace::MultiplayerOutroAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outroAnimationController = value;
}
constexpr ::GlobalNamespace::IMenuRpcManager*& GlobalNamespace::MultiplayerController::__cordl_internal_get__menuRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager;
}
constexpr ::GlobalNamespace::IMenuRpcManager* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__menuRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuRpcManager = value;
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::MultiplayerController::__cordl_internal_get__gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr ::GlobalNamespace::IGameplayRpcManager* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayRpcManager = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::MultiplayerController::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
constexpr ::Zenject::DiContainer*& GlobalNamespace::MultiplayerController::__cordl_internal_get__diContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____diContainer;
}
constexpr ::Zenject::DiContainer* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__diContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____diContainer;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__diContainer(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____diContainer = value;
}
constexpr ::GlobalNamespace::MultiplayerBadgesProvider*& GlobalNamespace::MultiplayerController::__cordl_internal_get__badgesProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgesProvider;
}
constexpr ::GlobalNamespace::MultiplayerBadgesProvider* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__badgesProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgesProvider;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__badgesProvider(::GlobalNamespace::MultiplayerBadgesProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badgesProvider = value;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerController_State>*& GlobalNamespace::MultiplayerController::__cordl_internal_get_stateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerController_State>* const& GlobalNamespace::MultiplayerController::__cordl_internal_get_stateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateChangedEvent;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set_stateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerController_State>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stateChangedEvent = value;
}
constexpr float_t& GlobalNamespace::MultiplayerController::__cordl_internal_get__startTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr float_t const& GlobalNamespace::MultiplayerController::__cordl_internal_get__startTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__startTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime = value;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState& GlobalNamespace::MultiplayerController::__cordl_internal_get__localPlayerSyncStartState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerSyncStartState;
}
constexpr ::GlobalNamespace::MultiplayerPlayerStartState const& GlobalNamespace::MultiplayerController::__cordl_internal_get__localPlayerSyncStartState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerSyncStartState;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__localPlayerSyncStartState(::GlobalNamespace::MultiplayerPlayerStartState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerSyncStartState = value;
}
constexpr ::GlobalNamespace::MultiplayerController_State& GlobalNamespace::MultiplayerController::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::MultiplayerController_State const& GlobalNamespace::MultiplayerController::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__state(::GlobalNamespace::MultiplayerController_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerController::__cordl_internal_get__sessionGameId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionGameId;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerController::__cordl_internal_get__sessionGameId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sessionGameId;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__sessionGameId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sessionGameId = value;
}
constexpr ::GlobalNamespace::MultiplayerResultsData*& GlobalNamespace::MultiplayerController::__cordl_internal_get__resultsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsData;
}
constexpr ::GlobalNamespace::MultiplayerResultsData* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__resultsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsData;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__resultsData(::GlobalNamespace::MultiplayerResultsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resultsData = value;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& GlobalNamespace::MultiplayerController::__cordl_internal_get__playersSpecificSettingsAtGameStartModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpecificSettingsAtGameStartModel;
}
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__playersSpecificSettingsAtGameStartModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpecificSettingsAtGameStartModel;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__playersSpecificSettingsAtGameStartModel(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersSpecificSettingsAtGameStartModel = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::MultiplayerController::__cordl_internal_get__timeoutGetGameStateCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeoutGetGameStateCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::MultiplayerController::__cordl_internal_get__timeoutGetGameStateCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeoutGetGameStateCoroutine;
}
constexpr void GlobalNamespace::MultiplayerController::__cordl_internal_set__timeoutGetGameStateCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeoutGetGameStateCoroutine = value;
}
inline ::GlobalNamespace::MultiplayerController_State GlobalNamespace::MultiplayerController::get_state() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerController_State>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::add_stateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerController_State>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                           { "add_stateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerController_State>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerController::remove_stateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerController_State>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                           { "remove_stateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerController_State>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleIsDisconnectedDuringLoading() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleIsDisconnectedDuringLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState gameState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                           { "HandleSetMultiplayerGameState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, gameState);
}
inline void GlobalNamespace::MultiplayerController::CreateAndBindPlayersSpecificSettingsAtGameStartModel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "CreateAndBindPlayersSpecificSettingsAtGameStartModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::StartSceneLoadSync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "StartSceneLoadSync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MultiplayerController::PerformSongStartSync(::GlobalNamespace::MultiplayerPlayerStartState localPlayerSyncState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                                                         { "PerformSongStartSync", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerPlayerStartState>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, localPlayerSyncState);
}
inline void GlobalNamespace::MultiplayerController::HandleDidSwitchPlayerToInactive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleDidSwitchPlayerToInactive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidSuccess(::StringW sessionGameId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSceneStartSyncControllerSyncStartDidSuccess", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionGameId);
}
inline void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidReceiveTooLate(::StringW sessionGameId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                                                         { "HandleSceneStartSyncControllerSyncStartDidReceiveTooLate", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionGameId);
}
inline void GlobalNamespace::MultiplayerController::HandleInitialGetGameStateFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleInitialGetGameStateFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleSceneStartSyncControllerSyncStartDidFail() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSceneStartSyncControllerSyncStartDidFail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartSuccess(int64_t introAnimationStartSyncTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSongStartSyncControllerSyncStartSuccess", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, introAnimationStartSyncTime);
}
inline void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncResume(int64_t introAnimationStartSyncTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSongStartSyncControllerSyncResume", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, introAnimationStartSyncTime);
}
inline void GlobalNamespace::MultiplayerController::HandleSongStartSyncControllerSyncStartFailed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleSongStartSyncControllerSyncStartFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::StartGameplay(int64_t introAnimationStartSyncTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "StartGameplay", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, introAnimationStartSyncTime);
}
inline void
GlobalNamespace::MultiplayerController::HandleAllResultsCollected(::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults,
                                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayerResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                           { "HandleAllResultsCollected",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPlayerResults, otherPlayerResults);
}
inline void GlobalNamespace::MultiplayerController::EndGameplay(::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResults,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayerResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(),
                                                           { "EndGameplay",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPlayerResults, otherPlayerResults);
}
inline void GlobalNamespace::MultiplayerController::HandleOutroAnimationDidFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleOutroAnimationDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerController::HandleRpcReturnToMenu(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleRpcReturnToMenu", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MultiplayerController::HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "HandleDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::MultiplayerController::ChangeState(::GlobalNamespace::MultiplayerController_State newState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "ChangeState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline float_t GlobalNamespace::MultiplayerController::GetCurrentSongTime(int64_t songStartSyncTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "GetCurrentSongTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, songStartSyncTime);
}
inline int64_t GlobalNamespace::MultiplayerController::GetSongStartSyncTime(int64_t introAnimationStartSyncTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { "GetSongStartSyncTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, introAnimationStartSyncTime);
}
inline void GlobalNamespace::MultiplayerController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerController* GlobalNamespace::MultiplayerController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerController::MultiplayerController() {}
