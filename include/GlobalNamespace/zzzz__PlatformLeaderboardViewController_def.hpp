#pragma once
// IWYU pragma private; include "GlobalNamespace\PlatformLeaderboardViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformLeaderboardViewController)
namespace BeatSaber::Main::Leaderboards {
class BeatLeaderboards;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class LeaderboardTableView_ScoreData;
}
namespace GlobalNamespace {
class LeaderboardTableView;
}
namespace GlobalNamespace {
class LevelStatsView;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class PlatformLeaderboardViewController__RefreshDelayed_d__42;
}
namespace GlobalNamespace {
struct PlatformLeaderboardViewController__Refresh_d__40;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_GetScoresResult;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel_LeaderboardScore;
}
namespace GlobalNamespace {
struct PlatformLeaderboardsModel_ScoresScope;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class SegmentedControl;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformLeaderboardViewController;
}
namespace GlobalNamespace {
class PlatformLeaderboardViewController__RefreshDelayed_d__42;
}
namespace GlobalNamespace {
struct PlatformLeaderboardViewController__Refresh_d__40;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformLeaderboardViewController*);
MARK_REF_T(::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42*);
MARK_VAL_T(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLeaderboardViewController*, "", "PlatformLeaderboardViewController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42*, "", "PlatformLeaderboardViewController/<RefreshDelayed>d__42");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40, "", "PlatformLeaderboardViewController/<Refresh>d__40");
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformLeaderboardViewController/<Refresh>d__40
struct CORDL_TYPE PlatformLeaderboardViewController__Refresh_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x594bf30, size 0x2d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x594c204, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardViewController__Refresh_d__40();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>", modifiers: "", def_value: None }, CppParam { name: "showLoadingIndicator", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "clear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr PlatformLeaderboardViewController__Refresh_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                             ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> __4__this, bool showLoadingIndicator, bool clear,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6919 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> __4__this;

  /// @brief Field showLoadingIndicator, offset: 0x30, size: 0x1, def value: None
  bool showLoadingIndicator;

  /// @brief Field clear, offset: 0x31, size: 0x1, def value: None
  bool clear;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40, showLoadingIndicator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40, clear) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLeaderboardViewController/<RefreshDelayed>d__42
