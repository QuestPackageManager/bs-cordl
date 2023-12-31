#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SoloFreePlayFlowCoordinator)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5527))
// CS Name: ::SoloFreePlayFlowCoordinator::<>c__DisplayClass21_0*
class CORDL_TYPE __SoloFreePlayFlowCoordinator____c__DisplayClass21_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::SoloFreePlayFlowCoordinator* __4__this;

  /// @brief Field resultsViewController, offset 0x18, size 0x8
  __declspec(property(get = __get_resultsViewController, put = __set_resultsViewController))::GlobalNamespace::ResultsViewController* resultsViewController;

  constexpr ::GlobalNamespace::SoloFreePlayFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SoloFreePlayFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::SoloFreePlayFlowCoordinator* value);

  constexpr ::GlobalNamespace::ResultsViewController*& __get_resultsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> const& __get_resultsViewController() const;

  constexpr void __set_resultsViewController(::GlobalNamespace::ResultsViewController* value);

  static inline ::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0* New_ctor();

  /// @brief Method .ctor, addr 0x229e130, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleResultsViewControllerRestartButtonPressed>b__0, addr 0x229e138, size 0x50, virtual false, abstract: false, final false
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
  ::GlobalNamespace::SoloFreePlayFlowCoordinator* _____4__this;

  /// @brief Field resultsViewController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ResultsViewController* ___resultsViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0, ___resultsViewController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SoloFreePlayFlowCoordinator
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5526))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5528))
// CS Name: ::SoloFreePlayFlowCoordinator*
class CORDL_TYPE SoloFreePlayFlowCoordinator : public ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass21_0 = ::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0;

  /// @brief Field _defaultLightsPreset, offset 0x110, size 0x8
  __declspec(property(get = __get__defaultLightsPreset, put = __set__defaultLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _defaultLightsPreset;

  /// @brief Field _resultsClearedLightsPreset, offset 0x118, size 0x8
  __declspec(property(get = __get__resultsClearedLightsPreset, put = __set__resultsClearedLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset 0x120, size 0x8
  __declspec(property(get = __get__resultsFailedLightsPreset, put = __set__resultsFailedLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _resultsFailedLightsPreset;

  /// @brief Field _menuLightsManager, offset 0x128, size 0x8
  __declspec(property(get = __get__menuLightsManager, put = __set__menuLightsManager))::GlobalNamespace::MenuLightsManager* _menuLightsManager;

  /// @brief Field _resultsViewController, offset 0x130, size 0x8
  __declspec(property(get = __get__resultsViewController, put = __set__resultsViewController))::GlobalNamespace::ResultsViewController* _resultsViewController;

  /// @brief Field _platformLeaderboardViewController, offset 0x138, size 0x8
  __declspec(property(get = __get__platformLeaderboardViewController,
                      put = __set__platformLeaderboardViewController))::GlobalNamespace::PlatformLeaderboardViewController* _platformLeaderboardViewController;

  /// @brief Field _platformLeaderboardsModel, offset 0x140, size 0x8
  __declspec(property(get = __get__platformLeaderboardsModel, put = __set__platformLeaderboardsModel))::GlobalNamespace::PlatformLeaderboardsModel* _platformLeaderboardsModel;

  __declspec(property(get = get_gameMode))::StringW gameMode;

  __declspec(property(get = get_leaderboardViewController))::GlobalNamespace::LeaderboardViewController* leaderboardViewController;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  __declspec(property(get = get_mainTitle))::StringW mainTitle;

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__defaultLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__defaultLightsPreset() const;

  constexpr void __set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__resultsClearedLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__resultsClearedLightsPreset() const;

  constexpr void __set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__resultsFailedLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__resultsFailedLightsPreset() const;

  constexpr void __set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::MenuLightsManager*& __get__menuLightsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> const& __get__menuLightsManager() const;

  constexpr void __set__menuLightsManager(::GlobalNamespace::MenuLightsManager* value);

  constexpr ::GlobalNamespace::ResultsViewController*& __get__resultsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> const& __get__resultsViewController() const;

  constexpr void __set__resultsViewController(::GlobalNamespace::ResultsViewController* value);

  constexpr ::GlobalNamespace::PlatformLeaderboardViewController*& __get__platformLeaderboardViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardViewController*> const& __get__platformLeaderboardViewController() const;

  constexpr void __set__platformLeaderboardViewController(::GlobalNamespace::PlatformLeaderboardViewController* value);

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel*& __get__platformLeaderboardsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsModel*> const& __get__platformLeaderboardsModel() const;

  constexpr void __set__platformLeaderboardsModel(::GlobalNamespace::PlatformLeaderboardsModel* value);

  /// @brief Method get_gameMode, addr 0x229cad8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_leaderboardViewController, addr 0x229cb18, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x229cb20, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

  /// @brief Method get_mainTitle, addr 0x229cb28, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate, addr 0x229cb6c, size 0x17c, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate, addr 0x229cce8, size 0x134, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish, addr 0x229ce1c, size 0x198, virtual true, abstract: false, final false
  inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                               ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);

  /// @brief Method IsNewHighScore, addr 0x229cfb4, size 0x28, virtual false, abstract: false, final false
  inline bool IsNewHighScore(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method Refresh, addr 0x229cfdc, size 0x48, virtual true, abstract: false, final false
  inline void Refresh();

  /// @brief Method HandleResultsViewControllerContinueButtonPressed, addr 0x229d024, size 0x3c, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController* viewController);

  /// @brief Method HandleResultsViewControllerRestartButtonPressed, addr 0x229d060, size 0xc8, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController);

  /// @brief Method __SetupFromDestination, addr 0x228dda4, size 0x32c, virtual false, abstract: false, final false
  inline void __SetupFromDestination(::GlobalNamespace::RunLevelMenuDestination* runLevelMenuDestination);

  static inline ::GlobalNamespace::SoloFreePlayFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x229d128, size 0x1008, virtual false, abstract: false, final false
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
  /// @brief Field _defaultLightsPreset, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____defaultLightsPreset;

  /// @brief Field _resultsClearedLightsPreset, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____resultsFailedLightsPreset;

  /// @brief Field _menuLightsManager, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsManager* ____menuLightsManager;

  /// @brief Field _resultsViewController, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::ResultsViewController* ____resultsViewController;

  /// @brief Field _platformLeaderboardViewController, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardViewController* ____platformLeaderboardViewController;

  /// @brief Field _platformLeaderboardsModel, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel* ____platformLeaderboardsModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SoloFreePlayFlowCoordinator, 0x148>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____defaultLightsPreset) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsClearedLightsPreset) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsFailedLightsPreset) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____menuLightsManager) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____resultsViewController) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____platformLeaderboardViewController) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoloFreePlayFlowCoordinator, ____platformLeaderboardsModel) == 0x140, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SoloFreePlayFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SoloFreePlayFlowCoordinator*, "", "SoloFreePlayFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SoloFreePlayFlowCoordinator____c__DisplayClass21_0*, "", "SoloFreePlayFlowCoordinator/<>c__DisplayClass21_0");
