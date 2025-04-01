#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinQuickPlayViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(JoinQuickPlayViewController)
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class JoinQuickPlayViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JoinQuickPlayViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: JoinQuickPlayViewController
class CORDL_TYPE JoinQuickPlayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapDifficultyDropdown, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDifficultyDropdown, put = __cordl_internal_set__beatmapDifficultyDropdown)) ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown>
      _beatmapDifficultyDropdown;

  /// @brief Field _cancelJoinButton, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelJoinButton, put = __cordl_internal_set__cancelJoinButton)) ::UnityW<::UnityEngine::UI::Button> _cancelJoinButton;

  /// @brief Field _joinButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__joinButton, put = __cordl_internal_set__joinButton)) ::UnityW<::UnityEngine::UI::Button> _joinButton;

  /// @brief Field _levelSelectionToggle, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSelectionToggle, put = __cordl_internal_set__levelSelectionToggle)) ::UnityW<::UnityEngine::UI::Toggle> _levelSelectionToggle;

  /// @brief Field _multiplayerModeSettings, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerModeSettings, put = __cordl_internal_set__multiplayerModeSettings)) ::GlobalNamespace::MultiplayerModeSettings* _multiplayerModeSettings;

  /// @brief Field _songPacksDropdown, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__songPacksDropdown, put = __cordl_internal_set__songPacksDropdown)) ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> _songPacksDropdown;

  /// @brief Field didFinishEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<bool>* didFinishEvent;

  __declspec(property(get = get_multiplayerModeSettings)) ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;

  /// @brief Method ButtonPressed, addr 0x3b68390, size 0x8c, virtual false, abstract: false, final false
  inline void ButtonPressed(bool success);

  /// @brief Method DidActivate, addr 0x3b68270, size 0x120, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::JoinQuickPlayViewController* New_ctor();

  /// @brief Method Setup, addr 0x3b681e0, size 0x90, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData, ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);

  /// @brief Method <DidActivate>b__12_0, addr 0x3b68424, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__12_0();

  /// @brief Method <DidActivate>b__12_1, addr 0x3b6842c, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__12_1();

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> const& __cordl_internal_get__beatmapDifficultyDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown>& __cordl_internal_get__beatmapDifficultyDropdown();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelJoinButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelJoinButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__joinButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__joinButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__levelSelectionToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__levelSelectionToggle();

  constexpr ::GlobalNamespace::MultiplayerModeSettings* const& __cordl_internal_get__multiplayerModeSettings() const;

  constexpr ::GlobalNamespace::MultiplayerModeSettings*& __cordl_internal_get__multiplayerModeSettings();

  constexpr ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> const& __cordl_internal_get__songPacksDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown>& __cordl_internal_get__songPacksDropdown();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__beatmapDifficultyDropdown(::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> value);

  constexpr void __cordl_internal_set__cancelJoinButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__joinButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__levelSelectionToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value);

  constexpr void __cordl_internal_set__songPacksDropdown(::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x3b6841c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b68078, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method get_multiplayerModeSettings, addr 0x3b681d8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();

  /// @brief Method remove_didFinishEvent, addr 0x3b68128, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JoinQuickPlayViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JoinQuickPlayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JoinQuickPlayViewController(JoinQuickPlayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JoinQuickPlayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JoinQuickPlayViewController(JoinQuickPlayViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5379 };

  /// @brief Field _beatmapDifficultyDropdown, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> ____beatmapDifficultyDropdown;

  /// @brief Field _songPacksDropdown, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> ____songPacksDropdown;

  /// @brief Field _levelSelectionToggle, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____levelSelectionToggle;

  /// @brief Field _joinButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____joinButton;

  /// @brief Field _cancelJoinButton, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelJoinButton;

  /// @brief Field didFinishEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<bool>* ___didFinishEvent;

  /// @brief Field _multiplayerModeSettings, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerModeSettings* ____multiplayerModeSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____beatmapDifficultyDropdown) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____songPacksDropdown) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____levelSelectionToggle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____joinButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____cancelJoinButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ___didFinishEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____multiplayerModeSettings) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JoinQuickPlayViewController, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JoinQuickPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoinQuickPlayViewController*, "", "JoinQuickPlayViewController");