class CORDL_TYPE PlatformLeaderboardViewController__RefreshDelayed_d__42 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> __4__this;

  /// @brief Field clear, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_clear, put = __cordl_internal_set_clear)) bool clear;

  /// @brief Field showLoadingIndicator, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_showLoadingIndicator, put = __cordl_internal_set_showLoadingIndicator)) bool showLoadingIndicator;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x594c218, size 0x2f4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x594c50c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x594c514, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x594c54c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x594c214, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>& __cordl_internal_get___4__this();

  constexpr bool const& __cordl_internal_get_clear() const;

  constexpr bool& __cordl_internal_get_clear();

  constexpr bool const& __cordl_internal_get_showLoadingIndicator() const;

  constexpr bool& __cordl_internal_get_showLoadingIndicator();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> value);

  constexpr void __cordl_internal_set_clear(bool value);

  constexpr void __cordl_internal_set_showLoadingIndicator(bool value);

  /// @brief Method .ctor, addr 0x594c20c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardViewController__RefreshDelayed_d__42();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardViewController__RefreshDelayed_d__42", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardViewController__RefreshDelayed_d__42(PlatformLeaderboardViewController__RefreshDelayed_d__42&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardViewController__RefreshDelayed_d__42", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardViewController__RefreshDelayed_d__42(PlatformLeaderboardViewController__RefreshDelayed_d__42 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6920 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> _____4__this;

  /// @brief Field clear, offset: 0x28, size: 0x1, def value: None
  bool ___clear;

  /// @brief Field showLoadingIndicator, offset: 0x29, size: 0x1, def value: None
  bool ___showLoadingIndicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42, ___clear) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42, ___showLoadingIndicator) == 0x29, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, LeaderboardViewController, PlatformLeaderboardsModel::ScoresScope
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformLeaderboardViewController
class CORDL_TYPE PlatformLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
public:
  // Declarations
  using _RefreshDelayed_d__42 = ::GlobalNamespace::PlatformLeaderboardViewController__RefreshDelayed_d__42;

  using _Refresh_d__40 = ::GlobalNamespace::PlatformLeaderboardViewController__Refresh_d__40;

  /// @brief Field _aroundPlayerLeaderboardIcon, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__aroundPlayerLeaderboardIcon, put = __cordl_internal_set__aroundPlayerLeaderboardIcon)) ::UnityW<::UnityEngine::Sprite> _aroundPlayerLeaderboardIcon;

  /// @brief Field _beatLeaderboards, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatLeaderboards, put = __cordl_internal_set__beatLeaderboards)) ::BeatSaber::Main::Leaderboards::BeatLeaderboards* _beatLeaderboards;

  /// @brief Field _beatmapKey, offset 0xe0, size 0x10
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey)) ::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _friendsLeaderboardIcon, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__friendsLeaderboardIcon, put = __cordl_internal_set__friendsLeaderboardIcon)) ::UnityW<::UnityEngine::Sprite> _friendsLeaderboardIcon;

  /// @brief Field _gameplayModifiers, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _getScoresAsyncRequest, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__getScoresAsyncRequest, put = __cordl_internal_set__getScoresAsyncRequest)) ::GlobalNamespace::HMAsyncRequest* _getScoresAsyncRequest;

  /// @brief Field _globalLeaderboardIcon, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__globalLeaderboardIcon, put = __cordl_internal_set__globalLeaderboardIcon)) ::UnityW<::UnityEngine::Sprite> _globalLeaderboardIcon;

  /// @brief Field _hasScoresData, offset 0xfa, size 0x1
  __declspec(property(get = __cordl_internal_get__hasScoresData, put = __cordl_internal_set__hasScoresData)) bool _hasScoresData;

  /// @brief Field _leaderboardTableView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardTableView, put = __cordl_internal_set__leaderboardTableView)) ::UnityW<::GlobalNamespace::LeaderboardTableView> _leaderboardTableView;

  /// @brief Field _leaderboardsModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardsModel, put = __cordl_internal_set__leaderboardsModel)) ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _leaderboardsModel;

  /// @brief Field _levelStatsView, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelStatsView, put = __cordl_internal_set__levelStatsView)) ::UnityW<::GlobalNamespace::LevelStatsView> _levelStatsView;

  /// @brief Field _loadingControl, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl)) ::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _playerDataModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _playerScorePos, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerScorePos, put = __cordl_internal_set__playerScorePos)) ::ArrayW<int32_t> _playerScorePos;

  /// @brief Field _refreshBeatLeaderboards, offset 0xf9, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshBeatLeaderboards, put = __cordl_internal_set__refreshBeatLeaderboards)) bool _refreshBeatLeaderboards;

  /// @brief Field _refreshIsNeeded, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshIsNeeded, put = __cordl_internal_set__refreshIsNeeded)) bool _refreshIsNeeded;

  /// @brief Field _scopeSegmentedControl, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__scopeSegmentedControl, put = __cordl_internal_set__scopeSegmentedControl)) ::UnityW<::HMUI::IconSegmentedControl> _scopeSegmentedControl;

  /// @brief Field _scoreScopes, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreScopes, put = __cordl_internal_set__scoreScopes)) ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope> _scoreScopes;

  /// @brief Field _scores, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__scores, put = __cordl_internal_set__scores)) ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>* _scores;

  /// @brief Field _scoresScope, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__scoresScope, put = setStaticF__scoresScope)) ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope _scoresScope;

  __declspec(property(get = get_leaderboardsModel)) ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> leaderboardsModel;

  /// @brief Method ClearContent, addr 0x594bca4, size 0xe4, virtual false, abstract: false, final false
  inline void ClearContent();

  /// @brief Method DidActivate, addr 0x594ac50, size 0x62c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x594b314, size 0x1d8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleDidPressRefreshButton, addr 0x594b760, size 0x20, virtual false, abstract: false, final false
  inline void HandleDidPressRefreshButton();

  /// @brief Method HandleGameplayModifiersDidChange, addr 0x594b780, size 0x8c, virtual false, abstract: false, final false
  inline void HandleGameplayModifiersDidChange();

  /// @brief Method HandleLeaderboardsResultsReturned, addr 0x594b80c, size 0x270, virtual false, abstract: false, final false
  inline void HandleLeaderboardsResultsReturned(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult result, ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*> scores,
                                                int32_t playerScoreIndex);

  /// @brief Method HandlePlatformLeaderboardsModelAllScoresDidUpload, addr 0x594baf8, size 0x20, virtual false, abstract: false, final false
  inline void HandlePlatformLeaderboardsModelAllScoresDidUpload();

  /// @brief Method HandleScopeSegmentedControlDidSelectCell, addr 0x594ba7c, size 0x7c, virtual false, abstract: false, final false
  inline void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  static inline ::GlobalNamespace::PlatformLeaderboardViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x594b4ec, size 0x238, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Refresh, addr 0x594aa40, size 0xc0, virtual false, abstract: false, final false
  inline void Refresh(bool showLoadingIndicator, bool clear);

  /// @brief Method RefreshAsync, addr 0x594bb18, size 0x118, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RefreshAsync(bool showLoadingIndicator, bool clear);

  /// @brief Method RefreshBeatLeaderboards, addr 0x594ab00, size 0x120, virtual false, abstract: false, final false
  inline void RefreshBeatLeaderboards();

  /// @brief Method RefreshDelayed, addr 0x594bc30, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);

  /// @brief Method RefreshLevelStats, addr 0x594ac20, size 0x30, virtual true, abstract: false, final false
  inline void RefreshLevelStats();

  /// @brief Method ScopeScopeIndexToScoreScope, addr 0x594b724, size 0x3c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope ScopeScopeIndexToScoreScope(int32_t scoreScopeIndex);

  /// @brief Method ScoreScopeToScoreScopeIndex, addr 0x594b27c, size 0x98, virtual false, abstract: false, final false
  inline int32_t ScoreScopeToScoreScopeIndex(::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scoresScope);

  /// @brief Method SetData, addr 0x594a924, size 0x11c, virtual true, abstract: false, final false
  inline void SetData(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method <RefreshBeatLeaderboards>b__43_0, addr 0x594be40, size 0x50, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _RefreshBeatLeaderboards_b__43_0();

  /// @brief Method <RefreshBeatLeaderboards>b__43_1, addr 0x594be90, size 0x50, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _RefreshBeatLeaderboards_b__43_1();

  /// @brief Method <RefreshBeatLeaderboards>b__43_2, addr 0x594bee0, size 0x50, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _RefreshBeatLeaderboards_b__43_2();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__aroundPlayerLeaderboardIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__aroundPlayerLeaderboardIcon();

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards* const& __cordl_internal_get__beatLeaderboards() const;

  constexpr ::BeatSaber::Main::Leaderboards::BeatLeaderboards*& __cordl_internal_get__beatLeaderboards();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__friendsLeaderboardIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__friendsLeaderboardIcon();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::GlobalNamespace::HMAsyncRequest* const& __cordl_internal_get__getScoresAsyncRequest() const;

  constexpr ::GlobalNamespace::HMAsyncRequest*& __cordl_internal_get__getScoresAsyncRequest();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__globalLeaderboardIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__globalLeaderboardIcon();

  constexpr bool const& __cordl_internal_get__hasScoresData() const;

  constexpr bool& __cordl_internal_get__hasScoresData();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardTableView> const& __cordl_internal_get__leaderboardTableView() const;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardTableView>& __cordl_internal_get__leaderboardTableView();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__leaderboardsModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__leaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::LevelStatsView> const& __cordl_internal_get__levelStatsView() const;

  constexpr ::UnityW<::GlobalNamespace::LevelStatsView>& __cordl_internal_get__levelStatsView();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get__playerScorePos() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get__playerScorePos();

  constexpr bool const& __cordl_internal_get__refreshBeatLeaderboards() const;

  constexpr bool& __cordl_internal_get__refreshBeatLeaderboards();

  constexpr bool const& __cordl_internal_get__refreshIsNeeded() const;

  constexpr bool& __cordl_internal_get__refreshIsNeeded();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__scopeSegmentedControl() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__scopeSegmentedControl();

  constexpr ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope> const& __cordl_internal_get__scoreScopes() const;

  constexpr ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope>& __cordl_internal_get__scoreScopes();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>* const& __cordl_internal_get__scores() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>*& __cordl_internal_get__scores();

  constexpr void __cordl_internal_set__aroundPlayerLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__beatLeaderboards(::BeatSaber::Main::Leaderboards::BeatLeaderboards* value);

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__friendsLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__getScoresAsyncRequest(::GlobalNamespace::HMAsyncRequest* value);

  constexpr void __cordl_internal_set__globalLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__hasScoresData(bool value);

  constexpr void __cordl_internal_set__leaderboardTableView(::UnityW<::GlobalNamespace::LeaderboardTableView> value);

  constexpr void __cordl_internal_set__leaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr void __cordl_internal_set__levelStatsView(::UnityW<::GlobalNamespace::LevelStatsView> value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__playerScorePos(::ArrayW<int32_t> value);

  constexpr void __cordl_internal_set__refreshBeatLeaderboards(bool value);

  constexpr void __cordl_internal_set__refreshIsNeeded(bool value);

  constexpr void __cordl_internal_set__scopeSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr void __cordl_internal_set__scoreScopes(::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope> value);

  constexpr void __cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>* value);

  /// @brief Method .ctor, addr 0x594bd88, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope getStaticF__scoresScope();

  /// @brief Method get_leaderboardsModel, addr 0x594a91c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> get_leaderboardsModel();

  static inline void setStaticF__scoresScope(::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardViewController(PlatformLeaderboardViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardViewController(PlatformLeaderboardViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6921 };

  /// @brief Field kButtonHighscoresAroundYouLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kButtonHighscoresAroundYouLocalizationKey{ u"BUTTON_HIGHSCORES_AROUND_YOU" };

  /// @brief Field kButtonHighscoresFriendsLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kButtonHighscoresFriendsLocalizationKey{ u"BUTTON_HIGHSCORES_FRIENDS" };

  /// @brief Field kButtonHighscoresGlobalLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kButtonHighscoresGlobalLocalizationKey{ u"BUTTON_HIGHSCORES_GLOBAL" };

  /// @brief Field kCustomLevelsLeaderboardsNotSupportedLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kCustomLevelsLeaderboardsNotSupportedLocalizationKey{ u"CUSTOM_LEVELS_LEADERBOARDS_NOT_SUPPORTED" };

  /// @brief Field kLeaderboardsLoadingFailedLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLeaderboardsLoadingFailedLocalizationKey{ u"LEADERBOARDS_LOADING_FAILED" };

  /// @brief Field kMaxLeaderboardResults offset 0xffffffff size 0x4
  static constexpr int32_t kMaxLeaderboardResults{ static_cast<int32_t>(0xa) };

  /// @brief Field _leaderboardTableView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LeaderboardTableView> ____leaderboardTableView;

  /// @brief Field _scopeSegmentedControl, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____scopeSegmentedControl;

  /// @brief Field _loadingControl, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _globalLeaderboardIcon, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____globalLeaderboardIcon;

  /// @brief Field _aroundPlayerLeaderboardIcon, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____aroundPlayerLeaderboardIcon;

  /// @brief Field _friendsLeaderboardIcon, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____friendsLeaderboardIcon;

  /// @brief Field _levelStatsView, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelStatsView> ____levelStatsView;

  /// @brief Field _leaderboardsModel, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____leaderboardsModel;

  /// @brief Field _playerDataModel, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _beatLeaderboards, offset: 0xc0, size: 0x8, def value: None
  ::BeatSaber::Main::Leaderboards::BeatLeaderboards* ____beatLeaderboards;

  /// @brief Field _getScoresAsyncRequest, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::HMAsyncRequest* ____getScoresAsyncRequest;

  /// @brief Field _scores, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardTableView_ScoreData*>* ____scores;

  /// @brief Field _playerScorePos, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<int32_t> ____playerScorePos;

  /// @brief Field _beatmapKey, offset: 0xe0, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _gameplayModifiers, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  /// @brief Field _refreshIsNeeded, offset: 0xf8, size: 0x1, def value: None
  bool ____refreshIsNeeded;

  /// @brief Field _refreshBeatLeaderboards, offset: 0xf9, size: 0x1, def value: None
  bool ____refreshBeatLeaderboards;

  /// @brief Field _hasScoresData, offset: 0xfa, size: 0x1, def value: None
  bool ____hasScoresData;

  /// @brief Field _scoreScopes, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope> ____scoreScopes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____leaderboardTableView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____scopeSegmentedControl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____loadingControl) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____globalLeaderboardIcon) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____aroundPlayerLeaderboardIcon) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____friendsLeaderboardIcon) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____levelStatsView) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____leaderboardsModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____playerDataModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____beatLeaderboards) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____getScoresAsyncRequest) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____scores) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____playerScorePos) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____beatmapKey) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____gameplayModifiers) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____refreshIsNeeded) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____refreshBeatLeaderboards) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____hasScoresData) == 0xfa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____scoreScopes) == 0x100, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlatformLeaderboardViewController) == 0x108, "Size mismatch!");

} // namespace GlobalNamespace
