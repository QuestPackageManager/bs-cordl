#pragma once
// IWYU pragma private; include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SinglePlayerLevelSelectionFlowCoordinator)
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class CustomLevelsSettings;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class LeaderboardViewController;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeViewController;
}
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class SinglePlayerLevelSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass39_0
class CORDL_TYPE SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> __4__this;

  /// @brief Field <>9__1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___9__1, put = __cordl_internal_set___9__1)) ::System::Action* __9__1;

  /// @brief Field beforeSceneSwitchCallback, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beforeSceneSwitchCallback, put = __cordl_internal_set_beforeSceneSwitchCallback)) ::System::Action* beforeSceneSwitchCallback;

  /// @brief Field practice, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_practice, put = __cordl_internal_set_practice)) bool practice;

  static inline ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0* New_ctor();

  /// @brief Method <StartLevelOrShow360Prompt>b__0, addr 0x3b616ec, size 0x94, virtual false, abstract: false, final false
  inline void _StartLevelOrShow360Prompt_b__0(int32_t _);

  /// @brief Method <StartLevelOrShow360Prompt>b__1, addr 0x3b61780, size 0x50, virtual false, abstract: false, final false
  inline void _StartLevelOrShow360Prompt_b__1();

  constexpr ::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get___9__1() const;

  constexpr ::System::Action*& __cordl_internal_get___9__1();

  constexpr ::System::Action* const& __cordl_internal_get_beforeSceneSwitchCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_beforeSceneSwitchCallback();

  constexpr bool const& __cordl_internal_get_practice() const;

  constexpr bool& __cordl_internal_get_practice();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> value);

  constexpr void __cordl_internal_set___9__1(::System::Action* value);

  constexpr void __cordl_internal_set_beforeSceneSwitchCallback(::System::Action* value);

  constexpr void __cordl_internal_set_practice(bool value);

  /// @brief Method .ctor, addr 0x3b614e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0(SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0(SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5306 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator> _____4__this;

  /// @brief Field beforeSceneSwitchCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___beforeSceneSwitchCallback;

  /// @brief Field practice, offset: 0x20, size: 0x1, def value: None
  bool ___practice;

  /// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
  ::System::Action* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0, ___beforeSceneSwitchCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0, ___practice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0, _____9__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LevelSelectionFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: SinglePlayerLevelSelectionFlowCoordinator
