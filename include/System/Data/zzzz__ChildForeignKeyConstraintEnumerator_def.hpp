#pragma once
// IWYU pragma private; include "System/Data/ChildForeignKeyConstraintEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ForeignKeyConstraintEnumerator_def.hpp"
CORDL_MODULE_EXPORT(ChildForeignKeyConstraintEnumerator)
namespace System::Data {
class Constraint;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace System::Data {
class ChildForeignKeyConstraintEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ChildForeignKeyConstraintEnumerator);
// Type: System.Data::ChildForeignKeyConstraintEnumerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ChildForeignKeyConstraintEnumerator*
class CORDL_TYPE ChildForeignKeyConstraintEnumerator : public ::System::Data::ForeignKeyConstraintEnumerator {
public:
  // Declarations
  /// @brief Field _table, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Method IsValidCandidate, addr 0x40e2138, size 0x94, virtual true, abstract: false, final false
  inline bool IsValidCandidate(::System::Data::Constraint* constraint);

  static inline ::System::Data::ChildForeignKeyConstraintEnumerator* New_ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable);

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x40e2114, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChildForeignKeyConstraintEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChildForeignKeyConstraintEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChildForeignKeyConstraintEnumerator(ChildForeignKeyConstraintEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChildForeignKeyConstraintEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChildForeignKeyConstraintEnumerator(ChildForeignKeyConstraintEnumerator const&) = delete;

  /// @brief Field _table, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11331 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ChildForeignKeyConstraintEnumerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::ChildForeignKeyConstraintEnumerator, ____table) == 0x28, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ChildForeignKeyConstraintEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ChildForeignKeyConstraintEnumerator*, "System.Data", "ChildForeignKeyConstraintEnumerator");
