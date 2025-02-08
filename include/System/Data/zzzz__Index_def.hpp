#pragma once
// IWYU pragma private; include "System/Data/Index.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Index)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::ComponentModel {
class ListChangedEventArgs;
}
namespace System::ComponentModel {
struct ListChangedType;
}
namespace System::Data {
class DataColumnCollection;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class DataViewListener;
}
namespace System::Data {
struct DataViewRowState;
}
namespace System::Data {
class IFilter;
}
namespace System::Data {
struct IndexField;
}
namespace System::Data {
class Index_IndexTree;
}
namespace System::Data {
class Index___c;
}
namespace System::Data {
class Index___c__DisplayClass86_0;
}
namespace System::Data {
template <typename TElem, typename T1, typename T2, typename T3, typename T4> class Listeners_1_Action_4;
}
namespace System::Data {
template <typename TElem, typename T1, typename TResult> class Listeners_1_Func_2;
}
namespace System::Data {
template <typename TElem> class Listeners_1;
}
namespace System::Data {
template <typename K> struct RBTree_1_RBTreeEnumerator;
}
namespace System::Data {
struct Range;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class Object;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Data {
class Index;
}
namespace System::Data {
class Index_IndexTree;
}
namespace System::Data {
class Index___c;
}
namespace System::Data {
class Index___c__DisplayClass86_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Index);
MARK_REF_PTR_T(::System::Data::Index_IndexTree);
MARK_REF_PTR_T(::System::Data::Index___c);
MARK_REF_PTR_T(::System::Data::Index___c__DisplayClass86_0);
// Dependencies System.Data.RBTree`1<K>
namespace System::Data {
// Is value type: false
// CS Name: System.Data.Index/IndexTree
class CORDL_TYPE Index_IndexTree : public ::System::Data::RBTree_1<int32_t> {
public:
  // Declarations
  /// @brief Field _index, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) ::System::Data::Index* _index;

  /// @brief Method CompareNode, addr 0x418dd94, size 0x18, virtual true, abstract: false, final false
  inline int32_t CompareNode(int32_t record1, int32_t record2);

  /// @brief Method CompareSateliteTreeNode, addr 0x418ddac, size 0x18, virtual true, abstract: false, final false
  inline int32_t CompareSateliteTreeNode(int32_t record1, int32_t record2);

  static inline ::System::Data::Index_IndexTree* New_ctor(::System::Data::Index* index);

  constexpr ::System::Data::Index* const& __cordl_internal_get__index() const;

  constexpr ::System::Data::Index*& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__index(::System::Data::Index* value);

  /// @brief Method .ctor, addr 0x418d4c4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::Index* index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Index_IndexTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Index_IndexTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Index_IndexTree(Index_IndexTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Index_IndexTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Index_IndexTree(Index_IndexTree const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11464 };

