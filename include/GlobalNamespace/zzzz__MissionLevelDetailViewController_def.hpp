#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelDetailViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionLevelDetailViewController)
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class ObjectiveListItem;
}
namespace GlobalNamespace {
class ObjectiveListItemsList;
}
namespace GlobalNamespace {
class __MissionLevelDetailViewController____c__DisplayClass14_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelDetailViewController;
}
namespace GlobalNamespace {
class __MissionLevelDetailViewController____c__DisplayClass14_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelDetailViewController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0);
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelDetailViewController::<>c__DisplayClass14_0*
class CORDL_TYPE __MissionLevelDetailViewController____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field missionObjectives, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_missionObjectives,
                      put = __cordl_internal_set_missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives;

  /// @brief Field modifierParamsList, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_modifierParamsList,
                      put = __cordl_internal_set_modifierParamsList))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParamsList;

  static inline ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0* New_ctor();

  /// @brief Method <RefreshContent>b__0, addr 0x26670c0, size 0x1d8, virtual false, abstract: false, final false
  inline void _RefreshContent_b__0(int32_t idx, ::GlobalNamespace::ObjectiveListItem* objectiveListItem);

  /// @brief Method <RefreshContent>b__1, addr 0x2667298, size 0x7c, virtual false, abstract: false, final false
  inline void _RefreshContent_b__1(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __cordl_internal_get_missionObjectives() const;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __cordl_internal_get_missionObjectives();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*& __cordl_internal_get_modifierParamsList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*> const& __cordl_internal_get_modifierParamsList() const;

  constexpr void __cordl_internal_set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  constexpr void __cordl_internal_set_modifierParamsList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value);

  /// @brief Method .ctor, addr 0x2667090, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelDetailViewController____c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelDetailViewController____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelDetailViewController____c__DisplayClass14_0(__MissionLevelDetailViewController____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelDetailViewController____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelDetailViewController____c__DisplayClass14_0(__MissionLevelDetailViewController____c__DisplayClass14_0 const&) = delete;

  /// @brief Field missionObjectives, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ___missionObjectives;

  /// @brief Field modifierParamsList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* ___modifierParamsList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0, ___missionObjectives) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0, ___modifierParamsList) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionLevelDetailViewController
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MissionLevelDetailViewController*
class CORDL_TYPE MissionLevelDetailViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass14_0 = ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0;

  /// @brief Field _gameplayModifierInfoListItemsList, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifierInfoListItemsList,
                      put = __cordl_internal_set__gameplayModifierInfoListItemsList))::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> _gameplayModifierInfoListItemsList;

  /// @brief Field _gameplayModifiersModel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel,
                      put = __cordl_internal_set__gameplayModifiersModel))::UnityW<::GlobalNamespace::GameplayModifiersModelSO> _gameplayModifiersModel;

  /// @brief Field _levelBar, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar))::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _missionNode, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__missionNode, put = __cordl_internal_set__missionNode))::UnityW<::GlobalNamespace::MissionNode> _missionNode;

  /// @brief Field _modifiersPanelGO, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__modifiersPanelGO, put = __cordl_internal_set__modifiersPanelGO))::UnityW<::UnityEngine::GameObject> _modifiersPanelGO;

  /// @brief Field _objectiveListItems, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__objectiveListItems, put = __cordl_internal_set__objectiveListItems))::UnityW<::GlobalNamespace::ObjectiveListItemsList> _objectiveListItems;

  /// @brief Field _playButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__playButton, put = __cordl_internal_set__playButton))::UnityW<::UnityEngine::UI::Button> _playButton;

  /// @brief Field didPressPlayButtonEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressPlayButtonEvent,
                      put = __cordl_internal_set_didPressPlayButtonEvent))::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* didPressPlayButtonEvent;

  __declspec(property(get = get_missionNode))::UnityW<::GlobalNamespace::MissionNode> missionNode;

  /// @brief Method DidActivate, addr 0x2666fe4, size 0xac, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::MissionLevelDetailViewController* New_ctor();

  /// @brief Method PlayButtonPressed, addr 0x2667098, size 0x20, virtual false, abstract: false, final false
  inline void PlayButtonPressed();

  /// @brief Method RefreshContent, addr 0x2666dbc, size 0x228, virtual false, abstract: false, final false
  inline void RefreshContent();

  /// @brief Method Setup, addr 0x2666d90, size 0x2c, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::MissionNode* missionNode);

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> const& __cordl_internal_get__gameplayModifierInfoListItemsList() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList>& __cordl_internal_get__gameplayModifierInfoListItemsList();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::GlobalNamespace::MissionNode> const& __cordl_internal_get__missionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNode>& __cordl_internal_get__missionNode();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__modifiersPanelGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__modifiersPanelGO();

  constexpr ::UnityW<::GlobalNamespace::ObjectiveListItemsList> const& __cordl_internal_get__objectiveListItems() const;

  constexpr ::UnityW<::GlobalNamespace::ObjectiveListItemsList>& __cordl_internal_get__objectiveListItems();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__playButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__playButton();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*& __cordl_internal_get_didPressPlayButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*> const& __cordl_internal_get_didPressPlayButtonEvent() const;

  constexpr void __cordl_internal_set__gameplayModifierInfoListItemsList(::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> value);

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__missionNode(::UnityW<::GlobalNamespace::MissionNode> value);

  constexpr void __cordl_internal_set__modifiersPanelGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__objectiveListItems(::UnityW<::GlobalNamespace::ObjectiveListItemsList> value);

  constexpr void __cordl_internal_set__playButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* value);

  /// @brief Method .ctor, addr 0x26670b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressPlayButtonEvent, addr 0x2666c28, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* value);

  /// @brief Method get_missionNode, addr 0x2666d88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNode> get_missionNode();

  /// @brief Method remove_didPressPlayButtonEvent, addr 0x2666cd8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelDetailViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelDetailViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelDetailViewController(MissionLevelDetailViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelDetailViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelDetailViewController(MissionLevelDetailViewController const&) = delete;

  /// @brief Field _gameplayModifiersModel, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief Field _playButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____playButton;

  /// @brief Field _levelBar, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _objectiveListItems, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObjectiveListItemsList> ____objectiveListItems;

  /// @brief Field _gameplayModifierInfoListItemsList, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> ____gameplayModifierInfoListItemsList;

  /// @brief Field _modifiersPanelGO, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____modifiersPanelGO;

  /// @brief Field didPressPlayButtonEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* ___didPressPlayButtonEvent;

  /// @brief Field _missionNode, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNode> ____missionNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelDetailViewController, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelDetailViewController, ____gameplayModifiersModel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelDetailViewController, ____playButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelDetailViewController, ____levelBar) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelDetailViewController, ____objectiveListItems) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelDetailViewController, ____gameplayModifierInfoListItemsList) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelDetailViewController, ____modifiersPanelGO) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelDetailViewController, ___didPressPlayButtonEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelDetailViewController, ____missionNode) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelDetailViewController*, "", "MissionLevelDetailViewController");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*, "", "MissionLevelDetailViewController/<>c__DisplayClass14_0");
