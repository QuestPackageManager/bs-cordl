#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalLeaderboardViewController)
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class LocalLeaderboardsModel;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
struct __LocalLeaderboardsModel__LeaderboardType;
}
namespace GlobalNamespace {
class LocalLeaderboardTableView;
}
namespace HMUI {
class NoTransitionsButton;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4214)), TypeDefinitionIndex(TypeDefinitionIndex(5650))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5689))
// CS Name: ::LocalLeaderboardViewController*
class CORDL_TYPE LocalLeaderboardViewController : public ::GlobalNamespace::LeaderboardViewController {
public:
  // Declarations
  /// @brief Field _maxNumberOfCells, offset 0x70, size 0x4
  __declspec(property(get = __get__maxNumberOfCells, put = __set__maxNumberOfCells)) int32_t _maxNumberOfCells;

  /// @brief Field _localLeaderboardsModel, offset 0x78, size 0x8
  __declspec(property(get = __get__localLeaderboardsModel, put = __set__localLeaderboardsModel))::GlobalNamespace::LocalLeaderboardsModel* _localLeaderboardsModel;

  /// @brief Field _leaderboardTableView, offset 0x80, size 0x8
  __declspec(property(get = __get__leaderboardTableView, put = __set__leaderboardTableView))::GlobalNamespace::LocalLeaderboardTableView* _leaderboardTableView;

  /// @brief Field _clearLeaderboardsWrapper, offset 0x88, size 0x8
  __declspec(property(get = __get__clearLeaderboardsWrapper, put = __set__clearLeaderboardsWrapper))::UnityEngine::GameObject* _clearLeaderboardsWrapper;

  /// @brief Field _clearLeaderboardsButton, offset 0x90, size 0x8
  __declspec(property(get = __get__clearLeaderboardsButton, put = __set__clearLeaderboardsButton))::HMUI::NoTransitionsButton* _clearLeaderboardsButton;

  /// @brief Field _scopeSegmentedControl, offset 0x98, size 0x8
  __declspec(property(get = __get__scopeSegmentedControl, put = __set__scopeSegmentedControl))::HMUI::IconSegmentedControl* _scopeSegmentedControl;

  /// @brief Field _allTimeLeaderboardIcon, offset 0xa0, size 0x8
  __declspec(property(get = __get__allTimeLeaderboardIcon, put = __set__allTimeLeaderboardIcon))::UnityEngine::Sprite* _allTimeLeaderboardIcon;

  /// @brief Field _todayLeaderboardIcon, offset 0xa8, size 0x8
  __declspec(property(get = __get__todayLeaderboardIcon, put = __set__todayLeaderboardIcon))::UnityEngine::Sprite* _todayLeaderboardIcon;

  /// @brief Field _clearLeaderboardIcon, offset 0xb0, size 0x8
  __declspec(property(get = __get__clearLeaderboardIcon, put = __set__clearLeaderboardIcon))::UnityEngine::Sprite* _clearLeaderboardIcon;

