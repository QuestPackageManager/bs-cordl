#pragma once
// IWYU pragma private; include "GlobalNamespace/TextOnlyTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TextOnlyTableCell)
namespace HMUI {
class ImageView;
}
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class TextOnlyTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TextOnlyTableCell);
// Dependencies HMUI.TableCell, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextOnlyTableCell
class CORDL_TYPE TextOnlyTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _bgImage, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage)) ::UnityW<::HMUI::ImageView> _bgImage;

  /// @brief Field _highlightImage, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightImage, put = __cordl_internal_set__highlightImage)) ::UnityW<::HMUI::ImageView> _highlightImage;

  /// @brief Field _selectedHighlightColor, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__selectedHighlightColor, put = __cordl_internal_set__selectedHighlightColor)) ::UnityEngine::Color _selectedHighlightColor;

  /// @brief Field _text, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Method HighlightDidChange, addr 0x3c02114, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  static inline ::GlobalNamespace::TextOnlyTableCell* New_ctor();

  /// @brief Method RefreshVisuals, addr 0x3c02048, size 0xcc, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method SelectionDidChange, addr 0x3c02044, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__bgImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__bgImage();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__highlightImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__highlightImage();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedHighlightColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__selectedHighlightColor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__bgImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__highlightImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__selectedHighlightColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3c02118, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_text, addr 0x3c01ffc, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x3c02020, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextOnlyTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextOnlyTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextOnlyTableCell(TextOnlyTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextOnlyTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextOnlyTableCell(TextOnlyTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4770 };

  /// @brief Field _selectedHighlightColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedHighlightColor;

  /// @brief Field _text, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _bgImage, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____bgImage;

  /// @brief Field _highlightImage, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____highlightImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextOnlyTableCell, ____selectedHighlightColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextOnlyTableCell, ____text) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextOnlyTableCell, ____bgImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextOnlyTableCell, ____highlightImage) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextOnlyTableCell, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TextOnlyTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextOnlyTableCell*, "", "TextOnlyTableCell");