class CORDL_TYPE SinglePlayerLevelSelectionFlowCoordinator : public ::GlobalNamespace::LevelSelectionFlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass39_0 = ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0;

  /// @brief Field _appStaticSettings, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__appStaticSettings, put = __cordl_internal_set__appStaticSettings)) ::UnityW<::GlobalNamespace::AppStaticSettingsSO> _appStaticSettings;

  /// @brief Field _customLevelsSettings, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__customLevelsSettings, put = __cordl_internal_set__customLevelsSettings)) ::GlobalNamespace::CustomLevelsSettings* _customLevelsSettings;

  /// @brief Field _degree360BeatmapCharacteristic, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__degree360BeatmapCharacteristic, put = __cordl_internal_set__degree360BeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _degree360BeatmapCharacteristic;

  /// @brief Field _environmentsListModel, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _gameplaySetupViewController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplaySetupViewController, put = __cordl_internal_set__gameplaySetupViewController)) ::UnityW<::GlobalNamespace::GameplaySetupViewController>
      _gameplaySetupViewController;

  /// @brief Field _menuTransitionsHelper, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _practiceViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceViewController, put = __cordl_internal_set__practiceViewController)) ::UnityW<::GlobalNamespace::PracticeViewController>
      _practiceViewController;

  /// @brief Field _safeAreaFocusedSimpleDialogPromptViewController, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewController,
                      put = __cordl_internal_set__safeAreaFocusedSimpleDialogPromptViewController)) ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>
      _safeAreaFocusedSimpleDialogPromptViewController;

  /// @brief Field _vrPlatformHelper, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field didFinishEvent, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* didFinishEvent;

  __declspec(property(get = get_enableCustomLevels)) bool enableCustomLevels;

  __declspec(property(get = get_gameMode)) ::StringW gameMode;

  __declspec(property(get = get_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_hideGameplaySetup)) bool hideGameplaySetup;

  __declspec(property(get = get_initialLeftScreenViewController)) ::UnityW<::HMUI::ViewController> initialLeftScreenViewController;

  __declspec(property(get = get_initialTopScreenViewController)) ::UnityW<::HMUI::ViewController> initialTopScreenViewController;

  __declspec(property(get = get_isInPracticeView)) bool isInPracticeView;

  __declspec(property(get = get_leaderboardViewController)) ::UnityW<::GlobalNamespace::LeaderboardViewController> leaderboardViewController;

  __declspec(property(get = get_playerSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSettings;

  /// @brief Method ActionButtonWasPressed, addr 0x3b61060, size 0xc, virtual true, abstract: false, final false
  inline void ActionButtonWasPressed();

  /// @brief Method BackButtonWasPressed, addr 0x3b615a4, size 0x94, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method DismissPracticeViewController, addr 0x3b61638, size 0xb4, virtual false, abstract: false, final false
  inline void DismissPracticeViewController(::System::Action* finishedCallback, bool immediately);

  /// @brief Method HandleBasicLevelCompletionResults, addr 0x3b60374, size 0x24, virtual false, abstract: false, final false
  inline bool HandleBasicLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool practice);

  /// @brief Method HandlePracticeViewControllerDidPressPlayButton, addr 0x3b614e8, size 0xc, virtual false, abstract: false, final false
  inline void HandlePracticeViewControllerDidPressPlayButton();

  /// @brief Method HandleStandardLevelDidFinish, addr 0x3b614f4, size 0xb0, virtual false, abstract: false, final false
  inline void HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method LevelSelectionFlowCoordinatorDidActivate, addr 0x3b60c54, size 0xb8, virtual true, abstract: false, final true
  inline void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorDidDeactivate, addr 0x3b60d0c, size 0xb0, virtual true, abstract: false, final true
  inline void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange, addr 0x3b60dbc, size 0x2a4, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                       ::HMUI::ViewController_AnimationType animationType);

  static inline ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* New_ctor();

  /// @brief Method PracticeButtonWasPressed, addr 0x3b613a0, size 0x8c, virtual true, abstract: false, final false
  inline void PracticeButtonWasPressed();

  /// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish, addr 0x3b60ae8, size 0x4, virtual true, abstract: false, final false
  inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                               ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                               ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);

  /// @brief Method SelectionDidChange, addr 0x3b6142c, size 0xb4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::GlobalNamespace::BeatmapLevelPack* pack, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method SetupGameplaySetupViewController, addr 0x3b5ff3c, size 0x30, virtual false, abstract: false, final false
  inline void SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate, addr 0x3b60ae0, size 0x4, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate, addr 0x3b60ae4, size 0x4, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method StartLevel, addr 0x3b60628, size 0x270, virtual false, abstract: false, final false
  inline void StartLevel(::System::Action* beforeSceneSwitchCallback, bool practice);

  /// @brief Method StartLevelOrShow360Prompt, addr 0x3b6106c, size 0x334, virtual false, abstract: false, final false
  inline void StartLevelOrShow360Prompt(::System::Action* beforeSceneSwitchCallback, bool practice);

  constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO> const& __cordl_internal_get__appStaticSettings() const;

  constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO>& __cordl_internal_get__appStaticSettings();

  constexpr ::GlobalNamespace::CustomLevelsSettings* const& __cordl_internal_get__customLevelsSettings() const;

  constexpr ::GlobalNamespace::CustomLevelsSettings*& __cordl_internal_get__customLevelsSettings();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__degree360BeatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__degree360BeatmapCharacteristic();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController> const& __cordl_internal_get__gameplaySetupViewController() const;

  constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController>& __cordl_internal_get__gameplaySetupViewController();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::PracticeViewController> const& __cordl_internal_get__practiceViewController() const;

  constexpr ::UnityW<::GlobalNamespace::PracticeViewController>& __cordl_internal_get__practiceViewController();

  constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> const& __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>& __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewController();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__appStaticSettings(::UnityW<::GlobalNamespace::AppStaticSettingsSO> value);

  constexpr void __cordl_internal_set__customLevelsSettings(::GlobalNamespace::CustomLevelsSettings* value);

  constexpr void __cordl_internal_set__degree360BeatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__gameplaySetupViewController(::UnityW<::GlobalNamespace::GameplaySetupViewController> value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__practiceViewController(::UnityW<::GlobalNamespace::PracticeViewController> value);

  constexpr void __cordl_internal_set__safeAreaFocusedSimpleDialogPromptViewController(::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* value);

  /// @brief Method .ctor, addr 0x3b608a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b60aec, size 0xb4, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* value);

  /// @brief Method get_enableCustomLevels, addr 0x3b60a60, size 0x1c, virtual true, abstract: false, final false
  inline bool get_enableCustomLevels();

  /// @brief Method get_gameMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_gameplayModifiers, addr 0x3b60a7c, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_hideGameplaySetup, addr 0x3b60a98, size 0x8, virtual true, abstract: false, final false
  inline bool get_hideGameplaySetup();

  /// @brief Method get_initialLeftScreenViewController, addr 0x3b60ab0, size 0x30, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialLeftScreenViewController();

  /// @brief Method get_initialTopScreenViewController, addr 0x3b60aa8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialTopScreenViewController();

  /// @brief Method get_isInPracticeView, addr 0x3b609d0, size 0x74, virtual false, abstract: false, final false
  inline bool get_isInPracticeView();

  /// @brief Method get_leaderboardViewController, addr 0x3b60aa0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardViewController> get_leaderboardViewController();

  /// @brief Method get_playerSettings, addr 0x3b60a44, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSettings();

  /// @brief Method remove_didFinishEvent, addr 0x3b60ba0, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinglePlayerLevelSelectionFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinglePlayerLevelSelectionFlowCoordinator(SinglePlayerLevelSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinglePlayerLevelSelectionFlowCoordinator(SinglePlayerLevelSelectionFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5307 };

  /// @brief Field _degree360BeatmapCharacteristic, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____degree360BeatmapCharacteristic;

  /// @brief Field _practiceViewController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PracticeViewController> ____practiceViewController;

  /// @brief Field _gameplaySetupViewController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplaySetupViewController> ____gameplaySetupViewController;

  /// @brief Field _menuTransitionsHelper, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _vrPlatformHelper, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _appStaticSettings, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppStaticSettingsSO> ____appStaticSettings;

  /// @brief Field _customLevelsSettings, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::CustomLevelsSettings* ____customLevelsSettings;

  /// @brief Field _safeAreaFocusedSimpleDialogPromptViewController, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> ____safeAreaFocusedSimpleDialogPromptViewController;

  /// @brief Field _environmentsListModel, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field didFinishEvent, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____degree360BeatmapCharacteristic) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____practiceViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____gameplaySetupViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____menuTransitionsHelper) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____vrPlatformHelper) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____appStaticSettings) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____customLevelsSettings) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____safeAreaFocusedSimpleDialogPromptViewController) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____environmentsListModel) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ___didFinishEvent) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*, "", "SinglePlayerLevelSelectionFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass39_0*, "", "SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass39_0");
