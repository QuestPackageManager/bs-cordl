#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ITableCellOwner)
namespace HMUI {
struct TableViewSelectionType;
}
// Forward declare root types
namespace HMUI {
class ITableCellOwner;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ITableCellOwner);
// Type: HMUI::ITableCellOwner
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ITableCellOwner*
class CORDL_TYPE ITableCellOwner {
public:
  // Declarations
  __declspec(property(get = get_canSelectSelectedCell)) bool canSelectSelectedCell;

  __declspec(property(get = get_numberOfCells)) int32_t numberOfCells;

  __declspec(property(get = get_selectionType))::HMUI::TableViewSelectionType selectionType;

  /// @brief Method get_canSelectSelectedCell, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_canSelectSelectedCell();

  /// @brief Method get_numberOfCells, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_numberOfCells();

  /// @brief Method get_selectionType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::HMUI::TableViewSelectionType get_selectionType();

  // Ctor Parameters [CppParam { name: "", ty: "ITableCellOwner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITableCellOwner(ITableCellOwner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITableCellOwner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITableCellOwner(ITableCellOwner const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
NEED_NO_BOX(::HMUI::ITableCellOwner);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ITableCellOwner*, "HMUI", "ITableCellOwner");
