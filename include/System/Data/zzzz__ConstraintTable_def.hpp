#pragma once
// IWYU pragma private; include "System/Data/ConstraintTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConstraintTable)
namespace System::Data {
class DataTable;
}
namespace System::Xml::Schema {
class XmlSchemaIdentityConstraint;
}
// Forward declare root types
namespace System::Data {
class ConstraintTable;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ConstraintTable);
// Type: System.Data::ConstraintTable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ConstraintTable*
class CORDL_TYPE ConstraintTable : public ::System::Object {
public:
  // Declarations
  /// @brief Field constraint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_constraint, put = __cordl_internal_set_constraint))::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint;

  /// @brief Field table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_table, put = __cordl_internal_set_table))::System::Data::DataTable* table;

  static inline ::System::Data::ConstraintTable* New_ctor(::System::Data::DataTable* t, ::System::Xml::Schema::XmlSchemaIdentityConstraint* c);

  constexpr ::System::Xml::Schema::XmlSchemaIdentityConstraint*& __cordl_internal_get_constraint();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaIdentityConstraint*> const& __cordl_internal_get_constraint() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get_table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get_table() const;

  constexpr void __cordl_internal_set_constraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* value);

  constexpr void __cordl_internal_set_table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x2ce7730, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* t, ::System::Xml::Schema::XmlSchemaIdentityConstraint* c);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstraintTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintTable(ConstraintTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintTable(ConstraintTable const&) = delete;

  /// @brief Field table, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ___table;

  /// @brief Field constraint, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaIdentityConstraint* ___constraint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ConstraintTable, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::ConstraintTable, ___table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::ConstraintTable, ___constraint) == 0x18, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ConstraintTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ConstraintTable*, "System.Data", "ConstraintTable");
