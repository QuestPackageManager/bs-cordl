#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(JoinQuickPlayViewController)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5716))
// CS Name: ::JoinQuickPlayViewController*
class CORDL_TYPE JoinQuickPlayViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapDifficultyDropdown, offset 0x70, size 0x8
  __declspec(property(get = __get__beatmapDifficultyDropdown, put = __set__beatmapDifficultyDropdown))::GlobalNamespace::BeatmapDifficultyDropdown* _beatmapDifficultyDropdown;

  /// @brief Field _songPacksDropdown, offset 0x78, size 0x8
  __declspec(property(get = __get__songPacksDropdown, put = __set__songPacksDropdown))::GlobalNamespace::QuickPlaySongPacksDropdown* _songPacksDropdown;

  /// @brief Field _levelSelectionToggle, offset 0x80, size 0x8
  __declspec(property(get = __get__levelSelectionToggle, put = __set__levelSelectionToggle))::UnityEngine::UI::Toggle* _levelSelectionToggle;

  /// @brief Field _joinButton, offset 0x88, size 0x8
  __declspec(property(get = __get__joinButton, put = __set__joinButton))::UnityEngine::UI::Button* _joinButton;

  /// @brief Field _cancelJoinButton, offset 0x90, size 0x8
  __declspec(property(get = __get__cancelJoinButton, put = __set__cancelJoinButton))::UnityEngine::UI::Button* _cancelJoinButton;

  /// @brief Field didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<bool>* didFinishEvent;

  /// @brief Field _multiplayerModeSettings, offset 0xa0, size 0x8
  __declspec(property(get = __get__multiplayerModeSettings, put = __set__multiplayerModeSettings))::GlobalNamespace::MultiplayerModeSettings* _multiplayerModeSettings;

  __declspec(property(get = get_multiplayerModeSettings))::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;

  constexpr ::GlobalNamespace::BeatmapDifficultyDropdown*& __get__beatmapDifficultyDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDifficultyDropdown*> const& __get__beatmapDifficultyDropdown() const;

  constexpr void __set__beatmapDifficultyDropdown(::GlobalNamespace::BeatmapDifficultyDropdown* value);

  constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown*& __get__songPacksDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySongPacksDropdown*> const& __get__songPacksDropdown() const;

  constexpr void __set__songPacksDropdown(::GlobalNamespace::QuickPlaySongPacksDropdown* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__levelSelectionToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__levelSelectionToggle() const;

  constexpr void __set__levelSelectionToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Button*& __get__joinButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__joinButton() const;

  constexpr void __set__joinButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__cancelJoinButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__cancelJoinButton() const;

  constexpr void __set__cancelJoinButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action_1<bool>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<bool>* value);

  constexpr ::GlobalNamespace::MultiplayerModeSettings*& __get__multiplayerModeSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSettings*> const& __get__multiplayerModeSettings() const;

  constexpr void __set__multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value);

  /// @brief Method add_didFinishEvent, addr 0x22cda2c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_didFinishEvent, addr 0x22cdadc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method get_multiplayerModeSettings, addr 0x22cdb8c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();

  /// @brief Method Setup, addr 0x22cdb94, size 0x90, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData, ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);

  /// @brief Method DidActivate, addr 0x22cdc24, size 0x128, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method ButtonPressed, addr 0x22cdd4c, size 0x8c, virtual false, abstract: false, final false
  inline void ButtonPressed(bool success);

  static inline ::GlobalNamespace::JoinQuickPlayViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22cddd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__12_0, addr 0x22cdde0, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__12_0();

  /// @brief Method <DidActivate>b__12_1, addr 0x22cdde8, size 0x8, virtual false, abstract: false, final false
  inline void _DidActivate_b__12_1();

  // Ctor Parameters [CppParam { name: "", ty: "JoinQuickPlayViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JoinQuickPlayViewController(JoinQuickPlayViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JoinQuickPlayViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JoinQuickPlayViewController(JoinQuickPlayViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JoinQuickPlayViewController();

public:
  /// @brief Field _beatmapDifficultyDropdown, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDifficultyDropdown* ____beatmapDifficultyDropdown;

  /// @brief Field _songPacksDropdown, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySongPacksDropdown* ____songPacksDropdown;

  /// @brief Field _levelSelectionToggle, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____levelSelectionToggle;

  /// @brief Field _joinButton, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____joinButton;

  /// @brief Field _cancelJoinButton, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____cancelJoinButton;

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
