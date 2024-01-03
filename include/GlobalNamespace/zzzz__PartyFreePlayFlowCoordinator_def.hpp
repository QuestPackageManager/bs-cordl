#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PartyFreePlayFlowCoordinator)
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class ResultsViewController;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class LocalLeaderboardViewController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass23_0;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class EnterPlayerGuestNameViewController;
}
namespace GlobalNamespace {
class LeaderboardViewController;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PartyFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PartyFreePlayFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0);
MARK_REF_PTR_T(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0);
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5518))
// CS Name: ::PartyFreePlayFlowCoordinator::<>c__DisplayClass18_0*
class CORDL_TYPE __PartyFreePlayFlowCoordinator____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::PartyFreePlayFlowCoordinator* __4__this;

  /// @brief Field levelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __get_levelCompletionResults, put = __set_levelCompletionResults))::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  /// @brief Field leaderboardId, offset 0x20, size 0x8
  __declspec(property(get = __get_leaderboardId, put = __set_leaderboardId))::StringW leaderboardId;

  /// @brief Field transformedBeatmapData, offset 0x28, size 0x8
  __declspec(property(get = __get_transformedBeatmapData, put = __set_transformedBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;

  /// @brief Field difficultyBeatmap, offset 0x30, size 0x8
  __declspec(property(get = __get_difficultyBeatmap, put = __set_difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;

  /// @brief Field practice, offset 0x38, size 0x1
  __declspec(property(get = __get_practice, put = __set_practice)) bool practice;

  constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator* value);

  constexpr ::GlobalNamespace::LevelCompletionResults*& __get_levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __get_levelCompletionResults() const;

  constexpr void __set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr ::StringW& __get_leaderboardId();

  constexpr ::StringW const& __get_leaderboardId() const;

  constexpr void __set_leaderboardId(::StringW value);

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __get_transformedBeatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __get_transformedBeatmapData() const;

  constexpr void __set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get_difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get_difficultyBeatmap() const;

  constexpr void __set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr bool& __get_practice();

  constexpr bool const& __get_practice() const;

  constexpr void __set_practice(bool value);

  static inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor, addr 0x229b118, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0, addr 0x229b388, size 0xc8, virtual false, abstract: false, final false
  inline void _ProcessLevelCompletionResultsAfterLevelDidFinish_b__0(::GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::StringW playerName);

  // Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyFreePlayFlowCoordinator____c__DisplayClass18_0(__PartyFreePlayFlowCoordinator____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyFreePlayFlowCoordinator____c__DisplayClass18_0(__PartyFreePlayFlowCoordinator____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyFreePlayFlowCoordinator____c__DisplayClass18_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PartyFreePlayFlowCoordinator* _____4__this;

  /// @brief Field levelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  /// @brief Field leaderboardId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___leaderboardId;

  /// @brief Field transformedBeatmapData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___transformedBeatmapData;

  /// @brief Field difficultyBeatmap, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ___difficultyBeatmap;

  /// @brief Field practice, offset: 0x38, size: 0x1, def value: None
  bool ___practice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___levelCompletionResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___leaderboardId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___transformedBeatmapData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___difficultyBeatmap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___practice) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5519))
