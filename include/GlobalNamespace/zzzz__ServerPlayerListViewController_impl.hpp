#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerPlayerListViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__ServerPlayerListViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameServerPlayersTableView_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IInvitePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.add_selectSuggestedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::System::Action_1<::GlobalNamespace::BeatmapKey>*)>(
    &::GlobalNamespace::ServerPlayerListViewController::add_selectSuggestedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5962290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                             { "add_selectSuggestedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapKey>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.remove_selectSuggestedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::System::Action_1<::GlobalNamespace::BeatmapKey>*)>(
    &::GlobalNamespace::ServerPlayerListViewController::remove_selectSuggestedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5962350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                             { "remove_selectSuggestedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapKey>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.add_selectSuggestedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::System::Action_1<::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::ServerPlayerListViewController::add_selectSuggestedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5962410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                             { "add_selectSuggestedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.remove_selectSuggestedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::System::Action_1<::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::ServerPlayerListViewController::remove_selectSuggestedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59624d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                { "remove_selectSuggestedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.add_kickPlayerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::ServerPlayerListViewController::add_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5962590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "add_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.remove_kickPlayerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::ServerPlayerListViewController::remove_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5962650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                                                           { "remove_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.add_didOpenInvitePanelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::System::Action*)>(
    &::GlobalNamespace::ServerPlayerListViewController::add_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5962710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "add_didOpenInvitePanelEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.remove_didOpenInvitePanelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::System::Action*)>(
    &::GlobalNamespace::ServerPlayerListViewController::remove_didOpenInvitePanelEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59627bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "remove_didOpenInvitePanelEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::ServerPlayerListViewController::DidActivate)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x5962868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { ::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(bool, bool)>(&::GlobalNamespace::ServerPlayerListViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x59631dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { ::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.HandleLobbyPlayersDataDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::StringW)>(
    &::GlobalNamespace::ServerPlayerListViewController::HandleLobbyPlayersDataDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x596356c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "HandleLobbyPlayersDataDidChange", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.HandleLobbyGameStateControllerLobbyStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::GlobalNamespace::MultiplayerLobbyState)>(
    &::GlobalNamespace::ServerPlayerListViewController::HandleLobbyGameStateControllerLobbyStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5963570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                             { "HandleLobbyGameStateControllerLobbyStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.HandleLobbyPlayerPermissionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)()>(
    &::GlobalNamespace::ServerPlayerListViewController::HandleLobbyPlayerPermissionChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5963574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "HandleLobbyPlayerPermissionChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.SetDataToTable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)()>(&::GlobalNamespace::ServerPlayerListViewController::SetDataToTable)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5962f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "SetDataToTable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.HandleSelectSuggestedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::ServerPlayerListViewController::HandleSelectSuggestedLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5963578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                                                           { "HandleSelectSuggestedLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.HandleSelectSuggestedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::ServerPlayerListViewController::HandleSelectSuggestedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5963594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                             { "HandleSelectSuggestedGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.HandleKickPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)(::StringW)>(&::GlobalNamespace::ServerPlayerListViewController::HandleKickPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59635b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "HandleKickPlayer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.HandleOpenPlatformInvitePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)()>(
    &::GlobalNamespace::ServerPlayerListViewController::HandleOpenPlatformInvitePanel)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59635cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "HandleOpenPlatformInvitePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController.TrySetInviteButtonEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)()>(&::GlobalNamespace::ServerPlayerListViewController::TrySetInviteButtonEnabled)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5962c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "TrySetInviteButtonEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ServerPlayerListViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ServerPlayerListViewController::*)()>(&::GlobalNamespace::ServerPlayerListViewController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5963698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameServerPlayersTableView>& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__gameServerPlayersTableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServerPlayersTableView;
}
constexpr ::UnityW<::GlobalNamespace::GameServerPlayersTableView> const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__gameServerPlayersTableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameServerPlayersTableView;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__gameServerPlayersTableView(::UnityW<::GlobalNamespace::GameServerPlayersTableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameServerPlayersTableView = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__invitePlayerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invitePlayerButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__invitePlayerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invitePlayerButton;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__invitePlayerButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invitePlayerButton = value;
}
constexpr ::UnityW<::HMUI::HoverHint>& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__cantInvitePlayerHoverHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cantInvitePlayerHoverHint;
}
constexpr ::UnityW<::HMUI::HoverHint> const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__cantInvitePlayerHoverHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cantInvitePlayerHoverHint;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__cantInvitePlayerHoverHint(::UnityW<::HMUI::HoverHint> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cantInvitePlayerHoverHint = value;
}
constexpr ::GlobalNamespace::IInvitePlatformHandler*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__invitePlatformHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invitePlatformHandler;
}
constexpr ::GlobalNamespace::IInvitePlatformHandler* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__invitePlatformHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invitePlatformHandler;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__invitePlatformHandler(::GlobalNamespace::IInvitePlatformHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invitePlatformHandler = value;
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__lobbyPlayersDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__lobbyPlayersDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayersDataModel = value;
}
constexpr ::GlobalNamespace::ILobbyStateDataModel*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__lobbyStateDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr ::GlobalNamespace::ILobbyStateDataModel* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__lobbyStateDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyStateDataModel;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyStateDataModel = value;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__lobbyPlayerPermissionsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__lobbyPlayerPermissionsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayerPermissionsModel = value;
}
constexpr ::GlobalNamespace::ILobbyGameStateController*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__lobbyGameStateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr ::GlobalNamespace::ILobbyGameStateController* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__lobbyGameStateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateController;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyGameStateController = value;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapKey>*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get_selectSuggestedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectSuggestedBeatmapEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapKey>* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get_selectSuggestedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectSuggestedBeatmapEvent;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectSuggestedBeatmapEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::GameplayModifiers*>*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get_selectSuggestedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectSuggestedGameplayModifiersEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::GameplayModifiers*>* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get_selectSuggestedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectSuggestedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectSuggestedGameplayModifiersEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get_kickPlayerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickPlayerEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get_kickPlayerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kickPlayerEvent;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set_kickPlayerEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kickPlayerEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get_didOpenInvitePanelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenInvitePanelEvent;
}
constexpr ::System::Action* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get_didOpenInvitePanelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didOpenInvitePanelEvent;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set_didOpenInvitePanelEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didOpenInvitePanelEvent = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::ServerPlayerListViewController::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::ServerPlayerListViewController::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
inline void GlobalNamespace::ServerPlayerListViewController::add_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                           { "add_selectSuggestedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ServerPlayerListViewController::remove_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                           { "remove_selectSuggestedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ServerPlayerListViewController::add_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                           { "add_selectSuggestedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ServerPlayerListViewController::remove_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                           { "remove_selectSuggestedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ServerPlayerListViewController::add_kickPlayerEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "add_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ServerPlayerListViewController::remove_kickPlayerEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "remove_kickPlayerEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ServerPlayerListViewController::add_didOpenInvitePanelEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "add_didOpenInvitePanelEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ServerPlayerListViewController::remove_didOpenInvitePanelEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "remove_didOpenInvitePanelEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ServerPlayerListViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::ServerPlayerListViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::ServerPlayerListViewController::HandleLobbyPlayersDataDidChange(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "HandleLobbyPlayersDataDidChange", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::ServerPlayerListViewController::HandleLobbyGameStateControllerLobbyStateChanged(::GlobalNamespace::MultiplayerLobbyState _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                           { "HandleLobbyGameStateControllerLobbyStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::ServerPlayerListViewController::HandleLobbyPlayerPermissionChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "HandleLobbyPlayerPermissionChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerPlayerListViewController::SetDataToTable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "SetDataToTable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerPlayerListViewController::HandleSelectSuggestedLevel(::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                                                         { "HandleSelectSuggestedLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::ServerPlayerListViewController::HandleSelectSuggestedGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(),
                                                           { "HandleSelectSuggestedGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::ServerPlayerListViewController::HandleKickPlayer(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "HandleKickPlayer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::ServerPlayerListViewController::HandleOpenPlatformInvitePanel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "HandleOpenPlatformInvitePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerPlayerListViewController::TrySetInviteButtonEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { "TrySetInviteButtonEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ServerPlayerListViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ServerPlayerListViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ServerPlayerListViewController* GlobalNamespace::ServerPlayerListViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ServerPlayerListViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ServerPlayerListViewController::ServerPlayerListViewController() {}
