#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PartyFreePlayFlowCoordinator)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class EnterPlayerGuestNameViewController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IFileStorage;
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
class LocalLeaderboardViewController;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class ResultsViewController;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass18_0;
}
namespace GlobalNamespace {
class __PartyFreePlayFlowCoordinator____c__DisplayClass23_0;
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
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyFreePlayFlowCoordinator::<>c__DisplayClass18_0*
class CORDL_TYPE __PartyFreePlayFlowCoordinator____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> __4__this;

  /// @brief Field beatmapKey, offset 0x30, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field beatmapLevel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field leaderboardId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_leaderboardId, put = __cordl_internal_set_leaderboardId))::StringW leaderboardId;

  /// @brief Field levelCompletionResults, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCompletionResults, put = __cordl_internal_set_levelCompletionResults))::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  /// @brief Field practice, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_practice, put = __cordl_internal_set_practice)) bool practice;

  /// @brief Field transformedBeatmapData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transformedBeatmapData, put = __cordl_internal_set_transformedBeatmapData))::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData;

  static inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0* New_ctor();

  /// @brief Method <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0, addr 0x275ae70, size 0xd0, virtual false, abstract: false, final false
  inline void _ProcessLevelCompletionResultsAfterLevelDidFinish_b__0(::GlobalNamespace::EnterPlayerGuestNameViewController* _, ::StringW playerName);

  constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_beatmapLevel() const;

  constexpr ::StringW const& __cordl_internal_get_leaderboardId() const;

  constexpr ::StringW& __cordl_internal_get_leaderboardId();

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __cordl_internal_get_levelCompletionResults() const;

  constexpr bool const& __cordl_internal_get_practice() const;

  constexpr bool& __cordl_internal_get_practice();

  constexpr ::GlobalNamespace::IReadonlyBeatmapData*& __cordl_internal_get_transformedBeatmapData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& __cordl_internal_get_transformedBeatmapData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> value);

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_leaderboardId(::StringW value);

  constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set_practice(bool value);

  constexpr void __cordl_internal_set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* value);

  /// @brief Method .ctor, addr 0x275aba8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyFreePlayFlowCoordinator____c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyFreePlayFlowCoordinator____c__DisplayClass18_0(__PartyFreePlayFlowCoordinator____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyFreePlayFlowCoordinator____c__DisplayClass18_0(__PartyFreePlayFlowCoordinator____c__DisplayClass18_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> _____4__this;

  /// @brief Field levelCompletionResults, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  /// @brief Field leaderboardId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___leaderboardId;

  /// @brief Field transformedBeatmapData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::IReadonlyBeatmapData* ___transformedBeatmapData;

  /// @brief Field beatmapKey, offset: 0x30, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field beatmapLevel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  /// @brief Field practice, offset: 0x50, size: 0x1, def value: None
  bool ___practice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___levelCompletionResults) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___leaderboardId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___transformedBeatmapData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___beatmapKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___beatmapLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0, ___practice) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyFreePlayFlowCoordinator::<>c__DisplayClass23_0*
class CORDL_TYPE __PartyFreePlayFlowCoordinator____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> __4__this;

  /// @brief Field resultsViewController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_resultsViewController, put = __cordl_internal_set_resultsViewController))::UnityW<::GlobalNamespace::ResultsViewController> resultsViewController;

  static inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0* New_ctor();

  /// @brief Method <HandleResultsViewControllerRestartButtonPressed>b__0, addr 0x275af40, size 0x50, virtual false, abstract: false, final false
  inline void _HandleResultsViewControllerRestartButtonPressed_b__0();

  constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& __cordl_internal_get_resultsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& __cordl_internal_get_resultsViewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> value);

  constexpr void __cordl_internal_set_resultsViewController(::UnityW<::GlobalNamespace::ResultsViewController> value);

  /// @brief Method .ctor, addr 0x275ae58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PartyFreePlayFlowCoordinator____c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PartyFreePlayFlowCoordinator____c__DisplayClass23_0(__PartyFreePlayFlowCoordinator____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PartyFreePlayFlowCoordinator____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PartyFreePlayFlowCoordinator____c__DisplayClass23_0(__PartyFreePlayFlowCoordinator____c__DisplayClass23_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> _____4__this;

  /// @brief Field resultsViewController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultsViewController> ___resultsViewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0, ___resultsViewController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PartyFreePlayFlowCoordinator
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 344, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PartyFreePlayFlowCoordinator*
class CORDL_TYPE PartyFreePlayFlowCoordinator : public ::GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator {
public:
  // Declarations
  using __c__DisplayClass18_0 = ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0;

  using __c__DisplayClass23_0 = ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0;

  /// @brief Field _defaultLightsPreset, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightsPreset, put = __cordl_internal_set__defaultLightsPreset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _defaultLightsPreset;

