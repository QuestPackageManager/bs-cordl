#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformLeaderboardViewController)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class LevelStatsView;
}
namespace HMUI {
class SegmentedControl;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__LeaderboardScore;
}
namespace GlobalNamespace {
class __PlatformLeaderboardViewController___RefreshDelayed_d__31;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__ScoresScope;
}
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
class __LeaderboardTableView__ScoreData;
}
namespace GlobalNamespace {
class LeaderboardTableView;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__GetScoresResult;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformLeaderboardViewController;
}
namespace GlobalNamespace {
class __PlatformLeaderboardViewController___RefreshDelayed_d__31;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardViewController);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31);
// Type: ::<RefreshDelayed>d__31
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5827))
// CS Name: ::PlatformLeaderboardViewController::<RefreshDelayed>d__31*
class CORDL_TYPE __PlatformLeaderboardViewController___RefreshDelayed_d__31 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::PlatformLeaderboardViewController* __4__this;

  /// @brief Field clear, offset 0x28, size 0x1
  __declspec(property(get = __get_clear, put = __set_clear)) bool clear;

  /// @brief Field showLoadingIndicator, offset 0x29, size 0x1
  __declspec(property(get = __get_showLoadingIndicator, put = __set_showLoadingIndicator)) bool showLoadingIndicator;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::PlatformLeaderboardViewController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardViewController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::PlatformLeaderboardViewController* value);

  constexpr bool& __get_clear();

  constexpr bool const& __get_clear() const;

  constexpr void __set_clear(bool value);

  constexpr bool& __get_showLoadingIndicator();

  constexpr bool const& __get_showLoadingIndicator() const;

  constexpr void __set_showLoadingIndicator(bool value);

  static inline ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2191184 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x219122c size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2191230 size 0x258 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2191488 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2191490 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x21914d0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardViewController___RefreshDelayed_d__31", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardViewController___RefreshDelayed_d__31(__PlatformLeaderboardViewController___RefreshDelayed_d__31&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardViewController___RefreshDelayed_d__31", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardViewController___RefreshDelayed_d__31(__PlatformLeaderboardViewController___RefreshDelayed_d__31 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardViewController___RefreshDelayed_d__31();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardViewController* _____4__this;

  /// @brief Field clear, offset: 0x28, size: 0x1, def value: None
  bool ___clear;

  /// @brief Field showLoadingIndicator, offset: 0x29, size: 0x1, def value: None
  bool ___showLoadingIndicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31, ___clear) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31, ___showLoadingIndicator) == 0x29, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformLeaderboardViewController
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5749)), TypeDefinitionIndex(TypeDefinitionIndex(4263))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5828))
// CS Name: ::PlatformLeaderboardViewController*
class CORDL_TYPE PlatformLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
public:
  // Declarations
  using _RefreshDelayed_d__31 = ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31;

  /// @brief Field _leaderboardTableView, offset 0x70, size 0x8
  __declspec(property(get = __get__leaderboardTableView, put = __set__leaderboardTableView))::GlobalNamespace::LeaderboardTableView* _leaderboardTableView;

  /// @brief Field _scopeSegmentedControl, offset 0x78, size 0x8
  __declspec(property(get = __get__scopeSegmentedControl, put = __set__scopeSegmentedControl))::HMUI::IconSegmentedControl* _scopeSegmentedControl;

  /// @brief Field _loadingControl, offset 0x80, size 0x8
  __declspec(property(get = __get__loadingControl, put = __set__loadingControl))::GlobalNamespace::LoadingControl* _loadingControl;

  /// @brief Field _globalLeaderboardIcon, offset 0x88, size 0x8
  __declspec(property(get = __get__globalLeaderboardIcon, put = __set__globalLeaderboardIcon))::UnityEngine::Sprite* _globalLeaderboardIcon;

  /// @brief Field _aroundPlayerLeaderboardIcon, offset 0x90, size 0x8
  __declspec(property(get = __get__aroundPlayerLeaderboardIcon, put = __set__aroundPlayerLeaderboardIcon))::UnityEngine::Sprite* _aroundPlayerLeaderboardIcon;

  /// @brief Field _friendsLeaderboardIcon, offset 0x98, size 0x8
  __declspec(property(get = __get__friendsLeaderboardIcon, put = __set__friendsLeaderboardIcon))::UnityEngine::Sprite* _friendsLeaderboardIcon;

  /// @brief Field _levelStatsView, offset 0xa0, size 0x8
  __declspec(property(get = __get__levelStatsView, put = __set__levelStatsView))::GlobalNamespace::LevelStatsView* _levelStatsView;

  /// @brief Field _leaderboardsModel, offset 0xa8, size 0x8
  __declspec(property(get = __get__leaderboardsModel, put = __set__leaderboardsModel))::GlobalNamespace::PlatformLeaderboardsModel* _leaderboardsModel;

  /// @brief Field _playerDataModel, offset 0xb0, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _getScoresAsyncRequest, offset 0xb8, size 0x8
  __declspec(property(get = __get__getScoresAsyncRequest, put = __set__getScoresAsyncRequest))::GlobalNamespace::HMAsyncRequest* _getScoresAsyncRequest;

  /// @brief Field _playerScorePos, offset 0xc0, size 0x8
  __declspec(property(get = __get__playerScorePos, put = __set__playerScorePos))::ArrayW<int32_t, ::Array<int32_t>*> _playerScorePos;

  /// @brief Field _scores, offset 0xc8, size 0x8
  __declspec(property(get = __get__scores, put = __set__scores))::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* _scores;

  /// @brief Field _difficultyBeatmap, offset 0xd0, size 0x8
  __declspec(property(get = __get__difficultyBeatmap, put = __set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  /// @brief Field _refreshIsNeeded, offset 0xd8, size 0x1
  __declspec(property(get = __get__refreshIsNeeded, put = __set__refreshIsNeeded)) bool _refreshIsNeeded;

  /// @brief Field _hasScoresData, offset 0xd9, size 0x1
  __declspec(property(get = __get__hasScoresData, put = __set__hasScoresData)) bool _hasScoresData;

  /// @brief Field _scoreScopes, offset 0xe0, size 0x8
  __declspec(
      property(get = __get__scoreScopes,
               put = __set__scoreScopes))::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> _scoreScopes;

  /// @brief Field _scoresScope, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__scoresScope, put = setStaticF__scoresScope))::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope _scoresScope;

  __declspec(property(get = get_leaderboardsModel))::GlobalNamespace::PlatformLeaderboardsModel* leaderboardsModel;

  constexpr ::GlobalNamespace::LeaderboardTableView*& __get__leaderboardTableView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardTableView*> const& __get__leaderboardTableView() const;

  constexpr void __set__leaderboardTableView(::GlobalNamespace::LeaderboardTableView* value);

  constexpr ::HMUI::IconSegmentedControl*& __get__scopeSegmentedControl();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControl*> const& __get__scopeSegmentedControl() const;

  constexpr void __set__scopeSegmentedControl(::HMUI::IconSegmentedControl* value);

  constexpr ::GlobalNamespace::LoadingControl*& __get__loadingControl();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& __get__loadingControl() const;

  constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl* value);

  constexpr ::UnityEngine::Sprite*& __get__globalLeaderboardIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__globalLeaderboardIcon() const;

  constexpr void __set__globalLeaderboardIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__aroundPlayerLeaderboardIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__aroundPlayerLeaderboardIcon() const;

  constexpr void __set__aroundPlayerLeaderboardIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__friendsLeaderboardIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__friendsLeaderboardIcon() const;

  constexpr void __set__friendsLeaderboardIcon(::UnityEngine::Sprite* value);

  constexpr ::GlobalNamespace::LevelStatsView*& __get__levelStatsView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelStatsView*> const& __get__levelStatsView() const;

  constexpr void __set__levelStatsView(::GlobalNamespace::LevelStatsView* value);

  constexpr ::GlobalNamespace::PlatformLeaderboardsModel*& __get__leaderboardsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsModel*> const& __get__leaderboardsModel() const;

  constexpr void __set__leaderboardsModel(::GlobalNamespace::PlatformLeaderboardsModel* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::HMAsyncRequest*& __get__getScoresAsyncRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMAsyncRequest*> const& __get__getScoresAsyncRequest() const;

  constexpr void __set__getScoresAsyncRequest(::GlobalNamespace::HMAsyncRequest* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__playerScorePos();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__playerScorePos() const;

  constexpr void __set__playerScorePos(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*& __get__scores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*> const& __get__scores() const;

  constexpr void __set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__difficultyBeatmap() const;

  constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr bool& __get__refreshIsNeeded();

  constexpr bool const& __get__refreshIsNeeded() const;

  constexpr void __set__refreshIsNeeded(bool value);

  constexpr bool& __get__hasScoresData();

  constexpr bool const& __get__hasScoresData() const;

  constexpr void __set__hasScoresData(bool value);

  constexpr ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*>& __get__scoreScopes();

  constexpr ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> const& __get__scoreScopes() const;

  constexpr void __set__scoreScopes(::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> value);

  static inline void setStaticF__scoresScope(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope value);

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope getStaticF__scoresScope();

  /// @brief Method get_leaderboardsModel addr 0x21901f0 size 0x8 virtual false final false
  inline ::GlobalNamespace::PlatformLeaderboardsModel* get_leaderboardsModel();

  /// @brief Method SetData addr 0x21901f8 size 0x58 virtual true final false
  inline void SetData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method RefreshLevelStats addr 0x2190424 size 0x30 virtual true final false
  inline void RefreshLevelStats();

  /// @brief Method DidActivate addr 0x2190454 size 0x53c virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x2190a24 size 0x120 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy addr 0x2190b44 size 0x1cc virtual true final false
  inline void OnDestroy();

  /// @brief Method ScoreScopeToScoreScopeIndex addr 0x2190990 size 0x94 virtual false final false
  inline int32_t ScoreScopeToScoreScopeIndex(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scoresScope);

  /// @brief Method ScopeScopeIndexToScoreScope addr 0x2190d10 size 0x3c virtual false final false
  inline ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope ScopeScopeIndexToScoreScope(int32_t scoreScopeIndex);

  /// @brief Method HandleDidPressRefreshButton addr 0x2190d4c size 0xc virtual false final false
  inline void HandleDidPressRefreshButton();

  /// @brief Method HandleLeaderboardsResultsReturned addr 0x2190d58 size 0x26c virtual false final false
  inline void
  HandleLeaderboardsResultsReturned(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
                                    ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> scores,
                                    int32_t playerScoreIndex);

  /// @brief Method HandleScopeSegmentedControlDidSelectCell addr 0x2190fc4 size 0x70 virtual false final false
  inline void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  /// @brief Method HandlePlatformLeaderboardsModelAllScoresDidUpload addr 0x2191034 size 0xc virtual false final false
  inline void HandlePlatformLeaderboardsModelAllScoresDidUpload();

  /// @brief Method Refresh addr 0x2190250 size 0x1d4 virtual false final false
  inline void Refresh(bool showLoadingIndicator, bool clear);

  /// @brief Method RefreshDelayed addr 0x21910fc size 0x88 virtual false final false
  inline ::System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);

  /// @brief Method ClearContent addr 0x2191040 size 0xbc virtual false final false
  inline void ClearContent();

  static inline ::GlobalNamespace::PlatformLeaderboardViewController* New_ctor();

  /// @brief Method .ctor addr 0x21911ac size 0x80 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformLeaderboardViewController(PlatformLeaderboardViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformLeaderboardViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformLeaderboardViewController(PlatformLeaderboardViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformLeaderboardViewController();

public:
  /// @brief Field _leaderboardTableView, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::LeaderboardTableView* ____leaderboardTableView;

  /// @brief Field _scopeSegmentedControl, offset: 0x78, size: 0x8, def value: None
  ::HMUI::IconSegmentedControl* ____scopeSegmentedControl;

  /// @brief Field _loadingControl, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::LoadingControl* ____loadingControl;

  /// @brief Field _globalLeaderboardIcon, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____globalLeaderboardIcon;

  /// @brief Field _aroundPlayerLeaderboardIcon, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____aroundPlayerLeaderboardIcon;

  /// @brief Field _friendsLeaderboardIcon, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____friendsLeaderboardIcon;

  /// @brief Field _levelStatsView, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::LevelStatsView* ____levelStatsView;

  /// @brief Field _leaderboardsModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::PlatformLeaderboardsModel* ____leaderboardsModel;

  /// @brief Field _playerDataModel, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _getScoresAsyncRequest, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::HMAsyncRequest* ____getScoresAsyncRequest;

  /// @brief Field _playerScorePos, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____playerScorePos;

  /// @brief Field _scores, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* ____scores;

  /// @brief Field _difficultyBeatmap, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap;

  /// @brief Field _refreshIsNeeded, offset: 0xd8, size: 0x1, def value: None
  bool ____refreshIsNeeded;

  /// @brief Field _hasScoresData, offset: 0xd9, size: 0x1, def value: None
  bool ____hasScoresData;

  /// @brief Field _scoreScopes, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> ____scoreScopes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardViewController, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____leaderboardTableView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____scopeSegmentedControl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____loadingControl) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____globalLeaderboardIcon) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____aroundPlayerLeaderboardIcon) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____friendsLeaderboardIcon) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____levelStatsView) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____leaderboardsModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____playerDataModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____getScoresAsyncRequest) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____playerScorePos) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____scores) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____difficultyBeatmap) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____refreshIsNeeded) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____hasScoresData) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____scoreScopes) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardViewController*, "", "PlatformLeaderboardViewController");
NEED_NO_BOX(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__31*, "", "PlatformLeaderboardViewController/<RefreshDelayed>d__31");