  /// @brief Field _index, offset: 0x40, size: 0x8, def value: None
  ::System::Data::Index* ____index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Index_IndexTree, ____index) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Index_IndexTree, 0x48>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.Index/<>c
class CORDL_TYPE Index___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Data::Index___c* __9;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__22_0,
                      put = setStaticF___9__22_0)) ::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, bool>* __9__22_0;

  /// @brief Field <>9__85_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__85_0, put = setStaticF___9__85_0)) ::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*,
                                                                                                                    ::System::ComponentModel::ListChangedEventArgs*, bool, bool>* __9__85_0;

  static inline ::System::Data::Index___c* New_ctor();

  /// @brief Method <OnListChanged>b__85_0, addr 0x418de34, size 0x1c, virtual false, abstract: false, final false
  inline void _OnListChanged_b__85_0(::System::Data::DataViewListener* listener, ::System::ComponentModel::ListChangedEventArgs* args, bool arg2, bool arg3);

  /// @brief Method <.ctor>b__22_0, addr 0x418de28, size 0xc, virtual false, abstract: false, final false
  inline bool __ctor_b__22_0(::System::Data::DataViewListener* listener);

  /// @brief Method .ctor, addr 0x418de20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Data::Index___c* getStaticF___9();

  static inline ::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, bool>* getStaticF___9__22_0();

  static inline ::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool>*
  getStaticF___9__85_0();

  static inline void setStaticF___9(::System::Data::Index___c* value);

  static inline void setStaticF___9__22_0(::System::Data::Listeners_1_Func_2<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, bool>* value);

  static inline void
  setStaticF___9__85_0(::System::Data::Listeners_1_Action_4<::System::Data::DataViewListener*, ::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedEventArgs*, bool, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Index___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Index___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Index___c(Index___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Index___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Index___c(Index___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Index___c, 0x10>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.ComponentModel.ListChangedType, System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.Index/<>c__DisplayClass86_0
class CORDL_TYPE Index___c__DisplayClass86_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field changedType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_changedType, put = __cordl_internal_set_changedType)) ::System::ComponentModel::ListChangedType changedType;

  static inline ::System::Data::Index___c__DisplayClass86_0* New_ctor();

  /// @brief Method <MaintainDataView>b__0, addr 0x418de50, size 0x30, virtual false, abstract: false, final false
  inline void _MaintainDataView_b__0(::System::Data::DataViewListener* listener, ::System::ComponentModel::ListChangedType type, ::System::Data::DataRow* row, bool track);

  constexpr ::System::ComponentModel::ListChangedType const& __cordl_internal_get_changedType() const;

  constexpr ::System::ComponentModel::ListChangedType& __cordl_internal_get_changedType();

  constexpr void __cordl_internal_set_changedType(::System::ComponentModel::ListChangedType value);

  /// @brief Method .ctor, addr 0x418d63c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Index___c__DisplayClass86_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Index___c__DisplayClass86_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Index___c__DisplayClass86_0(Index___c__DisplayClass86_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Index___c__DisplayClass86_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Index___c__DisplayClass86_0(Index___c__DisplayClass86_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11466 };

  /// @brief Field changedType, offset: 0x10, size: 0x4, def value: None
  ::System::ComponentModel::ListChangedType ___changedType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Index___c__DisplayClass86_0, ___changedType) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Index___c__DisplayClass86_0, 0x18>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Data.DataViewRowState, System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.Index
class CORDL_TYPE Index : public ::System::Object {
public:
  // Declarations
  using IndexTree = ::System::Data::Index_IndexTree;

  using __c = ::System::Data::Index___c;

  using __c__DisplayClass86_0 = ::System::Data::Index___c__DisplayClass86_0;

  __declspec(property(get = get_DoListChanged)) bool DoListChanged;

  __declspec(property(get = get_HasDuplicates)) bool HasDuplicates;

  __declspec(property(get = get_HasRemoteAggregate)) bool HasRemoteAggregate;

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  __declspec(property(get = get_RecordCount)) int32_t RecordCount;

  __declspec(property(get = get_RecordStates)) ::System::Data::DataViewRowState RecordStates;

  __declspec(property(get = get_RefCount)) int32_t RefCount;

  __declspec(property(get = get_RowFilter)) ::System::Data::IFilter* RowFilter;

  __declspec(property(get = get_Table)) ::System::Data::DataTable* Table;

  /// @brief Field _comparison, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__comparison, put = __cordl_internal_set__comparison)) ::System::Comparison_1<::System::Data::DataRow*>* _comparison;

  /// @brief Field _hasRemoteAggregate, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get__hasRemoteAggregate, put = __cordl_internal_set__hasRemoteAggregate)) bool _hasRemoteAggregate;

  /// @brief Field _indexFields, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__indexFields, put = __cordl_internal_set__indexFields)) ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> _indexFields;

  /// @brief Field _isSharable, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__isSharable, put = __cordl_internal_set__isSharable)) bool _isSharable;

  /// @brief Field _listeners, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__listeners, put = __cordl_internal_set__listeners)) ::System::Data::Listeners_1<::System::Data::DataViewListener*>* _listeners;

  /// @brief Field _objectID, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _recordCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__recordCount, put = __cordl_internal_set__recordCount)) int32_t _recordCount;

  /// @brief Field _recordStates, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__recordStates, put = __cordl_internal_set__recordStates)) ::System::Data::DataViewRowState _recordStates;

  /// @brief Field _records, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__records, put = __cordl_internal_set__records)) ::System::Data::Index_IndexTree* _records;

  /// @brief Field _refCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__refCount, put = __cordl_internal_set__refCount)) int32_t _refCount;

  /// @brief Field _rowFilter, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__rowFilter, put = __cordl_internal_set__rowFilter)) ::System::WeakReference* _rowFilter;

