#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerScoreRingManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::Start)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x59df61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::OnDestroy)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x59dfd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x59e0170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.UpdateScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::UpdateScore)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x59e0268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "UpdateScore", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.AnimateColorsForPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(
    ::StringW, ::UnityEngine::Color, ::UnityEngine::Color, float_t, ::GlobalNamespace::EaseType)>(&::GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x59e0474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                             { "AnimateColorsForPlayer",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.GetScoreRingItem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> (::GlobalNamespace::MultiplayerScoreRingManager::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x59d29b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "GetScoreRingItem", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.GetScoreRingItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::GameObject>> (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(
    &::GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x59dacf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "GetScoreRingItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.AnimateColorsForAllPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::UnityEngine::Color, ::UnityEngine::Color, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x59e0640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "AnimateColorsForAllPlayers",
                                                                                                                      {},
                                                                                                                      { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                                        ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.SetPlayerToFailedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59e07e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                                                           { "SetPlayerToFailedState", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.TrySpawnTexts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59e0918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "TrySpawnTexts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.SpawnTexts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x59e0930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "SpawnTexts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandleStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x59df8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                                                           { "HandleStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandleSpawnCenterDistanceWasFound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(float_t)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59df87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "HandleSpawnCenterDistanceWasFound", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerSpawningDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59df894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "HandlePlayerSpawningDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59e0ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                                                           { "HandlePlayerStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager.HandlePlayerDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e0f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                                                           { "HandlePlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreRingManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreRingManager::*)()>(&::GlobalNamespace::MultiplayerScoreRingManager::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59e0f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__delayBetweenScoreUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayBetweenScoreUpdates;
}
constexpr float_t const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__delayBetweenScoreUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delayBetweenScoreUpdates;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__delayBetweenScoreUpdates(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delayBetweenScoreUpdates = value;
}
constexpr float_t& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__centerDistanceOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerDistanceOffset;
}
constexpr float_t const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__centerDistanceOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerDistanceOffset;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__centerDistanceOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerDistanceOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerController = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerPlayersManager = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__spawnCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenter;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__spawnCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenter;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__spawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCenter = value;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layoutProvider = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__scoreProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__scoreProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreProvider;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreProvider = value;
}
constexpr ::GlobalNamespace::MultiplayerScoreRingItem_Pool*& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__scoreRingItemPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingItemPool;
}
constexpr ::GlobalNamespace::MultiplayerScoreRingItem_Pool* const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__scoreRingItemPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingItemPool;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__scoreRingItemPool(::GlobalNamespace::MultiplayerScoreRingItem_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreRingItemPool = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>*&
GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__scoreRingItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingItems;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>* const&
GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__scoreRingItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingItems;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__scoreRingItems(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreRingItems = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__allActivePlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allActivePlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__allActivePlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allActivePlayers;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__allActivePlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allActivePlayers = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__currentlyScoreUpdateIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentlyScoreUpdateIndex;
}
constexpr int32_t const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__currentlyScoreUpdateIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentlyScoreUpdateIndex;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__currentlyScoreUpdateIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentlyScoreUpdateIndex = value;
}
constexpr float_t& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__timeSinceLastScoreUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSinceLastScoreUpdate;
}
constexpr float_t const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__timeSinceLastScoreUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSinceLastScoreUpdate;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__timeSinceLastScoreUpdate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeSinceLastScoreUpdate = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__firstPlayerItem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerItem;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__firstPlayerItem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerItem;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__firstPlayerItem(::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstPlayerItem = value;
}
constexpr bool& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__spawnCenterDistanceFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceFound;
}
constexpr bool const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__spawnCenterDistanceFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceFound;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__spawnCenterDistanceFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCenterDistanceFound = value;
}
constexpr bool& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__playersSpawned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpawned;
}
constexpr bool const& GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_get__playersSpawned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersSpawned;
}
constexpr void GlobalNamespace::MultiplayerScoreRingManager::__cordl_internal_set__playersSpawned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersSpawned = value;
}
inline void GlobalNamespace::MultiplayerScoreRingManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::UpdateScore(::GlobalNamespace::IConnectedPlayer* playerToUpdate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "UpdateScore", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerToUpdate);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForPlayer(::StringW userId, ::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration,
                                                                                 ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                           { "AnimateColorsForPlayer",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, nameColor, scoreColor, duration, easeType);
}
inline ::UnityW<::GlobalNamespace::MultiplayerScoreRingItem> GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItem(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "GetScoreRingItem", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MultiplayerScoreRingItem>>(this, ___internal_method, userId);
}
inline ::ArrayW<::UnityW<::UnityEngine::GameObject>> GlobalNamespace::MultiplayerScoreRingManager::GetScoreRingItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "GetScoreRingItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::AnimateColorsForAllPlayers(::UnityEngine::Color nameColor, ::UnityEngine::Color scoreColor, float_t duration,
                                                                                     ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "AnimateColorsForAllPlayers",
                                                                                                                    {},
                                                                                                                    { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                                      ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nameColor, scoreColor, duration, easeType);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::SetPlayerToFailedState(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                                                         { "SetPlayerToFailedState", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::TrySpawnTexts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "TrySpawnTexts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::SpawnTexts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "SpawnTexts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandleStateChanged(::GlobalNamespace::MultiplayerController_State state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                                                         { "HandleStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "HandleSpawnCenterDistanceWasFound", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawnCenterDistance);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerSpawningDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { "HandlePlayerSpawningDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                                                         { "HandlePlayerStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(),
                                                                                         { "HandlePlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerScoreRingManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreRingManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerScoreRingManager* GlobalNamespace::MultiplayerScoreRingManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerScoreRingManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreRingManager::MultiplayerScoreRingManager() {}
