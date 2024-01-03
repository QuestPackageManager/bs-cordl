#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerPlayerListViewController)
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
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5724))
// CS Name: ::ServerPlayerListViewController*
class CORDL_TYPE ServerPlayerListViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _gameServerPlayersTableView, offset 0x70, size 0x8
  __declspec(property(get = __get__gameServerPlayersTableView, put = __set__gameServerPlayersTableView))::GlobalNamespace::GameServerPlayersTableView* _gameServerPlayersTableView;

  /// @brief Field _invitePlayerButton, offset 0x78, size 0x8
  __declspec(property(get = __get__invitePlayerButton, put = __set__invitePlayerButton))::UnityEngine::UI::Button* _invitePlayerButton;

  /// @brief Field _cantInvitePlayerHoverHint, offset 0x80, size 0x8
  __declspec(property(get = __get__cantInvitePlayerHoverHint, put = __set__cantInvitePlayerHoverHint))::HMUI::HoverHint* _cantInvitePlayerHoverHint;

  /// @brief Field _invitePlatformHandler, offset 0x88, size 0x8
  __declspec(property(get = __get__invitePlatformHandler, put = __set__invitePlatformHandler))::GlobalNamespace::IInvitePlatformHandler* _invitePlatformHandler;

  /// @brief Field _lobbyPlayersDataModel, offset 0x90, size 0x8
  __declspec(property(get = __get__lobbyPlayersDataModel, put = __set__lobbyPlayersDataModel))::GlobalNamespace::ILobbyPlayersDataModel* _lobbyPlayersDataModel;

  /// @brief Field _lobbyStateDataModel, offset 0x98, size 0x8
  __declspec(property(get = __get__lobbyStateDataModel, put = __set__lobbyStateDataModel))::GlobalNamespace::ILobbyStateDataModel* _lobbyStateDataModel;

  /// @brief Field _lobbyPlayerPermissionsModel, offset 0xa0, size 0x8
  __declspec(property(get = __get__lobbyPlayerPermissionsModel, put = __set__lobbyPlayerPermissionsModel))::GlobalNamespace::LobbyPlayerPermissionsModel* _lobbyPlayerPermissionsModel;

  /// @brief Field _lobbyGameStateController, offset 0xa8, size 0x8
  __declspec(property(get = __get__lobbyGameStateController, put = __set__lobbyGameStateController))::GlobalNamespace::ILobbyGameStateController* _lobbyGameStateController;

  /// @brief Field selectSuggestedBeatmapEvent, offset 0xb0, size 0x8
  __declspec(property(get = __get_selectSuggestedBeatmapEvent, put = __set_selectSuggestedBeatmapEvent))::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>* selectSuggestedBeatmapEvent;

  /// @brief Field selectSuggestedGameplayModifiersEvent, offset 0xb8, size 0x8
  __declspec(property(get = __get_selectSuggestedGameplayModifiersEvent,
                      put = __set_selectSuggestedGameplayModifiersEvent))::System::Action_1<::GlobalNamespace::GameplayModifiers*>* selectSuggestedGameplayModifiersEvent;

  /// @brief Field kickPlayerEvent, offset 0xc0, size 0x8
  __declspec(property(get = __get_kickPlayerEvent, put = __set_kickPlayerEvent))::System::Action_1<::StringW>* kickPlayerEvent;

  /// @brief Field didOpenInvitePanelEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_didOpenInvitePanelEvent, put = __set_didOpenInvitePanelEvent))::System::Action* didOpenInvitePanelEvent;

  /// @brief Field _buttonBinder, offset 0xd0, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  constexpr ::GlobalNamespace::GameServerPlayersTableView*& __get__gameServerPlayersTableView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerPlayersTableView*> const& __get__gameServerPlayersTableView() const;

  constexpr void __set__gameServerPlayersTableView(::GlobalNamespace::GameServerPlayersTableView* value);

  constexpr ::UnityEngine::UI::Button*& __get__invitePlayerButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__invitePlayerButton() const;

  constexpr void __set__invitePlayerButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::HoverHint*& __get__cantInvitePlayerHoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get__cantInvitePlayerHoverHint() const;

  constexpr void __set__cantInvitePlayerHoverHint(::HMUI::HoverHint* value);

  constexpr ::GlobalNamespace::IInvitePlatformHandler*& __get__invitePlatformHandler();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IInvitePlatformHandler*> const& __get__invitePlatformHandler() const;

  constexpr void __set__invitePlatformHandler(::GlobalNamespace::IInvitePlatformHandler* value);

  constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& __get__lobbyPlayersDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& __get__lobbyPlayersDataModel() const;

  constexpr void __set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value);

  constexpr ::GlobalNamespace::ILobbyStateDataModel*& __get__lobbyStateDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyStateDataModel*> const& __get__lobbyStateDataModel() const;

  constexpr void __set__lobbyStateDataModel(::GlobalNamespace::ILobbyStateDataModel* value);

  constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& __get__lobbyPlayerPermissionsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyPlayerPermissionsModel*> const& __get__lobbyPlayerPermissionsModel() const;

  constexpr void __set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value);

  constexpr ::GlobalNamespace::ILobbyGameStateController*& __get__lobbyGameStateController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& __get__lobbyGameStateController() const;

  constexpr void __set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value);

  constexpr ::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*& __get_selectSuggestedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*> const& __get_selectSuggestedBeatmapEvent() const;

  constexpr void __set_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::GameplayModifiers*>*& __get_selectSuggestedGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*> const& __get_selectSuggestedGameplayModifiersEvent() const;

  constexpr void __set_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

  constexpr ::System::Action_1<::StringW>*& __get_kickPlayerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __get_kickPlayerEvent() const;

  constexpr void __set_kickPlayerEvent(::System::Action_1<::StringW>* value);

  constexpr ::System::Action*& __get_didOpenInvitePanelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didOpenInvitePanelEvent() const;

  constexpr void __set_didOpenInvitePanelEvent(::System::Action* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method add_selectSuggestedBeatmapEvent, addr 0x22d0a0c, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>* value);

  /// @brief Method remove_selectSuggestedBeatmapEvent, addr 0x22d0abc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectSuggestedBeatmapEvent(::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>* value);

  /// @brief Method add_selectSuggestedGameplayModifiersEvent, addr 0x22d0b6c, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_selectSuggestedGameplayModifiersEvent, addr 0x22d0c1c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method add_kickPlayerEvent, addr 0x22d0ccc, size 0xb0, virtual false, abstract: false, final false
  inline void add_kickPlayerEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_kickPlayerEvent, addr 0x22d0d7c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_kickPlayerEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_didOpenInvitePanelEvent, addr 0x22d0e2c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method remove_didOpenInvitePanelEvent, addr 0x22d0ec8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didOpenInvitePanelEvent(::System::Action* value);

  /// @brief Method DidActivate, addr 0x22d0f64, size 0x384, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22d19f0, size 0x32c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleLobbyPlayersDataDidChange, addr 0x22d1f2c, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyPlayersDataDidChange(::StringW userId);

  /// @brief Method HandleLobbyGameStateControllerLobbyStateChanged, addr 0x22d1f30, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyGameStateControllerLobbyStateChanged(::GlobalNamespace::MultiplayerLobbyState _);

  /// @brief Method HandleLobbyPlayerPermissionChanged, addr 0x22d1f34, size 0x4, virtual false, abstract: false, final false
  inline void HandleLobbyPlayerPermissionChanged();

  /// @brief Method SetDataToTable, addr 0x22d17f0, size 0x200, virtual false, abstract: false, final false
  inline void SetDataToTable();

  /// @brief Method HandleSelectSuggestedLevel, addr 0x22d1ff4, size 0x1c, virtual false, abstract: false, final false
  inline void HandleSelectSuggestedLevel(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel);

  /// @brief Method HandleSelectSuggestedGameplayModifiers, addr 0x22d2010, size 0x1c, virtual false, abstract: false, final false
  inline void HandleSelectSuggestedGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method HandleKickPlayer, addr 0x22d202c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleKickPlayer(::StringW userId);

  /// @brief Method HandleOpenPlatformInvitePanel, addr 0x22d2048, size 0xc8, virtual false, abstract: false, final false
  inline void HandleOpenPlatformInvitePanel();

  /// @brief Method TrySetInviteButtonEnabled, addr 0x22d14f8, size 0x2f8, virtual false, abstract: false, final false
  inline void TrySetInviteButtonEnabled();

  static inline ::GlobalNamespace::ServerPlayerListViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d2110, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ServerPlayerListViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerPlayerListViewController(ServerPlayerListViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerPlayerListViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerPlayerListViewController(ServerPlayerListViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerPlayerListViewController();

public:
  /// @brief Field _gameServerPlayersTableView, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameServerPlayersTableView* ____gameServerPlayersTableView;

  /// @brief Field _invitePlayerButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____invitePlayerButton;

  /// @brief Field _cantInvitePlayerHoverHint, offset: 0x80, size: 0x8, def value: None
  ::HMUI::HoverHint* ____cantInvitePlayerHoverHint;

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
  ::System::Action_1<::GlobalNamespace::PreviewDifficultyBeatmap*>* ___selectSuggestedBeatmapEvent;

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
