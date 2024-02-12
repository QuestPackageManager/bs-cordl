#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoloFreePlayFlowCoordinator)
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
class __SoloFreePlayFlowCoordinator____c__DisplayClass21_0;
}
// Forward declare root types
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
class __SoloFreePlayFlowCoordinator____c__DisplayClass21_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SoloFreePlayFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0);
// Type: ::<>c__DisplayClass21_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4833))
// CS Name: ::SoloFreePlayFlowCoordinator::<>c__DisplayClass21_0*
class CORDL_TYPE __SoloFreePlayFlowCoordinator____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> __4__this;

  /// @brief Field resultsViewController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resultsViewController, put = __cordl_internal_set_resultsViewController))::UnityW<::GlobalNamespace::ResultsViewController> resultsViewController;

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> value);

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& __cordl_internal_get_resultsViewController();

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& __cordl_internal_get_resultsViewController() const;

  constexpr void __cordl_internal_set_resultsViewController(::UnityW<::GlobalNamespace::ResultsViewController> value);

  static inline ::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x23f89b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleResultsViewControllerRestartButtonPressed>b__0, addr 0x23f89c8, size 0x50, virtual false, abstract: false, final false
  inline void _HandleResultsViewControllerRestartButtonPressed_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__SoloFreePlayFlowCoordinator____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SoloFreePlayFlowCoordinator____c__DisplayClass21_0(__SoloFreePlayFlowCoordinator____c__DisplayClass21_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SoloFreePlayFlowCoordinator____c__DisplayClass21_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SoloFreePlayFlowCoordinator____c__DisplayClass21_0(__SoloFreePlayFlowCoordinator____c__DisplayClass21_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SoloFreePlayFlowCoordinator____c__DisplayClass21_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> _____4__this;

  /// @brief Field resultsViewController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultsViewController> ___resultsViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0, ___resultsViewController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SoloFreePlayFlowCoordinator
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4832))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4834))
// CS Name: ::SoloFreePlayFlowCoordinator*
class CORDL_TYPE SoloFreePlayFlowCoordinator : public ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0;

  /// @brief Field _defaultLightsPreset, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightsPreset, put = __cordl_internal_set__defaultLightsPreset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _defaultLightsPreset;

  /// @brief Field _resultsClearedLightsPreset, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsClearedLightsPreset,
                      put = __cordl_internal_set__resultsClearedLightsPreset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsFailedLightsPreset,
                      put = __cordl_internal_set__resultsFailedLightsPreset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _resultsFailedLightsPreset;

  /// @brief Field _menuLightsManager, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__menuLightsManager, put = __cordl_internal_set__menuLightsManager))::UnityW<::GlobalNamespace::MenuLightsManager> _menuLightsManager;

  /// @brief Field _resultsViewController, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsViewController, put = __cordl_internal_set__resultsViewController))::UnityW<::GlobalNamespace::ResultsViewController> _resultsViewController;

  /// @brief Field _platformLeaderboardViewController, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardViewController,
                      put = __cordl_internal_set__platformLeaderboardViewController))::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> _platformLeaderboardViewController;

  /// @brief Field _platformLeaderboardsModel, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__platformLeaderboardsModel,
                      put = __cordl_internal_set__platformLeaderboardsModel))::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _platformLeaderboardsModel;

  __declspec(property(get = get_gameMode))::StringW gameMode;

  __declspec(property(get = get_leaderboardViewController))::UnityW<::GlobalNamespace::LeaderboardViewController> leaderboardViewController;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  __declspec(property(get = get_mainTitle))::StringW mainTitle;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__defaultLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__defaultLightsPreset() const;

  constexpr void __cordl_internal_set__defaultLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__resultsClearedLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__resultsClearedLightsPreset() const;

  constexpr void __cordl_internal_set__resultsClearedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__resultsFailedLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__resultsFailedLightsPreset() const;

  constexpr void __cordl_internal_set__resultsFailedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& __cordl_internal_get__menuLightsManager();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& __cordl_internal_get__menuLightsManager() const;

  constexpr void __cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value);

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& __cordl_internal_get__resultsViewController();

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& __cordl_internal_get__resultsViewController() const;

  constexpr void __cordl_internal_set__resultsViewController(::UnityW<::GlobalNamespace::ResultsViewController> value);

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>& __cordl_internal_get__platformLeaderboardViewController();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> const& __cordl_internal_get__platformLeaderboardViewController() const;

  constexpr void __cordl_internal_set__platformLeaderboardViewController(::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> value);

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__platformLeaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__platformLeaderboardsModel() const;

  constexpr void __cordl_internal_set__platformLeaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  /// @brief Method get_gameMode, addr 0x23f82d8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_leaderboardViewController, addr 0x23f8318, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardViewController> get_leaderboardViewController();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x23f8320, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

  /// @brief Method get_mainTitle, addr 0x23f8328, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate, addr 0x23f836c, size 0x1a4, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate, addr 0x23f8510, size 0x134, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish, addr 0x23f8644, size 0x208, virtual true, abstract: false, final false
  inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                               ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* modifiers,
                                                               bool practice);

  /// @brief Method IsNewHighScore, addr 0x23f884c, size 0x28, virtual false, abstract: false, final false
  inline bool IsNewHighScore(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method Refresh, addr 0x23f8874, size 0x40, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method HandleResultsViewControllerContinueButtonPressed, addr 0x23f88b4, size 0x3c, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController* viewController);

  /// @brief Method HandleResultsViewControllerRestartButtonPressed, addr 0x23f88f0, size 0xc8, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController);

  /// @brief Method __SetupFromDestination, addr 0x23e8d10, size 0x154, virtual false, abstract: false, final false
  inline void __SetupFromDestination(::GlobalNamespace::RunLevelMenuDestination* runLevelMenuDestination);

  static inline ::GlobalNamespace::SoloFreePlayFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x23f89c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SoloFreePlayFlowCoordinator(SoloFreePlayFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SoloFreePlayFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SoloFreePlayFlowCoordinator(SoloFreePlayFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SoloFreePlayFlowCoordinator();

public:
  /// @brief Field _defaultLightsPreset, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____defaultLightsPreset;

  /// @brief Field _resultsClearedLightsPreset, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____resultsFailedLightsPreset;

  /// @brief Field _menuLightsManager, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsManager> ____menuLightsManager;

  /// @brief Field _resultsViewController, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultsViewController> ____resultsViewController;

  /// @brief Field _platformLeaderboardViewController, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> ____platformLeaderboardViewController;

  /// @brief Field _platformLeaderboardsModel, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____platformLeaderboardsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloFreePlayFlowCoordinator, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____defaultLightsPreset) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsClearedLightsPreset) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsFailedLightsPreset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____menuLightsManager) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsViewController) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____platformLeaderboardViewController) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____platformLeaderboardsModel) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SoloFreePlayFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloFreePlayFlowCoordinator*, "", "SoloFreePlayFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0*, "", "SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0");