  /// @brief Field _enterNameViewController, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__enterNameViewController,
                      put = __cordl_internal_set__enterNameViewController))::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> _enterNameViewController;

  /// @brief Field _fileStorage, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage))::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _localLeaderboardViewController, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__localLeaderboardViewController,
                      put = __cordl_internal_set__localLeaderboardViewController))::UnityW<::GlobalNamespace::LocalLeaderboardViewController> _localLeaderboardViewController;

  /// @brief Field _menuLightsManager, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__menuLightsManager, put = __cordl_internal_set__menuLightsManager))::UnityW<::GlobalNamespace::MenuLightsManager> _menuLightsManager;

  /// @brief Field _resultsClearedLightsPreset, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsClearedLightsPreset,
                      put = __cordl_internal_set__resultsClearedLightsPreset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _resultsClearedLightsPreset;

  /// @brief Field _resultsFailedLightsPreset, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsFailedLightsPreset,
                      put = __cordl_internal_set__resultsFailedLightsPreset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _resultsFailedLightsPreset;

  /// @brief Field _resultsViewController, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsViewController, put = __cordl_internal_set__resultsViewController))::UnityW<::GlobalNamespace::ResultsViewController> _resultsViewController;

  __declspec(property(get = get_gameMode))::StringW gameMode;

  __declspec(property(get = get_leaderboardViewController))::UnityW<::GlobalNamespace::LeaderboardViewController> leaderboardViewController;

  __declspec(property(get = get_mainTitle))::StringW mainTitle;

  __declspec(property(get = get_showBackButtonForMainViewController)) bool showBackButtonForMainViewController;

  /// @brief Method HandleResultsViewControllerContinueButtonPressed, addr 0x275ad54, size 0x3c, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController);

  /// @brief Method HandleResultsViewControllerRestartButtonPressed, addr 0x275ad90, size 0xc8, virtual false, abstract: false, final false
  inline void HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController* resultsViewController);

  /// @brief Method IsNewHighScore, addr 0x275ac24, size 0x44, virtual false, abstract: false, final false
  inline bool IsNewHighScore(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId);

  static inline ::GlobalNamespace::PartyFreePlayFlowCoordinator* New_ctor();

  /// @brief Method ProcessLevelCompletionResultsAfterLevelDidFinish, addr 0x275a8f0, size 0x2b8, virtual true, abstract: false, final false
  inline void ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData* transformedBeatmapData,
                                                               ::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::GameplayModifiers* modifiers,
                                                               bool practice);

  /// @brief Method ProcessScore, addr 0x275ac68, size 0xec, virtual false, abstract: false, final false
  inline void ProcessScore(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId, ::StringW playerName);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidActivate, addr 0x275a58c, size 0x1e8, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate, addr 0x275a7a4, size 0x14c, virtual true, abstract: false, final false
  inline void SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy);

  /// @brief Method WillScoreGoToLeaderboard, addr 0x275abd4, size 0x50, virtual false, abstract: false, final false
  inline bool WillScoreGoToLeaderboard(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::StringW leaderboardId, bool practice);

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__defaultLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__defaultLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> const& __cordl_internal_get__enterNameViewController() const;

  constexpr ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController>& __cordl_internal_get__enterNameViewController();

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardViewController> const& __cordl_internal_get__localLeaderboardViewController() const;

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardViewController>& __cordl_internal_get__localLeaderboardViewController();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& __cordl_internal_get__menuLightsManager() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& __cordl_internal_get__menuLightsManager();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__resultsClearedLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__resultsClearedLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__resultsFailedLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__resultsFailedLightsPreset();

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController> const& __cordl_internal_get__resultsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::ResultsViewController>& __cordl_internal_get__resultsViewController();

  constexpr void __cordl_internal_set__defaultLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__enterNameViewController(::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__localLeaderboardViewController(::UnityW<::GlobalNamespace::LocalLeaderboardViewController> value);

  constexpr void __cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value);

  constexpr void __cordl_internal_set__resultsClearedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__resultsFailedLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__resultsViewController(::UnityW<::GlobalNamespace::ResultsViewController> value);

  /// @brief Method .ctor, addr 0x275ae60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameMode, addr 0x275a4f8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_leaderboardViewController, addr 0x275a538, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LeaderboardViewController> get_leaderboardViewController();

  /// @brief Method get_mainTitle, addr 0x275a548, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_mainTitle();

  /// @brief Method get_showBackButtonForMainViewController, addr 0x275a540, size 0x8, virtual true, abstract: false, final false
  inline bool get_showBackButtonForMainViewController();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PartyFreePlayFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PartyFreePlayFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PartyFreePlayFlowCoordinator(PartyFreePlayFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PartyFreePlayFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PartyFreePlayFlowCoordinator(PartyFreePlayFlowCoordinator const&) = delete;

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

  /// @brief Field _localLeaderboardViewController, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalLeaderboardViewController> ____localLeaderboardViewController;

  /// @brief Field _enterNameViewController, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnterPlayerGuestNameViewController> ____enterNameViewController;

  /// @brief Field _fileStorage, offset: 0x150, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PartyFreePlayFlowCoordinator, 0x158>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____defaultLightsPreset) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____resultsClearedLightsPreset) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____resultsFailedLightsPreset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____menuLightsManager) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____resultsViewController) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____localLeaderboardViewController) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____enterNameViewController) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyFreePlayFlowCoordinator, ____fileStorage) == 0x150, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PartyFreePlayFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PartyFreePlayFlowCoordinator*, "", "PartyFreePlayFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass18_0");
NEED_NO_BOX(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass23_0");
