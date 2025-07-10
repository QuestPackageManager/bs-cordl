#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelModifiersViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionLevelModifiersViewController)
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
class GameplayModifiers;
}
namespace GlobalNamespace {
class MissionLevelModifiersViewController___c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelModifiersViewController;
}
namespace GlobalNamespace {
class MissionLevelModifiersViewController___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelModifiersViewController);
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelModifiersViewController___c__DisplayClass7_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelModifiersViewController/<>c__DisplayClass7_0
class CORDL_TYPE MissionLevelModifiersViewController___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field modifierParamsList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_modifierParamsList,
                      put = __cordl_internal_set_modifierParamsList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParamsList;

  static inline ::GlobalNamespace::MissionLevelModifiersViewController___c__DisplayClass7_0* New_ctor();

  /// @brief Method <RefreshContent>b__0, addr 0x3c1d60c, size 0x7c, virtual false, abstract: false, final false
  inline void _RefreshContent_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* const& __cordl_internal_get_modifierParamsList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*& __cordl_internal_get_modifierParamsList();

  constexpr void __cordl_internal_set_modifierParamsList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value);

  /// @brief Method .ctor, addr 0x3c1d5fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelModifiersViewController___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelModifiersViewController___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelModifiersViewController___c__DisplayClass7_0(MissionLevelModifiersViewController___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelModifiersViewController___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelModifiersViewController___c__DisplayClass7_0(MissionLevelModifiersViewController___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4918 };

  /// @brief Field modifierParamsList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* ___modifierParamsList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController___c__DisplayClass7_0, ___modifierParamsList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelModifiersViewController___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelModifiersViewController
class CORDL_TYPE MissionLevelModifiersViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::GlobalNamespace::MissionLevelModifiersViewController___c__DisplayClass7_0;

  /// @brief Field _gameplayModifierInfoListItemsList, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifierInfoListItemsList,
                      put = __cordl_internal_set__gameplayModifierInfoListItemsList)) ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList>
      _gameplayModifierInfoListItemsList;

  /// @brief Field _gameplayModifiers, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers, put = __cordl_internal_set__gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  /// @brief Field _gameplayModifiersModel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel, put = __cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModel;

  /// @brief Field _modifiersPanel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__modifiersPanel, put = __cordl_internal_set__modifiersPanel)) ::UnityW<::UnityEngine::GameObject> _modifiersPanel;

  /// @brief Field _titleText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__titleText, put = __cordl_internal_set__titleText)) ::UnityW<::TMPro::TextMeshProUGUI> _titleText;

  /// @brief Method DidActivate, addr 0x3c1d5f8, size 0x4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::MissionLevelModifiersViewController* New_ctor();

  /// @brief Method RefreshContent, addr 0x3c1d46c, size 0x18c, virtual false, abstract: false, final false
  inline void RefreshContent();

  /// @brief Method Setup, addr 0x3c1d440, size 0x2c, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> const& __cordl_internal_get__gameplayModifierInfoListItemsList() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList>& __cordl_internal_get__gameplayModifierInfoListItemsList();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__modifiersPanel() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__modifiersPanel();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__titleText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__titleText();

  constexpr void __cordl_internal_set__gameplayModifierInfoListItemsList(::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> value);

  constexpr void __cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__modifiersPanel(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__titleText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3c1d604, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelModifiersViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelModifiersViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelModifiersViewController(MissionLevelModifiersViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelModifiersViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelModifiersViewController(MissionLevelModifiersViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4919 };

  /// @brief Field _gameplayModifiersModel, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  /// @brief Field _gameplayModifierInfoListItemsList, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> ____gameplayModifierInfoListItemsList;

  /// @brief Field _modifiersPanel, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____modifiersPanel;

  /// @brief Field _titleText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____titleText;

  /// @brief Field _gameplayModifiers, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____gameplayModifiersModel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____gameplayModifierInfoListItemsList) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____modifiersPanel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____titleText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____gameplayModifiers) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelModifiersViewController, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelModifiersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelModifiersViewController*, "", "MissionLevelModifiersViewController");
NEED_NO_BOX(::GlobalNamespace::MissionLevelModifiersViewController___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelModifiersViewController___c__DisplayClass7_0*, "", "MissionLevelModifiersViewController/<>c__DisplayClass7_0");
