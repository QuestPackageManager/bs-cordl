#pragma once
// IWYU pragma private; include "System/Data/UniqueConstraint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__Constraint_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniqueConstraint)
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
class Index;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class UniqueConstraint;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::UniqueConstraint);
// Dependencies System.Data.Constraint, System.Data.DataKey
namespace System::Data {
// Is value type: false
// CS Name: System.Data.UniqueConstraint
class CORDL_TYPE UniqueConstraint : public ::System::Data::Constraint {
public:
  // Declarations
  __declspec(property(get = get_ColumnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> ColumnNames;

  __declspec(property(get = get_Columns)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> Columns;

  __declspec(property(get = get_ColumnsReference)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ColumnsReference;

  __declspec(property(get = get_ConstraintIndex)) ::System::Data::Index* ConstraintIndex;

  __declspec(property(put = set_InCollection)) bool InCollection;

  __declspec(property(get = get_IsPrimaryKey)) bool IsPrimaryKey;

  __declspec(property(get = get_Key)) ::System::Data::DataKey Key;

  __declspec(property(get = get_Table)) ::System::Data::DataTable* Table;

  /// @brief Field _bPrimaryKey, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__bPrimaryKey, put = __cordl_internal_set__bPrimaryKey)) bool _bPrimaryKey;

  /// @brief Field _columnNames, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__columnNames, put = __cordl_internal_set__columnNames)) ::ArrayW<::StringW, ::Array<::StringW>*> _columnNames;

  /// @brief Field _constraintIndex, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__constraintIndex, put = __cordl_internal_set__constraintIndex)) ::System::Data::Index* _constraintIndex;

  /// @brief Field _constraintName, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__constraintName, put = __cordl_internal_set__constraintName)) ::StringW _constraintName;

  /// @brief Field _key, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) ::System::Data::DataKey _key;

  /// @brief Method CanBeRemovedFromCollection, addr 0x418ae80, size 0x16c, virtual true, abstract: false, final false
  inline bool CanBeRemovedFromCollection(::System::Data::ConstraintCollection* constraints, bool fThrowException);

  /// @brief Method CanEnableConstraint, addr 0x418afec, size 0x4c, virtual true, abstract: false, final false
  inline bool CanEnableConstraint();

  /// @brief Method CheckCanAddToCollection, addr 0x418ae7c, size 0x4, virtual true, abstract: false, final false
  inline void CheckCanAddToCollection(::System::Data::ConstraintCollection* constraints);

  /// @brief Method CheckConstraint, addr 0x418b298, size 0xf8, virtual true, abstract: false, final false
  inline void CheckConstraint(::System::Data::DataRow* row, ::System::Data::DataRowAction action);

  /// @brief Method CheckState, addr 0x418ae64, size 0xc, virtual true, abstract: false, final false
  inline void CheckState();

  /// @brief Method Clone, addr 0x418b3a4, size 0x10, virtual true, abstract: false, final false
  inline ::System::Data::Constraint* Clone(::System::Data::DataSet* destination);

  /// @brief Method Clone, addr 0x418b3b4, size 0x550, virtual true, abstract: false, final false
  inline ::System::Data::Constraint* Clone(::System::Data::DataSet* destination, bool ignorNSforTableLookup);

  /// @brief Method Clone, addr 0x418b904, size 0x4b4, virtual false, abstract: false, final false
  inline ::System::Data::UniqueConstraint* Clone(::System::Data::DataTable* table);

  /// @brief Method ConstraintIndexClear, addr 0x418ae0c, size 0x20, virtual false, abstract: false, final false
  inline void ConstraintIndexClear();

  /// @brief Method ConstraintIndexInitialize, addr 0x418ae2c, size 0x38, virtual false, abstract: false, final false
  inline void ConstraintIndexInitialize();

  /// @brief Method ContainsColumn, addr 0x418b398, size 0xc, virtual true, abstract: false, final false
  inline bool ContainsColumn(::System::Data::DataColumn* column);

  /// @brief Method Create, addr 0x418ac28, size 0xec, virtual false, abstract: false, final false
  inline void Create(::StringW constraintName, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns);

  /// @brief Method Equals, addr 0x418be08, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* key2);

  /// @brief Method GetHashCode, addr 0x418bec0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsConstraintViolated, addr 0x418b038, size 0x260, virtual true, abstract: false, final false
  inline bool IsConstraintViolated();

  static inline ::System::Data::UniqueConstraint* New_ctor(::System::Data::DataColumn* column);

  static inline ::System::Data::UniqueConstraint* New_ctor(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns);

  static inline ::System::Data::UniqueConstraint* New_ctor(::StringW name, ::ArrayW<::StringW, ::Array<::StringW>*> columnNames, bool isPrimaryKey);

  static inline ::System::Data::UniqueConstraint* New_ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns);

  static inline ::System::Data::UniqueConstraint* New_ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns, bool isPrimaryKey);

  /// @brief Method NonVirtualCheckState, addr 0x418ae70, size 0xc, virtual false, abstract: false, final false
  inline void NonVirtualCheckState();

  constexpr bool const& __cordl_internal_get__bPrimaryKey() const;

  constexpr bool& __cordl_internal_get__bPrimaryKey();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__columnNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__columnNames();

  constexpr ::System::Data::Index* const& __cordl_internal_get__constraintIndex() const;

  constexpr ::System::Data::Index*& __cordl_internal_get__constraintIndex();

  constexpr ::StringW const& __cordl_internal_get__constraintName() const;

  constexpr ::StringW& __cordl_internal_get__constraintName();

  constexpr ::System::Data::DataKey const& __cordl_internal_get__key() const;

  constexpr ::System::Data::DataKey& __cordl_internal_get__key();

  constexpr void __cordl_internal_set__bPrimaryKey(bool value);

  constexpr void __cordl_internal_set__columnNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__constraintIndex(::System::Data::Index* value);

  constexpr void __cordl_internal_set__constraintName(::StringW value);

  constexpr void __cordl_internal_set__key(::System::Data::DataKey value);

  /// @brief Method .ctor, addr 0x418ab78, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataColumn* column);

  /// @brief Method .ctor, addr 0x418ad48, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns);

  /// @brief Method .ctor, addr 0x418ad78, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::StringW, ::Array<::StringW>*> columnNames, bool isPrimaryKey);

  /// @brief Method .ctor, addr 0x418ad14, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns);

  /// @brief Method .ctor, addr 0x418adb4, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns, bool isPrimaryKey);

  /// @brief Method get_ColumnNames, addr 0x418adf8, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_ColumnNames();

  /// @brief Method get_Columns, addr 0x418bdb8, size 0xc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_Columns();

  /// @brief Method get_ColumnsReference, addr 0x418b390, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_ColumnsReference();

  /// @brief Method get_ConstraintIndex, addr 0x418ae04, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::Index* get_ConstraintIndex();

  /// @brief Method get_IsPrimaryKey, addr 0x418bdc4, size 0x44, virtual false, abstract: false, final false
  inline bool get_IsPrimaryKey();

  /// @brief Method get_Key, addr 0x418bf18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataKey get_Key();

  /// @brief Method get_Table, addr 0x418bf20, size 0x34, virtual true, abstract: false, final false
  inline ::System::Data::DataTable* get_Table();

  /// @brief Method set_InCollection, addr 0x418bec8, size 0x50, virtual true, abstract: false, final false
  inline void set_InCollection(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniqueConstraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniqueConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniqueConstraint(UniqueConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniqueConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniqueConstraint(UniqueConstraint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11473 };

  /// @brief Field _key, offset: 0x38, size: 0x8, def value: None
  ::System::Data::DataKey ____key;

  /// @brief Field _constraintIndex, offset: 0x40, size: 0x8, def value: None
  ::System::Data::Index* ____constraintIndex;

  /// @brief Field _bPrimaryKey, offset: 0x48, size: 0x1, def value: None
  bool ____bPrimaryKey;

  /// @brief Field _constraintName, offset: 0x50, size: 0x8, def value: None
  ::StringW ____constraintName;

  /// @brief Field _columnNames, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____columnNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::UniqueConstraint, ____key) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::UniqueConstraint, ____constraintIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::UniqueConstraint, ____bPrimaryKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::UniqueConstraint, ____constraintName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::UniqueConstraint, ____columnNames) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::UniqueConstraint, 0x60>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::UniqueConstraint);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::UniqueConstraint*, "System.Data", "UniqueConstraint");