  /// @brief Field _suspendEvents, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__suspendEvents, put = __cordl_internal_set__suspendEvents)) bool _suspendEvents;

  /// @brief Field _table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Method AcceptRecord, addr 0x418b760, size 0x2c, virtual false, abstract: false, final false
  inline bool AcceptRecord(int32_t record);

  /// @brief Method AcceptRecord, addr 0x418b78c, size 0x194, virtual false, abstract: false, final false
  inline bool AcceptRecord(int32_t record, ::System::Data::IFilter* filter);

  /// @brief Method AddRef, addr 0x418b9d8, size 0x1f0, virtual false, abstract: false, final false
  inline void AddRef();

  /// @brief Method ApplyChangeAction, addr 0x418bd84, size 0xa4, virtual false, abstract: false, final false
  inline void ApplyChangeAction(int32_t record, int32_t action, int32_t changeRecord);

  /// @brief Method CheckUnique, addr 0x418c1b4, size 0x18, virtual false, abstract: false, final false
  inline bool CheckUnique();

  /// @brief Method CompareDataRows, addr 0x418c318, size 0x6c, virtual false, abstract: false, final false
  inline int32_t CompareDataRows(int32_t record1, int32_t record2);

  /// @brief Method CompareDuplicateRecords, addr 0x418c384, size 0x14c, virtual false, abstract: false, final false
  inline int32_t CompareDuplicateRecords(int32_t record1, int32_t record2);

  /// @brief Method CompareRecordToKey, addr 0x418c4d0, size 0xd0, virtual false, abstract: false, final false
  inline int32_t CompareRecordToKey(int32_t record1, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> vals);

  /// @brief Method CompareRecords, addr 0x418c1cc, size 0x14c, virtual false, abstract: false, final false
  inline int32_t CompareRecords(int32_t record1, int32_t record2);

  /// @brief Method DeleteRecord, addr 0x418c154, size 0x8, virtual false, abstract: false, final false
  inline void DeleteRecord(int32_t recordIndex);

  /// @brief Method DeleteRecord, addr 0x418c5a8, size 0x124, virtual false, abstract: false, final false
  inline void DeleteRecord(int32_t recordIndex, bool fireEvent);

  /// @brief Method DeleteRecordFromIndex, addr 0x418c5a0, size 0x8, virtual false, abstract: false, final false
  inline void DeleteRecordFromIndex(int32_t recordIndex);

  /// @brief Method Equal, addr 0x418b578, size 0xa8, virtual false, abstract: false, final false
  inline bool Equal(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexDesc, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter);

  /// @brief Method FindNodeByKey, addr 0x418caf0, size 0x214, virtual false, abstract: false, final false
  inline int32_t FindNodeByKey(::System::Object* originalKey);

  /// @brief Method FindNodeByKeyRecord, addr 0x418cf34, size 0xf4, virtual false, abstract: false, final false
  inline int32_t FindNodeByKeyRecord(int32_t record);

  /// @brief Method FindNodeByKeys, addr 0x418cd04, size 0x230, virtual false, abstract: false, final false
  inline int32_t FindNodeByKeys(::ArrayW<::System::Object*, ::Array<::System::Object*>*> originalKey);

  /// @brief Method FindRecords, addr 0x418320c, size 0x24, virtual false, abstract: false, final false
  inline ::System::Data::Range FindRecords(::ArrayW<::System::Object*, ::Array<::System::Object*>*> key);

  /// @brief Method FindRecords, addr 0x418d150, size 0x24, virtual false, abstract: false, final false
  inline ::System::Data::Range FindRecords(::System::Object* key);

  /// @brief Method FireResetEvent, addr 0x418d174, size 0xe8, virtual false, abstract: false, final false
  inline void FireResetEvent();

  /// @brief Method GetAllFields, addr 0x418b0d8, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> GetAllFields(::System::Data::DataColumnCollection* columns);

  /// @brief Method GetChangeAction, addr 0x418d454, size 0x1c, virtual false, abstract: false, final false
  inline int32_t GetChangeAction(::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState);

  /// @brief Method GetEnumerator, addr 0x418c878, size 0x68, virtual false, abstract: false, final false
  inline ::System::Data::RBTree_1_RBTreeEnumerator<int32_t> GetEnumerator(int32_t startIndex);

