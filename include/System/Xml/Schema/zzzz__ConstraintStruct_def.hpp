#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstraintStruct)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class CompiledIdentityConstraint;
}
namespace System::Xml::Schema {
class SelectorActiveAxis;
}
// Forward declare root types
namespace System::Xml::Schema {
class ConstraintStruct;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ConstraintStruct);
// Type: System.Xml.Schema::ConstraintStruct
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::ConstraintStruct*
class CORDL_TYPE ConstraintStruct : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TableDim)) int32_t TableDim;

  /// @brief Field axisFields, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_axisFields, put = __cordl_internal_set_axisFields))::System::Collections::ArrayList* axisFields;

  /// @brief Field axisSelector, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_axisSelector, put = __cordl_internal_set_axisSelector))::System::Xml::Schema::SelectorActiveAxis* axisSelector;

  /// @brief Field constraint, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_constraint, put = __cordl_internal_set_constraint))::System::Xml::Schema::CompiledIdentityConstraint* constraint;

  /// @brief Field keyrefTable, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyrefTable, put = __cordl_internal_set_keyrefTable))::System::Collections::Hashtable* keyrefTable;

  /// @brief Field qualifiedTable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_qualifiedTable, put = __cordl_internal_set_qualifiedTable))::System::Collections::Hashtable* qualifiedTable;

  /// @brief Field tableDim, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_tableDim, put = __cordl_internal_set_tableDim)) int32_t tableDim;

  static inline ::System::Xml::Schema::ConstraintStruct* New_ctor(::System::Xml::Schema::CompiledIdentityConstraint* constraint);

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_axisFields();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_axisFields() const;

  constexpr ::System::Xml::Schema::SelectorActiveAxis*& __cordl_internal_get_axisSelector();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SelectorActiveAxis*> const& __cordl_internal_get_axisSelector() const;

  constexpr ::System::Xml::Schema::CompiledIdentityConstraint*& __cordl_internal_get_constraint();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::CompiledIdentityConstraint*> const& __cordl_internal_get_constraint() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_keyrefTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_keyrefTable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_qualifiedTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& __cordl_internal_get_qualifiedTable() const;

  constexpr int32_t const& __cordl_internal_get_tableDim() const;

  constexpr int32_t& __cordl_internal_get_tableDim();

  constexpr void __cordl_internal_set_axisFields(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_axisSelector(::System::Xml::Schema::SelectorActiveAxis* value);

  constexpr void __cordl_internal_set_constraint(::System::Xml::Schema::CompiledIdentityConstraint* value);

  constexpr void __cordl_internal_set_keyrefTable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_qualifiedTable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_tableDim(int32_t value);

  /// @brief Method .ctor, addr 0x2ef6744, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::CompiledIdentityConstraint* constraint);

  /// @brief Method get_TableDim, addr 0x2ef673c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TableDim();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstraintStruct();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstraintStruct", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstraintStruct(ConstraintStruct&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstraintStruct", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstraintStruct(ConstraintStruct const&) = delete;

  /// @brief Field constraint, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::CompiledIdentityConstraint* ___constraint;

  /// @brief Field axisSelector, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::SelectorActiveAxis* ___axisSelector;

  /// @brief Field axisFields, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___axisFields;

  /// @brief Field qualifiedTable, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___qualifiedTable;

  /// @brief Field keyrefTable, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___keyrefTable;

  /// @brief Field tableDim, offset: 0x38, size: 0x4, def value: None
  int32_t ___tableDim;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ConstraintStruct, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::ConstraintStruct, ___constraint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ConstraintStruct, ___axisSelector) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ConstraintStruct, ___axisFields) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ConstraintStruct, ___qualifiedTable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ConstraintStruct, ___keyrefTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ConstraintStruct, ___tableDim) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ConstraintStruct);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ConstraintStruct*, "System.Xml.Schema", "ConstraintStruct");
