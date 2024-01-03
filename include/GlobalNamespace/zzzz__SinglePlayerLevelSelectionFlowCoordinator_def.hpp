#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SinglePlayerLevelSelectionFlowCoordinator)
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace GlobalNamespace {
class __SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class SafeAreaFocusedSimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class LeaderboardViewController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class GameplaySetupViewController;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PracticeViewController;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace HMUI {
class ViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class SinglePlayerLevelSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class __SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0);
// Type: ::<>c__DisplayClass37_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5525))
// CS Name: ::SinglePlayerLevelSelectionFlowCoordinator::<>c__DisplayClass37_0*
class CORDL_TYPE __SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* __4__this;

  /// @brief Field beforeSceneSwitchCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_beforeSceneSwitchCallback, put = __set_beforeSceneSwitchCallback))::System::Action* beforeSceneSwitchCallback;

  /// @brief Field practice, offset 0x20, size 0x1
  __declspec(property(get = __get_practice, put = __set_practice)) bool practice;

  /// @brief Field <>9__1, offset 0x28, size 0x8
  __declspec(property(get = __get___9__1, put = __set___9__1))::System::Action* __9__1;

  constexpr ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* value);

  constexpr ::System::Action*& __get_beforeSceneSwitchCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_beforeSceneSwitchCallback() const;

  constexpr void __set_beforeSceneSwitchCallback(::System::Action* value);

  constexpr bool& __get_practice();

  constexpr bool const& __get_practice() const;

  constexpr void __set_practice(bool value);

  constexpr ::System::Action*& __get___9__1();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get___9__1() const;

  constexpr void __set___9__1(::System::Action* value);

  static inline ::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0* New_ctor();

  /// @brief Method .ctor, addr 0x229c818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <StartLevelOrShow360Prompt>b__0, addr 0x229c9f0, size 0x98, virtual false, abstract: false, final false
  inline void _StartLevelOrShow360Prompt_b__0(int32_t _);

  /// @brief Method <StartLevelOrShow360Prompt>b__1, addr 0x229ca88, size 0x50, virtual false, abstract: false, final false
  inline void _StartLevelOrShow360Prompt_b__1();

  // Ctor Parameters [CppParam { name: "", ty: "__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0(__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0(__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* _____4__this;

  /// @brief Field beforeSceneSwitchCallback, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___beforeSceneSwitchCallback;

  /// @brief Field practice, offset: 0x20, size: 0x1, def value: None
  bool ___practice;

  /// @brief Field <>9__1, offset: 0x28, size: 0x8, def value: None
  ::System::Action* _____9__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0, ___beforeSceneSwitchCallback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0, ___practice) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0, _____9__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SinglePlayerLevelSelectionFlowCoordinator
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 272, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5501))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5526))
// CS Name: ::SinglePlayerLevelSelectionFlowCoordinator*
class CORDL_TYPE SinglePlayerLevelSelectionFlowCoordinator : public ::GlobalNamespace::LevelSelectionFlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass37_0 = ::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0;

  /// @brief Field _degree360BeatmapCharacteristic, offset 0xd0, size 0x8
  __declspec(property(get = __get__degree360BeatmapCharacteristic, put = __set__degree360BeatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _degree360BeatmapCharacteristic;

  /// @brief Field _practiceViewController, offset 0xd8, size 0x8
  __declspec(property(get = __get__practiceViewController, put = __set__practiceViewController))::GlobalNamespace::PracticeViewController* _practiceViewController;

  /// @brief Field _gameplaySetupViewController, offset 0xe0, size 0x8
  __declspec(property(get = __get__gameplaySetupViewController, put = __set__gameplaySetupViewController))::GlobalNamespace::GameplaySetupViewController* _gameplaySetupViewController;

  /// @brief Field _menuTransitionsHelper, offset 0xe8, size 0x8
  __declspec(property(get = __get__menuTransitionsHelper, put = __set__menuTransitionsHelper))::GlobalNamespace::MenuTransitionsHelper* _menuTransitionsHelper;

  /// @brief Field _vrPlatformHelper, offset 0xf0, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _appStaticSettings, offset 0xf8, size 0x8
  __declspec(property(get = __get__appStaticSettings, put = __set__appStaticSettings))::GlobalNamespace::AppStaticSettingsSO* _appStaticSettings;

  /// @brief Field _safeAreaFocusedSimpleDialogPromptViewController, offset 0x100, size 0x8
  __declspec(
      property(get = __get__safeAreaFocusedSimpleDialogPromptViewController,
               put = __set__safeAreaFocusedSimpleDialogPromptViewController))::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* _safeAreaFocusedSimpleDialogPromptViewController;

  /// @brief Field didFinishEvent, offset 0x108, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* didFinishEvent;

  __declspec(property(get = get_gameMode))::StringW gameMode;

  __declspec(property(get = get_isInPracticeView)) bool isInPracticeView;

  __declspec(property(get = get_playerSettings))::GlobalNamespace::PlayerSpecificSettings* playerSettings;

  __declspec(property(get = get_enableCustomLevels)) bool enableCustomLevels;

  __declspec(property(get = get_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_hideGameplaySetup)) bool hideGameplaySetup;

  __declspec(property(get = get_leaderboardViewController))::GlobalNamespace::LeaderboardViewController* leaderboardViewController;

  __declspec(property(get = get_initialTopScreenViewController))::HMUI::ViewController* initialTopScreenViewController;

  __declspec(property(get = get_initialLeftScreenViewController))::HMUI::ViewController* initialLeftScreenViewController;

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__degree360BeatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__degree360BeatmapCharacteristic() const;

  constexpr void __set__degree360BeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::PracticeViewController*& __get__practiceViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeViewController*> const& __get__practiceViewController() const;

  constexpr void __set__practiceViewController(::GlobalNamespace::PracticeViewController* value);

  constexpr ::GlobalNamespace::GameplaySetupViewController*& __get__gameplaySetupViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplaySetupViewController*> const& __get__gameplaySetupViewController() const;

  constexpr void __set__gameplaySetupViewController(::GlobalNamespace::GameplaySetupViewController* value);

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get__menuTransitionsHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get__menuTransitionsHelper() const;

  constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::GlobalNamespace::AppStaticSettingsSO*& __get__appStaticSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& __get__appStaticSettings() const;

  constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value);

  constexpr ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*& __get__safeAreaFocusedSimpleDialogPromptViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*> const& __get__safeAreaFocusedSimpleDialogPromptViewController() const;

  constexpr void __set__safeAreaFocusedSimpleDialogPromptViewController(::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* value);

  constexpr ::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value);

  /// @brief Method get_gameMode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_isInPracticeView, addr 0x229bc98, size 0x74, virtual false, abstract: false, final false
  inline bool get_isInPracticeView();

  /// @brief Method get_playerSettings, addr 0x229bd0c, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSettings();

  /// @brief Method get_enableCustomLevels, addr 0x229bd28, size 0x1c, virtual true, abstract: false, final false
  inline bool get_enableCustomLevels();

  /// @brief Method get_gameplayModifiers, addr 0x229bd44, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_hideGameplaySetup, addr 0x229bd60, size 0x8, virtual true, abstract: false, final false
  inline bool get_hideGameplaySetup();

  /// @brief Method get_leaderboardViewController, addr 0x229bd68, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();

  /// @brief Method get_initialTopScreenViewController, addr 0x229bd70, size 0x8, virtual true, abstract: false, final false
  inline ::HMUI::ViewController* get_initialTopScreenViewController();

  /// @brief Method get_initialLeftScreenViewController, addr 0x229bd78, size 0x30, virtual true, abstract: false, final false
  inline ::HMUI::ViewController* get_initialLeftScreenViewController();

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate, addr 0x229bda8, size 0x4, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate, addr 0x229bdac, size 0x4, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish, addr 0x229bdb0, size 0x4, virtual true, abstract: false, final false
  inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                               ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);

  /// @brief Method add_didFinishEvent, addr 0x228b904, size 0xb4, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x228c288, size 0xb4, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* value);

  /// @brief Method LevelSelectionFlowCoordinatorDidActivate, addr 0x229bdb4, size 0xbc, virtual true, abstract: false, final true
  inline void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorDidDeactivate, addr 0x229be70, size 0xb4, virtual true, abstract: false, final true
  inline void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange, addr 0x229bf24, size 0x258, virtual true, abstract: false, final false
  inline void LevelSelectionFlowCoordinatorTopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                       ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method ActionButtonWasPressed, addr 0x229c17c, size 0xc, virtual true, abstract: false, final false
  inline void ActionButtonWasPressed();

  /// @brief Method PracticeButtonWasPressed, addr 0x229c530, size 0x268, virtual true, abstract: false, final false
  inline void PracticeButtonWasPressed();

  /// @brief Method SelectionDidChange, addr 0x229c798, size 0x80, virtual true, abstract: false, final false
  inline void SelectionDidChange(::GlobalNamespace::IBeatmapLevelPack* pack, ::GlobalNamespace::IDifficultyBeatmap* beatmap);

  /// @brief Method StartLevelOrShow360Prompt, addr 0x229c188, size 0x3a8, virtual false, abstract: false, final false
  inline void StartLevelOrShow360Prompt(::System::Action* beforeSceneSwitchCallback, bool practice);

  /// @brief Method StartLevel, addr 0x228e0d0, size 0x2b0, virtual false, abstract: false, final false
  inline void StartLevel(::System::Action* beforeSceneSwitchCallback, bool practice);

  /// @brief Method HandlePracticeViewControllerDidPressPlayButton, addr 0x229c820, size 0xc, virtual false, abstract: false, final false
  inline void HandlePracticeViewControllerDidPressPlayButton();

  /// @brief Method HandleStandardLevelDidFinish, addr 0x229c82c, size 0x80, virtual false, abstract: false, final false
  inline void HandleStandardLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method BackButtonWasPressed, addr 0x229c8ac, size 0x90, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method SetupGameplaySetupViewController, addr 0x229ad58, size 0x30, virtual false, abstract: false, final false
  inline void SetupGameplaySetupViewController(bool showModifiers, bool showEnvironmentOverrideSettings, bool showColorSchemesSettings);

  /// @brief Method HandleBasicLevelCompletionResults, addr 0x229b120, size 0x24, virtual false, abstract: false, final false
  inline bool HandleBasicLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, bool practice);

  /// @brief Method DismissPracticeViewController, addr 0x229c93c, size 0xb4, virtual false, abstract: false, final false
  inline void DismissPracticeViewController(::System::Action* finishedCallback, bool immediately);

  static inline ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x229b380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SinglePlayerLevelSelectionFlowCoordinator(SinglePlayerLevelSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SinglePlayerLevelSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SinglePlayerLevelSelectionFlowCoordinator(SinglePlayerLevelSelectionFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SinglePlayerLevelSelectionFlowCoordinator();

public:
  /// @brief Field _degree360BeatmapCharacteristic, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____degree360BeatmapCharacteristic;

  /// @brief Field _practiceViewController, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::PracticeViewController* ____practiceViewController;

  /// @brief Field _gameplaySetupViewController, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::GameplaySetupViewController* ____gameplaySetupViewController;

  /// @brief Field _menuTransitionsHelper, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* ____menuTransitionsHelper;

  /// @brief Field _vrPlatformHelper, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _appStaticSettings, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::AppStaticSettingsSO* ____appStaticSettings;

  /// @brief Field _safeAreaFocusedSimpleDialogPromptViewController, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* ____safeAreaFocusedSimpleDialogPromptViewController;

  /// @brief Field didFinishEvent, offset: 0x108, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____degree360BeatmapCharacteristic) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____practiceViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____gameplaySetupViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____menuTransitionsHelper) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____vrPlatformHelper) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____appStaticSettings) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ____safeAreaFocusedSimpleDialogPromptViewController) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator, ___didFinishEvent) == 0x108, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator*, "", "SinglePlayerLevelSelectionFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SinglePlayerLevelSelectionFlowCoordinator____c__DisplayClass37_0*, "", "SinglePlayerLevelSelectionFlowCoordinator/<>c__DisplayClass37_0");
