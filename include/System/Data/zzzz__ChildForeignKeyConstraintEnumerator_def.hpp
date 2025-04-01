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
// Dependencies System.Data.ForeignKeyConstraintEnumerator
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ChildForeignKeyConstraintEnumerator
class CORDL_TYPE ChildForeignKeyConstraintEnumerator : public ::System::Data::ForeignKeyConstraintEnumerator {
public:
  // Declarations
  /// @brief Field _table, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Method IsValidCandidate, addr 0x4154610, size 0x94, virtual true, abstract: false, final false
  inline bool IsValidCandidate(::System::Data::Constraint* constraint);

  static inline ::System::Data::ChildForeignKeyConstraintEnumerator* New_ctor(::System::Data::DataSet* dataSet, ::System::Data::DataTable* inTable);

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x41545ec, size 0x24, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11374 };

  /// @brief Field _table, offset: 0x28, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::ChildForeignKeyConstraintEnumerator, ____table) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::ChildForeignKeyConstraintEnumerator, 0x30>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ChildForeignKeyConstraintEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ChildForeignKeyConstraintEnumerator*, "System.Data", "ChildForeignKeyConstraintEnumerator");
