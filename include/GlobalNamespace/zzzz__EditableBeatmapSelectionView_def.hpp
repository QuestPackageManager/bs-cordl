#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
CORDL_MODULE_EXPORT(EditableBeatmapSelectionView)
namespace UnityEngine {
class CanvasGroup;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace UnityEngine::UI {
class Button;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5863))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5870))
// CS Name: ::EditableBeatmapSelectionView*
class CORDL_TYPE EditableBeatmapSelectionView : public ::GlobalNamespace::BeatmapSelectionView {
public:
  // Declarations
  /// @brief Field _editButton, offset 0x28, size 0x8
  __declspec(property(get = __get__editButton, put = __set__editButton))::UnityEngine::UI::Button* _editButton;

  /// @brief Field _clearButton, offset 0x30, size 0x8
  __declspec(property(get = __get__clearButton, put = __set__clearButton))::UnityEngine::UI::Button* _clearButton;

  /// @brief Field _levelBarCanvasGroup, offset 0x38, size 0x8
  __declspec(property(get = __get__levelBarCanvasGroup, put = __set__levelBarCanvasGroup))::UnityEngine::CanvasGroup* _levelBarCanvasGroup;

  /// @brief Field _interactable, offset 0x40, size 0x1
  __declspec(property(get = __get__interactable, put = __set__interactable)) bool _interactable;

  /// @brief Field <showClearButton>k__BackingField, offset 0x41, size 0x1
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

  constexpr ::UnityEngine::CanvasGroup*& __get__levelBarCanvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__levelBarCanvasGroup() const;

  constexpr void __set__levelBarCanvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr bool& __get__interactable();

  constexpr bool const& __get__interactable() const;

  constexpr void __set__interactable(bool value);

  constexpr bool& __get__showClearButton_k__BackingField();

  constexpr bool const& __get__showClearButton_k__BackingField() const;

  constexpr void __set__showClearButton_k__BackingField(bool value);

  /// @brief Method get_editButton addr 0x219a938 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Button* get_editButton();

  /// @brief Method get_clearButton addr 0x219a940 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Button* get_clearButton();

  /// @brief Method get_interactable addr 0x219a948 size 0x8 virtual false final false
  inline bool get_interactable();

  /// @brief Method set_interactable addr 0x218c2c4 size 0x60 virtual false final false
  inline void set_interactable(bool value);

  /// @brief Method get_showClearButton addr 0x219a950 size 0x8 virtual false final false
  inline bool get_showClearButton();

  /// @brief Method set_showClearButton addr 0x219a958 size 0xc virtual false final false
  inline void set_showClearButton(bool value);

  /// @brief Method SetVisibility addr 0x218bce8 size 0x28 virtual false final false
  inline void SetVisibility(bool visible);

  /// @brief Method Setup addr 0x218bcdc size 0xc virtual false final false
  inline void Setup(bool showClearButton);

  /// @brief Method SetBeatmap addr 0x219a964 size 0x68 virtual true final false
  inline void SetBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel);

  static inline ::GlobalNamespace::EditableBeatmapSelectionView* New_ctor();

  /// @brief Method .ctor addr 0x219a9cc size 0x10 virtual false final false
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
  ::UnityEngine::UI::Button* ____editButton;

  /// @brief Field _clearButton, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____clearButton;

  /// @brief Field _levelBarCanvasGroup, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____levelBarCanvasGroup;

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
