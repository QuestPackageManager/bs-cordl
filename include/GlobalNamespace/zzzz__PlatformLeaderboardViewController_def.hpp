#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformLeaderboardViewController)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class HMAsyncRequest;
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
class PlatformLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class __LeaderboardTableView__ScoreData;
}
namespace GlobalNamespace {
class __PlatformLeaderboardViewController___RefreshDelayed_d__32;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardViewController___Refresh_d__30;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__GetScoresResult;
}
namespace GlobalNamespace {
class __PlatformLeaderboardsModel__LeaderboardScore;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardsModel__ScoresScope;
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
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
class __PlatformLeaderboardViewController___RefreshDelayed_d__32;
}
namespace GlobalNamespace {
struct __PlatformLeaderboardViewController___Refresh_d__30;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformLeaderboardViewController);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32);
MARK_VAL_T(::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30);
// Type: ::<Refresh>d__30
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3396))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5029))
// CS Name: ::PlatformLeaderboardViewController::<Refresh>d__30
struct CORDL_TYPE __PlatformLeaderboardViewController___Refresh_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x230318c, size 0x2c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2303450, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>", modifiers: "", def_value: None }, CppParam { name: "showLoadingIndicator", ty: "bool", modifiers: "", def_value: None }, CppParam
  // { name: "clear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __PlatformLeaderboardViewController___Refresh_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> __4__this, bool showLoadingIndicator, bool clear,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardViewController___Refresh_d__30();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30, showLoadingIndicator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30, clear) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshDelayed>d__32
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5030))
// CS Name: ::PlatformLeaderboardViewController::<RefreshDelayed>d__32*
class CORDL_TYPE __PlatformLeaderboardViewController___RefreshDelayed_d__32 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> __4__this;

  /// @brief Field clear, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_clear, put = __cordl_internal_set_clear)) bool clear;

  /// @brief Field showLoadingIndicator, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_showLoadingIndicator, put = __cordl_internal_set_showLoadingIndicator)) bool showLoadingIndicator;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlatformLeaderboardViewController> value);

  constexpr bool& __cordl_internal_get_clear();

  constexpr bool const& __cordl_internal_get_clear() const;

  constexpr void __cordl_internal_set_clear(bool value);

  constexpr bool& __cordl_internal_get_showLoadingIndicator();

  constexpr bool const& __cordl_internal_get_showLoadingIndicator() const;

  constexpr void __cordl_internal_set_showLoadingIndicator(bool value);

  static inline ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2303028, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x230345c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x2303460, size 0x24c, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x23036ac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x23036b4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x23036f4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardViewController___RefreshDelayed_d__32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlatformLeaderboardViewController___RefreshDelayed_d__32(__PlatformLeaderboardViewController___RefreshDelayed_d__32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlatformLeaderboardViewController___RefreshDelayed_d__32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlatformLeaderboardViewController___RefreshDelayed_d__32(__PlatformLeaderboardViewController___RefreshDelayed_d__32 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlatformLeaderboardViewController___RefreshDelayed_d__32();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32, ___clear) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32, ___showLoadingIndicator) == 0x29, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlatformLeaderboardViewController
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4954)), TypeDefinitionIndex(TypeDefinitionIndex(10692)), TypeDefinitionIndex(TypeDefinitionIndex(10773))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5031))
// CS Name: ::PlatformLeaderboardViewController*
class CORDL_TYPE PlatformLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
public:
  // Declarations
  using _RefreshDelayed_d__32 = ::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32;

  using _Refresh_d__30 = ::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30;

  /// @brief Field _leaderboardTableView, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardTableView, put = __cordl_internal_set__leaderboardTableView))::UnityW<::GlobalNamespace::LeaderboardTableView> _leaderboardTableView;

  /// @brief Field _scopeSegmentedControl, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__scopeSegmentedControl, put = __cordl_internal_set__scopeSegmentedControl))::UnityW<::HMUI::IconSegmentedControl> _scopeSegmentedControl;

  /// @brief Field _loadingControl, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl))::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _globalLeaderboardIcon, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__globalLeaderboardIcon, put = __cordl_internal_set__globalLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _globalLeaderboardIcon;

  /// @brief Field _aroundPlayerLeaderboardIcon, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__aroundPlayerLeaderboardIcon, put = __cordl_internal_set__aroundPlayerLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _aroundPlayerLeaderboardIcon;

  /// @brief Field _friendsLeaderboardIcon, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__friendsLeaderboardIcon, put = __cordl_internal_set__friendsLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _friendsLeaderboardIcon;

  /// @brief Field _levelStatsView, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelStatsView, put = __cordl_internal_set__levelStatsView))::UnityW<::GlobalNamespace::LevelStatsView> _levelStatsView;

  /// @brief Field _leaderboardsModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardsModel, put = __cordl_internal_set__leaderboardsModel))::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> _leaderboardsModel;

  /// @brief Field _playerDataModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _getScoresAsyncRequest, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__getScoresAsyncRequest, put = __cordl_internal_set__getScoresAsyncRequest))::GlobalNamespace::HMAsyncRequest* _getScoresAsyncRequest;

  /// @brief Field _scores, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__scores, put = __cordl_internal_set__scores))::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* _scores;

  /// @brief Field _playerScorePos, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerScorePos, put = __cordl_internal_set__playerScorePos))::ArrayW<int32_t, ::Array<int32_t>*> _playerScorePos;

  /// @brief Field _beatmapKey, offset 0xd0, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey))::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _refreshIsNeeded, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshIsNeeded, put = __cordl_internal_set__refreshIsNeeded)) bool _refreshIsNeeded;

  /// @brief Field _hasScoresData, offset 0xe9, size 0x1
  __declspec(property(get = __cordl_internal_get__hasScoresData, put = __cordl_internal_set__hasScoresData)) bool _hasScoresData;

  /// @brief Field _scoreScopes, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreScopes, put = __cordl_internal_set__scoreScopes))::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope,
                                                                                                                 ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> _scoreScopes;

  /// @brief Field _scoresScope, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__scoresScope, put = setStaticF__scoresScope))::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope _scoresScope;

  __declspec(property(get = get_leaderboardsModel))::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> leaderboardsModel;

  constexpr ::UnityW<::GlobalNamespace::LeaderboardTableView>& __cordl_internal_get__leaderboardTableView();

  constexpr ::UnityW<::GlobalNamespace::LeaderboardTableView> const& __cordl_internal_get__leaderboardTableView() const;

  constexpr void __cordl_internal_set__leaderboardTableView(::UnityW<::GlobalNamespace::LeaderboardTableView> value);

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__scopeSegmentedControl();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__scopeSegmentedControl() const;

  constexpr void __cordl_internal_set__scopeSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__globalLeaderboardIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__globalLeaderboardIcon() const;

  constexpr void __cordl_internal_set__globalLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__aroundPlayerLeaderboardIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__aroundPlayerLeaderboardIcon() const;

  constexpr void __cordl_internal_set__aroundPlayerLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__friendsLeaderboardIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__friendsLeaderboardIcon() const;

  constexpr void __cordl_internal_set__friendsLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::UnityW<::GlobalNamespace::LevelStatsView>& __cordl_internal_get__levelStatsView();

  constexpr ::UnityW<::GlobalNamespace::LevelStatsView> const& __cordl_internal_get__levelStatsView() const;

  constexpr void __cordl_internal_set__levelStatsView(::UnityW<::GlobalNamespace::LevelStatsView> value);

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& __cordl_internal_get__leaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& __cordl_internal_get__leaderboardsModel() const;

  constexpr void __cordl_internal_set__leaderboardsModel(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::GlobalNamespace::HMAsyncRequest*& __cordl_internal_get__getScoresAsyncRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HMAsyncRequest*> const& __cordl_internal_get__getScoresAsyncRequest() const;

  constexpr void __cordl_internal_set__getScoresAsyncRequest(::GlobalNamespace::HMAsyncRequest* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*& __cordl_internal_get__scores();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>*> const& __cordl_internal_get__scores() const;

  constexpr void __cordl_internal_set__scores(::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__playerScorePos();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__playerScorePos() const;

  constexpr void __cordl_internal_set__playerScorePos(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr bool& __cordl_internal_get__refreshIsNeeded();

  constexpr bool const& __cordl_internal_get__refreshIsNeeded() const;

  constexpr void __cordl_internal_set__refreshIsNeeded(bool value);

  constexpr bool& __cordl_internal_get__hasScoresData();

  constexpr bool const& __cordl_internal_get__hasScoresData() const;

  constexpr void __cordl_internal_set__hasScoresData(bool value);

  constexpr ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*>& __cordl_internal_get__scoreScopes();

  constexpr ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> const&
  __cordl_internal_get__scoreScopes() const;

  constexpr void __cordl_internal_set__scoreScopes(::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> value);

  static inline void setStaticF__scoresScope(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope value);

  static inline ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope getStaticF__scoresScope();

  /// @brief Method get_leaderboardsModel, addr 0x2302134, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> get_leaderboardsModel();

  /// @brief Method SetData, addr 0x230213c, size 0x9c, virtual true, abstract: false, final false
  inline void SetData(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method RefreshLevelStats, addr 0x2302280, size 0x30, virtual true, abstract: false, final false
  inline void RefreshLevelStats();

  /// @brief Method DidActivate, addr 0x23022b0, size 0x53c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2302880, size 0x120, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy, addr 0x23029a0, size 0x1cc, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ScoreScopeToScoreScopeIndex, addr 0x23027ec, size 0x94, virtual false, abstract: false, final false
  inline int32_t ScoreScopeToScoreScopeIndex(::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scoresScope);

  /// @brief Method ScopeScopeIndexToScoreScope, addr 0x2302b6c, size 0x3c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope ScopeScopeIndexToScoreScope(int32_t scoreScopeIndex);

  /// @brief Method HandleDidPressRefreshButton, addr 0x2302ba8, size 0xc, virtual false, abstract: false, final false
  inline void HandleDidPressRefreshButton();

  /// @brief Method HandleLeaderboardsResultsReturned, addr 0x2302bb4, size 0x26c, virtual false, abstract: false, final false
  inline void
  HandleLeaderboardsResultsReturned(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult result,
                                    ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*> scores,
                                    int32_t playerScoreIndex);

  /// @brief Method HandleScopeSegmentedControlDidSelectCell, addr 0x2302e20, size 0x70, virtual false, abstract: false, final false
  inline void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  /// @brief Method HandlePlatformLeaderboardsModelAllScoresDidUpload, addr 0x2302e90, size 0xc, virtual false, abstract: false, final false
  inline void HandlePlatformLeaderboardsModelAllScoresDidUpload();

  /// @brief Method Refresh, addr 0x23021d8, size 0xa8, virtual false, abstract: false, final false
  inline void Refresh(bool showLoadingIndicator, bool clear);

  /// @brief Method RefreshAsync, addr 0x2302e9c, size 0x104, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RefreshAsync(bool showLoadingIndicator, bool clear);

  /// @brief Method RefreshDelayed, addr 0x2302fa0, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RefreshDelayed(bool showLoadingIndicator, bool clear);

  /// @brief Method ClearContent, addr 0x2303050, size 0xbc, virtual false, abstract: false, final false
  inline void ClearContent();

  static inline ::GlobalNamespace::PlatformLeaderboardViewController* New_ctor();

  /// @brief Method .ctor, addr 0x230310c, size 0x80, virtual false, abstract: false, final false
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
  ::UnityW<::GlobalNamespace::LeaderboardTableView> ____leaderboardTableView;

  /// @brief Field _scopeSegmentedControl, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____scopeSegmentedControl;

  /// @brief Field _loadingControl, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _globalLeaderboardIcon, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____globalLeaderboardIcon;

  /// @brief Field _aroundPlayerLeaderboardIcon, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____aroundPlayerLeaderboardIcon;

  /// @brief Field _friendsLeaderboardIcon, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____friendsLeaderboardIcon;

  /// @brief Field _levelStatsView, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelStatsView> ____levelStatsView;

  /// @brief Field _leaderboardsModel, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> ____leaderboardsModel;

  /// @brief Field _playerDataModel, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _getScoresAsyncRequest, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::HMAsyncRequest* ____getScoresAsyncRequest;

  /// @brief Field _scores, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__LeaderboardTableView__ScoreData*>* ____scores;

  /// @brief Field _playerScorePos, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____playerScorePos;

  /// @brief Field _beatmapKey, offset: 0xd0, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _refreshIsNeeded, offset: 0xe8, size: 0x1, def value: None
  bool ____refreshIsNeeded;

  /// @brief Field _hasScoresData, offset: 0xe9, size: 0x1, def value: None
  bool ____hasScoresData;

  /// @brief Field _scoreScopes, offset: 0xf0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::Array<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>*> ____scoreScopes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformLeaderboardViewController, 0xf8>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____scores) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____playerScorePos) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____beatmapKey) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____refreshIsNeeded) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____hasScoresData) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformLeaderboardViewController, ____scoreScopes) == 0xf0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformLeaderboardViewController*, "", "PlatformLeaderboardViewController");
NEED_NO_BOX(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardViewController___RefreshDelayed_d__32*, "", "PlatformLeaderboardViewController/<RefreshDelayed>d__32");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformLeaderboardViewController___Refresh_d__30, "", "PlatformLeaderboardViewController/<Refresh>d__30");
