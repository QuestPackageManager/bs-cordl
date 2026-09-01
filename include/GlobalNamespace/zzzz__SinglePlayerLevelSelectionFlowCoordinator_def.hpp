#pragma once
// IWYU pragma private; include "GlobalNamespace\SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SinglePlayerLevelSelectionFlowCoordinator)
namespace GlobalNamespace {
class AppStaticSettingsSO;
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
class SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupData;
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
class SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*);
MARK_REF_T(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*, "", "SinglePlayerLevelSelectionFlowCoordinator");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0*, "", "SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass41_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass41_0
class CORDL_TYPE SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0* New_ctor();

  /// @brief Method <StartLevelOrShow360Prompt>b__0, addr 0x5939220, size 0xd0, virtual false, abstract: false, final false
  inline void _StartLevelOrShow360Prompt_b__0(int32_t _);

  /// @brief Method <StartLevelOrShow360Prompt>b__1, addr 0x59392f0, size 0x50, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x5938f98, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0(SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0(SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6856 };

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
static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0, ___beforeSceneSwitchCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0, ___practice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0, _____9__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies LevelSelectionFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: SinglePlayerLevelSelectionFlowCoordinator
class CORDL_TYPE SinglePlayerLevelSelectionFlowCoordinator : public ::GlobalNamespace::LevelSelectionFlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass41_0 = ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator___c__DisplayClass41_0;

  /// @brief Field _appStaticSettings, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__appStaticSettings, put = __cordl_internal_set__appStaticSettings)) ::UnityW<::GlobalNamespace::AppStaticSettingsSO> _appStaticSettings;

  /// @brief Field _customLevelsSettings, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__customLevelsSettings, put = __cordl_internal_set__customLevelsSettings)) ::GlobalNamespace::CustomLevelsSettings* _customLevelsSettings;

  /// @brief Field _environmentsListModel, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _gameplaySetupViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplaySetupViewController, put = __cordl_internal_set__gameplaySetupViewController)) ::UnityW<::GlobalNamespace::GameplaySetupViewController>
      _gameplaySetupViewController;

  /// @brief Field _menuTransitionsHelper, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper)) ::GlobalNamespace::MenuTransitionsHelper* _menuTransitionsHelper;

  /// @brief Field _practiceViewController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceViewController, put = __cordl_internal_set__practiceViewController)) ::UnityW<::GlobalNamespace::PracticeViewController>
      _practiceViewController;

  /// @brief Field _safeAreaFocusedSimpleDialogPromptViewController, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewController,
                      put = __cordl_internal_set__safeAreaFocusedSimpleDialogPromptViewController)) ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>
      _safeAreaFocusedSimpleDialogPromptViewController;

  /// @brief Field didFinishEvent, offset 0x110, size 0x8
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

  /// @brief Method ActionButtonWasPressed, addr 0x5938bd0, size 0xc, virtual true, abstract: false, final false
  inline void ActionButtonWasPressed();

  /// @brief Method BackButtonWasPressed, addr 0x5939060, size 0x68, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method DismissPracticeViewController, addr 0x5939168, size 0xb8, virtual false, abstract: false, final false
  inline void DismissPracticeViewController(::System::Action* finishedCallback, bool immediately);

  /// @brief Method HandleBasicLevelCompletionResults, addr 0x5937e18, size 0x20, virtual false, abstract: false, final false
  inline bool HandleBasicLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool practice);

  /// @brief Method HandlePracticeViewControllerDidPressPlayButton, addr 0x5938fe4, size 0xc, virtual false, abstract: false, final false
  inline void HandlePracticeViewControllerDidPressPlayButton();

  /// @brief Method HandleStandardLevelDidFinish, addr 0x5938ff0, size 0x6c, virtual false, abstract: false, final false
  inline void HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleStandardLevelWasRestarted, addr 0x593905c, size 0x4, virtual true, abstract: false, final false
  inline void HandleStandardLevelWasRestarted(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData, ::GlobalNamespace::LevelCompletionResults* results);

  /// @brief Method LevelSelectionFlowCoordinatorDidActivate, addr 0x59387cc, size 0xc0, virtual true, abstract: false, final true
  inline void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorDidDeactivate, addr 0x593888c, size 0xb8, virtual true, abstract: false, final true
  inline void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange, addr 0x5938944, size 0x28c, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                       ::HMUI::ViewController_AnimationType animationType);

  static inline ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* New_ctor();

  /// @brief Method PracticeButtonWasPressed, addr 0x5938e88, size 0x78, virtual true, abstract: false, final false
  inline void PracticeButtonWasPressed();

  /// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish, addr 0x5938648, size 0x4, virtual true, abstract: false, final false
  inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                               ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                               ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);

  /// @brief Method SelectionDidChange, addr 0x5938f00, size 0x98, virtual true, abstract: false, final false
  inline void SelectionDidChange(::GlobalNamespace::BeatmapLevelPack* pack, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method SetupGameplaySetupViewController, addr 0x59379d4, size 0x28, virtual false, abstract: false, final false
  inline void SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate, addr 0x5938640, size 0x4, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate, addr 0x5938644, size 0x4, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method StartLevel, addr 0x593812c, size 0x288, virtual false, abstract: false, final false
  inline void StartLevel(::System::Action* beforeSceneSwitchCallback, bool practice);

  /// @brief Method StartLevelOrShow360Prompt, addr 0x5938bdc, size 0x2ac, virtual false, abstract: false, final false
  inline void StartLevelOrShow360Prompt(::System::Action* beforeSceneSwitchCallback, bool practice);

  constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO> const& __cordl_internal_get__appStaticSettings() const;

  constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO>& __cordl_internal_get__appStaticSettings();

  constexpr ::GlobalNamespace::CustomLevelsSettings* const& __cordl_internal_get__customLevelsSettings() const;

  constexpr ::GlobalNamespace::CustomLevelsSettings*& __cordl_internal_get__customLevelsSettings();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController> const& __cordl_internal_get__gameplaySetupViewController() const;

  constexpr ::UnityW<::GlobalNamespace::GameplaySetupViewController>& __cordl_internal_get__gameplaySetupViewController();

  constexpr ::GlobalNamespace::MenuTransitionsHelper* const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::PracticeViewController> const& __cordl_internal_get__practiceViewController() const;

  constexpr ::UnityW<::GlobalNamespace::PracticeViewController>& __cordl_internal_get__practiceViewController();

  constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> const& __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController>& __cordl_internal_get__safeAreaFocusedSimpleDialogPromptViewController();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__appStaticSettings(::UnityW<::GlobalNamespace::AppStaticSettingsSO> value);

  constexpr void __cordl_internal_set__customLevelsSettings(::GlobalNamespace::CustomLevelsSettings* value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__gameplaySetupViewController(::UnityW<::GlobalNamespace::GameplaySetupViewController> value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr void __cordl_internal_set__practiceViewController(::UnityW<::GlobalNamespace::PracticeViewController> value);

  constexpr void __cordl_internal_set__safeAreaFocusedSimpleDialogPromptViewController(::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* value);

  /// @brief Method .ctor, addr 0x59383bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x593864c, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* value);

  /// @brief Method get_enableCustomLevels, addr 0x59385a4, size 0x18, virtual true, abstract: false, final false
  inline bool get_enableCustomLevels();

  /// @brief Method get_gameMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_gameplayModifiers, addr 0x59385bc, size 0x24, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_hideGameplaySetup, addr 0x59385f8, size 0x8, virtual true, abstract: false, final false
  inline bool get_hideGameplaySetup();

  /// @brief Method get_initialLeftScreenViewController, addr 0x5938610, size 0x30, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialLeftScreenViewController();

  /// @brief Method get_initialTopScreenViewController, addr 0x5938608, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> get_initialTopScreenViewController();

  /// @brief Method get_isInPracticeView, addr 0x59384f8, size 0x78, virtual false, abstract: false, final false
  inline bool get_isInPracticeView();

  /// @brief Method get_leaderboardViewController, addr 0x5938600, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardViewController> get_leaderboardViewController();

  /// @brief Method get_playerSettings, addr 0x5938570, size 0x20, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSettings();

  /// @brief Method remove_didFinishEvent, addr 0x593870c, size 0xc0, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6857 };

  /// @brief Field kButtonOkLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kButtonOkLocalizationKey{ u"BUTTON_OK" };

  /// @brief Field kPromptHaventPlayed360YetLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPromptHaventPlayed360YetLocalizationKey{ u"PROMPT_HAVENT_PLAYED_360_YET" };

  /// @brief Field kPromptInformationLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kPromptInformationLocalizationKey{ u"PROMPT_INFORMATION" };

  /// @brief Field kTitlePracticeModeLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kTitlePracticeModeLocalizationKey{ u"TITLE_PRACTICE_MODE" };

  /// @brief Field _practiceViewController, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PracticeViewController> ____practiceViewController;

  /// @brief Field _gameplaySetupViewController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplaySetupViewController> ____gameplaySetupViewController;

  /// @brief Field _menuTransitionsHelper, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* ____menuTransitionsHelper;

  /// @brief Field _appStaticSettings, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppStaticSettingsSO> ____appStaticSettings;

  /// @brief Field _customLevelsSettings, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::CustomLevelsSettings* ____customLevelsSettings;

  /// @brief Field _safeAreaFocusedSimpleDialogPromptViewController, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController> ____safeAreaFocusedSimpleDialogPromptViewController;

  /// @brief Field _environmentsListModel, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field didFinishEvent, offset: 0x110, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator>>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____practiceViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____gameplaySetupViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____menuTransitionsHelper) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____appStaticSettings) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____customLevelsSettings) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____safeAreaFocusedSimpleDialogPromptViewController) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____environmentsListModel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ___didFinishEvent) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator) == 0x118, "Size mismatch!");

} // namespace GlobalNamespace
