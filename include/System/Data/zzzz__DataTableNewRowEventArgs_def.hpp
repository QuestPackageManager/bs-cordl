#pragma once
// IWYU pragma private; include "System/Data/DataTableNewRowEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(DataTableNewRowEventArgs)
namespace System::Data {
class DataRow;
}
// Forward declare root types
namespace System::Data {
class DataTableNewRowEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTableNewRowEventArgs);
// Dependencies System.EventArgs
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataTableNewRowEventArgs
class CORDL_TYPE DataTableNewRowEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <Row>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Row_k__BackingField, put = __cordl_internal_set__Row_k__BackingField)) ::System::Data::DataRow* _Row_k__BackingField;

  static inline ::System::Data::DataTableNewRowEventArgs* New_ctor(::System::Data::DataRow* dataRow);

  constexpr ::System::Data::DataRow* const& __cordl_internal_get__Row_k__BackingField() const;

  constexpr ::System::Data::DataRow*& __cordl_internal_get__Row_k__BackingField();

  constexpr void __cordl_internal_set__Row_k__BackingField(::System::Data::DataRow* value);

  /// @brief Method .ctor, addr 0x4169d74, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataRow* dataRow);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTableNewRowEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTableNewRowEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTableNewRowEventArgs(DataTableNewRowEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTableNewRowEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTableNewRowEventArgs(DataTableNewRowEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11405 };

  /// @brief Field <Row>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataRow* ____Row_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataTableNewRowEventArgs, ____Row_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataTableNewRowEventArgs, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTableNewRowEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableNewRowEventArgs*, "System.Data", "DataTableNewRowEventArgs");
