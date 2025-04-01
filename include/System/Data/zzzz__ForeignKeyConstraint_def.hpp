#pragma once
// IWYU pragma private; include "System/Data/ForeignKeyConstraint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__AcceptRejectRule_def.hpp"
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__Rule_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ForeignKeyConstraint)
namespace System::Data {
struct AcceptRejectRule;
}
namespace System::Data {
class ConstraintCollection;
}
namespace System::Data {
class Constraint;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataKey;
}
namespace System::Data {
class DataRelation;
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
struct Rule;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class ForeignKeyConstraint;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ForeignKeyConstraint);
// Dependencies System.Data.AcceptRejectRule, System.Data.Constraint, System.Data.DataKey, System.Data.Rule
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ForeignKeyConstraint
class CORDL_TYPE ForeignKeyConstraint : public ::System::Data::Constraint {
public:
  // Declarations
  __declspec(property(get = get_AcceptRejectRule, put = set_AcceptRejectRule)) ::System::Data::AcceptRejectRule AcceptRejectRule;

  __declspec(property(get = get_ChildColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> ChildColumnNames;

  __declspec(property(get = get_ChildKey)) ::System::Data::DataKey ChildKey;

  __declspec(property(get = get_Columns)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> Columns;

  __declspec(property(get = get_DeleteRule, put = set_DeleteRule)) ::System::Data::Rule DeleteRule;

  __declspec(property(get = get_ParentColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> ParentColumnNames;

  __declspec(property(get = get_ParentKey)) ::System::Data::DataKey ParentKey;

  __declspec(property(get = get_RelatedColumns)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> RelatedColumns;

  __declspec(property(get = get_RelatedColumnsReference)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> RelatedColumnsReference;

  __declspec(property(get = get_RelatedTable)) ::System::Data::DataTable* RelatedTable;

  __declspec(property(get = get_Table)) ::System::Data::DataTable* Table;

  __declspec(property(get = get_UpdateRule, put = set_UpdateRule)) ::System::Data::Rule UpdateRule;

  /// @brief Field _acceptRejectRule, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__acceptRejectRule, put = __cordl_internal_set__acceptRejectRule)) ::System::Data::AcceptRejectRule _acceptRejectRule;

  /// @brief Field _childColumnNames, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__childColumnNames, put = __cordl_internal_set__childColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _childColumnNames;

  /// @brief Field _childKey, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__childKey, put = __cordl_internal_set__childKey)) ::System::Data::DataKey _childKey;

  /// @brief Field _constraintName, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__constraintName, put = __cordl_internal_set__constraintName)) ::StringW _constraintName;

  /// @brief Field _deleteRule, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__deleteRule, put = __cordl_internal_set__deleteRule)) ::System::Data::Rule _deleteRule;

  /// @brief Field _parentColumnNames, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__parentColumnNames, put = __cordl_internal_set__parentColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _parentColumnNames;

  /// @brief Field _parentKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__parentKey, put = __cordl_internal_set__parentKey)) ::System::Data::DataKey _parentKey;

  /// @brief Field _parentTableName, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__parentTableName, put = __cordl_internal_set__parentTableName)) ::StringW _parentTableName;

  /// @brief Field _updateRule, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__updateRule, put = __cordl_internal_set__updateRule)) ::System::Data::Rule _updateRule;

  /// @brief Method CanBeRemovedFromCollection, addr 0x41799fc, size 0x8, virtual true, abstract: false, final false
  inline bool CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraints, bool fThrowException);

  /// @brief Method CanEnableConstraint, addr 0x4179f80, size 0x16c, virtual true, abstract: false, final false
  inline bool CanEnableConstraint();

  /// @brief Method CascadeCommit, addr 0x417a0ec, size 0x150, virtual false, abstract: false, final false
  inline void CascadeCommit(::System::Data::DataRow* row);

  /// @brief Method CascadeDelete, addr 0x417a24c, size 0x4a0, virtual false, abstract: false, final false
  inline void CascadeDelete(::System::Data::DataRow* row);

  /// @brief Method CascadeRollback, addr 0x417a750, size 0x1ec, virtual false, abstract: false, final false
  inline void CascadeRollback(::System::Data::DataRow* row);

  /// @brief Method CascadeUpdate, addr 0x417a93c, size 0x464, virtual false, abstract: false, final false
  inline void CascadeUpdate(::System::Data::DataRow* row);

  /// @brief Method CheckCanAddToCollection, addr 0x41798d4, size 0x128, virtual true, abstract: false, final false
  inline void CheckCanAddToCollection(::System::Data::ConstraintCollection* constraints);

  /// @brief Method CheckCanClearParentTable, addr 0x417ada0, size 0xdc, virtual false, abstract: false, final false
  inline void CheckCanClearParentTable(::System::Data::DataTable* table);

  /// @brief Method CheckCanRemoveParentRow, addr 0x417ae7c, size 0xac, virtual false, abstract: false, final false
  inline void CheckCanRemoveParentRow(::System::Data::DataRow* row);

  /// @brief Method CheckCascade, addr 0x417af44, size 0x100, virtual false, abstract: false, final false
  inline void CheckCascade(::System::Data::DataRow* row, ::System::Data::DataRowAction action);

  /// @brief Method CheckConstraint, addr 0x417b044, size 0x2d4, virtual true, abstract: false, final false
  inline void CheckConstraint(::System::Data::DataRow* childRow, ::System::Data::DataRowAction action);

  /// @brief Method CheckState, addr 0x417b578, size 0x4, virtual true, abstract: false, final false
  inline void CheckState();

  /// @brief Method Clone, addr 0x417b634, size 0x10, virtual true, abstract: false, final false
  inline ::System::Data::Constraint* Clone(::System::Data::DataSet* destination);

  /// @brief Method Clone, addr 0x417b644, size 0x738, virtual true, abstract: false, final false
  inline ::System::Data::Constraint* Clone(::System::Data::DataSet* destination, bool ignorNSforTableLookup);

  /// @brief Method Clone, addr 0x417bd98, size 0x604, virtual false, abstract: false, final false
  inline ::System::Data::ForeignKeyConstraint* Clone(::System::Data::DataTable* destination);

  /// @brief Method ContainsColumn, addr 0x417b5ec, size 0x48, virtual true, abstract: false, final false
  inline bool ContainsColumn(::System::Data::DataColumn* column);

  /// @brief Method Create, addr 0x417968c, size 0x168, virtual false, abstract: false, final false
  inline void Create(::StringW relationName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                     ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns);

  /// @brief Method Equals, addr 0x417c40c, size 0xf0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* key);

  /// @brief Method FindParentRelation, addr 0x417c524, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Data::DataRelation* FindParentRelation();

  /// @brief Method GetHashCode, addr 0x417c4fc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsConstraintViolated, addr 0x4179ac8, size 0x1f8, virtual true, abstract: false, final false
  inline bool IsConstraintViolated();

  /// @brief Method IsKeyNull, addr 0x4179a04, size 0xc4, virtual false, abstract: false, final false
  inline bool IsKeyNull(::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  static inline ::System::Data::ForeignKeyConstraint* New_ctor(::StringW constraintName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                                                               ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns);

  static inline ::System::Data::ForeignKeyConstraint* New_ctor(::StringW constraintName, ::StringW parentTableName, ::ArrayW<::StringW, ::Array<::StringW>*> parentColumnNames,
                                                               ::ArrayW<::StringW, ::Array<::StringW>*> childColumnNames, ::System::Data::AcceptRejectRule acceptRejectRule,
                                                               ::System::Data::Rule deleteRule, ::System::Data::Rule updateRule);

  static inline ::System::Data::ForeignKeyConstraint* New_ctor(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                                                               ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns);

  /// @brief Method NonVirtualCheckState, addr 0x417b318, size 0x260, virtual false, abstract: false, final false
  inline void NonVirtualCheckState();

  constexpr ::System::Data::AcceptRejectRule const& __cordl_internal_get__acceptRejectRule() const;

  constexpr ::System::Data::AcceptRejectRule& __cordl_internal_get__acceptRejectRule();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__childColumnNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__childColumnNames();

  constexpr ::System::Data::DataKey const& __cordl_internal_get__childKey() const;

  constexpr ::System::Data::DataKey& __cordl_internal_get__childKey();

  constexpr ::StringW const& __cordl_internal_get__constraintName() const;

  constexpr ::StringW& __cordl_internal_get__constraintName();

  constexpr ::System::Data::Rule const& __cordl_internal_get__deleteRule() const;

  constexpr ::System::Data::Rule& __cordl_internal_get__deleteRule();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__parentColumnNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__parentColumnNames();

  constexpr ::System::Data::DataKey const& __cordl_internal_get__parentKey() const;

  constexpr ::System::Data::DataKey& __cordl_internal_get__parentKey();

  constexpr ::StringW const& __cordl_internal_get__parentTableName() const;

  constexpr ::StringW& __cordl_internal_get__parentTableName();

  constexpr ::System::Data::Rule const& __cordl_internal_get__updateRule() const;

  constexpr ::System::Data::Rule& __cordl_internal_get__updateRule();

  constexpr void __cordl_internal_set__acceptRejectRule(::System::Data::AcceptRejectRule value);

  constexpr void __cordl_internal_set__childColumnNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__childKey(::System::Data::DataKey value);

  constexpr void __cordl_internal_set__constraintName(::StringW value);

  constexpr void __cordl_internal_set__deleteRule(::System::Data::Rule value);

  constexpr void __cordl_internal_set__parentColumnNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__parentKey(::System::Data::DataKey value);

  constexpr void __cordl_internal_set__parentTableName(::StringW value);

  constexpr void __cordl_internal_set__updateRule(::System::Data::Rule value);

  /// @brief Method .ctor, addr 0x4179640, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::StringW constraintName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                    ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns);

  /// @brief Method .ctor, addr 0x41797f4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::StringW constraintName, ::StringW parentTableName, ::ArrayW<::StringW, ::Array<::StringW>*> parentColumnNames, ::ArrayW<::StringW, ::Array<::StringW>*> childColumnNames,
                    ::System::Data::AcceptRejectRule acceptRejectRule, ::System::Data::Rule deleteRule, ::System::Data::Rule updateRule);

  /// @brief Method .ctor, addr 0x4179600, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> parentColumns,
                    ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> childColumns);

  /// @brief Method get_AcceptRejectRule, addr 0x417b57c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Data::AcceptRejectRule get_AcceptRejectRule();

  /// @brief Method get_ChildColumnNames, addr 0x41798c8, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ChildColumnNames();

  /// @brief Method get_ChildKey, addr 0x4179860, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Data::DataKey get_ChildKey();

  /// @brief Method get_Columns, addr 0x417987c, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_Columns();

  /// @brief Method get_DeleteRule, addr 0x417c39c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Data::Rule get_DeleteRule();

  /// @brief Method get_ParentColumnNames, addr 0x41798bc, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ParentColumnNames();

  /// @brief Method get_ParentKey, addr 0x417af28, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Data::DataKey get_ParentKey();

  /// @brief Method get_RelatedColumns, addr 0x417c504, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_RelatedColumns();

  /// @brief Method get_RelatedColumnsReference, addr 0x417bd7c, size 0x1c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_RelatedColumnsReference();

  /// @brief Method get_RelatedTable, addr 0x417c5ec, size 0x20, virtual true, abstract: false, final false
  inline ::System::Data::DataTable* get_RelatedTable();

  /// @brief Method get_Table, addr 0x417989c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Data::DataTable* get_Table();

  /// @brief Method get_UpdateRule, addr 0x417c60c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Data::Rule get_UpdateRule();

  /// @brief Method set_AcceptRejectRule, addr 0x417b598, size 0x54, virtual true, abstract: false, final false
  inline void set_AcceptRejectRule(::System::Data::AcceptRejectRule value);

  /// @brief Method set_DeleteRule, addr 0x417c3b8, size 0x54, virtual true, abstract: false, final false
  inline void set_DeleteRule(::System::Data::Rule value);

  /// @brief Method set_UpdateRule, addr 0x417c628, size 0x54, virtual true, abstract: false, final false
  inline void set_UpdateRule(::System::Data::Rule value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ForeignKeyConstraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ForeignKeyConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ForeignKeyConstraint(ForeignKeyConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ForeignKeyConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ForeignKeyConstraint(ForeignKeyConstraint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11442 };

  /// @brief Field _deleteRule, offset: 0x38, size: 0x4, def value: None
  ::System::Data::Rule ____deleteRule;

  /// @brief Field _updateRule, offset: 0x3c, size: 0x4, def value: None
  ::System::Data::Rule ____updateRule;

  /// @brief Field _acceptRejectRule, offset: 0x40, size: 0x4, def value: None
  ::System::Data::AcceptRejectRule ____acceptRejectRule;

  /// @brief Field _childKey, offset: 0x48, size: 0x8, def value: None
  ::System::Data::DataKey ____childKey;

  /// @brief Field _parentKey, offset: 0x50, size: 0x8, def value: None
  ::System::Data::DataKey ____parentKey;

  /// @brief Field _constraintName, offset: 0x58, size: 0x8, def value: None
  ::StringW ____constraintName;

  /// @brief Field _parentColumnNames, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____parentColumnNames;

  /// @brief Field _childColumnNames, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____childColumnNames;

  /// @brief Field _parentTableName, offset: 0x70, size: 0x8, def value: None
  ::StringW ____parentTableName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____deleteRule) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____updateRule) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____acceptRejectRule) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____childKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____parentKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____constraintName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____parentColumnNames) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____childColumnNames) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Data::ForeignKeyConstraint, ____parentTableName) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::ForeignKeyConstraint, 0x78>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::ForeignKeyConstraint);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ForeignKeyConstraint*, "System.Data", "ForeignKeyConstraint");
