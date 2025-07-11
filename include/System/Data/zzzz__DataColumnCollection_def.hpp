#pragma once
// IWYU pragma private; include "System/Data/DataColumnCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__InternalDataCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataColumnCollection)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class ArrayList;
}
namespace System::ComponentModel {
class CollectionChangeEventArgs;
}
namespace System::ComponentModel {
class CollectionChangeEventHandler;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace System::Data {
class DataColumnCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataColumnCollection);
// Dependencies System.Data.InternalDataCollectionBase
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataColumnCollection
class CORDL_TYPE DataColumnCollection : public ::System::Data::InternalDataCollectionBase {
public:
  // Declarations
  /// @brief Field CollectionChanged, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_CollectionChanged, put = __cordl_internal_set_CollectionChanged)) ::System::ComponentModel::CollectionChangeEventHandler* CollectionChanged;

  /// @brief Field CollectionChanging, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_CollectionChanging, put = __cordl_internal_set_CollectionChanging)) ::System::ComponentModel::CollectionChangeEventHandler* CollectionChanging;

  /// @brief Field ColumnPropertyChanged, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_ColumnPropertyChanged,
                      put = __cordl_internal_set_ColumnPropertyChanged)) ::System::ComponentModel::CollectionChangeEventHandler* ColumnPropertyChanged;

  __declspec(property(get = get_ColumnsImplementingIChangeTracking)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ColumnsImplementingIChangeTracking;

  __declspec(property(get = get_ColumnsImplementingIChangeTrackingCount)) int32_t ColumnsImplementingIChangeTrackingCount;

  __declspec(property(get = get_ColumnsImplementingIRevertibleChangeTrackingCount)) int32_t ColumnsImplementingIRevertibleChangeTrackingCount;

  __declspec(property(get = get_Item)) ::System::Data::DataColumn* Item[];

  __declspec(property(get = get_Item)) ::System::Data::DataColumn* Item[];

  __declspec(property(get = get_Item)) ::System::Data::DataColumn* Item[];

  __declspec(property(get = get_List)) ::System::Collections::ArrayList* List;

  /// @brief Field _columnFromName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__columnFromName,
                      put = __cordl_internal_set__columnFromName)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::DataColumn*>* _columnFromName;

  /// @brief Field _columnsImplementingIChangeTracking, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__columnsImplementingIChangeTracking,
                      put = __cordl_internal_set__columnsImplementingIChangeTracking)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>
      _columnsImplementingIChangeTracking;

  /// @brief Field _defaultNameIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultNameIndex, put = __cordl_internal_set__defaultNameIndex)) int32_t _defaultNameIndex;

  /// @brief Field _delayedAddRangeColumns, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__delayedAddRangeColumns,
                      put = __cordl_internal_set__delayedAddRangeColumns)) ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>
      _delayedAddRangeColumns;

  /// @brief Field _fInClear, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__fInClear, put = __cordl_internal_set__fInClear)) bool _fInClear;

  /// @brief Field _list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::ArrayList* _list;

  /// @brief Field _nColumnsImplementingIChangeTracking, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__nColumnsImplementingIChangeTracking, put = __cordl_internal_set__nColumnsImplementingIChangeTracking)) int32_t _nColumnsImplementingIChangeTracking;

  /// @brief Field _nColumnsImplementingIRevertibleChangeTracking, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__nColumnsImplementingIRevertibleChangeTracking,
                      put = __cordl_internal_set__nColumnsImplementingIRevertibleChangeTracking)) int32_t _nColumnsImplementingIRevertibleChangeTracking;

  /// @brief Field _table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Method Add, addr 0x4159ae8, size 0xc, virtual false, abstract: false, final false
  inline void Add(::System::Data::DataColumn* column);

  /// @brief Method AddAt, addr 0x4159af4, size 0x25c, virtual false, abstract: false, final false
  inline void AddAt(int32_t index, ::System::Data::DataColumn* column);

  /// @brief Method AddColumnsImplementingIChangeTrackingList, addr 0x415b464, size 0xcc, virtual false, abstract: false, final false
  inline void AddColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* dataColumn);

  /// @brief Method ArrayAdd, addr 0x415a090, size 0x6c, virtual false, abstract: false, final false
  inline void ArrayAdd(::System::Data::DataColumn* column);

  /// @brief Method ArrayAdd, addr 0x415a050, size 0x40, virtual false, abstract: false, final false
  inline void ArrayAdd(int32_t index, ::System::Data::DataColumn* column);

  /// @brief Method ArrayRemove, addr 0x415a458, size 0x130, virtual false, abstract: false, final false
  inline void ArrayRemove(::System::Data::DataColumn* column);

  /// @brief Method AssignName, addr 0x415a68c, size 0x94, virtual false, abstract: false, final false
  inline ::StringW AssignName();

  /// @brief Method BaseAdd, addr 0x4159d78, size 0x2d8, virtual false, abstract: false, final false
  inline void BaseAdd(::System::Data::DataColumn* column);

  /// @brief Method BaseGroupSwitch, addr 0x415aa54, size 0x1e0, virtual false, abstract: false, final false
  inline void BaseGroupSwitch(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> oldArray, int32_t oldLength,
                              ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> newArray, int32_t newLength);

  /// @brief Method BaseRemove, addr 0x415ac34, size 0xb8, virtual false, abstract: false, final false
  inline void BaseRemove(::System::Data::DataColumn* column);

  /// @brief Method CanRegisterName, addr 0x415ba8c, size 0x64, virtual false, abstract: false, final false
  inline bool CanRegisterName(::StringW name);

  /// @brief Method CanRemove, addr 0x415acec, size 0x668, virtual false, abstract: false, final false
  inline bool CanRemove(::System::Data::DataColumn* column, bool fThrowException);

  /// @brief Method CheckIChangeTracking, addr 0x415a410, size 0x48, virtual false, abstract: false, final false
  inline void CheckIChangeTracking(::System::Data::DataColumn* column);

  /// @brief Method Clear, addr 0x415b530, size 0x2d4, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x415b804, size 0x94, virtual false, abstract: false, final false
  inline bool Contains(::StringW name);

  /// @brief Method Contains, addr 0x415b898, size 0x9c, virtual false, abstract: false, final false
  inline bool Contains(::StringW name, bool caseSensitive);

  /// @brief Method IndexOf, addr 0x415b934, size 0x100, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW columnName);

  /// @brief Method IndexOfCaseInsensitive, addr 0x41598f4, size 0x150, virtual false, abstract: false, final false
  inline int32_t IndexOfCaseInsensitive(::StringW name);

  /// @brief Method MakeName, addr 0x415a720, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW MakeName(int32_t index);

  static inline ::System::Data::DataColumnCollection* New_ctor(::System::Data::DataTable* table);

  /// @brief Method OnCollectionChanged, addr 0x415a0fc, size 0xa4, virtual false, abstract: false, final false
  inline void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method OnCollectionChanging, addr 0x4159d50, size 0x28, virtual false, abstract: false, final false
  inline void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method OnColumnPropertyChanged, addr 0x415ba34, size 0x58, virtual false, abstract: false, final false
  inline void OnColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method RegisterColumnName, addr 0x415a7d8, size 0x1c0, virtual false, abstract: false, final false
  inline void RegisterColumnName(::StringW name, ::System::Data::DataColumn* column);

  /// @brief Method Remove, addr 0x415baf0, size 0x10c, virtual false, abstract: false, final false
  inline void Remove(::System::Data::DataColumn* column);

  /// @brief Method RemoveColumnsImplementingIChangeTrackingList, addr 0x415a588, size 0x104, virtual false, abstract: false, final false
  inline void RemoveColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* dataColumn);

  /// @brief Method UnregisterName, addr 0x415a998, size 0xbc, virtual false, abstract: false, final false
  inline void UnregisterName(::StringW name);

  constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& __cordl_internal_get_CollectionChanged() const;

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get_CollectionChanged();

  constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& __cordl_internal_get_CollectionChanging() const;

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get_CollectionChanging();

  constexpr ::System::ComponentModel::CollectionChangeEventHandler* const& __cordl_internal_get_ColumnPropertyChanged() const;

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get_ColumnPropertyChanged();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::DataColumn*>* const& __cordl_internal_get__columnFromName() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::DataColumn*>*& __cordl_internal_get__columnFromName();

  constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> const& __cordl_internal_get__columnsImplementingIChangeTracking() const;

  constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>& __cordl_internal_get__columnsImplementingIChangeTracking();

  constexpr int32_t const& __cordl_internal_get__defaultNameIndex() const;

  constexpr int32_t& __cordl_internal_get__defaultNameIndex();

  constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> const& __cordl_internal_get__delayedAddRangeColumns() const;

  constexpr ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*>& __cordl_internal_get__delayedAddRangeColumns();

  constexpr bool const& __cordl_internal_get__fInClear() const;

  constexpr bool& __cordl_internal_get__fInClear();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list();

  constexpr int32_t const& __cordl_internal_get__nColumnsImplementingIChangeTracking() const;

  constexpr int32_t& __cordl_internal_get__nColumnsImplementingIChangeTracking();

  constexpr int32_t const& __cordl_internal_get__nColumnsImplementingIRevertibleChangeTracking() const;

  constexpr int32_t& __cordl_internal_get__nColumnsImplementingIRevertibleChangeTracking();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr void __cordl_internal_set_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  constexpr void __cordl_internal_set_CollectionChanging(::System::ComponentModel::CollectionChangeEventHandler* value);

  constexpr void __cordl_internal_set_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  constexpr void __cordl_internal_set__columnFromName(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::DataColumn*>* value);

  constexpr void __cordl_internal_set__columnsImplementingIChangeTracking(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value);

  constexpr void __cordl_internal_set__defaultNameIndex(int32_t value);

  constexpr void __cordl_internal_set__delayedAddRangeColumns(::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> value);

  constexpr void __cordl_internal_set__fInClear(bool value);

  constexpr void __cordl_internal_set__list(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__nColumnsImplementingIChangeTracking(int32_t value);

  constexpr void __cordl_internal_set__nColumnsImplementingIRevertibleChangeTracking(int32_t value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x4159514, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table);

  /// @brief Method add_CollectionChanged, addr 0x415a1a0, size 0x9c, virtual false, abstract: false, final false
  inline void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  /// @brief Method add_ColumnPropertyChanged, addr 0x415a2d8, size 0x9c, virtual false, abstract: false, final false
  inline void add_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  /// @brief Method get_ColumnsImplementingIChangeTracking, addr 0x4159664, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> get_ColumnsImplementingIChangeTracking();

  /// @brief Method get_ColumnsImplementingIChangeTrackingCount, addr 0x415966c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ColumnsImplementingIChangeTrackingCount();

  /// @brief Method get_ColumnsImplementingIRevertibleChangeTrackingCount, addr 0x4159674, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ColumnsImplementingIRevertibleChangeTrackingCount();

  /// @brief Method get_Item, addr 0x415967c, size 0x130, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x41597ac, size 0x148, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* get_Item(::StringW name);

  /// @brief Method get_Item, addr 0x4159a44, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Data::DataColumn* get_Item(::StringW name, ::StringW ns);

  /// @brief Method get_List, addr 0x415965c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* get_List();

  /// @brief Method remove_CollectionChanged, addr 0x415a23c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

  /// @brief Method remove_ColumnPropertyChanged, addr 0x415a374, size 0x9c, virtual false, abstract: false, final false
  inline void remove_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataColumnCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataColumnCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataColumnCollection(DataColumnCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataColumnCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataColumnCollection(DataColumnCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11378 };

  /// @brief Field _table, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  /// @brief Field _defaultNameIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____defaultNameIndex;

  /// @brief Field _delayedAddRangeColumns, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ____delayedAddRangeColumns;

  /// @brief Field _columnFromName, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Data::DataColumn*>* ____columnFromName;

  /// @brief Field _fInClear, offset: 0x38, size: 0x1, def value: None
  bool ____fInClear;

  /// @brief Field _columnsImplementingIChangeTracking, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataColumn*, ::Array<::System::Data::DataColumn*>*> ____columnsImplementingIChangeTracking;

  /// @brief Field _nColumnsImplementingIChangeTracking, offset: 0x48, size: 0x4, def value: None
  int32_t ____nColumnsImplementingIChangeTracking;

  /// @brief Field _nColumnsImplementingIRevertibleChangeTracking, offset: 0x4c, size: 0x4, def value: None
  int32_t ____nColumnsImplementingIRevertibleChangeTracking;

  /// @brief Field CollectionChanged, offset: 0x50, size: 0x8, def value: None
  ::System::ComponentModel::CollectionChangeEventHandler* ___CollectionChanged;

  /// @brief Field CollectionChanging, offset: 0x58, size: 0x8, def value: None
  ::System::ComponentModel::CollectionChangeEventHandler* ___CollectionChanging;

  /// @brief Field ColumnPropertyChanged, offset: 0x60, size: 0x8, def value: None
  ::System::ComponentModel::CollectionChangeEventHandler* ___ColumnPropertyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataColumnCollection, ____table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ____list) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ____defaultNameIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ____delayedAddRangeColumns) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ____columnFromName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ____fInClear) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ____columnsImplementingIChangeTracking) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ____nColumnsImplementingIChangeTracking) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ____nColumnsImplementingIRevertibleChangeTracking) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ___CollectionChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ___CollectionChanging) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataColumnCollection, ___ColumnPropertyChanged) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataColumnCollection, 0x68>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataColumnCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataColumnCollection*, "System.Data", "DataColumnCollection");
