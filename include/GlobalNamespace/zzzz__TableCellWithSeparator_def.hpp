#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TableCellWithSeparator)
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class ITableCellOwner;
}
// Forward declare root types
namespace GlobalNamespace {
class TableCellWithSeparator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TableCellWithSeparator);
// Type: ::TableCellWithSeparator
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13502))
// CS Name: ::TableCellWithSeparator*
class CORDL_TYPE TableCellWithSeparator : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _separator, offset 0x58, size 0x8
  __declspec(property(get = __get__separator, put = __set__separator))::UnityEngine::GameObject* _separator;

  constexpr ::UnityEngine::GameObject*& __get__separator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__separator() const;

  constexpr void __set__separator(::UnityEngine::GameObject* value);

  /// @brief Method TableViewSetup addr 0x2116274 size 0xe4 virtual true final false
  inline void TableViewSetup(::HMUI::ITableCellOwner* tableCellOwner, int32_t idx);

  static inline ::GlobalNamespace::TableCellWithSeparator* New_ctor();

  /// @brief Method .ctor addr 0x2116358 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TableCellWithSeparator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableCellWithSeparator(TableCellWithSeparator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableCellWithSeparator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableCellWithSeparator(TableCellWithSeparator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableCellWithSeparator();

public:
  /// @brief Field _separator, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____separator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TableCellWithSeparator, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TableCellWithSeparator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TableCellWithSeparator*, "", "TableCellWithSeparator");
