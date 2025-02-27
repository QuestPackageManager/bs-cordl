#pragma once
// IWYU pragma private; include "GlobalNamespace/FileBrowserTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileBrowserTableCell)
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class FileBrowserTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileBrowserTableCell);
// Dependencies HMUI.TableCell
namespace GlobalNamespace {
// Is value type: false
// CS Name: FileBrowserTableCell
class CORDL_TYPE FileBrowserTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _bgImage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__bgImage, put = __cordl_internal_set__bgImage)) ::UnityW<::UnityEngine::UI::Image> _bgImage;

  /// @brief Field _highlightImage, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightImage, put = __cordl_internal_set__highlightImage)) ::UnityW<::UnityEngine::UI::Image> _highlightImage;

  /// @brief Field _text, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Method HighlightDidChange, addr 0x3c10fdc, size 0x40, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  static inline ::GlobalNamespace::FileBrowserTableCell* New_ctor();

  /// @brief Method SelectionDidChange, addr 0x3c10f44, size 0x98, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__bgImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__bgImage();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__highlightImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__highlightImage();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3c1101c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_text, addr 0x3c10f20, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x3c10efc, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileBrowserTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileBrowserTableCell(FileBrowserTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileBrowserTableCell(FileBrowserTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4781 };

  /// @brief Field _text, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _bgImage, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____bgImage;

  /// @brief Field _highlightImage, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____highlightImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileBrowserTableCell, ____text) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableCell, ____bgImage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableCell, ____highlightImage) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileBrowserTableCell, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileBrowserTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserTableCell*, "", "FileBrowserTableCell");
