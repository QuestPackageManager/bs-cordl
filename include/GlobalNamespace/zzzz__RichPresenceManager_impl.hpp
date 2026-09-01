#pragma once
// IWYU pragma private; include "GlobalNamespace\RichPresenceManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RichPresenceManager_def.hpp"
#include "GlobalNamespace/zzzz__BrowsingMenusRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PlayingCampaignRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__PlayingTutorialPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupData_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::Awake)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x58ffee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::OnDestroy)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x59001f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleLobbyGameStateModelDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5900540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "HandleLobbyGameStateModelDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.SetMenuPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::SetMenuPresence)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x590055c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "SetMenuPresence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleGameScenesManagerTransitionDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::RichPresenceManager::*)(::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*)>(
        &::GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5900844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(),
                                                             { "HandleGameScenesManagerTransitionDidFinish",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleMultiplayerPartySizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(int32_t)>(&::GlobalNamespace::RichPresenceManager::HandleMultiplayerPartySizeChanged)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5900b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "HandleMultiplayerPartySizeChanged", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleLobbyPlayerPermissionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::HandleLobbyPlayerPermissionChanged)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5900d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "HandleLobbyPlayerPermissionChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.SetPresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(::GlobalNamespace::IRichPresenceData*)>(&::GlobalNamespace::RichPresenceManager::SetPresence)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x590078c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "SetPresence", {}, { ::i2c::type_of<::GlobalNamespace::IRichPresenceData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::Clear)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5900abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5900ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____standardLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__tutorialScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__tutorialScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__tutorialScenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tutorialScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__menuScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuScenesTransitionSetupData;
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__menuScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuScenesTransitionSetupData = value;
}
constexpr ::GlobalNamespace::IRichPresencePlatformHandler*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__richPresencePlatformHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresencePlatformHandler;
}
constexpr ::GlobalNamespace::IRichPresencePlatformHandler* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__richPresencePlatformHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresencePlatformHandler;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__richPresencePlatformHandler(::GlobalNamespace::IRichPresencePlatformHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____richPresencePlatformHandler = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::RichPresenceManager::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr ::GlobalNamespace::LobbyGameStateModel*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__lobbyGameStateModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr ::GlobalNamespace::LobbyGameStateModel* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__lobbyGameStateModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyGameStateModel = value;
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__unifiedNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__unifiedNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unifiedNetworkPlayerModel = value;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__lobbyPlayerPermissionsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__lobbyPlayerPermissionsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayerPermissionsModel = value;
}
constexpr bool& GlobalNamespace::RichPresenceManager::__cordl_internal_get__menuWasLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuWasLoaded;
}
constexpr bool const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__menuWasLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuWasLoaded;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__menuWasLoaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuWasLoaded = value;
}
constexpr bool& GlobalNamespace::RichPresenceManager::__cordl_internal_get__isInMultiplayerLobby() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInMultiplayerLobby;
}
constexpr bool const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__isInMultiplayerLobby() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInMultiplayerLobby;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__isInMultiplayerLobby(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInMultiplayerLobby = value;
}
constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__browsingMenusRichPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____browsingMenusRichPresenceData;
}
constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__browsingMenusRichPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____browsingMenusRichPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__browsingMenusRichPresenceData(::GlobalNamespace::BrowsingMenusRichPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____browsingMenusRichPresenceData = value;
}
constexpr ::GlobalNamespace::InMultiplayerRichPresenceData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__inMultiplayerRichPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inMultiplayerRichPresenceData;
}
constexpr ::GlobalNamespace::InMultiplayerRichPresenceData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__inMultiplayerRichPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inMultiplayerRichPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__inMultiplayerRichPresenceData(::GlobalNamespace::InMultiplayerRichPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inMultiplayerRichPresenceData = value;
}
constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__playingCampaignRichPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingCampaignRichPresenceData;
}
constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__playingCampaignRichPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingCampaignRichPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__playingCampaignRichPresenceData(::GlobalNamespace::PlayingCampaignRichPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playingCampaignRichPresenceData = value;
}
constexpr ::GlobalNamespace::PlayingTutorialPresenceData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__playingTutorialPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingTutorialPresenceData;
}
constexpr ::GlobalNamespace::PlayingTutorialPresenceData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__playingTutorialPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingTutorialPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__playingTutorialPresenceData(::GlobalNamespace::PlayingTutorialPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playingTutorialPresenceData = value;
}
constexpr ::GlobalNamespace::IRichPresenceData*& GlobalNamespace::RichPresenceManager::__cordl_internal_get__currentPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPresenceData;
}
constexpr ::GlobalNamespace::IRichPresenceData* const& GlobalNamespace::RichPresenceManager::__cordl_internal_get__currentPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__cordl_internal_set__currentPresenceData(::GlobalNamespace::IRichPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPresenceData = value;
}
inline void GlobalNamespace::RichPresenceManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange(::GlobalNamespace::MultiplayerGameState newGameState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(),
                                                                                         { "HandleLobbyGameStateModelDidChange", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameState);
}
inline void GlobalNamespace::RichPresenceManager::SetMenuPresence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "SetMenuPresence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType,
                                                                                             ::GlobalNamespace::ScenesTransitionSetupData* scenesTransitionSetupData,
                                                                                             ::Zenject::DiContainer* diContainer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(),
                                                           { "HandleGameScenesManagerTransitionDidFinish",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                               ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneTransitionType, scenesTransitionSetupData, diContainer);
}
inline void GlobalNamespace::RichPresenceManager::HandleMultiplayerPartySizeChanged(int32_t currentPartySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "HandleMultiplayerPartySizeChanged", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPartySize);
}
inline void GlobalNamespace::RichPresenceManager::HandleLobbyPlayerPermissionChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "HandleLobbyPlayerPermissionChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::SetPresence(::GlobalNamespace::IRichPresenceData* presenceData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "SetPresence", {}, { ::i2c::type_of<::GlobalNamespace::IRichPresenceData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, presenceData);
}
inline void GlobalNamespace::RichPresenceManager::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RichPresenceManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RichPresenceManager* GlobalNamespace::RichPresenceManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RichPresenceManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RichPresenceManager::RichPresenceManager() {}
