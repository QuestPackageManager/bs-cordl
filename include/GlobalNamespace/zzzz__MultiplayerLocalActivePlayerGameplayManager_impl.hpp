#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLocalActivePlayerGameplayManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerInGameMenuController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalPlayerDisconnectHelper_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData::*)(bool)>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581c650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData::__cordl_internal_get_continueGameplayWith0Energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continueGameplayWith0Energy;
}
constexpr bool const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData::__cordl_internal_get_continueGameplayWith0Energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continueGameplayWith0Energy;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData::__cordl_internal_set_continueGameplayWith0Energy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___continueGameplayWith0Energy = value;
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData::_ctor(bool continueGameplayWith0Energy) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continueGameplayWith0Energy);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData::New_ctor(bool continueGameplayWith0Energy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData*>(continueGameplayWith0Energy));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData::MultiplayerLocalActivePlayerGameplayManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::Start)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x581b3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnDisable)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x581b938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "OnDisable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.PerformPlayerFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerFail)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x581bec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "PerformPlayerFail",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.PerformPlayerGivenUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerGivenUp)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x581c10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "PerformPlayerGivenUp",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleGameEnergyDidReach0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleGameEnergyDidReach0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x581c358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                                 "HandleGameEnergyDidReach0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleInGameMenuControllerDidGiveUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerDidGiveUp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x581c378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                                 "HandleInGameMenuControllerDidGiveUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleInGameMenuControllerRequestsDisconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerRequestsDisconnect)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x581c37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                                 "HandleInGameMenuControllerRequestsDisconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleSongDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleSongDidFinish)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x581c3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "HandleSongDidFinish",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleHmdUnmounted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleHmdUnmounted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x581c600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "HandleHmdUnmounted",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleVrFocusWasCapturedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleVrFocusWasCapturedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x581c604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                                 "HandleVrFocusWasCapturedEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleInputFocusCaptured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x581b91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                                 "HandleInputFocusCaptured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.HandleInputFocusReleased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x581c608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                                 "HandleInputFocusReleased", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)(bool)>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x581c640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "OnApplicationFocus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x581c64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameSongController>& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__gameSongController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSongController;
}
constexpr ::UnityW<::GlobalNamespace::GameSongController> const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__gameSongController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSongController;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameSongController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener*& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__multiplayerLevelEndActions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelEndActions;
}
constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__multiplayerLevelEndActions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelEndActions;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__multiplayerLevelEndActions(::GlobalNamespace::IMultiplayerLevelEndActionsListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLevelEndActions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__prepareLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__prepareLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prepareLevelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__gameEnergyCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__gameEnergyCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameEnergyCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController>& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__inGameMenuController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inGameMenuController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController> const&
GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__inGameMenuController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inGameMenuController;
}
constexpr void
GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__inGameMenuController(::UnityW<::GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inGameMenuController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__platformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__platformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformHelper;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__platformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__disconnectHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectHelper;
}
constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__disconnectHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectHelper;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disconnectHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData*& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData* const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__initData(::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__levelFinishedOrQuit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFinishedOrQuit;
}
constexpr bool const& GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_get__levelFinishedOrQuit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFinishedOrQuit;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::__cordl_internal_set__levelFinishedOrQuit(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelFinishedOrQuit = value;
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "OnDisable",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerFail() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "PerformPlayerFail",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::PerformPlayerGivenUp() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "PerformPlayerGivenUp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleGameEnergyDidReach0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                               "HandleGameEnergyDidReach0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerDidGiveUp() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                               "HandleInGameMenuControllerDidGiveUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInGameMenuControllerRequestsDisconnect() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                               "HandleInGameMenuControllerRequestsDisconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleSongDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "HandleSongDidFinish",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleHmdUnmounted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "HandleHmdUnmounted",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleVrFocusWasCapturedEvent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                               "HandleVrFocusWasCapturedEvent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusCaptured() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                               "HandleInputFocusCaptured", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::HandleInputFocusReleased() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(),
                                               "HandleInputFocusReleased", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::OnApplicationFocus(bool hasFocus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), "OnApplicationFocus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasFocus);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager* GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::MultiplayerLocalActivePlayerGameplayManager() {}
