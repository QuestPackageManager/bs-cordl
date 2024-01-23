#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalLeaderboardViewController)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class ISaveData;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardViewController);
// Type: ::LocalLeaderboardViewController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 210, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(4214)), TypeDefinitionIndex(TypeDefinitionIndex(5650))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5689))
// CS Name: ::LocalLeaderboardViewController*
class CORDL_TYPE LocalLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
public:
  // Declarations
  /// @brief Field _maxNumberOfCells, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__maxNumberOfCells, put = __cordl_internal_set__maxNumberOfCells)) int32_t _maxNumberOfCells;

  /// @brief Field _localLeaderboardsModel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__localLeaderboardsModel,
                      put = __cordl_internal_set__localLeaderboardsModel))::UnityW<::GlobalNamespace::LocalLeaderboardsModel> _localLeaderboardsModel;

  /// @brief Field _leaderboardTableView, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__leaderboardTableView, put = __cordl_internal_set__leaderboardTableView))::UnityW<::GlobalNamespace::LocalLeaderboardTableView> _leaderboardTableView;

  /// @brief Field _clearLeaderboardsWrapper, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__clearLeaderboardsWrapper, put = __cordl_internal_set__clearLeaderboardsWrapper))::UnityW<::UnityEngine::GameObject> _clearLeaderboardsWrapper;

  /// @brief Field _clearLeaderboardsButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__clearLeaderboardsButton, put = __cordl_internal_set__clearLeaderboardsButton))::UnityW<::HMUI::NoTransitionsButton> _clearLeaderboardsButton;

  /// @brief Field _scopeSegmentedControl, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__scopeSegmentedControl, put = __cordl_internal_set__scopeSegmentedControl))::UnityW<::HMUI::IconSegmentedControl> _scopeSegmentedControl;

  /// @brief Field _allTimeLeaderboardIcon, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__allTimeLeaderboardIcon, put = __cordl_internal_set__allTimeLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _allTimeLeaderboardIcon;

  /// @brief Field _todayLeaderboardIcon, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__todayLeaderboardIcon, put = __cordl_internal_set__todayLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _todayLeaderboardIcon;

  /// @brief Field _clearLeaderboardIcon, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__clearLeaderboardIcon, put = __cordl_internal_set__clearLeaderboardIcon))::UnityW<::UnityEngine::Sprite> _clearLeaderboardIcon;

  /// @brief Field _playerDataModel, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _saveData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__saveData, put = __cordl_internal_set__saveData))::GlobalNamespace::ISaveData* _saveData;

  /// @brief Field _difficultyBeatmap, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmap, put = __cordl_internal_set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  /// @brief Field _refreshIsNeeded, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshIsNeeded, put = __cordl_internal_set__refreshIsNeeded)) bool _refreshIsNeeded;

  /// @brief Field _enableClear, offset 0xd1, size 0x1
  __declspec(property(get = __cordl_internal_get__enableClear, put = __cordl_internal_set__enableClear)) bool _enableClear;

  /// @brief Field _leaderboardType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__leaderboardType, put = setStaticF__leaderboardType))::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType _leaderboardType;

  __declspec(property(get = get_leaderboardsModel))::UnityW<::GlobalNamespace::LocalLeaderboardsModel> leaderboardsModel;

  constexpr int32_t& __cordl_internal_get__maxNumberOfCells();

  constexpr int32_t const& __cordl_internal_get__maxNumberOfCells() const;

  constexpr void __cordl_internal_set__maxNumberOfCells(int32_t value);

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsModel>& __cordl_internal_get__localLeaderboardsModel();

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsModel> const& __cordl_internal_get__localLeaderboardsModel() const;

  constexpr void __cordl_internal_set__localLeaderboardsModel(::UnityW<::GlobalNamespace::LocalLeaderboardsModel> value);

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardTableView>& __cordl_internal_get__leaderboardTableView();

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardTableView> const& __cordl_internal_get__leaderboardTableView() const;

  constexpr void __cordl_internal_set__leaderboardTableView(::UnityW<::GlobalNamespace::LocalLeaderboardTableView> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__clearLeaderboardsWrapper();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__clearLeaderboardsWrapper() const;

  constexpr void __cordl_internal_set__clearLeaderboardsWrapper(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::HMUI::NoTransitionsButton>& __cordl_internal_get__clearLeaderboardsButton();

  constexpr ::UnityW<::HMUI::NoTransitionsButton> const& __cordl_internal_get__clearLeaderboardsButton() const;

  constexpr void __cordl_internal_set__clearLeaderboardsButton(::UnityW<::HMUI::NoTransitionsButton> value);

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__scopeSegmentedControl();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__scopeSegmentedControl() const;

  constexpr void __cordl_internal_set__scopeSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__allTimeLeaderboardIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__allTimeLeaderboardIcon() const;

  constexpr void __cordl_internal_set__allTimeLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__todayLeaderboardIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__todayLeaderboardIcon() const;

  constexpr void __cordl_internal_set__todayLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__clearLeaderboardIcon();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__clearLeaderboardIcon() const;

  constexpr void __cordl_internal_set__clearLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::GlobalNamespace::ISaveData*& __cordl_internal_get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __cordl_internal_get__saveData() const;

  constexpr void __cordl_internal_set__saveData(::GlobalNamespace::ISaveData* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __cordl_internal_get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __cordl_internal_get__difficultyBeatmap() const;

  constexpr void __cordl_internal_set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr bool& __cordl_internal_get__refreshIsNeeded();

  constexpr bool const& __cordl_internal_get__refreshIsNeeded() const;

  constexpr void __cordl_internal_set__refreshIsNeeded(bool value);

  constexpr bool& __cordl_internal_get__enableClear();

  constexpr bool const& __cordl_internal_get__enableClear() const;

  constexpr void __cordl_internal_set__enableClear(bool value);

  static inline void setStaticF__leaderboardType(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType value);

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType getStaticF__leaderboardType();

  /// @brief Method get_leaderboardsModel, addr 0x22c8058, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::LocalLeaderboardsModel> get_leaderboardsModel();

  /// @brief Method OnEnable, addr 0x22c8060, size 0x24, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x22c8084, size 0x24, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method Setup, addr 0x22c80a8, size 0xc, virtual false, abstract: false, final false
  inline void Setup(bool enableClear);

  /// @brief Method SetData, addr 0x22c80b4, size 0x2c, virtual true, abstract: false, final false
  inline void SetData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method DidActivate, addr 0x22c8144, size 0x1e0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22c8728, size 0x10c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy, addr 0x22c8834, size 0x98, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshScopeSegmentedControl, addr 0x22c8324, size 0x2d4, virtual false, abstract: false, final false
  inline void RefreshScopeSegmentedControl();

  /// @brief Method HandleScopeSegmentedControlDidSelectCell, addr 0x22c85f8, size 0x130, virtual false, abstract: false, final false
  inline void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  /// @brief Method ClearLeaderboards, addr 0x22c88cc, size 0x60, virtual false, abstract: false, final false
  inline void ClearLeaderboards();

  /// @brief Method SetContent, addr 0x22c892c, size 0x78, virtual false, abstract: false, final false
  inline void SetContent(::StringW leaderboardID, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method HandleNewScoreWasAddedToLeaderboard, addr 0x22c89a4, size 0xa8, virtual false, abstract: false, final false
  inline void HandleNewScoreWasAddedToLeaderboard(::StringW leaderboardID, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method Refresh, addr 0x22c80e0, size 0x64, virtual false, abstract: false, final false
  inline void Refresh();

  static inline ::GlobalNamespace::LocalLeaderboardViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22c8a4c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__21_0, addr 0x22c8a5c, size 0x60, virtual false, abstract: false, final false
  inline void _DidActivate_b__21_0();

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardViewController(LocalLeaderboardViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardViewController(LocalLeaderboardViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardViewController();

public:
  /// @brief Field _maxNumberOfCells, offset: 0x70, size: 0x4, def value: None
  int32_t ____maxNumberOfCells;

  /// @brief Field _localLeaderboardsModel, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalLeaderboardsModel> ____localLeaderboardsModel;

  /// @brief Field _leaderboardTableView, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalLeaderboardTableView> ____leaderboardTableView;

  /// @brief Field _clearLeaderboardsWrapper, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____clearLeaderboardsWrapper;

  /// @brief Field _clearLeaderboardsButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::NoTransitionsButton> ____clearLeaderboardsButton;

  /// @brief Field _scopeSegmentedControl, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____scopeSegmentedControl;

  /// @brief Field _allTimeLeaderboardIcon, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____allTimeLeaderboardIcon;

  /// @brief Field _todayLeaderboardIcon, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____todayLeaderboardIcon;

  /// @brief Field _clearLeaderboardIcon, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____clearLeaderboardIcon;

  /// @brief Field _playerDataModel, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _saveData, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  /// @brief Field _difficultyBeatmap, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::IDifficultyBeatmap* ____difficultyBeatmap;

  /// @brief Field _refreshIsNeeded, offset: 0xd0, size: 0x1, def value: None
  bool ____refreshIsNeeded;

  /// @brief Field _enableClear, offset: 0xd1, size: 0x1, def value: None
  bool ____enableClear;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardViewController, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____maxNumberOfCells) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____localLeaderboardsModel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____leaderboardTableView) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____clearLeaderboardsWrapper) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____clearLeaderboardsButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____scopeSegmentedControl) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____allTimeLeaderboardIcon) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____todayLeaderboardIcon) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____clearLeaderboardIcon) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____playerDataModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____saveData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____difficultyBeatmap) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____refreshIsNeeded) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardViewController, ____enableClear) == 0xd1, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardViewController*, "", "LocalLeaderboardViewController");