// CS Name: ::PartyFreePlayFlowCoordinator::<>c__DisplayClass23_0*
class CORDL_TYPE __PartyFreePlayFlowCoordinator____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::PartyFreePlayFlowCoordinator* __4__this;

  /// @brief Field resultsViewController, offset 0x18, size 0x8
  __declspec(property(get = __get_resultsViewController, put = __set_resultsViewController))::GlobalNamespace::ResultsViewController* resultsViewController;

  constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator* value);

  constexpr ::GlobalNamespace::ResultsViewController*& __get_resultsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> const& __get_resultsViewController() const;

  constexpr void __set_resultsViewController(::GlobalNamespace::ResultsViewController* value);

  static inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0* New_ctor();

  /// @brief Method .ctor, addr 0x229b370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <HandleResultsViewControllerRestartButtonPressed>b__0, addr 0x229b450, size 0x50, virtual false, abstract: false, final false
  inline void _HandleResultsViewControllerRestartButtonPressed_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyFreePlayFlowCoordinator____c__DisplayClass23_0(__PartyFreePlayFlowCoordinator____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyFreePlayFlowCoordinator____c__DisplayClass23_0(__PartyFreePlayFlowCoordinator____c__DisplayClass23_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyFreePlayFlowCoordinator____c__DisplayClass23_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PartyFreePlayFlowCoordinator* _____4__this;

  /// @brief Field resultsViewController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ResultsViewController* ___resultsViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0, ___resultsViewController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PartyFreePlayFlowCoordinator
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5526))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5520))
// CS Name: ::PartyFreePlayFlowCoordinator*
class CORDL_TYPE PartyFreePlayFlowCoordinator : public ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass23_0 = ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0;

  using __c__DisplayClass18_0 = ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0;

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

  /// @brief Field _localLeaderboardViewController, offset 0x138, size 0x8
  __declspec(property(get = __get__localLeaderboardViewController, put = __set__localLeaderboardViewController))::GlobalNamespace::LocalLeaderboardViewController* _localLeaderboardViewController;

  /// @brief Field _enterNameViewController, offset 0x140, size 0x8
  __declspec(property(get = __get__enterNameViewController, put = __set__enterNameViewController))::GlobalNamespace::EnterPlayerGuestNameViewController* _enterNameViewController;

  /// @brief Field _saveData, offset 0x148, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

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

  constexpr ::GlobalNamespace::LocalLeaderboardViewController*& __get__localLeaderboardViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardViewController*> const& __get__localLeaderboardViewController() const;

  constexpr void __set__localLeaderboardViewController(::GlobalNamespace::LocalLeaderboardViewController* value);

  constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController*& __get__enterNameViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnterPlayerGuestNameViewController*> const& __get__enterNameViewController() const;

  constexpr void __set__enterNameViewController(::GlobalNamespace::EnterPlayerGuestNameViewController* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  /// @brief Method get_gameMode, addr 0x229aaf4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_leaderboardViewController, addr 0x229ab34, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::LeaderboardViewController* get_leaderboardViewController();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x229ab3c, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

  /// @brief Method get_mainTitle, addr 0x229ab44, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate, addr 0x229ab88, size 0x1d0, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate, addr 0x229ad88, size 0x14c, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish, addr 0x229aed4, size 0x244, virtual true, abstract: false, final false
  inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                               ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, bool practice);

  /// @brief Method WillScoreGoToLeaderboard, addr 0x229b144, size 0x50, virtual false, abstract: false, final false
  inline bool WillScoreGoToLeaderboard(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId, bool practice);

  /// @brief Method IsNewHighScore, addr 0x229b194, size 0x44, virtual false, abstract: false, final false
  inline bool IsNewHighScore(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId);

  /// @brief Method ProcessScore, addr 0x229b1d8, size 0x94, virtual false, abstract: false, final false
  inline void ProcessScore(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId, ::StringW playerName);

  /// @brief Method HandleResultsViewControllerContinueButtonPressed, addr 0x229b26c, size 0x3c, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController);

  /// @brief Method HandleResultsViewControllerRestartButtonPressed, addr 0x229b2a8, size 0xc8, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController);

  static inline ::GlobalNamespace::PartyFreePlayFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x229b378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PartyFreePlayFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyFreePlayFlowCoordinator(PartyFreePlayFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyFreePlayFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyFreePlayFlowCoordinator(PartyFreePlayFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyFreePlayFlowCoordinator();

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

  /// @brief Field _localLeaderboardViewController, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardViewController* ____localLeaderboardViewController;

  /// @brief Field _enterNameViewController, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::EnterPlayerGuestNameViewController* ____enterNameViewController;

  /// @brief Field _saveData, offset: 0x148, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyFreePlayFlowCoordinator, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____defaultLightsPreset) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____resultsClearedLightsPreset) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____resultsFailedLightsPreset) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____menuLightsManager) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____resultsViewController) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____localLeaderboardViewController) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____enterNameViewController) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____saveData) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PartyFreePlayFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyFreePlayFlowCoordinator*, "", "PartyFreePlayFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass18_0");
NEED_NO_BOX(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass23_0");
