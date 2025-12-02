#pragma once
// IWYU pragma private; include "GlobalNamespace/SoloFreePlayFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoloFreePlayFlowCoordinator)
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class GameplayModifiers;
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
class MenuLightsManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class PlatformLeaderboardViewController;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
namespace GlobalNamespace {
class ResultsViewController;
}
namespace GlobalNamespace {
class RunLevelMenuDestination;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator___c__DisplayClass18_0;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator___c__DisplayClass21_0;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator___c__DisplayClass18_0;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator___c__DisplayClass21_0;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator___c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SoloFreePlayFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0);
MARK_REF_PTR_T(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0);
MARK_REF_PTR_T(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass23_0);
// Dependencies BeatmapKey, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoloFreePlayFlowCoordinator/<>c__DisplayClass18_0
class CORDL_TYPE SoloFreePlayFlowCoordinator___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> __4__this;

  /// @brief Field beatmapKey, offset 0x20, size 0x20
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field levelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCompletionResults, put = __cordl_internal_set_levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  /// @brief Field modifiers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_modifiers, put = __cordl_internal_set_modifiers)) ::GlobalNamespace::GameplayModifiers* modifiers;

  static inline ::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0* New_ctor();

  /// @brief Method <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0, addr 0x573c60c, size 0x48, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _ProcessLevelCompletionResultsAfterLevelDidFinish_b__0();

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::LevelCompletionResults* const& __cordl_internal_get_levelCompletionResults() const;

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_modifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_modifiers();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set_modifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method .ctor, addr 0x573c338, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoloFreePlayFlowCoordinator___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoloFreePlayFlowCoordinator___c__DisplayClass18_0(SoloFreePlayFlowCoordinator___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoloFreePlayFlowCoordinator___c__DisplayClass18_0(SoloFreePlayFlowCoordinator___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6897 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> _____4__this;

  /// @brief Field levelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  /// @brief Field beatmapKey, offset: 0x20, size: 0x20, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field modifiers, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___modifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0, ___levelCompletionResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0, ___beatmapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0, ___modifiers) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0
class CORDL_TYPE SoloFreePlayFlowCoordinator___c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> __4__this;

  /// @brief Field results, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_results, put = __cordl_internal_set_results)) ::GlobalNamespace::LevelCompletionResults* results;

  /// @brief Field so, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_so, put = __cordl_internal_set_so)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> so;

  static inline ::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0* New_ctor();

  /// @brief Method <HandleStandardLevelWasRestarted>b__0, addr 0x573c654, size 0x54, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _HandleStandardLevelWasRestarted_b__0();

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::LevelCompletionResults* const& __cordl_internal_get_results() const;

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_results();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_so() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get_so();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> value);

  constexpr void __cordl_internal_set_results(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set_so(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x573c4c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoloFreePlayFlowCoordinator___c__DisplayClass21_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator___c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoloFreePlayFlowCoordinator___c__DisplayClass21_0(SoloFreePlayFlowCoordinator___c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator___c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoloFreePlayFlowCoordinator___c__DisplayClass21_0(SoloFreePlayFlowCoordinator___c__DisplayClass21_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6898 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> _____4__this;

  /// @brief Field results, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___results;

  /// @brief Field so, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ___so;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0, ___results) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0, ___so) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoloFreePlayFlowCoordinator/<>c__DisplayClass23_0
class CORDL_TYPE SoloFreePlayFlowCoordinator___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> __4__this;

  /// @brief Field resultsViewController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resultsViewController, put = __cordl_internal_set_resultsViewController)) ::UnityW<::GlobalNamespace::ResultsViewController> resultsViewController;

  static inline ::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass23_0* New_ctor();

  /// @brief Method <HandleResultsViewControllerRestartButtonPressed>b__0, addr 0x573c6a8, size 0x54, virtual false, abstract: false, final false
  inline void _HandleResultsViewControllerRestartButtonPressed_b__0();

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& __cordl_internal_get_resultsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& __cordl_internal_get_resultsViewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> value);

  constexpr void __cordl_internal_set_resultsViewController(::UnityW<::GlobalNamespace::ResultsViewController> value);

  /// @brief Method .ctor, addr 0x573c600, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoloFreePlayFlowCoordinator___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoloFreePlayFlowCoordinator___c__DisplayClass23_0(SoloFreePlayFlowCoordinator___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoloFreePlayFlowCoordinator___c__DisplayClass23_0(SoloFreePlayFlowCoordinator___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6899 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> _____4__this;

  /// @brief Field resultsViewController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultsViewController> ___resultsViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass23_0, ___resultsViewController) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass23_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SinglePlayerLevelSelectionFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoloFreePlayFlowCoordinator
class CORDL_TYPE SoloFreePlayFlowCoordinator : public ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass18_0 = ::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0;

  using __c__DisplayClass21_0 = ::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0;

  using __c__DisplayClass23_0 = ::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass23_0;

  /// @brief Field _beatLeaderboards, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__beatLeaderboards, put = __cordl_internal_set__beatLeaderboards)) ::BeatSaber::Main::Leaderboards::BeatLeaderboards* _beatLeaderboards;

  /// @brief Field _defaultLightsPreset, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightsPreset, put = __cordl_internal_set__defaultLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO> _defaultLightsPreset;

  /// @brief Field _menuLightsManager, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__menuLightsManager, put = __cordl_internal_set__menuLightsManager)) ::UnityW<::GlobalNamespace::MenuLightsManager> _menuLightsManager;

  /// @brief Field _platformLeaderboardViewController, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardViewController,
                      put = __cordl_internal_set__platformLeaderboardViewController)) ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>
      _platformLeaderboardViewController;

  /// @brief Field _platformLeaderboardsModel, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardsModel, put = __cordl_internal_set__platformLeaderboardsModel)) ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>
      _platformLeaderboardsModel;

  /// @brief Field _resultsClearedLightsPreset, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsClearedLightsPreset, put = __cordl_internal_set__resultsClearedLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>
      _resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsFailedLightsPreset, put = __cordl_internal_set__resultsFailedLightsPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>
      _resultsFailedLightsPreset;

  /// @brief Field _resultsViewController, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsViewController, put = __cordl_internal_set__resultsViewController)) ::UnityW<::GlobalNamespace::ResultsViewController> _resultsViewController;

  __declspec(property(get = get_gameMode)) ::StringW gameMode;

  __declspec(property(get = get_leaderboardViewController)) ::UnityW<::GlobalNamespace::LeaderboardViewController> leaderboardViewController;

  __declspec(property(get = get_mainTitle)) ::StringW mainTitle;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  /// @brief Method HandleResultsViewControllerContinueButtonPressed, addr 0x573c4c4, size 0x40, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController* viewController);

  /// @brief Method HandleResultsViewControllerRestartButtonPressed, addr 0x573c504, size 0xfc, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController);

  /// @brief Method HandleStandardLevelWasRestarted, addr 0x573c3b0, size 0x110, virtual true, abstract: false, final false
  inline void HandleStandardLevelWasRestarted(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* so, ::GlobalNamespace::LevelCompletionResults* results);

  /// @brief Method IsNewHighScore, addr 0x573c33c, size 0x28, virtual false, abstract: false, final false
  inline bool IsNewHighScore(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  static inline ::GlobalNamespace::SoloFreePlayFlowCoordinator* New_ctor();

  /// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish, addr 0x573c064, size 0x2d4, virtual true, abstract: false, final false
  inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                               ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* modifiers,
                                                               bool practice);

  /// @brief Method Refresh, addr 0x573c364, size 0x4c, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate, addr 0x573bd88, size 0x1a0, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate, addr 0x573bf28, size 0x13c, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method __SetupFromDestination, addr 0x572c374, size 0x168, virtual false, abstract: false, final false
  inline void __SetupFromDestination(::GlobalNamespace::RunLevelMenuDestination* runLevelMenuDestination);

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& __cordl_internal_get__beatLeaderboards() const;

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& __cordl_internal_get__beatLeaderboards();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__defaultLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__defaultLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& __cordl_internal_get__menuLightsManager() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& __cordl_internal_get__menuLightsManager();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> const& __cordl_internal_get__platformLeaderboardViewController() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>& __cordl_internal_get__platformLeaderboardViewController();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__platformLeaderboardsModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__platformLeaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__resultsClearedLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__resultsClearedLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__resultsFailedLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__resultsFailedLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& __cordl_internal_get__resultsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& __cordl_internal_get__resultsViewController();

  constexpr void __cordl_internal_set__beatLeaderboards(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value);

  constexpr void __cordl_internal_set__defaultLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value);

  constexpr void __cordl_internal_set__platformLeaderboardViewController(::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> value);

  constexpr void __cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr void __cordl_internal_set__resultsClearedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__resultsFailedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__resultsViewController(::UnityW<::GlobalNamespace::ResultsViewController> value);

  /// @brief Method .ctor, addr 0x573c604, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameMode, addr 0x573bcec, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_leaderboardViewController, addr 0x573bd30, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardViewController> get_leaderboardViewController();

  /// @brief Method get_mainTitle, addr 0x573bd40, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x573bd38, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoloFreePlayFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoloFreePlayFlowCoordinator(SoloFreePlayFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoloFreePlayFlowCoordinator(SoloFreePlayFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6900 };

  /// @brief Field _defaultLightsPreset, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____defaultLightsPreset;

  /// @brief Field _resultsClearedLightsPreset, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____resultsFailedLightsPreset;

  /// @brief Field _menuLightsManager, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsManager> ____menuLightsManager;

  /// @brief Field _resultsViewController, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultsViewController> ____resultsViewController;

  /// @brief Field _platformLeaderboardViewController, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> ____platformLeaderboardViewController;

  /// @brief Field _platformLeaderboardsModel, offset: 0x158, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____platformLeaderboardsModel;

  /// @brief Field _beatLeaderboards, offset: 0x160, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards* ____beatLeaderboards;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____defaultLightsPreset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsClearedLightsPreset) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsFailedLightsPreset) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____menuLightsManager) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsViewController) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____platformLeaderboardViewController) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____platformLeaderboardsModel) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____beatLeaderboards) == 0x160, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloFreePlayFlowCoordinator, 0x168>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SoloFreePlayFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloFreePlayFlowCoordinator*, "", "SoloFreePlayFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass18_0*, "", "SoloFreePlayFlowCoordinator/<>c__DisplayClass18_0");
NEED_NO_BOX(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass21_0*, "", "SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0");
NEED_NO_BOX(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloFreePlayFlowCoordinator___c__DisplayClass23_0*, "", "SoloFreePlayFlowCoordinator/<>c__DisplayClass23_0");
