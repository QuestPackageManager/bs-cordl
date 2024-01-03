#pragma once
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
// Type: ::SimpleTextWithIconTableCell
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13501))
// CS Name: ::SimpleTextWithIconTableCell*
class CORDL_TYPE SimpleTextWithIconTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _text, offset 0x58, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  /// @brief Field _icon, offset 0x60, size 0x8
  __declspec(property(get = __get__icon, put = __set__icon))::UnityEngine::UI::Image* _icon;

  __declspec(property(get = get_icon, put = set_icon))::UnityEngine::UI::Image* icon;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Image*& __get__icon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__icon() const;

  constexpr void __set__icon(::UnityEngine::UI::Image* value);

  /// @brief Method set_icon, addr 0x2116214, size 0x8, virtual false, abstract: false, final false
  inline void set_icon(::UnityEngine::UI::Image* value);

  /// @brief Method get_icon, addr 0x211621c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Image* get_icon();

  /// @brief Method set_text, addr 0x2116224, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method get_text, addr 0x2116248, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  static inline ::GlobalNamespace::SimpleTextWithIconTableCell* New_ctor();

  /// @brief Method .ctor, addr 0x211626c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextWithIconTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTextWithIconTableCell(SimpleTextWithIconTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextWithIconTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTextWithIconTableCell(SimpleTextWithIconTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTextWithIconTableCell();

public:
  /// @brief Field _text, offset: 0x58, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  /// @brief Field _icon, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____icon;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTextWithIconTableCell, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTextWithIconTableCell, ____text) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTextWithIconTableCell, ____icon) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextWithIconTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextWithIconTableCell*, "", "SimpleTextWithIconTableCell");