  /// @brief Method GetIndex, addr 0x418c15c, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetIndex(int32_t record);

  /// @brief Method GetIndex, addr 0x418c01c, size 0x138, virtual false, abstract: false, final false
  inline int32_t GetIndex(int32_t record, int32_t changeRecord);

  /// @brief Method GetRangeFromNode, addr 0x418d028, size 0x128, virtual false, abstract: false, final false
  inline ::System::Data::Range GetRangeFromNode(int32_t nodeId);

  /// @brief Method GetRecord, addr 0x418b6b0, size 0x58, virtual false, abstract: false, final false
  inline int32_t GetRecord(int32_t recordIndex);

  /// @brief Method GetReplaceAction, addr 0x418d470, size 0x28, virtual false, abstract: false, final false
  static inline int32_t GetReplaceAction(::System::Data::DataViewRowState oldState);

  /// @brief Method GetRow, addr 0x4183b34, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* GetRow(int32_t i);

  /// @brief Method GetRows, addr 0x4183230, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> GetRows(::System::Data::Range range);

  /// @brief Method GetRows, addr 0x418d498, size 0x2c, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> GetRows(::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method GetUniqueKeyValues, addr 0x41830d0, size 0x124, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetUniqueKeyValues();

  /// @brief Method GetUniqueKeyValues, addr 0x418c8e0, size 0x210, virtual false, abstract: false, final false
  inline void GetUniqueKeyValues(::System::Collections::Generic::List_1<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>* list, int32_t curNodeId);

  /// @brief Method IndexOfReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOfReference(::System::Collections::Generic::List_1<T>* list, T item);

  /// @brief Method InitRecords, addr 0x418b19c, size 0x3dc, virtual false, abstract: false, final false
  inline void InitRecords(::System::Data::IFilter* filter);

  /// @brief Method InsertRecord, addr 0x418be28, size 0x1f4, virtual false, abstract: false, final false
  inline int32_t InsertRecord(int32_t record, bool fireEvent);

  /// @brief Method InsertRecordToIndex, addr 0x418d524, size 0x50, virtual false, abstract: false, final false
  inline int32_t InsertRecordToIndex(int32_t record);

  /// @brief Method IsKeyInIndex, addr 0x41831f4, size 0x18, virtual false, abstract: false, final false
  inline bool IsKeyInIndex(::ArrayW<::System::Object*, ::Array<::System::Object*>*> key);

  /// @brief Method IsKeyInIndex, addr 0x418d574, size 0x18, virtual false, abstract: false, final false
  inline bool IsKeyInIndex(::System::Object* key);

  /// @brief Method IsKeyRecordInIndex, addr 0x418d58c, size 0x18, virtual false, abstract: false, final false
  inline bool IsKeyRecordInIndex(int32_t record);

  /// @brief Method ListChangedAdd, addr 0x418b920, size 0x58, virtual false, abstract: false, final false
  inline void ListChangedAdd(::System::Data::DataViewListener* listener);

  /// @brief Method ListChangedRemove, addr 0x418b978, size 0x58, virtual false, abstract: false, final false
  inline void ListChangedRemove(::System::Data::DataViewListener* listener);

  /// @brief Method MaintainDataView, addr 0x418c6cc, size 0x11c, virtual false, abstract: false, final false
  inline void MaintainDataView(::System::ComponentModel::ListChangedType changedType, int32_t record, bool trackAddRemove);

  static inline ::System::Data::Index* New_ctor(::System::Data::DataTable* table, ::System::Comparison_1<::System::Data::DataRow*>* comparison, ::System::Data::DataViewRowState recordStates,
                                                ::System::Data::IFilter* rowFilter);

  static inline ::System::Data::Index* New_ctor(::System::Data::DataTable* table, ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexFields,
                                                ::System::Comparison_1<::System::Data::DataRow*>* comparison, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter);

  static inline ::System::Data::Index* New_ctor(::System::Data::DataTable* table, ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexFields,
                                                ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter);

  /// @brief Method OnListChanged, addr 0x418c7e8, size 0x90, virtual false, abstract: false, final false
  inline void OnListChanged(::System::ComponentModel::ListChangedType changedType, int32_t index);

