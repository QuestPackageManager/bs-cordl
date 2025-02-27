#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleTextWithIconTableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SimpleTextWithIconTableCell)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTextWithIconTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleTextWithIconTableCell);
// Dependencies HMUI.TableCell
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleTextWithIconTableCell
class CORDL_TYPE SimpleTextWithIconTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _icon, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon)) ::UnityW<::UnityEngine::UI::Image> _icon;

  /// @brief Field _text, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_icon, put = set_icon)) ::UnityW<::UnityEngine::UI::Image> icon;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  static inline ::GlobalNamespace::SimpleTextWithIconTableCell* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x39f5634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_icon, addr 0x39f55e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_icon();

  /// @brief Method get_text, addr 0x39f5610, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_icon, addr 0x39f55dc, size 0x8, virtual false, abstract: false, final false
  inline void set_icon(::UnityEngine::UI::Image* value);

  /// @brief Method set_text, addr 0x39f55ec, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTextWithIconTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextWithIconTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTextWithIconTableCell(SimpleTextWithIconTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextWithIconTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTextWithIconTableCell(SimpleTextWithIconTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16010 };

  /// @brief Field _text, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _icon, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____icon;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleTextWithIconTableCell, ____text) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTextWithIconTableCell, ____icon) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTextWithIconTableCell, 0x78>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextWithIconTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextWithIconTableCell*, "", "SimpleTextWithIconTableCell");
