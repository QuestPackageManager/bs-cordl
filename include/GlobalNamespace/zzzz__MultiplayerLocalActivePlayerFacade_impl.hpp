#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerFacade_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerIntroAnimator_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsPublisher_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksUpdater_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongControllerProvider_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActivePlayerFacade_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_introAnimator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* (
    ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23da6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "get_introAnimator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_outroAnimator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23da6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "get_outroAnimator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_songController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IStartSeekSongController* (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23da6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "get_songController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.get_currentLocalPlayerLevelCompletionResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_currentLocalPlayerLevelCompletionResult)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23da6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "get_currentLocalPlayerLevelCompletionResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.add_playerDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23da71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "add_playerDidFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.remove_playerDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23da7cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "remove_playerDidFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.add_playerNetworkDidFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23da87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "add_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.remove_playerNetworkDidFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x23da92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "remove_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ReportPlayerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23da9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "ReportPlayerDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ReportPlayerNetworkDidFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23da9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "ReportPlayerNetworkDidFailed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.DisablePlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x23daa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "DisablePlayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.PauseSpawning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23daa78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "PauseSpawning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.ResumeSpawning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23daa94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "ResumeSpawning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.__ForceStopSong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23daab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "__ForceStopSong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade.__GetActiveOnlyGameObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> (
    ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23daae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               "__GetActiveOnlyGameObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActivePlayerFacade._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalActivePlayerFacade::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23daaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
constexpr GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
constexpr GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
constexpr GlobalNamespace::MultiplayerLocalActivePlayerFacade::operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongControllerProvider*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__activeOnlyGameObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeOnlyGameObjects;
}
constexpr ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__activeOnlyGameObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeOnlyGameObjects;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__activeOnlyGameObjects(::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeOnlyGameObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__outroAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroAnimator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__outroAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroAnimator;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__outroAnimator(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outroAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IStartSeekSongController*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__songController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IStartSeekSongController*> const& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__songController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songController;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__songController(::GlobalNamespace::IStartSeekSongController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__introAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introAnimator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*> const& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__introAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introAnimator;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__introAnimator(::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____introAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameSongController*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__gameSongController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSongController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameSongController*> const& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__gameSongController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSongController;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__gameSongController(::GlobalNamespace::GameSongController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameSongController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PrepareLevelCompletionResults*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__prepareLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrepareLevelCompletionResults*> const&
GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__prepareLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__prepareLevelCompletionResults(::GlobalNamespace::PrepareLevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prepareLevelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksUpdater*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapCallbacksUpdater() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksUpdater;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksUpdater*> const& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get__beatmapCallbacksUpdater() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksUpdater;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set__beatmapCallbacksUpdater(::GlobalNamespace::BeatmapCallbacksUpdater* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksUpdater)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDidFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const&
GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDidFinishEvent;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerNetworkDidFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerNetworkDidFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const&
GlobalNamespace::MultiplayerLocalActivePlayerFacade::__get_playerNetworkDidFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerNetworkDidFailedEvent;
}
constexpr void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerNetworkDidFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_introAnimator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "get_introAnimator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLocalActivePlayerIntroAnimator*, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_outroAnimator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "get_outroAnimator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IStartSeekSongController* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_songController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "get_songController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IStartSeekSongController*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::MultiplayerLocalActivePlayerFacade::get_currentLocalPlayerLevelCompletionResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "get_currentLocalPlayerLevelCompletionResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "add_playerDidFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "remove_playerDidFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "add_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "remove_playerNetworkDidFailedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "ReportPlayerDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(), "ReportPlayerNetworkDidFailed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::DisablePlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "DisablePlayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::PauseSpawning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "PauseSpawning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::ResumeSpawning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "ResumeSpawning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::__ForceStopSong() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "__ForceStopSong", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GlobalNamespace::MultiplayerLocalActivePlayerFacade::__GetActiveOnlyGameObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             "__GetActiveOnlyGameObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalActivePlayerFacade* GlobalNamespace::MultiplayerLocalActivePlayerFacade::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>());
}
inline void GlobalNamespace::MultiplayerLocalActivePlayerFacade::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActivePlayerFacade*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalActivePlayerFacade::MultiplayerLocalActivePlayerFacade() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::*)()>(
    &::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23daaf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory* GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*>());
}
inline void GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLocalActivePlayerFacade__Factory::__MultiplayerLocalActivePlayerFacade__Factory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