  /// @brief Method OnListChanged, addr 0x418d5a4, size 0x98, virtual false, abstract: false, final false
  inline void OnListChanged(::System::ComponentModel::ListChangedType changedType, int32_t newIndex, int32_t oldIndex);

  /// @brief Method OnListChanged, addr 0x418d2dc, size 0x178, virtual false, abstract: false, final false
  inline void OnListChanged(::System::ComponentModel::ListChangedEventArgs* e);

  /// @brief Method RecordChanged, addr 0x418d7f0, size 0x138, virtual false, abstract: false, final false
  inline void RecordChanged(int32_t oldIndex, int32_t newIndex);

  /// @brief Method RecordChanged, addr 0x418d70c, size 0xe4, virtual false, abstract: false, final false
  inline void RecordChanged(int32_t record);

  /// @brief Method RecordStateChanged, addr 0x418da28, size 0x364, virtual false, abstract: false, final false
  inline void RecordStateChanged(int32_t oldRecord, ::System::Data::DataViewRowState oldOldState, ::System::Data::DataViewRowState oldNewState, int32_t newRecord,
                                 ::System::Data::DataViewRowState newOldState, ::System::Data::DataViewRowState newNewState);

  /// @brief Method RecordStateChanged, addr 0x418d928, size 0x100, virtual false, abstract: false, final false
  inline void RecordStateChanged(int32_t record, ::System::Data::DataViewRowState oldState, ::System::Data::DataViewRowState newState);

  /// @brief Method RemoveRef, addr 0x418bbc8, size 0x1bc, virtual false, abstract: false, final false
  inline int32_t RemoveRef();

  /// @brief Method Reset, addr 0x418d644, size 0xc8, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::System::Comparison_1<::System::Data::DataRow*>* const& __cordl_internal_get__comparison() const;

  constexpr ::System::Comparison_1<::System::Data::DataRow*>*& __cordl_internal_get__comparison();

  constexpr bool const& __cordl_internal_get__hasRemoteAggregate() const;

  constexpr bool& __cordl_internal_get__hasRemoteAggregate();

  constexpr ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> const& __cordl_internal_get__indexFields() const;

  constexpr ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*>& __cordl_internal_get__indexFields();

  constexpr bool const& __cordl_internal_get__isSharable() const;

  constexpr bool& __cordl_internal_get__isSharable();

  constexpr ::System::Data::Listeners_1<::System::Data::DataViewListener*>* const& __cordl_internal_get__listeners() const;

  constexpr ::System::Data::Listeners_1<::System::Data::DataViewListener*>*& __cordl_internal_get__listeners();

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr int32_t const& __cordl_internal_get__recordCount() const;

  constexpr int32_t& __cordl_internal_get__recordCount();

  constexpr ::System::Data::DataViewRowState const& __cordl_internal_get__recordStates() const;

  constexpr ::System::Data::DataViewRowState& __cordl_internal_get__recordStates();

  constexpr ::System::Data::Index_IndexTree* const& __cordl_internal_get__records() const;

  constexpr ::System::Data::Index_IndexTree*& __cordl_internal_get__records();

  constexpr int32_t const& __cordl_internal_get__refCount() const;

  constexpr int32_t& __cordl_internal_get__refCount();

  constexpr ::System::WeakReference* const& __cordl_internal_get__rowFilter() const;

  constexpr ::System::WeakReference*& __cordl_internal_get__rowFilter();

  constexpr bool const& __cordl_internal_get__suspendEvents() const;

  constexpr bool& __cordl_internal_get__suspendEvents();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr void __cordl_internal_set__comparison(::System::Comparison_1<::System::Data::DataRow*>* value);

  constexpr void __cordl_internal_set__hasRemoteAggregate(bool value);

  constexpr void __cordl_internal_set__indexFields(::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> value);

  constexpr void __cordl_internal_set__isSharable(bool value);

