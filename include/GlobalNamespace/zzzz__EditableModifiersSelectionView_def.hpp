#pragma once
// IWYU pragma private; include "GlobalNamespace/EditableModifiersSelectionView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ModifiersSelectionView_def.hpp"
CORDL_MODULE_EXPORT(EditableModifiersSelectionView)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class EditableModifiersSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EditableModifiersSelectionView);
// Dependencies ModifiersSelectionView
namespace GlobalNamespace {
// Is value type: false
// CS Name: EditableModifiersSelectionView
class CORDL_TYPE EditableModifiersSelectionView : public ::GlobalNamespace::ModifiersSelectionView {
public:
  // Declarations
  /// @brief Field _clearButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__clearButton, put = __cordl_internal_set__clearButton)) ::UnityW<::UnityEngine::UI::Button> _clearButton;

  /// @brief Field _editButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__editButton, put = __cordl_internal_set__editButton)) ::UnityW<::UnityEngine::UI::Button> _editButton;

  /// @brief Field _interactable, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__interactable, put = __cordl_internal_set__interactable)) bool _interactable;

  /// @brief Field _modifiersListCanvasGroup, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__modifiersListCanvasGroup, put = __cordl_internal_set__modifiersListCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _modifiersListCanvasGroup;

  /// @brief Field <showClearButton>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__showClearButton_k__BackingField, put = __cordl_internal_set__showClearButton_k__BackingField)) bool _showClearButton_k__BackingField;

  __declspec(property(get = get_clearButton)) ::UnityW<::UnityEngine::UI::Button> clearButton;

  __declspec(property(get = get_editButton)) ::UnityW<::UnityEngine::UI::Button> editButton;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_showClearButton, put = set_showClearButton)) bool showClearButton;

  static inline ::GlobalNamespace::EditableModifiersSelectionView* New_ctor();

  /// @brief Method SetGameplayModifiers, addr 0x3b00404, size 0x60, virtual true, abstract: false, final false
  inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method SetVisibility, addr 0x3b003d0, size 0x28, virtual false, abstract: false, final false
  inline void SetVisibility(bool visible);

  /// @brief Method Setup, addr 0x3b003f8, size 0xc, virtual false, abstract: false, final false
  inline void Setup(bool showClearButton);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__clearButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__clearButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__editButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__editButton();

  constexpr bool const& __cordl_internal_get__interactable() const;

  constexpr bool& __cordl_internal_get__interactable();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__modifiersListCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__modifiersListCanvasGroup();

  constexpr bool const& __cordl_internal_get__showClearButton_k__BackingField() const;

  constexpr bool& __cordl_internal_get__showClearButton_k__BackingField();

  constexpr void __cordl_internal_set__clearButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__editButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__interactable(bool value);

  constexpr void __cordl_internal_set__modifiersListCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__showClearButton_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3b005cc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clearButton, addr 0x3b0034c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_clearButton();

  /// @brief Method get_editButton, addr 0x3b00344, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_editButton();

  /// @brief Method get_interactable, addr 0x3b00354, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_showClearButton, addr 0x3b003bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_showClearButton();

  /// @brief Method set_interactable, addr 0x3b0035c, size 0x60, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_showClearButton, addr 0x3b003c4, size 0xc, virtual false, abstract: false, final false
  inline void set_showClearButton(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditableModifiersSelectionView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EditableModifiersSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditableModifiersSelectionView(EditableModifiersSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditableModifiersSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditableModifiersSelectionView(EditableModifiersSelectionView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4976 };

  /// @brief Field _editButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____editButton;

  /// @brief Field _clearButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____clearButton;

  /// @brief Field _modifiersListCanvasGroup, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____modifiersListCanvasGroup;

  /// @brief Field _interactable, offset: 0x50, size: 0x1, def value: None
  bool ____interactable;

  /// @brief Field <showClearButton>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____showClearButton_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____editButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____clearButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____modifiersListCanvasGroup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____interactable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableModifiersSelectionView, ____showClearButton_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditableModifiersSelectionView, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditableModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditableModifiersSelectionView*, "", "EditableModifiersSelectionView");
