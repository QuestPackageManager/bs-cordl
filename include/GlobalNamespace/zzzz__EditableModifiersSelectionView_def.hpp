#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
CORDL_MODULE_EXPORT(EditableModifiersSelectionView)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class EditableModifiersSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EditableModifiersSelectionView);
// Type: ::EditableModifiersSelectionView
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 74, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5798))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5780))
// CS Name: ::EditableModifiersSelectionView*
class CORDL_TYPE EditableModifiersSelectionView : public ::GlobalNamespace::ModifiersSelectionView {
public:
  // Declarations
  /// @brief Field _editButton, offset 0x30, size 0x8
  __declspec(property(get = __get__editButton, put = __set__editButton))::UnityEngine::UI::Button* _editButton;

  /// @brief Field _clearButton, offset 0x38, size 0x8
  __declspec(property(get = __get__clearButton, put = __set__clearButton))::UnityEngine::UI::Button* _clearButton;

  /// @brief Field _modifiersListCanvasGroup, offset 0x40, size 0x8
  __declspec(property(get = __get__modifiersListCanvasGroup, put = __set__modifiersListCanvasGroup))::UnityEngine::CanvasGroup* _modifiersListCanvasGroup;

  /// @brief Field _interactable, offset 0x48, size 0x1
  __declspec(property(get = __get__interactable, put = __set__interactable)) bool _interactable;

  /// @brief Field <showClearButton>k__BackingField, offset 0x49, size 0x1
  __declspec(property(get = __get__showClearButton_k__BackingField, put = __set__showClearButton_k__BackingField)) bool _showClearButton_k__BackingField;

  __declspec(property(get = get_editButton))::UnityEngine::UI::Button* editButton;

  __declspec(property(get = get_clearButton))::UnityEngine::UI::Button* clearButton;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_showClearButton, put = set_showClearButton)) bool showClearButton;

  constexpr ::UnityEngine::UI::Button*& __get__editButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__editButton() const;

  constexpr void __set__editButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__clearButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__clearButton() const;

  constexpr void __set__clearButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__modifiersListCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__modifiersListCanvasGroup() const;

  constexpr void __set__modifiersListCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr bool& __get__interactable();

  constexpr bool const& __get__interactable() const;

  constexpr void __set__interactable(bool value);

  constexpr bool& __get__showClearButton_k__BackingField();

  constexpr bool const& __get__showClearButton_k__BackingField() const;

  constexpr void __set__showClearButton_k__BackingField(bool value);

  /// @brief Method get_editButton, addr 0x22e1008, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Button* get_editButton();

  /// @brief Method get_clearButton, addr 0x22e1010, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Button* get_clearButton();

  /// @brief Method get_interactable, addr 0x22e1018, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method set_interactable, addr 0x22cef90, size 0x60, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method get_showClearButton, addr 0x22e1020, size 0x8, virtual false, abstract: false, final false
  inline bool get_showClearButton();

  /// @brief Method set_showClearButton, addr 0x22e1028, size 0xc, virtual false, abstract: false, final false
  inline void set_showClearButton(bool value);

  /// @brief Method SetVisibility, addr 0x22ce988, size 0x28, virtual false, abstract: false, final false
  inline void SetVisibility(bool visible);

  /// @brief Method Setup, addr 0x22ce97c, size 0xc, virtual false, abstract: false, final false
  inline void Setup(bool showClearButton);

  /// @brief Method SetGameplayModifiers, addr 0x22e1034, size 0x64, virtual true, abstract: false, final false
  inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  static inline ::GlobalNamespace::EditableModifiersSelectionView* New_ctor();

  /// @brief Method .ctor, addr 0x22e1098, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EditableModifiersSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditableModifiersSelectionView(EditableModifiersSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditableModifiersSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditableModifiersSelectionView(EditableModifiersSelectionView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditableModifiersSelectionView();

public:
  /// @brief Field _editButton, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____editButton;

  /// @brief Field _clearButton, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____clearButton;

  /// @brief Field _modifiersListCanvasGroup, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____modifiersListCanvasGroup;

  /// @brief Field _interactable, offset: 0x48, size: 0x1, def value: None
  bool ____interactable;

  /// @brief Field <showClearButton>k__BackingField, offset: 0x49, size: 0x1, def value: None
  bool ____showClearButton_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditableModifiersSelectionView, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____editButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____clearButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____modifiersListCanvasGroup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____interactable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____showClearButton_k__BackingField) == 0x49, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditableModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditableModifiersSelectionView*, "", "EditableModifiersSelectionView");