  constexpr void __cordl_internal_set__listeners(::System::Data::Listeners_1<::System::Data::DataViewListener*>* value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__recordCount(int32_t value);

  constexpr void __cordl_internal_set__recordStates(::System::Data::DataViewRowState value);

  constexpr void __cordl_internal_set__records(::System::Data::Index_IndexTree* value);

  constexpr void __cordl_internal_set__refCount(int32_t value);

  constexpr void __cordl_internal_set__rowFilter(::System::WeakReference* value);

  constexpr void __cordl_internal_set__suspendEvents(bool value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x418b080, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::System::Comparison_1<::System::Data::DataRow*>* comparison, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter);

  /// @brief Method .ctor, addr 0x418adb4, size 0x2cc, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexFields,
                    ::System::Comparison_1<::System::Data::DataRow*>* comparison, ::System::Data::DataViewRowState recordStates, ::System::Data::IFilter* rowFilter);

  /// @brief Method .ctor, addr 0x418ada4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table, ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> indexFields, ::System::Data::DataViewRowState recordStates,
                    ::System::Data::IFilter* rowFilter);

  static inline int32_t getStaticF_s_objectTypeCount();

  /// @brief Method get_DoListChanged, addr 0x418d25c, size 0x80, virtual false, abstract: false, final false
  inline bool get_DoListChanged();

  /// @brief Method get_HasDuplicates, addr 0x418b708, size 0x50, virtual false, abstract: false, final false
  inline bool get_HasDuplicates();

  /// @brief Method get_HasRemoteAggregate, addr 0x418b620, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasRemoteAggregate();

  /// @brief Method get_ObjectID, addr 0x418b628, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  /// @brief Method get_RecordCount, addr 0x418b758, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RecordCount();

  /// @brief Method get_RecordStates, addr 0x418b630, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataViewRowState get_RecordStates();

  /// @brief Method get_RefCount, addr 0x418b9d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_RefCount();

  /// @brief Method get_RowFilter, addr 0x418b638, size 0x78, virtual false, abstract: false, final false
  inline ::System::Data::IFilter* get_RowFilter();

  /// @brief Method get_Table, addr 0x418dd8c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_Table();

  static inline void setStaticF_s_objectTypeCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Index();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Index", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Index(Index&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Index", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Index(Index const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11467 };

  /// @brief Field _table, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _indexFields, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Data::IndexField, ::Array<::System::Data::IndexField>*> ____indexFields;

  /// @brief Field _comparison, offset: 0x20, size: 0x8, def value: None
  ::System::Comparison_1<::System::Data::DataRow*>* ____comparison;

  /// @brief Field _recordStates, offset: 0x28, size: 0x4, def value: None
  ::System::Data::DataViewRowState ____recordStates;

  /// @brief Field _rowFilter, offset: 0x30, size: 0x8, def value: None
  ::System::WeakReference* ____rowFilter;

  /// @brief Field _records, offset: 0x38, size: 0x8, def value: None
  ::System::Data::Index_IndexTree* ____records;

  /// @brief Field _recordCount, offset: 0x40, size: 0x4, def value: None
  int32_t ____recordCount;

  /// @brief Field _refCount, offset: 0x44, size: 0x4, def value: None
  int32_t ____refCount;

  /// @brief Field _listeners, offset: 0x48, size: 0x8, def value: None
  ::System::Data::Listeners_1<::System::Data::DataViewListener*>* ____listeners;

  /// @brief Field _suspendEvents, offset: 0x50, size: 0x1, def value: None
  bool ____suspendEvents;

  /// @brief Field _isSharable, offset: 0x51, size: 0x1, def value: None
  bool ____isSharable;

  /// @brief Field _hasRemoteAggregate, offset: 0x52, size: 0x1, def value: None
  bool ____hasRemoteAggregate;

  /// @brief Field _objectID, offset: 0x54, size: 0x4, def value: None
  int32_t ____objectID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::Index, ____table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____indexFields) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____comparison) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____recordStates) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____rowFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____records) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____recordCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____refCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____listeners) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____suspendEvents) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____isSharable) == 0x51, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____hasRemoteAggregate) == 0x52, "Offset mismatch!");

static_assert(offsetof(::System::Data::Index, ____objectID) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::Index, 0x58>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::Index);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Index*, "System.Data", "Index");
NEED_NO_BOX(::System::Data::Index_IndexTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Index_IndexTree*, "System.Data", "Index/IndexTree");
NEED_NO_BOX(::System::Data::Index___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Index___c*, "System.Data", "Index/<>c");
NEED_NO_BOX(::System::Data::Index___c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Index___c__DisplayClass86_0*, "System.Data", "Index/<>c__DisplayClass86_0");
