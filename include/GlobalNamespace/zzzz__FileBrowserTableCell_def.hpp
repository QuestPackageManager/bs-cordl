#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileBrowserTableCell)
namespace HMUI {
struct __SelectableCell__TransitionType;
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
// Type: ::FileBrowserTableCell
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5482))
// CS Name: ::FileBrowserTableCell*
class CORDL_TYPE FileBrowserTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _text, offset 0x58, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  /// @brief Field _bgImage, offset 0x60, size 0x8
  __declspec(property(get = __get__bgImage, put = __set__bgImage))::UnityEngine::UI::Image* _bgImage;

  /// @brief Field _highlightImage, offset 0x68, size 0x8
  __declspec(property(get = __get__highlightImage, put = __set__highlightImage))::UnityEngine::UI::Image* _highlightImage;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Image*& __get__bgImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__bgImage() const;

  constexpr void __set__bgImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::UI::Image*& __get__highlightImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__highlightImage() const;

  constexpr void __set__highlightImage(::UnityEngine::UI::Image* value);

  /// @brief Method set_text, addr 0x22843e4, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method get_text, addr 0x2284408, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method SelectionDidChange, addr 0x228442c, size 0xa4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method HighlightDidChange, addr 0x22844d0, size 0x40, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  static inline ::GlobalNamespace::FileBrowserTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x2284510, size 0x1008, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileBrowserTableCell(FileBrowserTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileBrowserTableCell(FileBrowserTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileBrowserTableCell();

public:
  /// @brief Field _text, offset: 0x58, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  /// @brief Field _bgImage, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____bgImage;

  /// @brief Field _highlightImage, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____highlightImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileBrowserTableCell, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableCell, ____text) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableCell, ____bgImage) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableCell, ____highlightImage) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileBrowserTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserTableCell*, "", "FileBrowserTableCell");
