#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionLevelDetailViewController)
namespace GlobalNamespace {
class MissionNode;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class __MissionLevelDetailViewController____c__DisplayClass14_0;
}
namespace GlobalNamespace {
class ObjectiveListItemsList;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class ObjectiveListItem;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5696))
// CS Name: ::MissionLevelDetailViewController::<>c__DisplayClass14_0*
class CORDL_TYPE __MissionLevelDetailViewController____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field missionObjectives, offset 0x10, size 0x8
  __declspec(property(get = __get_missionObjectives, put = __set_missionObjectives))::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives;

  /// @brief Field modifierParamsList, offset 0x18, size 0x8
  __declspec(property(get = __get_modifierParamsList, put = __set_modifierParamsList))::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList;

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>& __get_missionObjectives();

  constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const& __get_missionObjectives() const;

  constexpr void __set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& __get_modifierParamsList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> const& __get_modifierParamsList() const;

  constexpr void __set_modifierParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* value);

  static inline ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0* New_ctor();

  /// @brief Method .ctor addr 0x22ca080 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <RefreshContent>b__0 addr 0x22ca0b0 size 0x1f0 virtual false final false
  inline void _RefreshContent_b__0(int32_t idx, ::GlobalNamespace::ObjectiveListItem* objectiveListItem);

  /// @brief Method <RefreshContent>b__1 addr 0x22ca2a0 size 0x7c virtual false final false
  inline void _RefreshContent_b__1(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelDetailViewController____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelDetailViewController____c__DisplayClass14_0(__MissionLevelDetailViewController____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelDetailViewController____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelDetailViewController____c__DisplayClass14_0(__MissionLevelDetailViewController____c__DisplayClass14_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelDetailViewController____c__DisplayClass14_0();

public:
  /// @brief Field missionObjectives, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> ___missionObjectives;

  /// @brief Field modifierParamsList, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* ___modifierParamsList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionLevelDetailViewController
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5697))
// CS Name: ::MissionLevelDetailViewController*
class CORDL_TYPE MissionLevelDetailViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass14_0 = ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0;

  /// @brief Field _gameplayModifiersModel, offset 0x70, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  /// @brief Field _playButton, offset 0x78, size 0x8
  __declspec(property(get = __get__playButton, put = __set__playButton))::UnityEngine::UI::Button* _playButton;

  /// @brief Field _levelBar, offset 0x80, size 0x8
  __declspec(property(get = __get__levelBar, put = __set__levelBar))::GlobalNamespace::LevelBar* _levelBar;

  /// @brief Field _objectiveListItems, offset 0x88, size 0x8
  __declspec(property(get = __get__objectiveListItems, put = __set__objectiveListItems))::GlobalNamespace::ObjectiveListItemsList* _objectiveListItems;

  /// @brief Field _gameplayModifierInfoListItemsList, offset 0x90, size 0x8
  __declspec(property(get = __get__gameplayModifierInfoListItemsList,
                      put = __set__gameplayModifierInfoListItemsList))::GlobalNamespace::GameplayModifierInfoListItemsList* _gameplayModifierInfoListItemsList;

  /// @brief Field _modifiersPanelGO, offset 0x98, size 0x8
  __declspec(property(get = __get__modifiersPanelGO, put = __set__modifiersPanelGO))::UnityEngine::GameObject* _modifiersPanelGO;

  /// @brief Field didPressPlayButtonEvent, offset 0xa0, size 0x8
  __declspec(property(get = __get_didPressPlayButtonEvent, put = __set_didPressPlayButtonEvent))::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* didPressPlayButtonEvent;

  /// @brief Field _missionNode, offset 0xa8, size 0x8
  __declspec(property(get = __get__missionNode, put = __set__missionNode))::GlobalNamespace::MissionNode* _missionNode;

  __declspec(property(get = get_missionNode))::GlobalNamespace::MissionNode* missionNode;

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::UnityEngine::UI::Button*& __get__playButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__playButton() const;

  constexpr void __set__playButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::LevelBar*& __get__levelBar();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& __get__levelBar() const;

  constexpr void __set__levelBar(::GlobalNamespace::LevelBar* value);

  constexpr ::GlobalNamespace::ObjectiveListItemsList*& __get__objectiveListItems();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObjectiveListItemsList*> const& __get__objectiveListItems() const;

  constexpr void __set__objectiveListItems(::GlobalNamespace::ObjectiveListItemsList* value);

  constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList*& __get__gameplayModifierInfoListItemsList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> const& __get__gameplayModifierInfoListItemsList() const;

  constexpr void __set__gameplayModifierInfoListItemsList(::GlobalNamespace::GameplayModifierInfoListItemsList* value);

  constexpr ::UnityEngine::GameObject*& __get__modifiersPanelGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__modifiersPanelGO() const;

  constexpr void __set__modifiersPanelGO(::UnityEngine::GameObject* value);

  constexpr ::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*& __get_didPressPlayButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*> const& __get_didPressPlayButtonEvent() const;

  constexpr void __set_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* value);

  constexpr ::GlobalNamespace::MissionNode*& __get__missionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& __get__missionNode() const;

  constexpr void __set__missionNode(::GlobalNamespace::MissionNode* value);

  /// @brief Method add_didPressPlayButtonEvent addr 0x22c9c54 size 0xb0 virtual false final false
  inline void add_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* value);

  /// @brief Method remove_didPressPlayButtonEvent addr 0x22c9d04 size 0xb0 virtual false final false
  inline void remove_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* value);

  /// @brief Method get_missionNode addr 0x22c9db4 size 0x8 virtual false final false
  inline ::GlobalNamespace::MissionNode* get_missionNode();

  /// @brief Method Setup addr 0x22c9dbc size 0x2c virtual false final false
  inline void Setup(::GlobalNamespace::MissionNode* missionNode);

  /// @brief Method DidActivate addr 0x22c9fd4 size 0xac virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method RefreshContent addr 0x22c9de8 size 0x1ec virtual false final false
  inline void RefreshContent();

  /// @brief Method PlayButtonPressed addr 0x22ca088 size 0x20 virtual false final false
  inline void PlayButtonPressed();

  static inline ::GlobalNamespace::MissionLevelDetailViewController* New_ctor();

  /// @brief Method .ctor addr 0x22ca0a8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelDetailViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelDetailViewController(MissionLevelDetailViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelDetailViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelDetailViewController(MissionLevelDetailViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelDetailViewController();

public:
  /// @brief Field _gameplayModifiersModel, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  /// @brief Field _playButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____playButton;

  /// @brief Field _levelBar, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::LevelBar* ____levelBar;

  /// @brief Field _objectiveListItems, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::ObjectiveListItemsList* ____objectiveListItems;

  /// @brief Field _gameplayModifierInfoListItemsList, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierInfoListItemsList* ____gameplayModifierInfoListItemsList;

  /// @brief Field _modifiersPanelGO, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____modifiersPanelGO;

  /// @brief Field didPressPlayButtonEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* ___didPressPlayButtonEvent;

  /// @brief Field _missionNode, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MissionNode* ____missionNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelDetailViewController, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelDetailViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelDetailViewController*, "", "MissionLevelDetailViewController");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*, "", "MissionLevelDetailViewController/<>c__DisplayClass14_0");
