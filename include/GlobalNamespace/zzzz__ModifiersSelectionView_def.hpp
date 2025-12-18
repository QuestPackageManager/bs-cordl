#pragma once
// IWYU pragma private; include "GlobalNamespace/ModifiersSelectionView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModifiersSelectionView)
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
class ModifiersSelectionView___c__DisplayClass3_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class ModifiersSelectionView___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ModifiersSelectionView);
MARK_REF_PTR_T(::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModifiersSelectionView/<>c__DisplayClass3_0
class CORDL_TYPE ModifiersSelectionView___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field modifierParams, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_modifierParams,
                      put = __cordl_internal_set_modifierParams)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* modifierParams;

  static inline ::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0* New_ctor();

  /// @brief Method <SetGameplayModifiers>b__0, addr 0x57444c8, size 0x80, virtual false, abstract: false, final false
  inline void _SetGameplayModifiers_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* item);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* const& __cordl_internal_get_modifierParams() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*& __cordl_internal_get_modifierParams();

  constexpr void __cordl_internal_set_modifierParams(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value);

  /// @brief Method .ctor, addr 0x57444c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiersSelectionView___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModifiersSelectionView___c__DisplayClass3_0(ModifiersSelectionView___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModifiersSelectionView___c__DisplayClass3_0(ModifiersSelectionView___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6566 };

  /// @brief Field modifierParams, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* ___modifierParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0, ___modifierParams) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ModifiersSelectionView
class CORDL_TYPE ModifiersSelectionView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0;

  /// @brief Field _gameplayModifiersModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersModel, put = __cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>
      _gameplayModifiersModel;

  /// @brief Field _modifierInfoList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__modifierInfoList, put = __cordl_internal_set__modifierInfoList)) ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> _modifierInfoList;

  /// @brief Field _noModifiersText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__noModifiersText, put = __cordl_internal_set__noModifiersText)) ::UnityW<::TMPro::TextMeshProUGUI> _noModifiersText;

  static inline ::GlobalNamespace::ModifiersSelectionView* New_ctor();

  /// @brief Method SetGameplayModifiers, addr 0x573f184, size 0x1b4, virtual true, abstract: false, final false
  inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> const& __cordl_internal_get__modifierInfoList() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList>& __cordl_internal_get__modifierInfoList();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__noModifiersText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__noModifiersText();

  constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value);

  constexpr void __cordl_internal_set__modifierInfoList(::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> value);

  constexpr void __cordl_internal_set__noModifiersText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x573f344, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiersSelectionView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModifiersSelectionView(ModifiersSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModifiersSelectionView(ModifiersSelectionView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6567 };

  /// @brief Field _modifierInfoList, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> ____modifierInfoList;

  /// @brief Field _noModifiersText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____noModifiersText;

  /// @brief Field _gameplayModifiersModel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> ____gameplayModifiersModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModifiersSelectionView, ____modifierInfoList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModifiersSelectionView, ____noModifiersText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModifiersSelectionView, ____gameplayModifiersModel) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ModifiersSelectionView, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ModifiersSelectionView*, "", "ModifiersSelectionView");
NEED_NO_BOX(::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ModifiersSelectionView___c__DisplayClass3_0*, "", "ModifiersSelectionView/<>c__DisplayClass3_0");
