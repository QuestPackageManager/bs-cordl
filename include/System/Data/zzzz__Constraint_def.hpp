#pragma once
// IWYU pragma private; include "System/Data/Constraint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Constraint)
namespace System::Data {
class ConstraintCollection;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataRowAction;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class PropertyCollection;
}
// Forward declare root types
namespace System::Data {
class Constraint;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Constraint);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.Constraint
class CORDL_TYPE Constraint : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ConstraintName, put = set_ConstraintName)) ::StringW ConstraintName;

  __declspec(property(get = get_ExtendedProperties)) ::System::Data::PropertyCollection* ExtendedProperties;

  __declspec(property(get = get_InCollection, put = set_InCollection)) bool InCollection;

  __declspec(property(get = get_SchemaName, put = set_SchemaName)) ::StringW SchemaName;

  __declspec(property(get = get_Table)) ::System::Data::DataTable* Table;

  __declspec(property(get = get__DataSet)) ::System::Data::DataSet* _DataSet;

  /// @brief Field _dataSet, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet)) ::System::Data::DataSet* _dataSet;

  /// @brief Field _extendedProperties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__extendedProperties, put = __cordl_internal_set__extendedProperties)) ::System::Data::PropertyCollection* _extendedProperties;

  /// @brief Field _inCollection, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__inCollection, put = __cordl_internal_set__inCollection)) bool _inCollection;

  /// @brief Field _name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _schemaName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaName, put = __cordl_internal_set__schemaName)) ::StringW _schemaName;

  /// @brief Method CanBeRemovedFromCollection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraint, bool fThrowException);

  /// @brief Method CanEnableConstraint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanEnableConstraint();

  /// @brief Method CheckCanAddToCollection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CheckCanAddToCollection(::System::Data::ConstraintCollection* constraint);

  /// @brief Method CheckConstraint, addr 0x415685c, size 0x54, virtual false, abstract: false, final false
  inline void CheckConstraint();

  /// @brief Method CheckConstraint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CheckConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action);

  /// @brief Method CheckState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CheckState();

  /// @brief Method CheckStateForProperty, addr 0x41568b0, size 0xf8, virtual false, abstract: false, final false
  inline void CheckStateForProperty();

  /// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Data::Constraint* Clone(::System::Data::DataSet* destination);

  /// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Data::Constraint* Clone(::System::Data::DataSet* destination, bool ignoreNSforTableLookup);

  /// @brief Method ContainsColumn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ContainsColumn(::System::Data::DataColumn* column);

  /// @brief Method IsConstraintViolated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsConstraintViolated();

  static inline ::System::Data::Constraint* New_ctor();

  /// @brief Method ToString, addr 0x41569b0, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Data::DataSet* const& __cordl_internal_get__dataSet() const;

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::System::Data::PropertyCollection* const& __cordl_internal_get__extendedProperties() const;

  constexpr ::System::Data::PropertyCollection*& __cordl_internal_get__extendedProperties();

  constexpr bool const& __cordl_internal_get__inCollection() const;

  constexpr bool& __cordl_internal_get__inCollection();

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::StringW const& __cordl_internal_get__schemaName() const;

  constexpr ::StringW& __cordl_internal_get__schemaName();

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__extendedProperties(::System::Data::PropertyCollection* value);

  constexpr void __cordl_internal_set__inCollection(bool value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__schemaName(::StringW value);

  /// @brief Method .ctor, addr 0x41569bc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ConstraintName, addr 0x4156300, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ConstraintName();

  /// @brief Method get_ExtendedProperties, addr 0x41567f8, size 0x64, virtual false, abstract: false, final false
  inline ::System::Data::PropertyCollection* get_ExtendedProperties();

  /// @brief Method get_InCollection, addr 0x41567ac, size 0x8, virtual true, abstract: false, final false
  inline bool get_InCollection();

  /// @brief Method get_SchemaName, addr 0x4156744, size 0x38, virtual false, abstract: false, final false
  inline ::StringW get_SchemaName();

  /// @brief Method get_Table, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Data::DataTable* get_Table();

  /// @brief Method get__DataSet, addr 0x41569a8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Data::DataSet* get__DataSet();

  /// @brief Method set_ConstraintName, addr 0x4156308, size 0x1d4, virtual true, abstract: false, final false
  inline void set_ConstraintName(::StringW value);

  /// @brief Method set_InCollection, addr 0x41567b4, size 0x44, virtual true, abstract: false, final false
  inline void set_InCollection(bool value);

  /// @brief Method set_SchemaName, addr 0x415677c, size 0x30, virtual false, abstract: false, final false
  inline void set_SchemaName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Constraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Constraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Constraint(Constraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Constraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Constraint(Constraint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11369 };

  /// @brief Field _schemaName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____schemaName;

  /// @brief Field _inCollection, offset: 0x18, size: 0x1, def value: None
  bool ____inCollection;

  /// @brief Field _dataSet, offset: 0x20, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _name, offset: 0x28, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _extendedProperties, offset: 0x30, size: 0x8, def value: None
  ::System::Data::PropertyCollection* ____extendedProperties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Constraint, ____schemaName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::Constraint, ____inCollection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::Constraint, ____dataSet) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::Constraint, ____name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::Constraint, ____extendedProperties) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Constraint, 0x38>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::Constraint);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Constraint*, "System.Data", "Constraint");
