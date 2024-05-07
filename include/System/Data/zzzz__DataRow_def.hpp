#pragma once
// IWYU pragma private; include "System/Data/DataRow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataRowAction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRow)
namespace System::Collections {
class ArrayList;
}
namespace System::Data {
class DataColumnCollection;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataError;
}
namespace System::Data {
struct DataKey;
}
namespace System::Data {
class DataRelation;
}
namespace System::Data {
class DataRowBuilder;
}
namespace System::Data {
struct DataRowState;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
struct DataViewRowState;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataRow;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRow);
// Type: System.Data::DataRow
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataRow*
class CORDL_TYPE DataRow : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasErrors)) bool HasErrors;

  __declspec(property(get = get_HasPropertyChanged)) bool HasPropertyChanged;

  __declspec(property(put = set_Item))::StringW Item;

  __declspec(property(get = get_Item))::System::Object* Item[];

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(put = set_ItemArray))::ArrayW<::System::Object*, ::Array<::System::Object*>*> ItemArray;

  __declspec(property(get = get_LastChangedColumn, put = set_LastChangedColumn))::System::Data::DataColumn* LastChangedColumn;

  __declspec(property(get = get_RBTreeNodeId, put = set_RBTreeNodeId)) int32_t RBTreeNodeId;

  __declspec(property(get = get_RowError, put = set_RowError))::StringW RowError;

  __declspec(property(get = get_RowState))::System::Data::DataRowState RowState;

  __declspec(property(get = get_Table))::System::Data::DataTable* Table;

  /// @brief Field _action, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__action, put = __cordl_internal_set__action))::System::Data::DataRowAction _action;

  /// @brief Field _columns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__columns, put = __cordl_internal_set__columns))::System::Data::DataColumnCollection* _columns;

  /// @brief Field _countColumnChange, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__countColumnChange, put = __cordl_internal_set__countColumnChange)) int32_t _countColumnChange;

  /// @brief Field _error, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__error, put = __cordl_internal_set__error))::System::Data::DataError* _error;

  /// @brief Field _inCascade, offset 0x3e, size 0x1
  __declspec(property(get = __cordl_internal_get__inCascade, put = __cordl_internal_set__inCascade)) bool _inCascade;

  /// @brief Field _inChangingEvent, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__inChangingEvent, put = __cordl_internal_set__inChangingEvent)) bool _inChangingEvent;

  /// @brief Field _inDeletingEvent, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get__inDeletingEvent, put = __cordl_internal_set__inDeletingEvent)) bool _inDeletingEvent;

  /// @brief Field _lastChangedColumn, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__lastChangedColumn, put = __cordl_internal_set__lastChangedColumn))::System::Data::DataColumn* _lastChangedColumn;

  /// @brief Field _newRecord, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__newRecord, put = __cordl_internal_set__newRecord)) int32_t _newRecord;

  /// @brief Field _objectID, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _oldRecord, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__oldRecord, put = __cordl_internal_set__oldRecord)) int32_t _oldRecord;

  /// @brief Field _rbTreeNodeId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__rbTreeNodeId, put = __cordl_internal_set__rbTreeNodeId)) int32_t _rbTreeNodeId;

  /// @brief Field _rowID, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rowID, put = __cordl_internal_set__rowID)) int64_t _rowID;

  /// @brief Field _table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table))::System::Data::DataTable* _table;

  /// @brief Field _tempRecord, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__tempRecord, put = __cordl_internal_set__tempRecord)) int32_t _tempRecord;

  __declspec(property(get = get_rowID, put = set_rowID)) int64_t rowID;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Method AcceptChanges, addr 0x2ca72ac, size 0x378, virtual false, abstract: false, final false
  inline void AcceptChanges();

  /// @brief Method BeginEdit, addr 0x2ca7624, size 0x4, virtual false, abstract: false, final false
  inline void BeginEdit();

  /// @brief Method BeginEditInternal, addr 0x2ca6c14, size 0xc0, virtual false, abstract: false, final false
  inline bool BeginEditInternal();

  /// @brief Method CancelEdit, addr 0x2ca6d10, size 0x5c, virtual false, abstract: false, final false
  inline void CancelEdit();

  /// @brief Method CheckColumn, addr 0x2ca6b24, size 0x8c, virtual false, abstract: false, final false
  inline void CheckColumn(::System::Data::DataColumn* column);

  /// @brief Method CheckForLoops, addr 0x2ca65f0, size 0xd4, virtual false, abstract: false, final false
  inline void CheckForLoops(::System::Data::DataRelation* rel);

  /// @brief Method CheckInTable, addr 0x2ca7628, size 0x3c, virtual false, abstract: false, final false
  inline void CheckInTable();

  /// @brief Method ClearError, addr 0x2ca79e8, size 0x2c, virtual false, abstract: false, final false
  inline void ClearError(::System::Data::DataColumn* column);

  /// @brief Method ClearErrors, addr 0x2ca79bc, size 0x2c, virtual false, abstract: false, final false
  inline void ClearErrors();

  /// @brief Method CopyValuesIntoStore, addr 0x2ca91f0, size 0x2f8, virtual false, abstract: false, final false
  inline int32_t CopyValuesIntoStore(::System::Collections::ArrayList* storeList, ::System::Collections::ArrayList* nullbitList, int32_t storeIndex);

  /// @brief Method Delete, addr 0x2ca7664, size 0x60, virtual false, abstract: false, final false
  inline void Delete();

  /// @brief Method EndEdit, addr 0x2ca6d6c, size 0xdc, virtual false, abstract: false, final false
  inline void EndEdit();

  /// @brief Method GetChildRows, addr 0x2ca7ac0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> GetChildRows(::System::Data::DataRelation* relation);

  /// @brief Method GetChildRows, addr 0x2ca7ac8, size 0x12c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> GetChildRows(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version);

  /// @brief Method GetColumnError, addr 0x2ca7938, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetColumnError(::System::Data::DataColumn* column);

  /// @brief Method GetColumnValues, addr 0x2ca7f00, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetColumnValues(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns);

  /// @brief Method GetColumnValues, addr 0x2ca7f08, size 0x58, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetColumnValues(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns,
                                                                                  ::System::Data::DataRowVersion version);

  /// @brief Method GetColumnsInError, addr 0x2ca7a28, size 0x98, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> GetColumnsInError();

  /// @brief Method GetCurrentRecordNo, addr 0x2ca7fac, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetCurrentRecordNo();

  /// @brief Method GetDataColumn, addr 0x2ca67c0, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* GetDataColumn(::StringW columnName);

  /// @brief Method GetDefaultRecord, addr 0x2ca6bb0, size 0x64, virtual false, abstract: false, final false
  inline int32_t GetDefaultRecord();

  /// @brief Method GetDefaultRowVersion, addr 0x2ca8024, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Data::DataRowVersion GetDefaultRowVersion(::System::Data::DataViewRowState viewState);

  /// @brief Method GetKeyValues, addr 0x2ca7f88, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetKeyValues(::System::Data::DataKey key);

  /// @brief Method GetKeyValues, addr 0x2ca7f60, size 0x28, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetKeyValues(::System::Data::DataKey key, ::System::Data::DataRowVersion version);

  /// @brief Method GetNestedParentCount, addr 0x2ca66cc, size 0xc8, virtual false, abstract: false, final false
  inline int32_t GetNestedParentCount();

  /// @brief Method GetNestedParentRow, addr 0x2ca7d10, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* GetNestedParentRow(::System::Data::DataRowVersion version);

  /// @brief Method GetOriginalRecordNo, addr 0x2ca7fe8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetOriginalRecordNo();

  /// @brief Method GetParentRow, addr 0x2ca66c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* GetParentRow(::System::Data::DataRelation* relation);

  /// @brief Method GetParentRow, addr 0x2ca7bf4, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* GetParentRow(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version);

  /// @brief Method GetParentRows, addr 0x2ca7dcc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> GetParentRows(::System::Data::DataRelation* relation);

  /// @brief Method GetParentRows, addr 0x2ca7dd4, size 0x12c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> GetParentRows(::System::Data::DataRelation* relation, ::System::Data::DataRowVersion version);

  /// @brief Method GetProposedRecordNo, addr 0x2ca6cd4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetProposedRecordNo();

  /// @brief Method GetRecordFromVersion, addr 0x2ca6e8c, size 0x60, virtual false, abstract: false, final false
  inline int32_t GetRecordFromVersion(::System::Data::DataRowVersion version);

  /// @brief Method GetRecordState, addr 0x2ca8060, size 0x58, virtual false, abstract: false, final false
  inline ::System::Data::DataViewRowState GetRecordState(int32_t record);

  /// @brief Method HasKeyChanged, addr 0x2ca80b8, size 0xc, virtual false, abstract: false, final false
  inline bool HasKeyChanged(::System::Data::DataKey key);

  /// @brief Method HasKeyChanged, addr 0x2ca80c4, size 0x88, virtual false, abstract: false, final false
  inline bool HasKeyChanged(::System::Data::DataKey key, ::System::Data::DataRowVersion version1, ::System::Data::DataRowVersion version2);

  /// @brief Method HasVersion, addr 0x2ca814c, size 0x8c, virtual false, abstract: false, final false
  inline bool HasVersion(::System::Data::DataRowVersion version);

  /// @brief Method HaveValuesChanged, addr 0x2ca81d8, size 0xc, virtual false, abstract: false, final false
  inline bool HaveValuesChanged(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns);

  /// @brief Method HaveValuesChanged, addr 0x2ca81e4, size 0xac, virtual false, abstract: false, final false
  inline bool HaveValuesChanged(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> columns, ::System::Data::DataRowVersion version1, ::System::Data::DataRowVersion version2);

  static inline ::System::Data::DataRow* New_ctor(::System::Data::DataRowBuilder* builder);

  /// @brief Method RejectChanges, addr 0x2ca8290, size 0x5e4, virtual false, abstract: false, final false
  inline void RejectChanges();

  /// @brief Method ResetLastChangedColumn, addr 0x2ca63b8, size 0xc, virtual false, abstract: false, final false
  inline void ResetLastChangedColumn();

  /// @brief Method RowErrorChanged, addr 0x2ca6350, size 0x50, virtual false, abstract: false, final false
  inline void RowErrorChanged();

  /// @brief Method SetColumnError, addr 0x2ca772c, size 0x20c, virtual false, abstract: false, final false
  inline void SetColumnError(::System::Data::DataColumn* column, ::StringW error);

  /// @brief Method SetColumnError, addr 0x2ca76c4, size 0x68, virtual false, abstract: false, final false
  inline void SetColumnError(int32_t columnIndex, ::StringW error);

  /// @brief Method SetKeyValues, addr 0x2ca8874, size 0x118, virtual false, abstract: false, final false
  inline void SetKeyValues(::System::Data::DataKey key, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keyValues);

  /// @brief Method SetNestedParentRow, addr 0x2ca898c, size 0x400, virtual false, abstract: false, final false
  inline void SetNestedParentRow(::System::Data::DataRow* parentRow, bool setNonNested);

  /// @brief Method SetParentRowToDBNull, addr 0x2ca8d8c, size 0x2e4, virtual false, abstract: false, final false
  inline void SetParentRowToDBNull();

  /// @brief Method SetParentRowToDBNull, addr 0x2ca9070, size 0x180, virtual false, abstract: false, final false
  inline void SetParentRowToDBNull(::System::Data::DataRelation* relation);

  constexpr ::System::Data::DataRowAction const& __cordl_internal_get__action() const;

  constexpr ::System::Data::DataRowAction& __cordl_internal_get__action();

  constexpr ::System::Data::DataColumnCollection*& __cordl_internal_get__columns();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumnCollection*> const& __cordl_internal_get__columns() const;

  constexpr int32_t const& __cordl_internal_get__countColumnChange() const;

  constexpr int32_t& __cordl_internal_get__countColumnChange();

  constexpr ::System::Data::DataError*& __cordl_internal_get__error();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataError*> const& __cordl_internal_get__error() const;

  constexpr bool const& __cordl_internal_get__inCascade() const;

  constexpr bool& __cordl_internal_get__inCascade();

  constexpr bool const& __cordl_internal_get__inChangingEvent() const;

  constexpr bool& __cordl_internal_get__inChangingEvent();

  constexpr bool const& __cordl_internal_get__inDeletingEvent() const;

  constexpr bool& __cordl_internal_get__inDeletingEvent();

  constexpr ::System::Data::DataColumn*& __cordl_internal_get__lastChangedColumn();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataColumn*> const& __cordl_internal_get__lastChangedColumn() const;

  constexpr int32_t const& __cordl_internal_get__newRecord() const;

  constexpr int32_t& __cordl_internal_get__newRecord();

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr int32_t const& __cordl_internal_get__oldRecord() const;

  constexpr int32_t& __cordl_internal_get__oldRecord();

  constexpr int32_t const& __cordl_internal_get__rbTreeNodeId() const;

  constexpr int32_t& __cordl_internal_get__rbTreeNodeId();

  constexpr int64_t const& __cordl_internal_get__rowID() const;

  constexpr int64_t& __cordl_internal_get__rowID();

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataTable*> const& __cordl_internal_get__table() const;

  constexpr int32_t const& __cordl_internal_get__tempRecord() const;

  constexpr int32_t& __cordl_internal_get__tempRecord();

  constexpr void __cordl_internal_set__action(::System::Data::DataRowAction value);

  constexpr void __cordl_internal_set__columns(::System::Data::DataColumnCollection* value);

  constexpr void __cordl_internal_set__countColumnChange(int32_t value);

  constexpr void __cordl_internal_set__error(::System::Data::DataError* value);

  constexpr void __cordl_internal_set__inCascade(bool value);

  constexpr void __cordl_internal_set__inChangingEvent(bool value);

  constexpr void __cordl_internal_set__inDeletingEvent(bool value);

  constexpr void __cordl_internal_set__lastChangedColumn(::System::Data::DataColumn* value);

  constexpr void __cordl_internal_set__newRecord(int32_t value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__oldRecord(int32_t value);

  constexpr void __cordl_internal_set__rbTreeNodeId(int32_t value);

  constexpr void __cordl_internal_set__rowID(int64_t value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  constexpr void __cordl_internal_set__tempRecord(int32_t value);

  /// @brief Method .ctor, addr 0x2ca6024, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataRowBuilder* builder);

  static inline int32_t getStaticF_s_objectTypeCount();

  /// @brief Method get_HasErrors, addr 0x2ca7a14, size 0x14, virtual false, abstract: false, final false
  inline bool get_HasErrors();

  /// @brief Method get_HasPropertyChanged, addr 0x2ca60f4, size 0x10, virtual false, abstract: false, final false
  inline bool get_HasPropertyChanged();

  /// @brief Method get_Item, addr 0x2ca65ac, size 0x3c, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Data::DataColumn* column);

  /// @brief Method get_Item, addr 0x2ca6e48, size 0x44, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(::System::Data::DataColumn* column, ::System::Data::DataRowVersion version);

  /// @brief Method get_LastChangedColumn, addr 0x2ca60c4, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* get_LastChangedColumn();

  /// @brief Method get_RBTreeNodeId, addr 0x2ca6104, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RBTreeNodeId();

  /// @brief Method get_RowError, addr 0x2ca61bc, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW get_RowError();

  /// @brief Method get_RowState, addr 0x2ca63c4, size 0x1e8, virtual false, abstract: false, final false
  inline ::System::Data::DataRowState get_RowState();

  /// @brief Method get_Table, addr 0x2ca65e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_Table();

  /// @brief Method get_rowID, addr 0x2ca63a0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_rowID();

  static inline void setStaticF_s_objectTypeCount(int32_t value);

  /// @brief Method set_Item, addr 0x2ca682c, size 0x2f8, virtual false, abstract: false, final false
  inline void set_Item(::System::Data::DataColumn* column, ::System::Object* value);

  /// @brief Method set_Item, addr 0x2ca6794, size 0x2c, virtual false, abstract: false, final false
  inline void set_Item(::StringW columnName, ::System::Object* value);

  /// @brief Method set_ItemArray, addr 0x2ca6eec, size 0x3c0, virtual false, abstract: false, final false
  inline void set_ItemArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method set_LastChangedColumn, addr 0x2ca60e0, size 0x14, virtual false, abstract: false, final false
  inline void set_LastChangedColumn(::System::Data::DataColumn* value);

  /// @brief Method set_RBTreeNodeId, addr 0x2ca610c, size 0xb0, virtual false, abstract: false, final false
  inline void set_RBTreeNodeId(int32_t value);

  /// @brief Method set_RowError, addr 0x2ca6218, size 0x138, virtual false, abstract: false, final false
  inline void set_RowError(::StringW value);

  /// @brief Method set_rowID, addr 0x2ca63a8, size 0x10, virtual false, abstract: false, final false
  inline void set_rowID(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRow(DataRow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRow(DataRow const&) = delete;

  /// @brief Field _table, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _columns, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataColumnCollection* ____columns;

  /// @brief Field _oldRecord, offset: 0x20, size: 0x4, def value: None
  int32_t ____oldRecord;

  /// @brief Field _newRecord, offset: 0x24, size: 0x4, def value: None
  int32_t ____newRecord;

  /// @brief Field _tempRecord, offset: 0x28, size: 0x4, def value: None
  int32_t ____tempRecord;

  /// @brief Field _rowID, offset: 0x30, size: 0x8, def value: None
  int64_t ____rowID;

  /// @brief Field _action, offset: 0x38, size: 0x4, def value: None
  ::System::Data::DataRowAction ____action;

  /// @brief Field _inChangingEvent, offset: 0x3c, size: 0x1, def value: None
  bool ____inChangingEvent;

  /// @brief Field _inDeletingEvent, offset: 0x3d, size: 0x1, def value: None
  bool ____inDeletingEvent;

  /// @brief Field _inCascade, offset: 0x3e, size: 0x1, def value: None
  bool ____inCascade;

  /// @brief Field _lastChangedColumn, offset: 0x40, size: 0x8, def value: None
  ::System::Data::DataColumn* ____lastChangedColumn;

  /// @brief Field _countColumnChange, offset: 0x48, size: 0x4, def value: None
  int32_t ____countColumnChange;

  /// @brief Field _error, offset: 0x50, size: 0x8, def value: None
  ::System::Data::DataError* ____error;

  /// @brief Field _rbTreeNodeId, offset: 0x58, size: 0x4, def value: None
  int32_t ____rbTreeNodeId;

  /// @brief Field _objectID, offset: 0x5c, size: 0x4, def value: None
  int32_t ____objectID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRow, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____columns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____oldRecord) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____newRecord) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____tempRecord) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____rowID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____action) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____inChangingEvent) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____inDeletingEvent) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____inCascade) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____lastChangedColumn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____countColumnChange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____error) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____rbTreeNodeId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRow, ____objectID) == 0x5c, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRow);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRow*, "System.Data", "DataRow");
