#pragma once
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
// Type: ::JoinQuickPlayViewController
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::JoinQuickPlayViewController*
class CORDL_TYPE JoinQuickPlayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapDifficultyDropdown, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDifficultyDropdown,
                      put = __cordl_internal_set__beatmapDifficultyDropdown))::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> _beatmapDifficultyDropdown;

  /// @brief Field _cancelJoinButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelJoinButton, put = __cordl_internal_set__cancelJoinButton))::UnityW<::UnityEngine::UI::Button> _cancelJoinButton;

  /// @brief Field _joinButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__joinButton, put = __cordl_internal_set__joinButton))::UnityW<::UnityEngine::UI::Button> _joinButton;

  /// @brief Field _levelSelectionToggle, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSelectionToggle, put = __cordl_internal_set__levelSelectionToggle))::UnityW<::UnityEngine::UI::Toggle> _levelSelectionToggle;

  /// @brief Field _multiplayerModeSettings, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerModeSettings, put = __cordl_internal_set__multiplayerModeSettings))::GlobalNamespace::MultiplayerModeSettings* _multiplayerModeSettings;

  /// @brief Field _songPacksDropdown, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__songPacksDropdown, put = __cordl_internal_set__songPacksDropdown))::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> _songPacksDropdown;

  /// @brief Field didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent))::System::Action_1<bool>* didFinishEvent;

  __declspec(property(get = get_multiplayerModeSettings))::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;

  /// @brief Method ButtonPressed, addr 0x2430d20, size 0x8c, virtual false, abstract: false, final false
  inline void ButtonPressed(bool success);

  /// @brief Method DidActivate, addr 0x2430bf8, size 0x128, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::JoinQuickPlayViewController* New_ctor();

  /// @brief Method Setup, addr 0x2430b68, size 0x90, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData, ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);

  /// @brief Method <DidActivate>b__12_0, addr 0x2430db4, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__12_0();

  /// @brief Method <DidActivate>b__12_1, addr 0x2430dbc, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__12_1();

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> const& __cordl_internal_get__beatmapDifficultyDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown>& __cordl_internal_get__beatmapDifficultyDropdown();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelJoinButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelJoinButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__joinButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__joinButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__levelSelectionToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__levelSelectionToggle();

  constexpr ::GlobalNamespace::MultiplayerModeSettings*& __cordl_internal_get__multiplayerModeSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSettings*> const& __cordl_internal_get__multiplayerModeSettings() const;

  constexpr ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> const& __cordl_internal_get__songPacksDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown>& __cordl_internal_get__songPacksDropdown();

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__beatmapDifficultyDropdown(::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> value);

  constexpr void __cordl_internal_set__cancelJoinButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__joinButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__levelSelectionToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value);

  constexpr void __cordl_internal_set__songPacksDropdown(::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x2430dac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x2430a00, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method get_multiplayerModeSettings, addr 0x2430b60, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();

  /// @brief Method remove_didFinishEvent, addr 0x2430ab0, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief Field _beatmapDifficultyDropdown, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> ____beatmapDifficultyDropdown;

  /// @brief Field _songPacksDropdown, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::QuickPlaySongPacksDropdown> ____songPacksDropdown;

  /// @brief Field _levelSelectionToggle, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____levelSelectionToggle;

  /// @brief Field _joinButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____joinButton;

  /// @brief Field _cancelJoinButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelJoinButton;

  /// @brief Field didFinishEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<bool>* ___didFinishEvent;

  /// @brief Field _multiplayerModeSettings, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerModeSettings* ____multiplayerModeSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JoinQuickPlayViewController, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____beatmapDifficultyDropdown) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____songPacksDropdown) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____levelSelectionToggle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____joinButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____cancelJoinButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ___didFinishEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoinQuickPlayViewController, ____multiplayerModeSettings) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JoinQuickPlayViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoinQuickPlayViewController*, "", "JoinQuickPlayViewController");
