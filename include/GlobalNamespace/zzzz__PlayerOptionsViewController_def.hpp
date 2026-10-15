#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerOptionsViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(PlayerOptionsViewController)
namespace BeatSaber::Analytics::Settings {
class SettingsChangeAnalytics;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
namespace HMUI {
class ViewController;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerOptionsViewController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerOptionsViewController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerOptionsViewController*, "", "PlayerOptionsViewController");
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerOptionsViewController
class CORDL_TYPE PlayerOptionsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _okButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__okButton, put = __cordl_internal_set__okButton)) ::UnityW<::UnityEngine::UI::Button> _okButton;

  /// @brief Field _playerDataModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _playerSettingsPanelController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSettingsPanelController, put = __cordl_internal_set__playerSettingsPanelController)) ::UnityW<::GlobalNamespace::PlayerSettingsPanelController>
      _playerSettingsPanelController;

  /// @brief Field _settingsChangeAnalytics, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsChangeAnalytics,
                      put = __cordl_internal_set__settingsChangeAnalytics)) ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics* _settingsChangeAnalytics;

  /// @brief Field didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::UnityW<::HMUI::ViewController>>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x5d9cb58, size 0x150, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x5d9d060, size 0x124, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::GlobalNamespace::PlayerOptionsViewController* New_ctor();

  /// [CompilerGenerated]
  /// @brief Method <DidActivate>b__7_0, addr 0x5d9d188, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__7_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__okButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__okButton();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerSettingsPanelController> const& __cordl_internal_get__playerSettingsPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerSettingsPanelController>& __cordl_internal_get__playerSettingsPanelController();

  constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics* const& __cordl_internal_get__settingsChangeAnalytics() const;

  constexpr ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics*& __cordl_internal_get__settingsChangeAnalytics();

  constexpr ::System::Action_1<::UnityW<::HMUI::ViewController>>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::ViewController>>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__playerSettingsPanelController(::UnityW<::GlobalNamespace::PlayerSettingsPanelController> value);

  constexpr void __cordl_internal_set__settingsChangeAnalytics(::BeatSaber::Analytics::Settings::SettingsChangeAnalytics* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value);

  /// @brief Method .ctor, addr 0x5d9d184, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_didFinishEvent, addr 0x5d9c9d8, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_didFinishEvent, addr 0x5d9ca98, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::HMUI::ViewController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerOptionsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerOptionsViewController", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerOptionsViewController(PlayerOptionsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerOptionsViewController", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerOptionsViewController(PlayerOptionsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7038 };

  /// [SerializeField]
  /// @brief Field _playerSettingsPanelController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerSettingsPanelController> ____playerSettingsPanelController;

  /// [SerializeField]
  /// @brief Field _okButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____okButton;

  /// [Inject]
  /// @brief Field _playerDataModel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// [Inject]
  /// @brief Field _settingsChangeAnalytics, offset: 0x90, size: 0x8, def value: None
  ::BeatSaber::Analytics::Settings::SettingsChangeAnalytics* ____settingsChangeAnalytics;

  /// [CompilerGenerated]
  /// @brief Field didFinishEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::ViewController>>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ____playerSettingsPanelController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ____okButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ____playerDataModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ____settingsChangeAnalytics) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerOptionsViewController, ___didFinishEvent) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerOptionsViewController) == 0xa0, "Size mismatch!");

} // namespace GlobalNamespace
