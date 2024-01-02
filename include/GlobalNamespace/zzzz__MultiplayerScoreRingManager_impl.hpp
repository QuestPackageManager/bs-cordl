#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2259aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(
    &::GlobalNamespace::MultiplayerScoreRingManager::OnDestroy)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x225a178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(
    &::GlobalNamespace::MultiplayerScoreRingManager::Update)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x225a4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.UpdateScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::UpdateScore)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x225a5a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "UpdateScore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.AnimateColorsForPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(
    ::StringW, ::UnityEngine::Color, ::UnityEngine::Color, float_t, ::GlobalNamespace::EaseType)>(&::GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x225a794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "AnimateColorsForPlayer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.GetScoreRingItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerScoreRingItem* (::GlobalNamespace::MultiplayerScoreRingManager::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x224e130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "GetScoreRingItem",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.GetScoreRingItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> (
    ::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2254f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                               "GetScoreRingItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.AnimateColorsForAllPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(
    ::UnityEngine::Color, ::UnityEngine::Color, float_t, ::GlobalNamespace::EaseType)>(&::GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x225a914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "AnimateColorsForAllPlayers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.SetPlayerToFailedState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x225aadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "SetPlayerToFailedState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.TrySpawnTexts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(
    &::GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x225abfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                               "TrySpawnTexts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.SpawnTexts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(
    &::GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x225ac14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                               "SpawnTexts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandleStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::__MultiplayerController__State)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x2259c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "HandleStateChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandleSpawnCenterDistanceWasFound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(float_t)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2259c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "HandleSpawnCenterDistanceWasFound",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerSpawningDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2259c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                               "HandlePlayerSpawningDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x225b1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "HandlePlayerStateChanged", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x225b230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "HandlePlayerDisconnected", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x225b234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerScoreRingManager::__get__delayBetweenScoreUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayBetweenScoreUpdates;
}
constexpr float_t const& GlobalNamespace::MultiplayerScoreRingManager::__get__delayBetweenScoreUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayBetweenScoreUpdates;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__delayBetweenScoreUpdates(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayBetweenScoreUpdates = value;
}
constexpr float_t& GlobalNamespace::MultiplayerScoreRingManager::__get__centerDistanceOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerDistanceOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerScoreRingManager::__get__centerDistanceOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerDistanceOffset;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__centerDistanceOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerDistanceOffset = value;
}
constexpr ::GlobalNamespace::MultiplayerController*& GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> const& GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__multiplayerController(::GlobalNamespace::MultiplayerController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerPlayersManager*& GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerPlayersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::MultiplayerScoreRingManager::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter*& GlobalNamespace::MultiplayerScoreRingManager::__get__spawnCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnCenter*> const& GlobalNamespace::MultiplayerScoreRingManager::__get__spawnCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenter;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__spawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____spawnCenter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerScoreRingManager::__get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> const& GlobalNamespace::MultiplayerScoreRingManager::__get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layoutProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider*& GlobalNamespace::MultiplayerScoreRingManager::__get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& GlobalNamespace::MultiplayerScoreRingManager::__get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MultiplayerScoreRingItem__Pool*& GlobalNamespace::MultiplayerScoreRingManager::__get__scoreRingItemPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingItemPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreRingItem__Pool*> const& GlobalNamespace::MultiplayerScoreRingManager::__get__scoreRingItemPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingItemPool;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__scoreRingItemPool(::GlobalNamespace::__MultiplayerScoreRingItem__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreRingItemPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>*& GlobalNamespace::MultiplayerScoreRingManager::__get__scoreRingItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>*> const&
GlobalNamespace::MultiplayerScoreRingManager::__get__scoreRingItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingItems;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__scoreRingItems(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreRingItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreRingItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerScoreRingManager::__get__allActivePlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allActivePlayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::MultiplayerScoreRingManager::__get__allActivePlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allActivePlayers;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__allActivePlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allActivePlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MultiplayerScoreRingManager::__get__currentlyScoreUpdateIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentlyScoreUpdateIndex;
}
constexpr int32_t const& GlobalNamespace::MultiplayerScoreRingManager::__get__currentlyScoreUpdateIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentlyScoreUpdateIndex;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__currentlyScoreUpdateIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentlyScoreUpdateIndex = value;
}
constexpr float_t& GlobalNamespace::MultiplayerScoreRingManager::__get__timeSinceLastScoreUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSinceLastScoreUpdate;
}
constexpr float_t const& GlobalNamespace::MultiplayerScoreRingManager::__get__timeSinceLastScoreUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSinceLastScoreUpdate;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__timeSinceLastScoreUpdate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeSinceLastScoreUpdate = value;
}
constexpr ::GlobalNamespace::MultiplayerScoreRingItem*& GlobalNamespace::MultiplayerScoreRingManager::__get__firstPlayerItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerItem;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreRingItem*> const& GlobalNamespace::MultiplayerScoreRingManager::__get__firstPlayerItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerItem;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__firstPlayerItem(::GlobalNamespace::MultiplayerScoreRingItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstPlayerItem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerScoreRingManager::__get__spawnCenterDistanceFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceFound;
}
constexpr bool const& GlobalNamespace::MultiplayerScoreRingManager::__get__spawnCenterDistanceFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceFound;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__spawnCenterDistanceFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCenterDistanceFound = value;
}
constexpr bool& GlobalNamespace::MultiplayerScoreRingManager::__get__playersSpawned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpawned;
}
constexpr bool const& GlobalNamespace::MultiplayerScoreRingManager::__get__playersSpawned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpawned;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__set__playersSpawned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersSpawned = value;
}
inline void GlobalNamespace::MultiplayerScoreRingManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::UpdateScore(::GlobalNamespace::IConnectedPlayer* playerToUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "UpdateScore", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerToUpdate);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer(::StringW userId, ::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration,
                                                                                 ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "AnimateColorsForPlayer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, nameColor, scoreColor, duration, easeType);
}
inline ::GlobalNamespace::MultiplayerScoreRingItem* GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "GetScoreRingItem",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerScoreRingItem*, false>(this, ___internal_method, userId);
}
inline ::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*> GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                             "GetScoreRingItems", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*, ::Array<::UnityEngine::GameObject*>*>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration,
                                                                                     ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "AnimateColorsForAllPlayers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameColor, scoreColor, duration, easeType);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "SetPlayerToFailedState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                             "TrySpawnTexts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                             "SpawnTexts", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged(::GlobalNamespace::__MultiplayerController__State state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "HandleStateChanged", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerController__State>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "HandleSpawnCenterDistanceWasFound",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spawnCenterDistance);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(),
                                                                             "HandlePlayerSpawningDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "HandlePlayerStateChanged",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), "HandlePlayerDisconnected",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline ::GlobalNamespace::MultiplayerScoreRingManager* GlobalNamespace::MultiplayerScoreRingManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerScoreRingManager*>());
}
inline void GlobalNamespace::MultiplayerScoreRingManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerScoreRingManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreRingManager::MultiplayerScoreRingManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
