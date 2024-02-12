#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ColorSchemeTableCell)
namespace GlobalNamespace {
class ColorSchemeView;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeTableCell);
// Type: ::ColorSchemeTableCell
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13617))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4714))
// CS Name: ::ColorSchemeTableCell*
class CORDL_TYPE ColorSchemeTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _text, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _colorSchemeView, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemeView, put = __cordl_internal_set__colorSchemeView))::UnityW<::GlobalNamespace::ColorSchemeView> _colorSchemeView;

  /// @brief Field _editIcon, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__editIcon, put = __cordl_internal_set__editIcon))::UnityW<::UnityEngine::UI::Image> _editIcon;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(put = set_showEditIcon)) bool showEditIcon;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeView>& __cordl_internal_get__colorSchemeView();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeView> const& __cordl_internal_get__colorSchemeView() const;

  constexpr void __cordl_internal_set__colorSchemeView(::UnityW<::GlobalNamespace::ColorSchemeView> value);

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__editIcon();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__editIcon() const;

  constexpr void __cordl_internal_set__editIcon(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method set_text, addr 0x23d2448, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method get_text, addr 0x23d246c, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_showEditIcon, addr 0x23d2490, size 0x20, virtual false, abstract: false, final false
  inline void set_showEditIcon(bool value);

  /// @brief Method SetColors, addr 0x23d24b0, size 0x7c, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environment0Color, ::UnityEngine::Color environment1Color,
                        ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost, ::UnityEngine::Color obstacleColor);

  static inline ::GlobalNamespace::ColorSchemeTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x23d252c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeTableCell(ColorSchemeTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeTableCell(ColorSchemeTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeTableCell();

public:
  /// @brief Field _text, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _colorSchemeView, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeView> ____colorSchemeView;

  /// @brief Field _editIcon, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____editIcon;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeTableCell, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeTableCell, ____text) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeTableCell, ____colorSchemeView) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeTableCell, ____editIcon) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeTableCell*, "", "ColorSchemeTableCell");
