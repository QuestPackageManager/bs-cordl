#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalLeaderboardViewController)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class LocalLeaderboardTableView;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel__LeaderboardType;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class NoTransitionsButton;
}
namespace HMUI {
class SegmentedControl;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
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
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardViewController;
}
namespace GlobalNamespace {
struct __LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardViewController);
MARK_VAL_T(::GlobalNamespace::__LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24);
// Type: ::<ClearLeaderboardsAsync>d__24
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LocalLeaderboardViewController::<ClearLeaderboardsAsync>d__24
struct CORDL_TYPE __LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x264ce0c, size 0x288, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x264d094, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LocalLeaderboardViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                            ::UnityW<::GlobalNamespace::LocalLeaderboardViewController> __4__this,
                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalLeaderboardViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LocalLeaderboardViewController
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 218, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalLeaderboardViewController*
class CORDL_TYPE LocalLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
public:
  // Declarations
  using _ClearLeaderboardsAsync_d__24 = ::GlobalNamespace::__LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24;

  /// @brief Field _allTimeLeaderboardIcon, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__allTimeLeaderboardIcon, put = __cordl_internal_set__allTimeLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _allTimeLeaderboardIcon;

  /// @brief Field _beatmapKey, offset 0xc0, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey, put = __cordl_internal_set__beatmapKey))::GlobalNamespace::BeatmapKey _beatmapKey;

  /// @brief Field _clearLeaderboardIcon, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__clearLeaderboardIcon, put = __cordl_internal_set__clearLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _clearLeaderboardIcon;

  /// @brief Field _clearLeaderboardsButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__clearLeaderboardsButton, put = __cordl_internal_set__clearLeaderboardsButton))::UnityW<::HMUI::NoTransitionsButton> _clearLeaderboardsButton;

  /// @brief Field _clearLeaderboardsWrapper, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__clearLeaderboardsWrapper, put = __cordl_internal_set__clearLeaderboardsWrapper))::UnityW<::UnityEngine::GameObject> _clearLeaderboardsWrapper;

  /// @brief Field _enableClear, offset 0xd9, size 0x1
  __declspec(property(get = __cordl_internal_get__enableClear, put = __cordl_internal_set__enableClear)) bool _enableClear;

  /// @brief Field _leaderboardTableView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardTableView, put = __cordl_internal_set__leaderboardTableView))::UnityW<::GlobalNamespace::LocalLeaderboardTableView> _leaderboardTableView;

  /// @brief Field _leaderboardType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__leaderboardType, put = setStaticF__leaderboardType))::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType _leaderboardType;

  /// @brief Field _localLeaderboardsModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__localLeaderboardsModel, put = __cordl_internal_set__localLeaderboardsModel))::GlobalNamespace::LocalLeaderboardsModel* _localLeaderboardsModel;

  /// @brief Field _maxNumberOfCells, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__maxNumberOfCells, put = __cordl_internal_set__maxNumberOfCells)) int32_t _maxNumberOfCells;

  /// @brief Field _playerDataModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _refreshIsNeeded, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshIsNeeded, put = __cordl_internal_set__refreshIsNeeded)) bool _refreshIsNeeded;

  /// @brief Field _scopeSegmentedControl, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__scopeSegmentedControl, put = __cordl_internal_set__scopeSegmentedControl))::UnityW<::HMUI::IconSegmentedControl> _scopeSegmentedControl;

  /// @brief Field _todayLeaderboardIcon, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__todayLeaderboardIcon, put = __cordl_internal_set__todayLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _todayLeaderboardIcon;

  __declspec(property(get = get_leaderboardsModel))::GlobalNamespace::LocalLeaderboardsModel* leaderboardsModel;

  /// @brief Method ClearLeaderboardsAsync, addr 0x264cb88, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ClearLeaderboardsAsync();

  /// @brief Method DidActivate, addr 0x264c400, size 0x1e0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x264c9e4, size 0x10c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleNewScoreWasAddedToLeaderboard, addr 0x264ccc8, size 0xa8, virtual false, abstract: false, final false
  inline void HandleNewScoreWasAddedToLeaderboard(::StringW leaderboardID, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method HandleScopeSegmentedControlDidSelectCell, addr 0x264c8b4, size 0x130, virtual false, abstract: false, final false
  inline void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  static inline ::GlobalNamespace::LocalLeaderboardViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x264caf0, size 0x98, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x264c28c, size 0x84, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Refresh, addr 0x264c39c, size 0x64, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method RefreshScopeSegmentedControl, addr 0x264c5e0, size 0x2d4, virtual false, abstract: false, final false
  inline void RefreshScopeSegmentedControl();

  /// @brief Method SetContent, addr 0x264cc50, size 0x78, virtual false, abstract: false, final false
  inline void SetContent(::StringW leaderboardID, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method SetData, addr 0x264c31c, size 0x80, virtual true, abstract: false, final false
  inline void SetData(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method Setup, addr 0x264c310, size 0xc, virtual false, abstract: false, final false
  inline void Setup(bool enableClear);

  /// @brief Method <DidActivate>b__19_0, addr 0x264cd80, size 0x8c, virtual false, abstract: false, final false
  inline void _DidActivate_b__19_0();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__allTimeLeaderboardIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__allTimeLeaderboardIcon();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__clearLeaderboardIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__clearLeaderboardIcon();

  constexpr ::UnityW<::HMUI::NoTransitionsButton> const& __cordl_internal_get__clearLeaderboardsButton() const;

  constexpr ::UnityW<::HMUI::NoTransitionsButton>& __cordl_internal_get__clearLeaderboardsButton();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clearLeaderboardsWrapper() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clearLeaderboardsWrapper();

  constexpr bool const& __cordl_internal_get__enableClear() const;

  constexpr bool& __cordl_internal_get__enableClear();

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardTableView> const& __cordl_internal_get__leaderboardTableView() const;

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardTableView>& __cordl_internal_get__leaderboardTableView();

  constexpr ::GlobalNamespace::LocalLeaderboardsModel*& __cordl_internal_get__localLeaderboardsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardsModel*> const& __cordl_internal_get__localLeaderboardsModel() const;

  constexpr int32_t const& __cordl_internal_get__maxNumberOfCells() const;

  constexpr int32_t& __cordl_internal_get__maxNumberOfCells();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr bool const& __cordl_internal_get__refreshIsNeeded() const;

  constexpr bool& __cordl_internal_get__refreshIsNeeded();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__scopeSegmentedControl() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__scopeSegmentedControl();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__todayLeaderboardIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__todayLeaderboardIcon();

  constexpr void __cordl_internal_set__allTimeLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__clearLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__clearLeaderboardsButton(::UnityW<::HMUI::NoTransitionsButton> value);

  constexpr void __cordl_internal_set__clearLeaderboardsWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__enableClear(bool value);

  constexpr void __cordl_internal_set__leaderboardTableView(::UnityW<::GlobalNamespace::LocalLeaderboardTableView> value);

  constexpr void __cordl_internal_set__localLeaderboardsModel(::GlobalNamespace::LocalLeaderboardsModel* value);

  constexpr void __cordl_internal_set__maxNumberOfCells(int32_t value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__refreshIsNeeded(bool value);

  constexpr void __cordl_internal_set__scopeSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr void __cordl_internal_set__todayLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x264cd70, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType getStaticF__leaderboardType();

  /// @brief Method get_leaderboardsModel, addr 0x264c284, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::LocalLeaderboardsModel* get_leaderboardsModel();

  static inline void setStaticF__leaderboardType(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardViewController(LocalLeaderboardViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardViewController(LocalLeaderboardViewController const&) = delete;

  /// @brief Field _maxNumberOfCells, offset: 0x70, size: 0x4, def value: None
  int32_t ____maxNumberOfCells;

  /// @brief Field _leaderboardTableView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalLeaderboardTableView> ____leaderboardTableView;

  /// @brief Field _clearLeaderboardsWrapper, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____clearLeaderboardsWrapper;

  /// @brief Field _clearLeaderboardsButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::HMUI::NoTransitionsButton> ____clearLeaderboardsButton;

  /// @brief Field _scopeSegmentedControl, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____scopeSegmentedControl;

  /// @brief Field _allTimeLeaderboardIcon, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____allTimeLeaderboardIcon;

  /// @brief Field _todayLeaderboardIcon, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____todayLeaderboardIcon;

  /// @brief Field _clearLeaderboardIcon, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____clearLeaderboardIcon;

  /// @brief Field _playerDataModel, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _localLeaderboardsModel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardsModel* ____localLeaderboardsModel;

  /// @brief Field _beatmapKey, offset: 0xc0, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey;

  /// @brief Field _refreshIsNeeded, offset: 0xd8, size: 0x1, def value: None
  bool ____refreshIsNeeded;

  /// @brief Field _enableClear, offset: 0xd9, size: 0x1, def value: None
  bool ____enableClear;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardViewController, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____maxNumberOfCells) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____leaderboardTableView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____clearLeaderboardsWrapper) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____clearLeaderboardsButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____scopeSegmentedControl) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____allTimeLeaderboardIcon) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____todayLeaderboardIcon) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____clearLeaderboardIcon) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____playerDataModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____localLeaderboardsModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____beatmapKey) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____refreshIsNeeded) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____enableClear) == 0xd9, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardViewController*, "", "LocalLeaderboardViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LocalLeaderboardViewController___ClearLeaderboardsAsync_d__24, "", "LocalLeaderboardViewController/<ClearLeaderboardsAsync>d__24");
