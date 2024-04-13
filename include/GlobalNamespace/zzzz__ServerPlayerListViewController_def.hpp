#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerPlayerListViewController)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameServerPlayersTableView;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace HMUI {
class ButtonBinder;
}
namespace HMUI {
class HoverHint;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerPlayerListViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ServerPlayerListViewController);
// Type: ::ServerPlayerListViewController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ServerPlayerListViewController*
class CORDL_TYPE ServerPlayerListViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _cantInvitePlayerHoverHint, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__cantInvitePlayerHoverHint, put = __cordl_internal_set__cantInvitePlayerHoverHint))::UnityW<::HMUI::HoverHint> _cantInvitePlayerHoverHint;

  /// @brief Field _gameServerPlayersTableView, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerPlayersTableView,
                      put = __cordl_internal_set__gameServerPlayersTableView))::UnityW<::GlobalNamespace::GameServerPlayersTableView> _gameServerPlayersTableView;

  /// @brief Field _invitePlatformHandler, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__invitePlatformHandler, put = __cordl_internal_set__invitePlatformHandler))::GlobalNamespace::IInvitePlatformHandler* _invitePlatformHandler;

  /// @brief Field _invitePlayerButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__invitePlayerButton, put = __cordl_internal_set__invitePlayerButton))::UnityW<::UnityEngine::UI::Button> _invitePlayerButton;

  /// @brief Field _lobbyGameStateController, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyGameStateController,
                      put = __cordl_internal_set__lobbyGameStateController))::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field _lobbyPlayerPermissionsModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayerPermissionsModel,
                      put = __cordl_internal_set__lobbyPlayerPermissionsModel))::GlobalNamespace::LobbyPlayerPermissionsModel* _lobbyPlayerPermissionsModel;

  /// @brief Field _lobbyPlayersDataModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayersDataModel, put = __cordl_internal_set__lobbyPlayersDataModel))::GlobalNamespace::ILobbyPlayersDataModel* _lobbyPlayersDataModel;

  /// @brief Field _lobbyStateDataModel, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyStateDataModel, put = __cordl_internal_set__lobbyStateDataModel))::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field didOpenInvitePanelEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didOpenInvitePanelEvent, put = __cordl_internal_set_didOpenInvitePanelEvent))::System::Action* didOpenInvitePanelEvent;

  /// @brief Field kickPlayerEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_kickPlayerEvent, put = __cordl_internal_set_kickPlayerEvent))::System::Action_1<::StringW>* kickPlayerEvent;

  /// @brief Field selectSuggestedBeatmapEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_selectSuggestedBeatmapEvent,
                      put = __cordl_internal_set_selectSuggestedBeatmapEvent))::System::Action_1<::GlobalNamespace::BeatmapKey>* selectSuggestedBeatmapEvent;

  /// @brief Field selectSuggestedGameplayModifiersEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_selectSuggestedGameplayModifiersEvent,
                      put = __cordl_internal_set_selectSuggestedGameplayModifiersEvent))::System::Action_1<::GlobalNamespace::GameplayModifiers*>* selectSuggestedGameplayModifiersEvent;

  /// @brief Method DidActivate, addr 0x255ff9c, size 0x384, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2560a28, size 0x32c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleKickPlayer, addr 0x2561090, size 0x1c, virtual false, abstract: false, final false
  inline void HandleKickPlayer(::StringW userId);

  /// @brief Method HandleLobbyGameStateControllerLobbyStateChanged, addr 0x2560f68, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLobbyStateChanged(::GlobalNamespace::MultiplayerLobbyState _);

  /// @brief Method HandleLobbyPlayerPermissionChanged, addr 0x2560f6c, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyPlayerPermissionChanged();

  /// @brief Method HandleLobbyPlayersDataDidChange, addr 0x2560f64, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyPlayersDataDidChange(::StringW userId);

  /// @brief Method HandleOpenPlatformInvitePanel, addr 0x25610ac, size 0xc8, virtual false, abstract: false, final false
  inline void HandleOpenPlatformInvitePanel();

  /// @brief Method HandleSelectSuggestedGameplayModifiers, addr 0x2561074, size 0x1c, virtual false, abstract: false, final false
  inline void HandleSelectSuggestedGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method HandleSelectSuggestedLevel, addr 0x256102c, size 0x48, virtual false, abstract: false, final false
  inline void HandleSelectSuggestedLevel(::GlobalNamespace::BeatmapKey beatmapKey);

  static inline ::GlobalNamespace::ServerPlayerListViewController* New_ctor();

  /// @brief Method SetDataToTable, addr 0x2560828, size 0x200, virtual false, abstract: false, final false
  inline void SetDataToTable();

  /// @brief Method TrySetInviteButtonEnabled, addr 0x2560530, size 0x2f8, virtual false, abstract: false, final false
  inline void TrySetInviteButtonEnabled();

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __cordl_internal_get__buttonBinder() const;

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get__cantInvitePlayerHoverHint() const;

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get__cantInvitePlayerHoverHint();

  constexpr ::UnityW<::GlobalNamespace::GameServerPlayersTableView> const& __cordl_internal_get__gameServerPlayersTableView() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerPlayersTableView>& __cordl_internal_get__gameServerPlayersTableView();

  constexpr ::GlobalNamespace::IInvitePlatformHandler*& __cordl_internal_get__invitePlatformHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IInvitePlatformHandler*> const& __cordl_internal_get__invitePlatformHandler() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__invitePlayerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__invitePlayerButton();

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __cordl_internal_get__lobbyGameStateController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& __cordl_internal_get__lobbyGameStateController() const;

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __cordl_internal_get__lobbyPlayerPermissionsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& __cordl_internal_get__lobbyPlayerPermissionsModel() const;

  constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& __cordl_internal_get__lobbyPlayersDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& __cordl_internal_get__lobbyPlayersDataModel() const;

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __cordl_internal_get__lobbyStateDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __cordl_internal_get__lobbyStateDataModel() const;

  constexpr ::System::Action*& __cordl_internal_get_didOpenInvitePanelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didOpenInvitePanelEvent() const;

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_kickPlayerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_kickPlayerEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapKey>*& __cordl_internal_get_selectSuggestedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapKey>*> const& __cordl_internal_get_selectSuggestedBeatmapEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::GameplayModifiers*>*& __cordl_internal_get_selectSuggestedGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*> const& __cordl_internal_get_selectSuggestedGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__cantInvitePlayerHoverHint(::UnityW<::HMUI::HoverHint> value);

  constexpr void __cordl_internal_set__gameServerPlayersTableView(::UnityW<::GlobalNamespace::GameServerPlayersTableView> value);

  constexpr void __cordl_internal_set__invitePlatformHandler(::GlobalNamespace::IInvitePlatformHandler* value);

  constexpr void __cordl_internal_set__invitePlayerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr void __cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value);

  constexpr void __cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value);

  constexpr void __cordl_internal_set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr void __cordl_internal_set_didOpenInvitePanelEvent(::System::Action* value);

  constexpr void __cordl_internal_set_kickPlayerEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value);

  constexpr void __cordl_internal_set_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method .ctor, addr 0x2561174, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didOpenInvitePanelEvent, addr 0x255fe64, size 0x9c, virtual false, abstract: false, final false
  inline void add_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method add_kickPlayerEvent, addr 0x255fd04, size 0xb0, virtual false, abstract: false, final false
  inline void add_kickPlayerEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_selectSuggestedBeatmapEvent, addr 0x255fa44, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value);

  /// @brief Method add_selectSuggestedGameplayModifiersEvent, addr 0x255fba4, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_didOpenInvitePanelEvent, addr 0x255ff00, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method remove_kickPlayerEvent, addr 0x255fdb4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_kickPlayerEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_selectSuggestedBeatmapEvent, addr 0x255faf4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value);

  /// @brief Method remove_selectSuggestedGameplayModifiersEvent, addr 0x255fc54, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerPlayerListViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerPlayerListViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerPlayerListViewController(ServerPlayerListViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerPlayerListViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerPlayerListViewController(ServerPlayerListViewController const&) = delete;

  /// @brief Field _gameServerPlayersTableView, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerPlayersTableView> ____gameServerPlayersTableView;

  /// @brief Field _invitePlayerButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____invitePlayerButton;

  /// @brief Field _cantInvitePlayerHoverHint, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ____cantInvitePlayerHoverHint;

  /// @brief Field _invitePlatformHandler, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::IInvitePlatformHandler* ____invitePlatformHandler;

  /// @brief Field _lobbyPlayersDataModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyPlayersDataModel* ____lobbyPlayersDataModel;

  /// @brief Field _lobbyStateDataModel, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyStateDataModel* ____lobbyStateDataModel;

  /// @brief Field _lobbyPlayerPermissionsModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::LobbyPlayerPermissionsModel* ____lobbyPlayerPermissionsModel;

  /// @brief Field _lobbyGameStateController, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyGameStateController* ____lobbyGameStateController;

  /// @brief Field selectSuggestedBeatmapEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapKey>* ___selectSuggestedBeatmapEvent;

  /// @brief Field selectSuggestedGameplayModifiersEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::GameplayModifiers*>* ___selectSuggestedGameplayModifiersEvent;

  /// @brief Field kickPlayerEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___kickPlayerEvent;

  /// @brief Field didOpenInvitePanelEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action* ___didOpenInvitePanelEvent;

  /// @brief Field _buttonBinder, offset: 0xd0, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerPlayerListViewController, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____gameServerPlayersTableView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____invitePlayerButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____cantInvitePlayerHoverHint) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____invitePlatformHandler) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____lobbyPlayersDataModel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____lobbyStateDataModel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____lobbyPlayerPermissionsModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____lobbyGameStateController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ___selectSuggestedBeatmapEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ___selectSuggestedGameplayModifiersEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ___kickPlayerEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ___didOpenInvitePanelEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPlayerListViewController, ____buttonBinder) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerPlayerListViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerPlayerListViewController*, "", "ServerPlayerListViewController");
