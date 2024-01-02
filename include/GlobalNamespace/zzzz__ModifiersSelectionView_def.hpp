#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModifiersSelectionView)
namespace GlobalNamespace {
class __ModifiersSelectionView____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class __ModifiersSelectionView____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ModifiersSelectionView);
MARK_REF_PTR_T(::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0);
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5797))
// CS Name: ::ModifiersSelectionView::<>c__DisplayClass3_0*
class CORDL_TYPE __ModifiersSelectionView____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field modifierParams, offset 0x10, size 0x8
  __declspec(property(get = __get_modifierParams, put = __set_modifierParams))::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifierParams;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& __get_modifierParams();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> const& __get_modifierParams() const;

  constexpr void __set_modifierParams(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* value);

  static inline ::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor, addr 0x22e771c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetGameplayModifiers>b__0, addr 0x22e772c, size 0x7c, virtual false, abstract: false, final false
  inline void _SetGameplayModifiers_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* item);

  // Ctor Parameters [CppParam { name: "", ty: "__ModifiersSelectionView____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ModifiersSelectionView____c__DisplayClass3_0(__ModifiersSelectionView____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ModifiersSelectionView____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ModifiersSelectionView____c__DisplayClass3_0(__ModifiersSelectionView____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ModifiersSelectionView____c__DisplayClass3_0();

public:
  /// @brief Field modifierParams, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* ___modifierParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0, ___modifierParams) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ModifiersSelectionView
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5798))
// CS Name: ::ModifiersSelectionView*
class CORDL_TYPE ModifiersSelectionView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0;

  /// @brief Field _modifierInfoList, offset 0x18, size 0x8
  __declspec(property(get = __get__modifierInfoList, put = __set__modifierInfoList))::GlobalNamespace::GameplayModifierInfoListItemsList* _modifierInfoList;

  /// @brief Field _noModifiersText, offset 0x20, size 0x8
  __declspec(property(get = __get__noModifiersText, put = __set__noModifiersText))::TMPro::TextMeshProUGUI* _noModifiersText;

  /// @brief Field _gameplayModifiersModel, offset 0x28, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList*& __get__modifierInfoList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> const& __get__modifierInfoList() const;

  constexpr void __set__modifierInfoList(::GlobalNamespace::GameplayModifierInfoListItemsList* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__noModifiersText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__noModifiersText() const;

  constexpr void __set__noModifiersText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  /// @brief Method SetGameplayModifiers, addr 0x22e75b0, size 0x16c, virtual true, abstract: false, final false
  inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  static inline ::GlobalNamespace::ModifiersSelectionView* New_ctor();

  /// @brief Method .ctor, addr 0x22e7724, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ModifiersSelectionView(ModifiersSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ModifiersSelectionView(ModifiersSelectionView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ModifiersSelectionView();

public:
  /// @brief Field _modifierInfoList, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierInfoListItemsList* ____modifierInfoList;

  /// @brief Field _noModifiersText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____noModifiersText;

  /// @brief Field _gameplayModifiersModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ModifiersSelectionView, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ModifiersSelectionView, ____modifierInfoList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModifiersSelectionView, ____noModifiersText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModifiersSelectionView, ____gameplayModifiersModel) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ModifiersSelectionView*, "", "ModifiersSelectionView");
NEED_NO_BOX(::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ModifiersSelectionView____c__DisplayClass3_0*, "", "ModifiersSelectionView/<>c__DisplayClass3_0");
