#pragma once
// IWYU pragma private; include "GlobalNamespace/EditableBeatmapSelectionView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
CORDL_MODULE_EXPORT(EditableBeatmapSelectionView)
namespace GlobalNamespace {
struct BeatmapKey;
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
// Dependencies BeatmapSelectionView
namespace GlobalNamespace {
// Is value type: false
// CS Name: EditableBeatmapSelectionView
class CORDL_TYPE EditableBeatmapSelectionView : public ::GlobalNamespace::BeatmapSelectionView {
public:
  // Declarations
  /// @brief Field _clearButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__clearButton, put = __cordl_internal_set__clearButton)) ::UnityW<::UnityEngine::UI::Button> _clearButton;

  /// @brief Field _editButton, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__editButton, put = __cordl_internal_set__editButton)) ::UnityW<::UnityEngine::UI::Button> _editButton;

  /// @brief Field _interactable, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__interactable, put = __cordl_internal_set__interactable)) bool _interactable;

  /// @brief Field _levelBarCanvasGroup, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBarCanvasGroup, put = __cordl_internal_set__levelBarCanvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _levelBarCanvasGroup;

  /// @brief Field <showClearButton>k__BackingField, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get__showClearButton_k__BackingField, put = __cordl_internal_set__showClearButton_k__BackingField)) bool _showClearButton_k__BackingField;

  __declspec(property(get = get_clearButton)) ::UnityW<::UnityEngine::UI::Button> clearButton;

  __declspec(property(get = get_editButton)) ::UnityW<::UnityEngine::UI::Button> editButton;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_showClearButton, put = set_showClearButton)) bool showClearButton;

  static inline ::GlobalNamespace::EditableBeatmapSelectionView* New_ctor();

  /// @brief Method SetBeatmap, addr 0x3b0e348, size 0x64, virtual true, abstract: false, final false
  inline void SetBeatmap(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method SetVisibility, addr 0x3b0e314, size 0x28, virtual false, abstract: false, final false
  inline void SetVisibility(bool visible);

  /// @brief Method Setup, addr 0x3b0e33c, size 0xc, virtual false, abstract: false, final false
  inline void Setup(bool showClearButton);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__clearButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__clearButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__editButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__editButton();

  constexpr bool const& __cordl_internal_get__interactable() const;

  constexpr bool& __cordl_internal_get__interactable();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__levelBarCanvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__levelBarCanvasGroup();

  constexpr bool const& __cordl_internal_get__showClearButton_k__BackingField() const;

  constexpr bool& __cordl_internal_get__showClearButton_k__BackingField();

  constexpr void __cordl_internal_set__clearButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__editButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__interactable(bool value);

  constexpr void __cordl_internal_set__levelBarCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__showClearButton_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3b0e3ac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clearButton, addr 0x3b0e290, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_clearButton();

  /// @brief Method get_editButton, addr 0x3b0e288, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_editButton();

  /// @brief Method get_interactable, addr 0x3b0e298, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_showClearButton, addr 0x3b0e300, size 0x8, virtual false, abstract: false, final false
  inline bool get_showClearButton();

  /// @brief Method set_interactable, addr 0x3b0e2a0, size 0x60, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_showClearButton, addr 0x3b0e308, size 0xc, virtual false, abstract: false, final false
  inline void set_showClearButton(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditableBeatmapSelectionView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EditableBeatmapSelectionView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditableBeatmapSelectionView(EditableBeatmapSelectionView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditableBeatmapSelectionView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditableBeatmapSelectionView(EditableBeatmapSelectionView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4975 };

  /// @brief Field _editButton, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____editButton;

  /// @brief Field _clearButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____clearButton;

  /// @brief Field _levelBarCanvasGroup, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____levelBarCanvasGroup;

  /// @brief Field _interactable, offset: 0x48, size: 0x1, def value: None
  bool ____interactable;

  /// @brief Field <showClearButton>k__BackingField, offset: 0x49, size: 0x1, def value: None
  bool ____showClearButton_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____editButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____clearButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____levelBarCanvasGroup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____interactable) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditableBeatmapSelectionView, ____showClearButton_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditableBeatmapSelectionView, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditableBeatmapSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditableBeatmapSelectionView*, "", "EditableBeatmapSelectionView");
