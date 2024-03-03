#pragma once
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerFacade_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsListener_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerLevelEndActionsPublisher_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongControllerProvider_def.hpp"
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerFacade_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerOutroAnimator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerSongSyncController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSpectatorController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_songController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IStartSeekSongController* (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_songController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x246a4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                               "get_songController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_spectatorController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MultiplayerSpectatorController> (
    ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_spectatorController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x246a4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                               "get_spectatorController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_introAnimator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introAnimator)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x246a4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                               "get_introAnimator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_introPlayableDirector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Playables::PlayableDirector> (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introPlayableDirector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x246a4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                               "get_introPlayableDirector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.get_outroAnimator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> (
    ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_outroAnimator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x246a4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                               "get_outroAnimator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.add_playerDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x246a4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "add_playerDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.remove_playerDidFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerDidFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x246a5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "remove_playerDidFinishEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.add_playerNetworkDidFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x246a658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "add_playerNetworkDidFailedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.remove_playerNetworkDidFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerNetworkDidFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x246a708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "remove_playerNetworkDidFailedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.ReportPlayerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x246a7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "ReportPlayerDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade.ReportPlayerNetworkDidFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerNetworkDidFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x246a7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "ReportPlayerNetworkDidFailed",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x246a7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
constexpr GlobalNamespace::MultiplayerLocalInactivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsPublisher"
constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::i___GlobalNamespace__IMultiplayerLevelEndActionsPublisher() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsPublisher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
constexpr GlobalNamespace::MultiplayerLocalInactivePlayerFacade::operator ::GlobalNamespace::IMultiplayerLevelEndActionsListener*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerLevelEndActionsListener"
constexpr ::GlobalNamespace::IMultiplayerLevelEndActionsListener* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::i___GlobalNamespace__IMultiplayerLevelEndActionsListener() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerLevelEndActionsListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IStartSeekSongControllerProvider"
constexpr GlobalNamespace::MultiplayerLocalInactivePlayerFacade::operator ::GlobalNamespace::IStartSeekSongControllerProvider*() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongControllerProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IStartSeekSongControllerProvider"
constexpr ::GlobalNamespace::IStartSeekSongControllerProvider* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::i___GlobalNamespace__IStartSeekSongControllerProvider() noexcept {
  return static_cast<::GlobalNamespace::IStartSeekSongControllerProvider*>(static_cast<void*>(this));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController>&
GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get__inactivePlayerSongSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactivePlayerSongSyncController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController> const&
GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get__inactivePlayerSongSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactivePlayerSongSyncController;
}
constexpr void
GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_set__inactivePlayerSongSyncController(::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inactivePlayerSongSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController>& GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get__spectatorController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatorController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> const& GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get__spectatorController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectatorController;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_set__spectatorController(::UnityW<::GlobalNamespace::MultiplayerSpectatorController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spectatorController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get__introAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introAnimator;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get__introAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introAnimator;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_set__introAnimator(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____introAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator>& GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get__outroAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> const& GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get__outroAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroAnimator;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_set__outroAnimator(::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outroAnimator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get_playerDidFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDidFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const&
GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get_playerDidFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDidFinishEvent;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*& GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get_playerNetworkDidFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerNetworkDidFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const&
GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_get_playerNetworkDidFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerNetworkDidFailedEvent;
}
constexpr void
GlobalNamespace::MultiplayerLocalInactivePlayerFacade::__cordl_internal_set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerNetworkDidFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IStartSeekSongController* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_songController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                             "get_songController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IStartSeekSongController*, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MultiplayerSpectatorController> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_spectatorController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                             "get_spectatorController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MultiplayerSpectatorController>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introAnimator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                             "get_introAnimator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Playables::PlayableDirector> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_introPlayableDirector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                             "get_introPlayableDirector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableDirector>, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator> GlobalNamespace::MultiplayerLocalInactivePlayerFacade::get_outroAnimator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                             "get_outroAnimator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "add_playerDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "remove_playerDidFinishEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "add_playerNetworkDidFailedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "remove_playerNetworkDidFailedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "ReportPlayerDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(), "ReportPlayerNetworkDidFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade* GlobalNamespace::MultiplayerLocalInactivePlayerFacade::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>());
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerFacade::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerFacade*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerFacade::MultiplayerLocalInactivePlayerFacade() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::*)()>(
    &::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x246a7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory* GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*>());
}
inline void GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLocalInactivePlayerFacade__Factory::__MultiplayerLocalInactivePlayerFacade__Factory() {}
