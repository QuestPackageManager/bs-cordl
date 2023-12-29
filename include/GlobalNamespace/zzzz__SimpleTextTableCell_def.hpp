#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SimpleTextTableCell)
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTextTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleTextTableCell);
// Type: ::SimpleTextTableCell
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13781))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13620))
// CS Name: ::SimpleTextTableCell*
class CORDL_TYPE SimpleTextTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _text, offset 0x58, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshProUGUI* _text;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  constexpr ::TMPro::TextMeshProUGUI*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshProUGUI* value);

  /// @brief Method set_text addr 0x1fc063c size 0x24 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method get_text addr 0x1fc0660 size 0x24 virtual false final false
  inline ::StringW get_text();

  static inline ::GlobalNamespace::SimpleTextTableCell* New_ctor();

  /// @brief Method .ctor addr 0x1fc0684 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTextTableCell(SimpleTextTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTextTableCell(SimpleTextTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTextTableCell();

public:
  /// @brief Field _text, offset: 0x58, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTextTableCell, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTextTableCell, ____text) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextTableCell*, "", "SimpleTextTableCell");
