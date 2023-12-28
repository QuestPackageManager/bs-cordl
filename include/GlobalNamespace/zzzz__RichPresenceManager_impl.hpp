#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RichPresenceManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__PlayingTutorialPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BrowsingMenusRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresencePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__InMultiplayerRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__PlayingCampaignRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::Awake)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2374340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::OnDestroy)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x23745dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleLobbyGameStateModelDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2374840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "HandleLobbyGameStateModelDidChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.SetMenuPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::SetMenuPresence)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x237485c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                                                                               "SetMenuPresence", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleGameScenesManagerTransitionDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(&::GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2374b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "HandleGameScenesManagerTransitionDidFinish", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleMultiplayerPartySizeChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(int32_t)>(
    &::GlobalNamespace::RichPresenceManager::HandleMultiplayerPartySizeChanged)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2374f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "HandleMultiplayerPartySizeChanged",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.HandleLobbyPlayerPermissionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(
    &::GlobalNamespace::RichPresenceManager::HandleLobbyPlayerPermissionChanged)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x23750d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                                                                               "HandleLobbyPlayerPermissionChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.SetPresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)(::GlobalNamespace::IRichPresenceData*)>(
    &::GlobalNamespace::RichPresenceManager::SetPresence)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2374a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "SetPresence", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRichPresenceData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::Clear)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2374e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "Clear",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RichPresenceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RichPresenceManager::*)()>(&::GlobalNamespace::RichPresenceManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2375224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& GlobalNamespace::RichPresenceManager::__get__standardLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::RichPresenceManager::__get__standardLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____standardLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____standardLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& GlobalNamespace::RichPresenceManager::__get__tutorialScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& GlobalNamespace::RichPresenceManager::__get__tutorialScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tutorialScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__tutorialScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tutorialScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*& GlobalNamespace::RichPresenceManager::__get__missionLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::RichPresenceManager::__get__missionLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*& GlobalNamespace::RichPresenceManager::__get__multiplayerLevelScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*> const&
GlobalNamespace::RichPresenceManager::__get__multiplayerLevelScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLevelScenesTransitionSetupData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO*& GlobalNamespace::RichPresenceManager::__get__menuScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuScenesTransitionSetupDataSO*> const& GlobalNamespace::RichPresenceManager::__get__menuScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuScenesTransitionSetupData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IRichPresencePlatformHandler*& GlobalNamespace::RichPresenceManager::__get__richPresencePlatformHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresencePlatformHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRichPresencePlatformHandler*> const& GlobalNamespace::RichPresenceManager::__get__richPresencePlatformHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____richPresencePlatformHandler;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__richPresencePlatformHandler(::GlobalNamespace::IRichPresencePlatformHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____richPresencePlatformHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager*& GlobalNamespace::RichPresenceManager::__get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& GlobalNamespace::RichPresenceManager::__get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__gameScenesManager(::GlobalNamespace::GameScenesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LobbyGameStateModel*& GlobalNamespace::RichPresenceManager::__get__lobbyGameStateModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyGameStateModel*> const& GlobalNamespace::RichPresenceManager::__get__lobbyGameStateModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyGameStateModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& GlobalNamespace::RichPresenceManager::__get__unifiedNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const& GlobalNamespace::RichPresenceManager::__get__unifiedNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unifiedNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::RichPresenceManager::__get__lobbyPlayerPermissionsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& GlobalNamespace::RichPresenceManager::__get__lobbyPlayerPermissionsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyPlayerPermissionsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RichPresenceManager::__get__menuWasLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuWasLoaded;
}
constexpr bool const& GlobalNamespace::RichPresenceManager::__get__menuWasLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuWasLoaded;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__menuWasLoaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuWasLoaded = value;
}
constexpr bool& GlobalNamespace::RichPresenceManager::__get__isInMultiplayerLobby() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInMultiplayerLobby;
}
constexpr bool const& GlobalNamespace::RichPresenceManager::__get__isInMultiplayerLobby() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInMultiplayerLobby;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__isInMultiplayerLobby(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInMultiplayerLobby = value;
}
constexpr ::GlobalNamespace::BrowsingMenusRichPresenceData*& GlobalNamespace::RichPresenceManager::__get__browsingMenusRichPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____browsingMenusRichPresenceData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BrowsingMenusRichPresenceData*> const& GlobalNamespace::RichPresenceManager::__get__browsingMenusRichPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____browsingMenusRichPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__browsingMenusRichPresenceData(::GlobalNamespace::BrowsingMenusRichPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____browsingMenusRichPresenceData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::InMultiplayerRichPresenceData*& GlobalNamespace::RichPresenceManager::__get__inMultiplayerRichPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inMultiplayerRichPresenceData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::InMultiplayerRichPresenceData*> const& GlobalNamespace::RichPresenceManager::__get__inMultiplayerRichPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inMultiplayerRichPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__inMultiplayerRichPresenceData(::GlobalNamespace::InMultiplayerRichPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inMultiplayerRichPresenceData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayingCampaignRichPresenceData*& GlobalNamespace::RichPresenceManager::__get__playingCampaignRichPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingCampaignRichPresenceData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayingCampaignRichPresenceData*> const& GlobalNamespace::RichPresenceManager::__get__playingCampaignRichPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingCampaignRichPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__playingCampaignRichPresenceData(::GlobalNamespace::PlayingCampaignRichPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playingCampaignRichPresenceData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayingTutorialPresenceData*& GlobalNamespace::RichPresenceManager::__get__playingTutorialPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingTutorialPresenceData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayingTutorialPresenceData*> const& GlobalNamespace::RichPresenceManager::__get__playingTutorialPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingTutorialPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__playingTutorialPresenceData(::GlobalNamespace::PlayingTutorialPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playingTutorialPresenceData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IRichPresenceData*& GlobalNamespace::RichPresenceManager::__get__currentPresenceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPresenceData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRichPresenceData*> const& GlobalNamespace::RichPresenceManager::__get__currentPresenceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPresenceData;
}
constexpr void GlobalNamespace::RichPresenceManager::__set__currentPresenceData(::GlobalNamespace::IRichPresenceData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentPresenceData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::RichPresenceManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::HandleLobbyGameStateModelDidChange(::GlobalNamespace::MultiplayerGameState newGameState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "HandleLobbyGameStateModelDidChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newGameState);
}
inline void GlobalNamespace::RichPresenceManager::SetMenuPresence() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "SetMenuPresence",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::HandleGameScenesManagerTransitionDidFinish(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData,
                                                                                             ::Zenject::DiContainer* diContainer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "HandleGameScenesManagerTransitionDidFinish", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, diContainer);
}
inline void GlobalNamespace::RichPresenceManager::HandleMultiplayerPartySizeChanged(int32_t currentPartySize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "HandleMultiplayerPartySizeChanged",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPartySize);
}
inline void GlobalNamespace::RichPresenceManager::HandleLobbyPlayerPermissionChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(),
                                                                             "HandleLobbyPlayerPermissionChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RichPresenceManager::SetPresence(::GlobalNamespace::IRichPresenceData* presenceData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "SetPresence", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRichPresenceData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, presenceData);
}
inline void GlobalNamespace::RichPresenceManager::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RichPresenceManager* GlobalNamespace::RichPresenceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RichPresenceManager*>());
}
inline void GlobalNamespace::RichPresenceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RichPresenceManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RichPresenceManager::RichPresenceManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
