#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelPackHeaderTableCell)
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelPackHeaderTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelPackHeaderTableCell);
// Type: ::LevelPackHeaderTableCell
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5431))
// CS Name: ::LevelPackHeaderTableCell*
class CORDL_TYPE LevelPackHeaderTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _nameText, offset 0x58, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _backgroundImage, offset 0x60, size 0x8
  __declspec(property(get = __get__backgroundImage, put = __set__backgroundImage))::UnityEngine::UI::Image* _backgroundImage;

  /// @brief Field _highlightBackgroundColor, offset 0x68, size 0x10
  __declspec(property(get = __get__highlightBackgroundColor, put = __set__highlightBackgroundColor))::UnityEngine::Color _highlightBackgroundColor;

  /// @brief Field _selectedBackgroundColor, offset 0x78, size 0x10
  __declspec(property(get = __get__selectedBackgroundColor, put = __set__selectedBackgroundColor))::UnityEngine::Color _selectedBackgroundColor;

  /// @brief Field _selectedAndHighlightedBackgroundColor, offset 0x88, size 0x10
  __declspec(property(get = __get__selectedAndHighlightedBackgroundColor, put = __set__selectedAndHighlightedBackgroundColor))::UnityEngine::Color _selectedAndHighlightedBackgroundColor;

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Image*& __get__backgroundImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__backgroundImage() const;

  constexpr void __set__backgroundImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::Color& __get__highlightBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__highlightBackgroundColor() const;

  constexpr void __set__highlightBackgroundColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__selectedBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__selectedBackgroundColor() const;

  constexpr void __set__selectedBackgroundColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__selectedAndHighlightedBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__selectedAndHighlightedBackgroundColor() const;

  constexpr void __set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color value);

  /// @brief Method SetData addr 0x227bdb8 size 0x24 virtual false final false
  inline void SetData(::StringW headerText);

  /// @brief Method SelectionDidChange addr 0x227bddc size 0x4 virtual true final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method HighlightDidChange addr 0x227be7c size 0x4 virtual true final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method RefreshVisuals addr 0x227bde0 size 0x9c virtual false final false
  inline void RefreshVisuals();

  static inline ::GlobalNamespace::LevelPackHeaderTableCell* New_ctor();

  /// @brief Method .ctor addr 0x227be80 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelPackHeaderTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelPackHeaderTableCell(LevelPackHeaderTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelPackHeaderTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelPackHeaderTableCell(LevelPackHeaderTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelPackHeaderTableCell();

public:
  /// @brief Field _nameText, offset: 0x58, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _backgroundImage, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____backgroundImage;

  /// @brief Field _highlightBackgroundColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightBackgroundColor;

  /// @brief Field _selectedBackgroundColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedBackgroundColor;

  /// @brief Field _selectedAndHighlightedBackgroundColor, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedAndHighlightedBackgroundColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelPackHeaderTableCell, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelPackHeaderTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelPackHeaderTableCell*, "", "LevelPackHeaderTableCell");
