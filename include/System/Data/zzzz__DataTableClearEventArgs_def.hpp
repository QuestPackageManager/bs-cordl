#pragma once
// IWYU pragma private; include "System/Data/DataTableClearEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(DataTableClearEventArgs)
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace System::Data {
class DataTableClearEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTableClearEventArgs);
// Dependencies System.EventArgs
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataTableClearEventArgs
class CORDL_TYPE DataTableClearEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <Table>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Table_k__BackingField, put = __cordl_internal_set__Table_k__BackingField)) ::System::Data::DataTable* _Table_k__BackingField;

  static inline ::System::Data::DataTableClearEventArgs* New_ctor(::System::Data::DataTable* dataTable);

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__Table_k__BackingField() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__Table_k__BackingField();

  constexpr void __cordl_internal_set__Table_k__BackingField(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x5e7a040, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* dataTable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTableClearEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTableClearEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTableClearEventArgs(DataTableClearEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTableClearEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTableClearEventArgs(DataTableClearEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13764 };

  /// @brief Field <Table>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____Table_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataTableClearEventArgs, ____Table_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataTableClearEventArgs, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTableClearEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableClearEventArgs*, "System.Data", "DataTableClearEventArgs");
