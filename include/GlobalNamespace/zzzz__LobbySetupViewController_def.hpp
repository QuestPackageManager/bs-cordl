#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LobbySetupViewController)
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct CannotStartGameReason;
}
namespace GlobalNamespace {
class EditableBeatmapSelectionView;
}
namespace GlobalNamespace {
class EditableModifiersSelectionView;
}
namespace GlobalNamespace {
class GameServersFilterText;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
struct MultiplayerLobbyState;
}
namespace HMUI {
class HoverHint;
}
namespace HMUI {
class ToggleBinder;
}
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13605))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5717))
// CS Name: ::LobbySetupViewController*
class CORDL_TYPE LobbySetupViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _startGameReadyButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__startGameReadyButton, put = __cordl_internal_set__startGameReadyButton))::UnityW<::UnityEngine::UI::Button> _startGameReadyButton;

  /// @brief Field _cancelGameUnreadyButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelGameUnreadyButton, put = __cordl_internal_set__cancelGameUnreadyButton))::UnityW<::UnityEngine::UI::Button> _cancelGameUnreadyButton;

  /// @brief Field _startReadyText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__startReadyText, put = __cordl_internal_set__startReadyText))::UnityW<::Polyglot::LocalizedTextMeshProUGUI> _startReadyText;

  /// @brief Field _cancelUnreadyText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelUnreadyText, put = __cordl_internal_set__cancelUnreadyText))::UnityW<::Polyglot::LocalizedTextMeshProUGUI> _cancelUnreadyText;

  /// @brief Field _serverSettings, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__serverSettings, put = __cordl_internal_set__serverSettings))::UnityW<::GlobalNamespace::GameServersFilterText> _serverSettings;

  /// @brief Field _suggestionHeader, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__suggestionHeader, put = __cordl_internal_set__suggestionHeader))::UnityW<::UnityEngine::GameObject> _suggestionHeader;

  /// @brief Field _beatmapSelectionView, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapSelectionView,
                      put = __cordl_internal_set__beatmapSelectionView))::UnityW<::GlobalNamespace::EditableBeatmapSelectionView> _beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__modifiersSelectionView,
                      put = __cordl_internal_set__modifiersSelectionView))::UnityW<::GlobalNamespace::EditableModifiersSelectionView> _modifiersSelectionView;

  /// @brief Field _cantStartGameHoverHint, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__cantStartGameHoverHint, put = __cordl_internal_set__cantStartGameHoverHint))::UnityW<::HMUI::HoverHint> _cantStartGameHoverHint;

  /// @brief Field _playerMissingLevelHoverHintWrapper, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerMissingLevelHoverHintWrapper,
                      put = __cordl_internal_set__playerMissingLevelHoverHintWrapper))::UnityW<::UnityEngine::GameObject> _playerMissingLevelHoverHintWrapper;

  /// @brief Field _playersMissingLevelHoverHint, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__playersMissingLevelHoverHint, put = __cordl_internal_set__playersMissingLevelHoverHint))::UnityW<::HMUI::HoverHint> _playersMissingLevelHoverHint;

  /// @brief Field _spectatorWarningTextWrapper, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__spectatorWarningTextWrapper,
                      put = __cordl_internal_set__spectatorWarningTextWrapper))::UnityW<::UnityEngine::GameObject> _spectatorWarningTextWrapper;

  /// @brief Field _toggleBinder, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field selectBeatmapEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_selectBeatmapEvent, put = __cordl_internal_set_selectBeatmapEvent))::System::Action* selectBeatmapEvent;

  /// @brief Field selectModifiersEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_selectModifiersEvent, put = __cordl_internal_set_selectModifiersEvent))::System::Action* selectModifiersEvent;

  /// @brief Field startGameOrReadyEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_startGameOrReadyEvent, put = __cordl_internal_set_startGameOrReadyEvent))::System::Action* startGameOrReadyEvent;

  /// @brief Field cancelGameOrUnreadyEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_cancelGameOrUnreadyEvent, put = __cordl_internal_set_cancelGameOrUnreadyEvent))::System::Action* cancelGameOrUnreadyEvent;

  /// @brief Field clearSuggestedBeatmapEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_clearSuggestedBeatmapEvent, put = __cordl_internal_set_clearSuggestedBeatmapEvent))::System::Action* clearSuggestedBeatmapEvent;

  /// @brief Field clearSuggestedModifiersEvent, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_clearSuggestedModifiersEvent, put = __cordl_internal_set_clearSuggestedModifiersEvent))::System::Action* clearSuggestedModifiersEvent;

  /// @brief Field _isPartyOwner, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get__isPartyOwner, put = __cordl_internal_set__isPartyOwner)) bool _isPartyOwner;

  /// @brief Field _isQuickStart, offset 0x109, size 0x1
  __declspec(property(get = __cordl_internal_get__isQuickStart, put = __cordl_internal_set__isQuickStart)) bool _isQuickStart;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__startGameReadyButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__startGameReadyButton() const;

  constexpr void __cordl_internal_set__startGameReadyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelGameUnreadyButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelGameUnreadyButton() const;

  constexpr void __cordl_internal_set__cancelGameUnreadyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::Polyglot::LocalizedTextMeshProUGUI>& __cordl_internal_get__startReadyText();

  constexpr ::UnityW<::Polyglot::LocalizedTextMeshProUGUI> const& __cordl_internal_get__startReadyText() const;

  constexpr void __cordl_internal_set__startReadyText(::UnityW<::Polyglot::LocalizedTextMeshProUGUI> value);

  constexpr ::UnityW<::Polyglot::LocalizedTextMeshProUGUI>& __cordl_internal_get__cancelUnreadyText();

  constexpr ::UnityW<::Polyglot::LocalizedTextMeshProUGUI> const& __cordl_internal_get__cancelUnreadyText() const;

  constexpr void __cordl_internal_set__cancelUnreadyText(::UnityW<::Polyglot::LocalizedTextMeshProUGUI> value);

  constexpr ::UnityW<::GlobalNamespace::GameServersFilterText>& __cordl_internal_get__serverSettings();

  constexpr ::UnityW<::GlobalNamespace::GameServersFilterText> const& __cordl_internal_get__serverSettings() const;

  constexpr void __cordl_internal_set__serverSettings(::UnityW<::GlobalNamespace::GameServersFilterText> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__suggestionHeader();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__suggestionHeader() const;

  constexpr void __cordl_internal_set__suggestionHeader(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::GlobalNamespace::EditableBeatmapSelectionView>& __cordl_internal_get__beatmapSelectionView();

  constexpr ::UnityW<::GlobalNamespace::EditableBeatmapSelectionView> const& __cordl_internal_get__beatmapSelectionView() const;

  constexpr void __cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::EditableBeatmapSelectionView> value);

  constexpr ::UnityW<::GlobalNamespace::EditableModifiersSelectionView>& __cordl_internal_get__modifiersSelectionView();

  constexpr ::UnityW<::GlobalNamespace::EditableModifiersSelectionView> const& __cordl_internal_get__modifiersSelectionView() const;

  constexpr void __cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::EditableModifiersSelectionView> value);

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get__cantStartGameHoverHint();

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get__cantStartGameHoverHint() const;

  constexpr void __cordl_internal_set__cantStartGameHoverHint(::UnityW<::HMUI::HoverHint> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__playerMissingLevelHoverHintWrapper();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__playerMissingLevelHoverHintWrapper() const;

  constexpr void __cordl_internal_set__playerMissingLevelHoverHintWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get__playersMissingLevelHoverHint();

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get__playersMissingLevelHoverHint() const;

  constexpr void __cordl_internal_set__playersMissingLevelHoverHint(::UnityW<::HMUI::HoverHint> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__spectatorWarningTextWrapper();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__spectatorWarningTextWrapper() const;

  constexpr void __cordl_internal_set__spectatorWarningTextWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr ::System::Action*& __cordl_internal_get_selectBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_selectBeatmapEvent() const;

  constexpr void __cordl_internal_set_selectBeatmapEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_selectModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_selectModifiersEvent() const;

  constexpr void __cordl_internal_set_selectModifiersEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_startGameOrReadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_startGameOrReadyEvent() const;

  constexpr void __cordl_internal_set_startGameOrReadyEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_cancelGameOrUnreadyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_cancelGameOrUnreadyEvent() const;

  constexpr void __cordl_internal_set_cancelGameOrUnreadyEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_clearSuggestedBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_clearSuggestedBeatmapEvent() const;

  constexpr void __cordl_internal_set_clearSuggestedBeatmapEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_clearSuggestedModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_clearSuggestedModifiersEvent() const;

  constexpr void __cordl_internal_set_clearSuggestedModifiersEvent(::System::Action* value);

  constexpr bool& __cordl_internal_get__isPartyOwner();

  constexpr bool const& __cordl_internal_get__isPartyOwner() const;

  constexpr void __cordl_internal_set__isPartyOwner(bool value);

  constexpr bool& __cordl_internal_get__isQuickStart();

  constexpr bool const& __cordl_internal_get__isQuickStart() const;

  constexpr void __cordl_internal_set__isQuickStart(bool value);

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
  ::UnityW<::UnityEngine::UI::Button> ____startGameReadyButton;

  /// @brief Field _cancelGameUnreadyButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelGameUnreadyButton;

  /// @brief Field _startReadyText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::Polyglot::LocalizedTextMeshProUGUI> ____startReadyText;

  /// @brief Field _cancelUnreadyText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Polyglot::LocalizedTextMeshProUGUI> ____cancelUnreadyText;

  /// @brief Field _serverSettings, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServersFilterText> ____serverSettings;

  /// @brief Field _suggestionHeader, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____suggestionHeader;

  /// @brief Field _beatmapSelectionView, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EditableBeatmapSelectionView> ____beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EditableModifiersSelectionView> ____modifiersSelectionView;

  /// @brief Field _cantStartGameHoverHint, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ____cantStartGameHoverHint;

  /// @brief Field _playerMissingLevelHoverHintWrapper, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____playerMissingLevelHoverHintWrapper;

  /// @brief Field _playersMissingLevelHoverHint, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ____playersMissingLevelHoverHint;

  /// @brief Field _spectatorWarningTextWrapper, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____spectatorWarningTextWrapper;

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
