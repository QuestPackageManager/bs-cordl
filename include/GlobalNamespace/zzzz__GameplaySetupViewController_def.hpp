#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameplaySetupViewController)
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class ColorsOverrideSettingsPanelController;
}
namespace GlobalNamespace {
class EnvironmentOverrideSettingsPanelController;
}
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IRefreshable;
}
namespace GlobalNamespace {
class MultiplayerSettingsPanelController;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class __GameplaySetupViewController__Panel;
}
namespace GlobalNamespace {
struct __PlayerSettingsPanelController__PlayerSettingsPanelLayout;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class __GameplaySetupViewController__Panel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplaySetupViewController);
MARK_REF_PTR_T(::GlobalNamespace::__GameplaySetupViewController__Panel);
// Type: ::Panel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplaySetupViewController::Panel*
class CORDL_TYPE __GameplaySetupViewController__Panel : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObject, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gameObject, put = __cordl_internal_set_gameObject))::UnityW<::UnityEngine::GameObject> gameObject;

  /// @brief Field refreshable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_refreshable, put = __cordl_internal_set_refreshable))::GlobalNamespace::IRefreshable* refreshable;

  /// @brief Field title, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_title, put = __cordl_internal_set_title))::StringW title;

  static inline ::GlobalNamespace::__GameplaySetupViewController__Panel* New_ctor(::StringW title, ::GlobalNamespace::IRefreshable* refreshable, ::UnityEngine::GameObject* gameObject);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gameObject();

  constexpr ::GlobalNamespace::IRefreshable*& __cordl_internal_get_refreshable();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IRefreshable*> const& __cordl_internal_get_refreshable() const;

  constexpr ::StringW const& __cordl_internal_get_title() const;

  constexpr ::StringW& __cordl_internal_get_title();

  constexpr void __cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_refreshable(::GlobalNamespace::IRefreshable* value);

  constexpr void __cordl_internal_set_title(::StringW value);

  /// @brief Method .ctor, addr 0x24186d8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW title, ::GlobalNamespace::IRefreshable* refreshable, ::UnityEngine::GameObject* gameObject);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameplaySetupViewController__Panel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GameplaySetupViewController__Panel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameplaySetupViewController__Panel(__GameplaySetupViewController__Panel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameplaySetupViewController__Panel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameplaySetupViewController__Panel(__GameplaySetupViewController__Panel const&) = delete;

  /// @brief Field title, offset: 0x10, size: 0x8, def value: None
  ::StringW ___title;

  /// @brief Field refreshable, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IRefreshable* ___refreshable;

  /// @brief Field gameObject, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___gameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplaySetupViewController__Panel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplaySetupViewController__Panel, ___title) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplaySetupViewController__Panel, ___refreshable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameplaySetupViewController__Panel, ___gameObject) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplaySetupViewController
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 194, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplaySetupViewController*
class CORDL_TYPE GameplaySetupViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using Panel = ::GlobalNamespace::__GameplaySetupViewController__Panel;

  /// @brief Field _activePanelIdx, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__activePanelIdx, put = __cordl_internal_set__activePanelIdx)) int32_t _activePanelIdx;

  /// @brief Field _colorsOverrideSettingsPanelController, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__colorsOverrideSettingsPanelController,
                      put = __cordl_internal_set__colorsOverrideSettingsPanelController))::UnityW<::GlobalNamespace::ColorsOverrideSettingsPanelController> _colorsOverrideSettingsPanelController;

  /// @brief Field _environmentOverrideSettingsPanelController, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get__environmentOverrideSettingsPanelController,
      put = __cordl_internal_set__environmentOverrideSettingsPanelController))::UnityW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController> _environmentOverrideSettingsPanelController;

  /// @brief Field _gameplayModifiersPanelController, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersPanelController,
                      put = __cordl_internal_set__gameplayModifiersPanelController))::UnityW<::GlobalNamespace::GameplayModifiersPanelController> _gameplayModifiersPanelController;

  /// @brief Field _isInitialized, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _multiplayerSettingsPanelController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSettingsPanelController,
                      put = __cordl_internal_set__multiplayerSettingsPanelController))::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> _multiplayerSettingsPanelController;

  /// @brief Field _panels, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__panels, put = __cordl_internal_set__panels))::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>* _panels;

  /// @brief Field _playerDataModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _playerSettingsPanelController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSettingsPanelController,
                      put = __cordl_internal_set__playerSettingsPanelController))::UnityW<::GlobalNamespace::PlayerSettingsPanelController> _playerSettingsPanelController;

  /// @brief Field _selectionSegmentedControl, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__selectionSegmentedControl, put = __cordl_internal_set__selectionSegmentedControl))::UnityW<::HMUI::TextSegmentedControl> _selectionSegmentedControl;

  /// @brief Field _shouldRefreshContent, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldRefreshContent, put = __cordl_internal_set__shouldRefreshContent)) bool _shouldRefreshContent;

  /// @brief Field _showColorSchemesSettings, offset 0xbe, size 0x1
  __declspec(property(get = __cordl_internal_get__showColorSchemesSettings, put = __cordl_internal_set__showColorSchemesSettings)) bool _showColorSchemesSettings;

  /// @brief Field _showEnvironmentOverrideSettings, offset 0xbd, size 0x1
  __declspec(property(get = __cordl_internal_get__showEnvironmentOverrideSettings, put = __cordl_internal_set__showEnvironmentOverrideSettings)) bool _showEnvironmentOverrideSettings;

  /// @brief Field _showModifiers, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get__showModifiers, put = __cordl_internal_set__showModifiers)) bool _showModifiers;

  /// @brief Field _showMultiplayer, offset 0xbf, size 0x1
  __declspec(property(get = __cordl_internal_get__showMultiplayer, put = __cordl_internal_set__showMultiplayer)) bool _showMultiplayer;

  __declspec(property(get = get_colorSchemesSettings))::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings;

  /// @brief Field didChangeGameplayModifiersEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeGameplayModifiersEvent, put = __cordl_internal_set_didChangeGameplayModifiersEvent))::System::Action* didChangeGameplayModifiersEvent;

  __declspec(property(get = get_environmentOverrideSettings))::GlobalNamespace::OverrideEnvironmentSettings* environmentOverrideSettings;

  __declspec(property(get = get_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_playerSettings))::GlobalNamespace::PlayerSpecificSettings* playerSettings;

  /// @brief Method DidActivate, addr 0x2418190, size 0x174, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers, addr 0x24185ac, size 0x54, virtual false, abstract: false, final false
  inline void HandleGameplayModifiersPanelControllerDidChangeGameplayModifiers();

  /// @brief Method HandlePlayerSettingsPanelControllerDidChangePlayerSettings, addr 0x2418574, size 0x38, virtual false, abstract: false, final false
  inline void HandlePlayerSettingsPanelControllerDidChangePlayerSettings();

  /// @brief Method HandleSelectionSegmentedControlDidSelectCell, addr 0x24184bc, size 0x8, virtual false, abstract: false, final false
  inline void HandleSelectionSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  /// @brief Method Init, addr 0x241798c, size 0x90, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::GameplaySetupViewController* New_ctor();

  /// @brief Method OnDisable, addr 0x24183a0, size 0x11c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method RefreshActivePanel, addr 0x2418600, size 0xd8, virtual false, abstract: false, final false
  inline void RefreshActivePanel();

  /// @brief Method RefreshContent, addr 0x2417a40, size 0x72c, virtual false, abstract: false, final false
  inline void RefreshContent();

  /// @brief Method SetActivePanel, addr 0x24184c4, size 0xb0, virtual false, abstract: false, final false
  inline void SetActivePanel(int32_t panelIdx);

  /// @brief Method Setup, addr 0x2417900, size 0x8c, virtual false, abstract: false, final false
  inline void Setup(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings, bool showMultiplayer,
                    ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout playerSettingsPanelLayout);

  constexpr int32_t const& __cordl_internal_get__activePanelIdx() const;

  constexpr int32_t& __cordl_internal_get__activePanelIdx();

  constexpr ::UnityW<::GlobalNamespace::ColorsOverrideSettingsPanelController> const& __cordl_internal_get__colorsOverrideSettingsPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::ColorsOverrideSettingsPanelController>& __cordl_internal_get__colorsOverrideSettingsPanelController();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController> const& __cordl_internal_get__environmentOverrideSettingsPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController>& __cordl_internal_get__environmentOverrideSettingsPanelController();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> const& __cordl_internal_get__gameplayModifiersPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersPanelController>& __cordl_internal_get__gameplayModifiersPanelController();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> const& __cordl_internal_get__multiplayerSettingsPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController>& __cordl_internal_get__multiplayerSettingsPanelController();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>*& __cordl_internal_get__panels();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>*> const& __cordl_internal_get__panels() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerSettingsPanelController> const& __cordl_internal_get__playerSettingsPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerSettingsPanelController>& __cordl_internal_get__playerSettingsPanelController();

  constexpr ::UnityW<::HMUI::TextSegmentedControl> const& __cordl_internal_get__selectionSegmentedControl() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControl>& __cordl_internal_get__selectionSegmentedControl();

  constexpr bool const& __cordl_internal_get__shouldRefreshContent() const;

  constexpr bool& __cordl_internal_get__shouldRefreshContent();

  constexpr bool const& __cordl_internal_get__showColorSchemesSettings() const;

  constexpr bool& __cordl_internal_get__showColorSchemesSettings();

  constexpr bool const& __cordl_internal_get__showEnvironmentOverrideSettings() const;

  constexpr bool& __cordl_internal_get__showEnvironmentOverrideSettings();

  constexpr bool const& __cordl_internal_get__showModifiers() const;

  constexpr bool& __cordl_internal_get__showModifiers();

  constexpr bool const& __cordl_internal_get__showMultiplayer() const;

  constexpr bool& __cordl_internal_get__showMultiplayer();

  constexpr ::System::Action*& __cordl_internal_get_didChangeGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didChangeGameplayModifiersEvent() const;

  constexpr void __cordl_internal_set__activePanelIdx(int32_t value);

  constexpr void __cordl_internal_set__colorsOverrideSettingsPanelController(::UnityW<::GlobalNamespace::ColorsOverrideSettingsPanelController> value);

  constexpr void __cordl_internal_set__environmentOverrideSettingsPanelController(::UnityW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController> value);

  constexpr void __cordl_internal_set__gameplayModifiersPanelController(::UnityW<::GlobalNamespace::GameplayModifiersPanelController> value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__multiplayerSettingsPanelController(::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> value);

  constexpr void __cordl_internal_set__panels(::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__playerSettingsPanelController(::UnityW<::GlobalNamespace::PlayerSettingsPanelController> value);

  constexpr void __cordl_internal_set__selectionSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value);

  constexpr void __cordl_internal_set__shouldRefreshContent(bool value);

  constexpr void __cordl_internal_set__showColorSchemesSettings(bool value);

  constexpr void __cordl_internal_set__showEnvironmentOverrideSettings(bool value);

  constexpr void __cordl_internal_set__showModifiers(bool value);

  constexpr void __cordl_internal_set__showMultiplayer(bool value);

  constexpr void __cordl_internal_set_didChangeGameplayModifiersEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x2418714, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeGameplayModifiersEvent, addr 0x2417394, size 0x9c, virtual false, abstract: false, final false
  inline void add_didChangeGameplayModifiersEvent(::System::Action* value);

  /// @brief Method get_colorSchemesSettings, addr 0x24178dc, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();

  /// @brief Method get_environmentOverrideSettings, addr 0x24178b8, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OverrideEnvironmentSettings* get_environmentOverrideSettings();

  /// @brief Method get_gameplayModifiers, addr 0x241789c, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_playerSettings, addr 0x24174cc, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSettings();

  /// @brief Method remove_didChangeGameplayModifiersEvent, addr 0x2417430, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didChangeGameplayModifiersEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplaySetupViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplaySetupViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplaySetupViewController(GameplaySetupViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplaySetupViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplaySetupViewController(GameplaySetupViewController const&) = delete;

  /// @brief Field _selectionSegmentedControl, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControl> ____selectionSegmentedControl;

  /// @brief Field _playerSettingsPanelController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerSettingsPanelController> ____playerSettingsPanelController;

  /// @brief Field _gameplayModifiersPanelController, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersPanelController> ____gameplayModifiersPanelController;

  /// @brief Field _environmentOverrideSettingsPanelController, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentOverrideSettingsPanelController> ____environmentOverrideSettingsPanelController;

  /// @brief Field _colorsOverrideSettingsPanelController, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorsOverrideSettingsPanelController> ____colorsOverrideSettingsPanelController;

  /// @brief Field _multiplayerSettingsPanelController, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerSettingsPanelController> ____multiplayerSettingsPanelController;

  /// @brief Field _playerDataModel, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field didChangeGameplayModifiersEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___didChangeGameplayModifiersEvent;

  /// @brief Field _panels, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__GameplaySetupViewController__Panel*>* ____panels;

  /// @brief Field _activePanelIdx, offset: 0xb8, size: 0x4, def value: None
  int32_t ____activePanelIdx;

  /// @brief Field _showModifiers, offset: 0xbc, size: 0x1, def value: None
  bool ____showModifiers;

  /// @brief Field _showEnvironmentOverrideSettings, offset: 0xbd, size: 0x1, def value: None
  bool ____showEnvironmentOverrideSettings;

  /// @brief Field _showColorSchemesSettings, offset: 0xbe, size: 0x1, def value: None
  bool ____showColorSchemesSettings;

  /// @brief Field _showMultiplayer, offset: 0xbf, size: 0x1, def value: None
  bool ____showMultiplayer;

  /// @brief Field _shouldRefreshContent, offset: 0xc0, size: 0x1, def value: None
  bool ____shouldRefreshContent;

  /// @brief Field _isInitialized, offset: 0xc1, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplaySetupViewController, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____selectionSegmentedControl) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____playerSettingsPanelController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____gameplayModifiersPanelController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____environmentOverrideSettingsPanelController) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____colorsOverrideSettingsPanelController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____multiplayerSettingsPanelController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____playerDataModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ___didChangeGameplayModifiersEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____panels) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____activePanelIdx) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____showModifiers) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____showEnvironmentOverrideSettings) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____showColorSchemesSettings) == 0xbe, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____showMultiplayer) == 0xbf, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____shouldRefreshContent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplaySetupViewController, ____isInitialized) == 0xc1, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplaySetupViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplaySetupViewController*, "", "GameplaySetupViewController");
NEED_NO_BOX(::GlobalNamespace::__GameplaySetupViewController__Panel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplaySetupViewController__Panel*, "", "GameplaySetupViewController/Panel");
