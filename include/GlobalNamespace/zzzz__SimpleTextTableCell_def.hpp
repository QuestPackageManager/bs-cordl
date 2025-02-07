#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleTextTableCell.hpp"
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
// Dependencies HMUI.TableCell
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleTextTableCell
class CORDL_TYPE SimpleTextTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _text, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  static inline ::GlobalNamespace::SimpleTextTableCell* New_ctor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x39ecb24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_text, addr 0x39ecb00, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x39ecadc, size 0x24, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTextTableCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTextTableCell(SimpleTextTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTextTableCell(SimpleTextTableCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16004 };

  /// @brief Field _text, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleTextTableCell, ____text) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTextTableCell, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextTableCell*, "", "SimpleTextTableCell");
