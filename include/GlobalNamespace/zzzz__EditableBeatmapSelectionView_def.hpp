#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
CORDL_MODULE_EXPORT(EditableBeatmapSelectionView)
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class EditableBeatmapSelectionView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EditableBeatmapSelectionView);
// Type: ::EditableBeatmapSelectionView
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 66, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5772))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5779))
// CS Name: ::EditableBeatmapSelectionView*
class CORDL_TYPE EditableBeatmapSelectionView : public ::GlobalNamespace::BeatmapSelectionView {
public:
  // Declarations
  /// @brief Field _editButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__editButton, put = __cordl_internal_set__editButton))::UnityW<::UnityEngine::UI::Button> _editButton;

  /// @brief Field _clearButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__clearButton, put = __cordl_internal_set__clearButton))::UnityW<::UnityEngine::UI::Button> _clearButton;

  /// @brief Field _levelBarCanvasGroup, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBarCanvasGroup, put = __cordl_internal_set__levelBarCanvasGroup))::UnityW<::UnityEngine::CanvasGroup> _levelBarCanvasGroup;

  /// @brief Field _interactable, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__interactable, put = __cordl_internal_set__interactable)) bool _interactable;

  /// @brief Field <showClearButton>k__BackingField, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__showClearButton_k__BackingField, put = __cordl_internal_set__showClearButton_k__BackingField)) bool _showClearButton_k__BackingField;

  __declspec(property(get = get_editButton))::UnityW<::UnityEngine::UI::Button> editButton;

  __declspec(property(get = get_clearButton))::UnityW<::UnityEngine::UI::Button> clearButton;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_showClearButton, put = set_showClearButton)) bool showClearButton;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__editButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__editButton() const;

  constexpr void __cordl_internal_set__editButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__clearButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__clearButton() const;

  constexpr void __cordl_internal_set__clearButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__levelBarCanvasGroup();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__levelBarCanvasGroup() const;

  constexpr void __cordl_internal_set__levelBarCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr bool& __cordl_internal_get__interactable();

  constexpr bool const& __cordl_internal_get__interactable() const;

  constexpr void __cordl_internal_set__interactable(bool value);

  constexpr bool& __cordl_internal_get__showClearButton_k__BackingField();

  constexpr bool const& __cordl_internal_get__showClearButton_k__BackingField() const;

  constexpr void __cordl_internal_set__showClearButton_k__BackingField(bool value);

  /// @brief Method get_editButton, addr 0x22e0f64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_editButton();

  /// @brief Method get_clearButton, addr 0x22e0f6c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_clearButton();

  /// @brief Method get_interactable, addr 0x22e0f74, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method set_interactable, addr 0x22cef30, size 0x60, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method get_showClearButton, addr 0x22e0f7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_showClearButton();

  /// @brief Method set_showClearButton, addr 0x22e0f84, size 0xc, virtual false, abstract: false, final false
  inline void set_showClearButton(bool value);

  /// @brief Method SetVisibility, addr 0x22ce954, size 0x28, virtual false, abstract: false, final false
  inline void SetVisibility(bool visible);

  /// @brief Method Setup, addr 0x22ce948, size 0xc, virtual false, abstract: false, final false
  inline void Setup(bool showClearButton);

  /// @brief Method SetBeatmap, addr 0x22e0f90, size 0x68, virtual true, abstract: false, final false
  inline void SetBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel);

  static inline ::GlobalNamespace::EditableBeatmapSelectionView* New_ctor();

  /// @brief Method .ctor, addr 0x22e0ff8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EditableBeatmapSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditableBeatmapSelectionView(EditableBeatmapSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditableBeatmapSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditableBeatmapSelectionView(EditableBeatmapSelectionView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditableBeatmapSelectionView();

public:
  /// @brief Field _editButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____editButton;

  /// @brief Field _clearButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____clearButton;

  /// @brief Field _levelBarCanvasGroup, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____levelBarCanvasGroup;

  /// @brief Field _interactable, offset: 0x40, size: 0x1, def value: None
  bool ____interactable;

  /// @brief Field <showClearButton>k__BackingField, offset: 0x41, size: 0x1, def value: None
  bool ____showClearButton_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditableBeatmapSelectionView, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____editButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____clearButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____levelBarCanvasGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____interactable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____showClearButton_k__BackingField) == 0x41, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditableBeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditableBeatmapSelectionView*, "", "EditableBeatmapSelectionView");