  /// @brief Field _playerDataModel, offset 0xb8, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _saveData, offset 0xc0, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  /// @brief Field _difficultyBeatmap, offset 0xc8, size 0x8
  __declspec(property(get = __get__difficultyBeatmap, put = __set__difficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* _difficultyBeatmap;

  /// @brief Field _refreshIsNeeded, offset 0xd0, size 0x1
  __declspec(property(get = __get__refreshIsNeeded, put = __set__refreshIsNeeded)) bool _refreshIsNeeded;

  /// @brief Field _enableClear, offset 0xd1, size 0x1
  __declspec(property(get = __get__enableClear, put = __set__enableClear)) bool _enableClear;

  /// @brief Field _leaderboardType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__leaderboardType, put = setStaticF__leaderboardType))::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType _leaderboardType;

  __declspec(property(get = get_leaderboardsModel))::GlobalNamespace::LocalLeaderboardsModel* leaderboardsModel;

  constexpr int32_t& __get__maxNumberOfCells();

  constexpr int32_t const& __get__maxNumberOfCells() const;

  constexpr void __set__maxNumberOfCells(int32_t value);

  constexpr ::GlobalNamespace::LocalLeaderboardsModel*& __get__localLeaderboardsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardsModel*> const& __get__localLeaderboardsModel() const;

  constexpr void __set__localLeaderboardsModel(::GlobalNamespace::LocalLeaderboardsModel* value);

  constexpr ::GlobalNamespace::LocalLeaderboardTableView*& __get__leaderboardTableView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardTableView*> const& __get__leaderboardTableView() const;

  constexpr void __set__leaderboardTableView(::GlobalNamespace::LocalLeaderboardTableView* value);

  constexpr ::UnityEngine::GameObject*& __get__clearLeaderboardsWrapper();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__clearLeaderboardsWrapper() const;

  constexpr void __set__clearLeaderboardsWrapper(::UnityEngine::GameObject* value);

  constexpr ::HMUI::NoTransitionsButton*& __get__clearLeaderboardsButton();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::NoTransitionsButton*> const& __get__clearLeaderboardsButton() const;

  constexpr void __set__clearLeaderboardsButton(::HMUI::NoTransitionsButton* value);

  constexpr ::HMUI::IconSegmentedControl*& __get__scopeSegmentedControl();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControl*> const& __get__scopeSegmentedControl() const;

  constexpr void __set__scopeSegmentedControl(::HMUI::IconSegmentedControl* value);

  constexpr ::UnityEngine::Sprite*& __get__allTimeLeaderboardIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__allTimeLeaderboardIcon() const;

  constexpr void __set__allTimeLeaderboardIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__todayLeaderboardIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__todayLeaderboardIcon() const;

  constexpr void __set__todayLeaderboardIcon(::UnityEngine::Sprite* value);

  constexpr ::UnityEngine::Sprite*& __get__clearLeaderboardIcon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get__clearLeaderboardIcon() const;

  constexpr void __set__clearLeaderboardIcon(::UnityEngine::Sprite* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  constexpr ::GlobalNamespace::IDifficultyBeatmap*& __get__difficultyBeatmap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> const& __get__difficultyBeatmap() const;

  constexpr void __set__difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap* value);

  constexpr bool& __get__refreshIsNeeded();

  constexpr bool const& __get__refreshIsNeeded() const;

  constexpr void __set__refreshIsNeeded(bool value);

  constexpr bool& __get__enableClear();

  constexpr bool const& __get__enableClear() const;

  constexpr void __set__enableClear(bool value);

  static inline void setStaticF__leaderboardType(::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType value);

  static inline ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType getStaticF__leaderboardType();

  /// @brief Method get_leaderboardsModel addr 0x22c8058 size 0x8 virtual false final false
  inline ::GlobalNamespace::LocalLeaderboardsModel* get_leaderboardsModel();

  /// @brief Method OnEnable addr 0x22c8060 size 0x24 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x22c8084 size 0x24 virtual false final false
  inline void OnDisable();

  /// @brief Method Setup addr 0x22c80a8 size 0xc virtual false final false
  inline void Setup(bool enableClear);

  /// @brief Method SetData addr 0x22c80b4 size 0x2c virtual true final false
  inline void SetData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method DidActivate addr 0x22c8144 size 0x1e0 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x22c8728 size 0x10c virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy addr 0x22c8834 size 0x98 virtual true final false
  inline void OnDestroy();

  /// @brief Method RefreshScopeSegmentedControl addr 0x22c8324 size 0x2d4 virtual false final false
  inline void RefreshScopeSegmentedControl();

  /// @brief Method HandleScopeSegmentedControlDidSelectCell addr 0x22c85f8 size 0x130 virtual false final false
  inline void HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  /// @brief Method ClearLeaderboards addr 0x22c88cc size 0x60 virtual false final false
  inline void ClearLeaderboards();

  /// @brief Method SetContent addr 0x22c892c size 0x78 virtual false final false
  inline void SetContent(::StringW leaderboardID, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method HandleNewScoreWasAddedToLeaderboard addr 0x22c89a4 size 0xa8 virtual false final false
  inline void HandleNewScoreWasAddedToLeaderboard(::StringW leaderboardID, ::GlobalNamespace::__LocalLeaderboardsModel__LeaderboardType leaderboardType);

  /// @brief Method Refresh addr 0x22c80e0 size 0x64 virtual false final false
  inline void Refresh();

  static inline ::GlobalNamespace::LocalLeaderboardViewController* New_ctor();

  /// @brief Method .ctor addr 0x22c8a4c size 0x10 virtual false final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__21_0 addr 0x22c8a5c size 0x60 virtual false final false
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
  ::GlobalNamespace::LocalLeaderboardsModel* ____localLeaderboardsModel;

  /// @brief Field _leaderboardTableView, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::LocalLeaderboardTableView* ____leaderboardTableView;

  /// @brief Field _clearLeaderboardsWrapper, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____clearLeaderboardsWrapper;

  /// @brief Field _clearLeaderboardsButton, offset: 0x90, size: 0x8, def value: None
  ::HMUI::NoTransitionsButton* ____clearLeaderboardsButton;

  /// @brief Field _scopeSegmentedControl, offset: 0x98, size: 0x8, def value: None
  ::HMUI::IconSegmentedControl* ____scopeSegmentedControl;

  /// @brief Field _allTimeLeaderboardIcon, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____allTimeLeaderboardIcon;

  /// @brief Field _todayLeaderboardIcon, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____todayLeaderboardIcon;

  /// @brief Field _clearLeaderboardIcon, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Sprite* ____clearLeaderboardIcon;

  /// @brief Field _playerDataModel, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardViewController*, "", "LocalLeaderboardViewController");
