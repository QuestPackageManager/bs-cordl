#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ForeignKeyConstraintEnumerator_def.hpp"
CORDL_MODULE_EXPORT(ParentForeignKeyConstraintEnumerator)
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
class ParentForeignKeyConstraintEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ParentForeignKeyConstraintEnumerator);
// Type: System.Data::ParentForeignKeyConstraintEnumerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ParentForeignKeyConstraintEnumerator*
class CORDL_TYPE ParentForeignKeyConstraintEnumerator : public ::System::Data::ForeignKeyConstraintEnumerator {
public:
  // Declarations
  /// @brief Field _table, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::System::Data::DataTable* _table;

  /// @brief Method IsValidCandidate, addr 0x2b7950c, size 0x98, virtual true, abstract: false, final false
  inline bool IsValidCandidate(::System::Data::Constraint* constraint);

  static inline ::System::Data::ParentForeignKeyConstraintEnumerator* New_ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable);

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x2b794e8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParentForeignKeyConstraintEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParentForeignKeyConstraintEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParentForeignKeyConstraintEnumerator(ParentForeignKeyConstraintEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParentForeignKeyConstraintEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParentForeignKeyConstraintEnumerator(ParentForeignKeyConstraintEnumerator const&) = delete;

  /// @brief Field _table, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ParentForeignKeyConstraintEnumerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::ParentForeignKeyConstraintEnumerator, ____table) == 0x28, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ParentForeignKeyConstraintEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ParentForeignKeyConstraintEnumerator*, "System.Data", "ParentForeignKeyConstraintEnumerator");
