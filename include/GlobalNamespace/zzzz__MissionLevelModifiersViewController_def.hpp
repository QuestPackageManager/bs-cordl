#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MissionLevelModifiersViewController)
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class __MissionLevelModifiersViewController____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelModifiersViewController;
}
namespace GlobalNamespace {
class __MissionLevelModifiersViewController____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelModifiersViewController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5698))
// CS Name: ::MissionLevelModifiersViewController::<>c__DisplayClass7_0*
class CORDL_TYPE __MissionLevelModifiersViewController____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field modifierParamsList, offset 0x10, size 0x8
  __declspec(property(get = __get_modifierParamsList, put = __set_modifierParamsList))::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*& __get_modifierParamsList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> const& __get_modifierParamsList() const;

  constexpr void __set_modifierParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* value);

  static inline ::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor, addr 0x22ca4dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <RefreshContent>b__0, addr 0x22ca4ec, size 0x7c, virtual false, abstract: false, final false
  inline void _RefreshContent_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelModifiersViewController____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MissionLevelModifiersViewController____c__DisplayClass7_0(__MissionLevelModifiersViewController____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MissionLevelModifiersViewController____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MissionLevelModifiersViewController____c__DisplayClass7_0(__MissionLevelModifiersViewController____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MissionLevelModifiersViewController____c__DisplayClass7_0();

public:
  /// @brief Field modifierParamsList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* ___modifierParamsList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0, ___modifierParamsList) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MissionLevelModifiersViewController
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5699))
// CS Name: ::MissionLevelModifiersViewController*
class CORDL_TYPE MissionLevelModifiersViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0;

  /// @brief Field _gameplayModifiersModel, offset 0x70, size 0x8
  __declspec(property(get = __get__gameplayModifiersModel, put = __set__gameplayModifiersModel))::GlobalNamespace::GameplayModifiersModelSO* _gameplayModifiersModel;

  /// @brief Field _gameplayModifierInfoListItemsList, offset 0x78, size 0x8
  __declspec(property(get = __get__gameplayModifierInfoListItemsList,
                      put = __set__gameplayModifierInfoListItemsList))::GlobalNamespace::GameplayModifierInfoListItemsList* _gameplayModifierInfoListItemsList;

  /// @brief Field _modifiersPanel, offset 0x80, size 0x8
  __declspec(property(get = __get__modifiersPanel, put = __set__modifiersPanel))::UnityEngine::GameObject* _modifiersPanel;

  /// @brief Field _titleText, offset 0x88, size 0x8
  __declspec(property(get = __get__titleText, put = __set__titleText))::TMPro::TextMeshProUGUI* _titleText;

  /// @brief Field _gameplayModifiers, offset 0x90, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  constexpr ::GlobalNamespace::GameplayModifiersModelSO*& __get__gameplayModifiersModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& __get__gameplayModifiersModel() const;

  constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value);

  constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList*& __get__gameplayModifierInfoListItemsList();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> const& __get__gameplayModifierInfoListItemsList() const;

  constexpr void __set__gameplayModifierInfoListItemsList(::GlobalNamespace::GameplayModifierInfoListItemsList* value);

  constexpr ::UnityEngine::GameObject*& __get__modifiersPanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__modifiersPanel() const;

  constexpr void __set__modifiersPanel(::UnityEngine::GameObject* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__titleText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__titleText() const;

  constexpr void __set__titleText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method Setup, addr 0x22ca31c, size 0x2c, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method DidActivate, addr 0x22ca4d8, size 0x4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method RefreshContent, addr 0x22ca348, size 0x190, virtual false, abstract: false, final false
  inline void RefreshContent();

  static inline ::GlobalNamespace::MissionLevelModifiersViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22ca4e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelModifiersViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelModifiersViewController(MissionLevelModifiersViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelModifiersViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelModifiersViewController(MissionLevelModifiersViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelModifiersViewController();

public:
  /// @brief Field _gameplayModifiersModel, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersModelSO* ____gameplayModifiersModel;

  /// @brief Field _gameplayModifierInfoListItemsList, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifierInfoListItemsList* ____gameplayModifierInfoListItemsList;

  /// @brief Field _modifiersPanel, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____modifiersPanel;

  /// @brief Field _titleText, offset: 0x88, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____titleText;

  /// @brief Field _gameplayModifiers, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelModifiersViewController, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____gameplayModifiersModel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____gameplayModifierInfoListItemsList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____modifiersPanel) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____titleText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelModifiersViewController, ____gameplayModifiers) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelModifiersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelModifiersViewController*, "", "MissionLevelModifiersViewController");
NEED_NO_BOX(::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionLevelModifiersViewController____c__DisplayClass7_0*, "", "MissionLevelModifiersViewController/<>c__DisplayClass7_0");
