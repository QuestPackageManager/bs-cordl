#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LobbySetupViewController)
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class HoverHint;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace GlobalNamespace {
class GameServersFilterText;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace GlobalNamespace {
class EditableModifiersSelectionView;
}
namespace GlobalNamespace {
class EditableBeatmapSelectionView;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbySetupViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbySetupViewController);
// Type: ::LobbySetupViewController
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 266, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5717))
// CS Name: ::LobbySetupViewController*
class CORDL_TYPE LobbySetupViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _startGameReadyButton, offset 0x70, size 0x8
  __declspec(property(get = __get__startGameReadyButton, put = __set__startGameReadyButton))::UnityEngine::UI::Button* _startGameReadyButton;

  /// @brief Field _cancelGameUnreadyButton, offset 0x78, size 0x8
  __declspec(property(get = __get__cancelGameUnreadyButton, put = __set__cancelGameUnreadyButton))::UnityEngine::UI::Button* _cancelGameUnreadyButton;

  /// @brief Field _startReadyText, offset 0x80, size 0x8
  __declspec(property(get = __get__startReadyText, put = __set__startReadyText))::Polyglot::LocalizedTextMeshProUGUI* _startReadyText;

  /// @brief Field _cancelUnreadyText, offset 0x88, size 0x8
  __declspec(property(get = __get__cancelUnreadyText, put = __set__cancelUnreadyText))::Polyglot::LocalizedTextMeshProUGUI* _cancelUnreadyText;

  /// @brief Field _serverSettings, offset 0x90, size 0x8
  __declspec(property(get = __get__serverSettings, put = __set__serverSettings))::GlobalNamespace::GameServersFilterText* _serverSettings;

  /// @brief Field _suggestionHeader, offset 0x98, size 0x8
  __declspec(property(get = __get__suggestionHeader, put = __set__suggestionHeader))::UnityEngine::GameObject* _suggestionHeader;

  /// @brief Field _beatmapSelectionView, offset 0xa0, size 0x8
  __declspec(property(get = __get__beatmapSelectionView, put = __set__beatmapSelectionView))::GlobalNamespace::EditableBeatmapSelectionView* _beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset 0xa8, size 0x8
  __declspec(property(get = __get__modifiersSelectionView, put = __set__modifiersSelectionView))::GlobalNamespace::EditableModifiersSelectionView* _modifiersSelectionView;

  /// @brief Field _cantStartGameHoverHint, offset 0xb0, size 0x8
  __declspec(property(get = __get__cantStartGameHoverHint, put = __set__cantStartGameHoverHint))::HMUI::HoverHint* _cantStartGameHoverHint;

  /// @brief Field _playerMissingLevelHoverHintWrapper, offset 0xb8, size 0x8
  __declspec(property(get = __get__playerMissingLevelHoverHintWrapper, put = __set__playerMissingLevelHoverHintWrapper))::UnityEngine::GameObject* _playerMissingLevelHoverHintWrapper;

  /// @brief Field _playersMissingLevelHoverHint, offset 0xc0, size 0x8
  __declspec(property(get = __get__playersMissingLevelHoverHint, put = __set__playersMissingLevelHoverHint))::HMUI::HoverHint* _playersMissingLevelHoverHint;

  /// @brief Field _spectatorWarningTextWrapper, offset 0xc8, size 0x8
  __declspec(property(get = __get__spectatorWarningTextWrapper, put = __set__spectatorWarningTextWrapper))::UnityEngine::GameObject* _spectatorWarningTextWrapper;

  /// @brief Field _toggleBinder, offset 0xd0, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field selectBeatmapEvent, offset 0xd8, size 0x8
  __declspec(property(get = __get_selectBeatmapEvent, put = __set_selectBeatmapEvent))::System::Action* selectBeatmapEvent;

  /// @brief Field selectModifiersEvent, offset 0xe0, size 0x8
  __declspec(property(get = __get_selectModifiersEvent, put = __set_selectModifiersEvent))::System::Action* selectModifiersEvent;

  /// @brief Field startGameOrReadyEvent, offset 0xe8, size 0x8
  __declspec(property(get = __get_startGameOrReadyEvent, put = __set_startGameOrReadyEvent))::System::Action* startGameOrReadyEvent;

  /// @brief Field cancelGameOrUnreadyEvent, offset 0xf0, size 0x8
  __declspec(property(get = __get_cancelGameOrUnreadyEvent, put = __set_cancelGameOrUnreadyEvent))::System::Action* cancelGameOrUnreadyEvent;

  /// @brief Field clearSuggestedBeatmapEvent, offset 0xf8, size 0x8
  __declspec(property(get = __get_clearSuggestedBeatmapEvent, put = __set_clearSuggestedBeatmapEvent))::System::Action* clearSuggestedBeatmapEvent;

  /// @brief Field clearSuggestedModifiersEvent, offset 0x100, size 0x8
  __declspec(property(get = __get_clearSuggestedModifiersEvent, put = __set_clearSuggestedModifiersEvent))::System::Action* clearSuggestedModifiersEvent;

  /// @brief Field _isPartyOwner, offset 0x108, size 0x1
  __declspec(property(get = __get__isPartyOwner, put = __set__isPartyOwner)) bool _isPartyOwner;

  /// @brief Field _isQuickStart, offset 0x109, size 0x1
  __declspec(property(get = __get__isQuickStart, put = __set__isQuickStart)) bool _isQuickStart;

  constexpr ::UnityEngine::UI::Button*& __get__startGameReadyButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__startGameReadyButton() const;

  constexpr void __set__startGameReadyButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__cancelGameUnreadyButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__cancelGameUnreadyButton() const;

  constexpr void __set__cancelGameUnreadyButton(::UnityEngine::UI::Button* value);

  constexpr ::Polyglot::LocalizedTextMeshProUGUI*& __get__startReadyText();

  constexpr ::cordl_internals::to_const_pointer<::Polyglot::LocalizedTextMeshProUGUI*> const& __get__startReadyText() const;

  constexpr void __set__startReadyText(::Polyglot::LocalizedTextMeshProUGUI* value);

  constexpr ::Polyglot::LocalizedTextMeshProUGUI*& __get__cancelUnreadyText();

  constexpr ::cordl_internals::to_const_pointer<::Polyglot::LocalizedTextMeshProUGUI*> const& __get__cancelUnreadyText() const;

  constexpr void __set__cancelUnreadyText(::Polyglot::LocalizedTextMeshProUGUI* value);

  constexpr ::GlobalNamespace::GameServersFilterText*& __get__serverSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServersFilterText*> const& __get__serverSettings() const;

  constexpr void __set__serverSettings(::GlobalNamespace::GameServersFilterText* value);

  constexpr ::UnityEngine::GameObject*& __get__suggestionHeader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__suggestionHeader() const;

  constexpr void __set__suggestionHeader(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::EditableBeatmapSelectionView*& __get__beatmapSelectionView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditableBeatmapSelectionView*> const& __get__beatmapSelectionView() const;

  constexpr void __set__beatmapSelectionView(::GlobalNamespace::EditableBeatmapSelectionView* value);

  constexpr ::GlobalNamespace::EditableModifiersSelectionView*& __get__modifiersSelectionView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditableModifiersSelectionView*> const& __get__modifiersSelectionView() const;

  constexpr void __set__modifiersSelectionView(::GlobalNamespace::EditableModifiersSelectionView* value);

  constexpr ::HMUI::HoverHint*& __get__cantStartGameHoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get__cantStartGameHoverHint() const;

  constexpr void __set__cantStartGameHoverHint(::HMUI::HoverHint* value);

  constexpr ::UnityEngine::GameObject*& __get__playerMissingLevelHoverHintWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__playerMissingLevelHoverHintWrapper() const;

  constexpr void __set__playerMissingLevelHoverHintWrapper(::UnityEngine::GameObject* value);

  constexpr ::HMUI::HoverHint*& __get__playersMissingLevelHoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get__playersMissingLevelHoverHint() const;

  constexpr void __set__playersMissingLevelHoverHint(::HMUI::HoverHint* value);

  constexpr ::UnityEngine::GameObject*& __get__spectatorWarningTextWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__spectatorWarningTextWrapper() const;

  constexpr void __set__spectatorWarningTextWrapper(::UnityEngine::GameObject* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr ::System::Action*& __get_selectBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_selectBeatmapEvent() const;

  constexpr void __set_selectBeatmapEvent(::System::Action* value);

  constexpr ::System::Action*& __get_selectModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_selectModifiersEvent() const;

  constexpr void __set_selectModifiersEvent(::System::Action* value);

  constexpr ::System::Action*& __get_startGameOrReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_startGameOrReadyEvent() const;

  constexpr void __set_startGameOrReadyEvent(::System::Action* value);

  constexpr ::System::Action*& __get_cancelGameOrUnreadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_cancelGameOrUnreadyEvent() const;

  constexpr void __set_cancelGameOrUnreadyEvent(::System::Action* value);

  constexpr ::System::Action*& __get_clearSuggestedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_clearSuggestedBeatmapEvent() const;

  constexpr void __set_clearSuggestedBeatmapEvent(::System::Action* value);

  constexpr ::System::Action*& __get_clearSuggestedModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_clearSuggestedModifiersEvent() const;

  constexpr void __set_clearSuggestedModifiersEvent(::System::Action* value);

  constexpr bool& __get__isPartyOwner();

  constexpr bool const& __get__isPartyOwner() const;

  constexpr void __set__isPartyOwner(bool value);

  constexpr bool& __get__isQuickStart();

  constexpr bool const& __get__isQuickStart() const;

  constexpr void __set__isQuickStart(bool value);

  /// @brief Method add_selectBeatmapEvent, addr 0x22cddf0, size 0x9c, virtual false, abstract: false, final false
  inline void add_selectBeatmapEvent(::System::Action* value);

  /// @brief Method remove_selectBeatmapEvent, addr 0x22cde8c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_selectBeatmapEvent(::System::Action* value);

  /// @brief Method add_selectModifiersEvent, addr 0x22cdf28, size 0x9c, virtual false, abstract: false, final false
  inline void add_selectModifiersEvent(::System::Action* value);

  /// @brief Method remove_selectModifiersEvent, addr 0x22cdfc4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_selectModifiersEvent(::System::Action* value);

  /// @brief Method add_startGameOrReadyEvent, addr 0x22ce060, size 0x9c, virtual false, abstract: false, final false
  inline void add_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method remove_startGameOrReadyEvent, addr 0x22ce0fc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_startGameOrReadyEvent(::System::Action* value);

  /// @brief Method add_cancelGameOrUnreadyEvent, addr 0x22ce198, size 0x9c, virtual false, abstract: false, final false
  inline void add_cancelGameOrUnreadyEvent(::System::Action* value);

  /// @brief Method remove_cancelGameOrUnreadyEvent, addr 0x22ce234, size 0x9c, virtual false, abstract: false, final false
  inline void remove_cancelGameOrUnreadyEvent(::System::Action* value);

  /// @brief Method add_clearSuggestedBeatmapEvent, addr 0x22ce2d0, size 0x9c, virtual false, abstract: false, final false
  inline void add_clearSuggestedBeatmapEvent(::System::Action* value);

  /// @brief Method remove_clearSuggestedBeatmapEvent, addr 0x22ce36c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_clearSuggestedBeatmapEvent(::System::Action* value);

  /// @brief Method add_clearSuggestedModifiersEvent, addr 0x22ce408, size 0xa0, virtual false, abstract: false, final false
  inline void add_clearSuggestedModifiersEvent(::System::Action* value);

  /// @brief Method remove_clearSuggestedModifiersEvent, addr 0x22ce4a8, size 0xa0, virtual false, abstract: false, final false
  inline void remove_clearSuggestedModifiersEvent(::System::Action* value);

  /// @brief Method Setup, addr 0x22ce548, size 0x204, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, bool isPartyOwner, bool allowSongSelection, bool allowModifierSelection, bool isManaged, bool isQuickStart);

  /// @brief Method SetLobbyPlayerData, addr 0x22ce9b0, size 0x3bc, virtual false, abstract: false, final false
  inline void SetLobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData);

  /// @brief Method SetPlayersMissingLevelText, addr 0x22ced90, size 0x58, virtual false, abstract: false, final false
  inline void SetPlayersMissingLevelText(::StringW playersMissingLevelText);

  /// @brief Method SetPlayerActiveState, addr 0x22ced6c, size 0x24, virtual false, abstract: false, final false
  inline void SetPlayerActiveState(bool isActive);

  /// @brief Method SetStartGameEnabled, addr 0x22cede8, size 0x68, virtual false, abstract: false, final false
  inline void SetStartGameEnabled(::GlobalNamespace::CannotStartGameReason cannotStartGameReason);

  /// @brief Method SetLobbyState, addr 0x22cee50, size 0xe0, virtual false, abstract: false, final false
  inline void SetLobbyState(::GlobalNamespace::MultiplayerLobbyState lobbyState);

  /// @brief Method DidActivate, addr 0x22ceff0, size 0x298, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method OnDestroy, addr 0x22cf288, size 0x1c, virtual true, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::LobbySetupViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22cf2a4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__44_0, addr 0x22cf30c, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__44_0();

  /// @brief Method <DidActivate>b__44_1, addr 0x22cf328, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__44_1();

  /// @brief Method <DidActivate>b__44_2, addr 0x22cf344, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__44_2();

  /// @brief Method <DidActivate>b__44_3, addr 0x22cf360, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__44_3();

  /// @brief Method <DidActivate>b__44_4, addr 0x22cf37c, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__44_4();

  /// @brief Method <DidActivate>b__44_5, addr 0x22cf398, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__44_5();

  // Ctor Parameters [CppParam { name: "", ty: "LobbySetupViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbySetupViewController(LobbySetupViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbySetupViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbySetupViewController(LobbySetupViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbySetupViewController();

public:
  /// @brief Field _startGameReadyButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____startGameReadyButton;

  /// @brief Field _cancelGameUnreadyButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____cancelGameUnreadyButton;

  /// @brief Field _startReadyText, offset: 0x80, size: 0x8, def value: None
  ::Polyglot::LocalizedTextMeshProUGUI* ____startReadyText;

  /// @brief Field _cancelUnreadyText, offset: 0x88, size: 0x8, def value: None
  ::Polyglot::LocalizedTextMeshProUGUI* ____cancelUnreadyText;

  /// @brief Field _serverSettings, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::GameServersFilterText* ____serverSettings;

  /// @brief Field _suggestionHeader, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____suggestionHeader;

  /// @brief Field _beatmapSelectionView, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::EditableBeatmapSelectionView* ____beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::EditableModifiersSelectionView* ____modifiersSelectionView;

  /// @brief Field _cantStartGameHoverHint, offset: 0xb0, size: 0x8, def value: None
  ::HMUI::HoverHint* ____cantStartGameHoverHint;

  /// @brief Field _playerMissingLevelHoverHintWrapper, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____playerMissingLevelHoverHintWrapper;

  /// @brief Field _playersMissingLevelHoverHint, offset: 0xc0, size: 0x8, def value: None
  ::HMUI::HoverHint* ____playersMissingLevelHoverHint;

  /// @brief Field _spectatorWarningTextWrapper, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____spectatorWarningTextWrapper;

  /// @brief Field _toggleBinder, offset: 0xd0, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field selectBeatmapEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action* ___selectBeatmapEvent;

  /// @brief Field selectModifiersEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action* ___selectModifiersEvent;

  /// @brief Field startGameOrReadyEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action* ___startGameOrReadyEvent;

  /// @brief Field cancelGameOrUnreadyEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action* ___cancelGameOrUnreadyEvent;

  /// @brief Field clearSuggestedBeatmapEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action* ___clearSuggestedBeatmapEvent;

  /// @brief Field clearSuggestedModifiersEvent, offset: 0x100, size: 0x8, def value: None
  ::System::Action* ___clearSuggestedModifiersEvent;

  /// @brief Field _isPartyOwner, offset: 0x108, size: 0x1, def value: None
  bool ____isPartyOwner;

  /// @brief Field _isQuickStart, offset: 0x109, size: 0x1, def value: None
  bool ____isQuickStart;

  /// @brief Field kStartTextKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kStartTextKey{ u"LOBBY_START_GAME" };

  /// @brief Field kCancelTextKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCancelTextKey{ u"BUTTON_CANCEL" };

  /// @brief Field kReadyTextKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kReadyTextKey{ u"LOBBY_READY" };

  /// @brief Field kUnreadyTextKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kUnreadyTextKey{ u"BUTTON_UNREADY" };

  /// @brief Field kRetryTextKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kRetryTextKey{ u"BUTTON_RETRY" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbySetupViewController, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____startGameReadyButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____cancelGameUnreadyButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____startReadyText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____cancelUnreadyText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____serverSettings) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____suggestionHeader) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____beatmapSelectionView) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____modifiersSelectionView) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____cantStartGameHoverHint) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____playerMissingLevelHoverHintWrapper) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____playersMissingLevelHoverHint) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____spectatorWarningTextWrapper) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____toggleBinder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ___selectBeatmapEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ___selectModifiersEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ___startGameOrReadyEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ___cancelGameOrUnreadyEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ___clearSuggestedBeatmapEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ___clearSuggestedModifiersEvent) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____isPartyOwner) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbySetupViewController, ____isQuickStart) == 0x109, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbySetupViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbySetupViewController*, "", "LobbySetupViewController");
