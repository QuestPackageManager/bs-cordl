#pragma once
// IWYU pragma private; include "System/Data/DataTableCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__InternalDataCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataTableCollection)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class DataSet;
}
namespace System::Data {
class DataTable;
}
// Forward declare root types
namespace System::Data {
class DataTableCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataTableCollection);
// Type: System.Data::DataTableCollection
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::DataTableCollection*
class CORDL_TYPE DataTableCollection : public ::System::Data::InternalDataCollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Data::DataTable* Item[];

  __declspec(property(get = get_Item)) ::System::Data::DataTable* Item[];

  __declspec(property(get = get_Item)) ::System::Data::DataTable* Item[];

  __declspec(property(get = get_List)) ::System::Collections::ArrayList* List;

  __declspec(property(get = get_ObjectID)) int32_t ObjectID;

  /// @brief Field _dataSet, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSet, put = __cordl_internal_set__dataSet)) ::System::Data::DataSet* _dataSet;

  /// @brief Field _defaultNameIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__defaultNameIndex, put = __cordl_internal_set__defaultNameIndex)) int32_t _defaultNameIndex;

  /// @brief Field _delayedAddRangeTables, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__delayedAddRangeTables, put = __cordl_internal_set__delayedAddRangeTables)) ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*>
      _delayedAddRangeTables;

  /// @brief Field _list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::ArrayList* _list;

  /// @brief Field _objectID, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__objectID, put = __cordl_internal_set__objectID)) int32_t _objectID;

  /// @brief Field _onCollectionChangedDelegate, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__onCollectionChangedDelegate,
                      put = __cordl_internal_set__onCollectionChangedDelegate)) ::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangedDelegate;

  /// @brief Field _onCollectionChangingDelegate, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__onCollectionChangingDelegate,
                      put = __cordl_internal_set__onCollectionChangingDelegate)) ::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangingDelegate;

  /// @brief Field s_objectTypeCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_objectTypeCount, put = setStaticF_s_objectTypeCount)) int32_t s_objectTypeCount;

  /// @brief Method Add, addr 0x40f13b0, size 0x29c, virtual false, abstract: false, final false
  inline void Add(::System::Data::DataTable* table);

  /// @brief Method ArrayAdd, addr 0x40f1830, size 0x24, virtual false, abstract: false, final false
  inline void ArrayAdd(::System::Data::DataTable* table);

  /// @brief Method AssignName, addr 0x40f1924, size 0x48, virtual false, abstract: false, final false
  inline ::StringW AssignName();

  /// @brief Method BaseAdd, addr 0x40f171c, size 0x114, virtual false, abstract: false, final false
  inline void BaseAdd(::System::Data::DataTable* table);

  /// @brief Method BaseGroupSwitch, addr 0x40f1c9c, size 0x178, virtual false, abstract: false, final false
  inline void BaseGroupSwitch(::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> oldArray, int32_t oldLength,
                              ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> newArray, int32_t newLength);

  /// @brief Method BaseRemove, addr 0x40f1e14, size 0x78, virtual false, abstract: false, final false
  inline void BaseRemove(::System::Data::DataTable* table);

  /// @brief Method CanRemove, addr 0x40f1e8c, size 0x464, virtual false, abstract: false, final false
  inline bool CanRemove(::System::Data::DataTable* table, bool fThrowException);

  /// @brief Method Clear, addr 0x40f23fc, size 0x2c8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x40f1a24, size 0x18, virtual false, abstract: false, final false
  inline bool Contains(::StringW name);

  /// @brief Method Contains, addr 0x40f2838, size 0x128, virtual false, abstract: false, final false
  inline bool Contains(::StringW name, bool caseSensitive);

  /// @brief Method Contains, addr 0x40f26c4, size 0x174, virtual false, abstract: false, final false
  inline bool Contains(::StringW name, ::StringW tableNamespace, bool checkProperty, bool caseSensitive);

  /// @brief Method GetTable, addr 0x40f1158, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* GetTable(::StringW name, ::StringW ns);

  /// @brief Method GetTableSmart, addr 0x40f1274, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* GetTableSmart(::StringW name, ::StringW ns);

  /// @brief Method IndexOf, addr 0x40f2960, size 0xe4, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Data::DataTable* table);

  /// @brief Method IndexOf, addr 0x40f2a44, size 0x18, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW tableName);

  /// @brief Method IndexOf, addr 0x40f2a5c, size 0x60, virtual false, abstract: false, final false
  inline int32_t IndexOf(::StringW tableName, ::StringW tableNamespace, bool chekforNull);

  /// @brief Method InternalIndexOf, addr 0x40f0e04, size 0x1c8, virtual false, abstract: false, final false
  inline int32_t InternalIndexOf(::StringW tableName);

  /// @brief Method InternalIndexOf, addr 0x40f0fcc, size 0x18c, virtual false, abstract: false, final false
  inline int32_t InternalIndexOf(::StringW tableName, ::StringW tableNamespace);

  /// @brief Method MakeName, addr 0x40f196c, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW MakeName(int32_t index);

  static inline ::System::Data::DataTableCollection* New_ctor(::System::Data::DataSet* dataSet);

  /// @brief Method OnCollectionChanged, addr 0x40f1854, size 0xd0, virtual false, abstract: false, final false
  inline void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method OnCollectionChanging, addr 0x40f164c, size 0xd0, virtual false, abstract: false, final false
  inline void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent);

  /// @brief Method RegisterName, addr 0x40f1a3c, size 0x260, virtual false, abstract: false, final false
  inline void RegisterName(::StringW name, ::StringW tbNamespace);

  /// @brief Method Remove, addr 0x40f2b0c, size 0x1fc, virtual false, abstract: false, final false
  inline void Remove(::System::Data::DataTable* table);

  /// @brief Method ReplaceFromInference, addr 0x40f2abc, size 0x50, virtual false, abstract: false, final false
  inline void ReplaceFromInference(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList);

  /// @brief Method UnregisterName, addr 0x40f22f0, size 0x10c, virtual false, abstract: false, final false
  inline void UnregisterName(::StringW name);

  constexpr ::System::Data::DataSet*& __cordl_internal_get__dataSet();

  constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& __cordl_internal_get__dataSet() const;

  constexpr int32_t const& __cordl_internal_get__defaultNameIndex() const;

  constexpr int32_t& __cordl_internal_get__defaultNameIndex();

  constexpr ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> const& __cordl_internal_get__delayedAddRangeTables() const;

  constexpr ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*>& __cordl_internal_get__delayedAddRangeTables();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__list() const;

  constexpr int32_t const& __cordl_internal_get__objectID() const;

  constexpr int32_t& __cordl_internal_get__objectID();

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get__onCollectionChangedDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CollectionChangeEventHandler*> const& __cordl_internal_get__onCollectionChangedDelegate() const;

  constexpr ::System::ComponentModel::CollectionChangeEventHandler*& __cordl_internal_get__onCollectionChangingDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::CollectionChangeEventHandler*> const& __cordl_internal_get__onCollectionChangingDelegate() const;

  constexpr void __cordl_internal_set__dataSet(::System::Data::DataSet* value);

  constexpr void __cordl_internal_set__defaultNameIndex(int32_t value);

  constexpr void __cordl_internal_set__delayedAddRangeTables(::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> value);

  constexpr void __cordl_internal_set__list(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__objectID(int32_t value);

  constexpr void __cordl_internal_set__onCollectionChangedDelegate(::System::ComponentModel::CollectionChangeEventHandler* value);

  constexpr void __cordl_internal_set__onCollectionChangingDelegate(::System::ComponentModel::CollectionChangeEventHandler* value);

  /// @brief Method .ctor, addr 0x40f0a80, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataSet* dataSet);

  static inline int32_t getStaticF_s_objectTypeCount();

  /// @brief Method get_Item, addr 0x40f0be0, size 0x130, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_Item(int32_t index);

  /// @brief Method get_Item, addr 0x40f0d10, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_Item(::StringW name);

  /// @brief Method get_Item, addr 0x40e983c, size 0x108, virtual false, abstract: false, final false
  inline ::System::Data::DataTable* get_Item(::StringW name, ::StringW tableNamespace);

  /// @brief Method get_List, addr 0x40f0bd0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* get_List();

  /// @brief Method get_ObjectID, addr 0x40f0bd8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ObjectID();

  static inline void setStaticF_s_objectTypeCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataTableCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataTableCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataTableCollection(DataTableCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataTableCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataTableCollection(DataTableCollection const&) = delete;

  /// @brief Field _dataSet, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataSet* ____dataSet;

  /// @brief Field _list, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  /// @brief Field _defaultNameIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____defaultNameIndex;

  /// @brief Field _delayedAddRangeTables, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Data::DataTable*, ::Array<::System::Data::DataTable*>*> ____delayedAddRangeTables;

  /// @brief Field _onCollectionChangedDelegate, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::CollectionChangeEventHandler* ____onCollectionChangedDelegate;

  /// @brief Field _onCollectionChangingDelegate, offset: 0x38, size: 0x8, def value: None
  ::System::ComponentModel::CollectionChangeEventHandler* ____onCollectionChangingDelegate;

  /// @brief Field _objectID, offset: 0x40, size: 0x4, def value: None
  int32_t ____objectID;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11361 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataTableCollection, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Data::DataTableCollection, ____dataSet) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTableCollection, ____list) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTableCollection, ____defaultNameIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTableCollection, ____delayedAddRangeTables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTableCollection, ____onCollectionChangedDelegate) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTableCollection, ____onCollectionChangingDelegate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataTableCollection, ____objectID) == 0x40, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataTableCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataTableCollection*, "System.Data", "DataTableCollection");
