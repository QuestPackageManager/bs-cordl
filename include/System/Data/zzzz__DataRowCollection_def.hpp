#pragma once
// IWYU pragma private; include "System/Data/DataRowCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__InternalDataCollectionBase_def.hpp"
#include "System/Data/zzzz__RBTree_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DataRowCollection)
namespace System::Collections {
class IEnumerator;
}
namespace System::Data {
class DataRowCollection_DataRowTree;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data {
class DataRowCollection;
}
namespace System::Data {
class DataRowCollection_DataRowTree;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::DataRowCollection);
MARK_REF_PTR_T(::System::Data::DataRowCollection_DataRowTree);
// Dependencies System.Data.RBTree`1<K>
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataRowCollection/DataRowTree
class CORDL_TYPE DataRowCollection_DataRowTree : public ::System::Data::RBTree_1<::System::Data::DataRow*> {
public:
  // Declarations
  /// @brief Method CompareNode, addr 0x41624d4, size 0x2c, virtual true, abstract: false, final false
  inline int32_t CompareNode(::System::Data::DataRow* record1, ::System::Data::DataRow* record2);

  /// @brief Method CompareSateliteTreeNode, addr 0x4162500, size 0x2c, virtual true, abstract: false, final false
  inline int32_t CompareSateliteTreeNode(::System::Data::DataRow* record1, ::System::Data::DataRow* record2);

  static inline ::System::Data::DataRowCollection_DataRowTree* New_ctor();

  /// @brief Method .ctor, addr 0x4161e34, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRowCollection_DataRowTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRowCollection_DataRowTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRowCollection_DataRowTree(DataRowCollection_DataRowTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRowCollection_DataRowTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRowCollection_DataRowTree(DataRowCollection_DataRowTree const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11393 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::DataRowCollection_DataRowTree, 0x40>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Data.InternalDataCollectionBase
namespace System::Data {
// Is value type: false
// CS Name: System.Data.DataRowCollection
class CORDL_TYPE DataRowCollection : public ::System::Data::InternalDataCollectionBase {
public:
  // Declarations
  using DataRowTree = ::System::Data::DataRowCollection_DataRowTree;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) ::System::Data::DataRow* Item[];

  /// @brief Field _list, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Data::DataRowCollection_DataRowTree* _list;

  /// @brief Field _nullInList, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__nullInList, put = __cordl_internal_set__nullInList)) int32_t _nullInList;

  /// @brief Field _table, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__table, put = __cordl_internal_set__table)) ::System::Data::DataTable* _table;

  /// @brief Method Add, addr 0x4161ed0, size 0x20, virtual false, abstract: false, final false
  inline void Add(::System::Data::DataRow* row);

  /// @brief Method AddWithColumnEvents, addr 0x4162190, size 0x60, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* AddWithColumnEvents(::ArrayW<::System::Object*, ::Array<::System::Object*>*> values);

  /// @brief Method ArrayAdd, addr 0x41621f0, size 0x68, virtual false, abstract: false, final false
  inline void ArrayAdd(::System::Data::DataRow* row);

  /// @brief Method ArrayClear, addr 0x41622d0, size 0x50, virtual false, abstract: false, final false
  inline void ArrayClear();

  /// @brief Method ArrayInsert, addr 0x4162258, size 0x78, virtual false, abstract: false, final false
  inline void ArrayInsert(::System::Data::DataRow* row, int32_t pos);

  /// @brief Method ArrayRemove, addr 0x4162320, size 0x94, virtual false, abstract: false, final false
  inline void ArrayRemove(::System::Data::DataRow* row);

  /// @brief Method CopyTo, addr 0x41623b4, size 0x68, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* ar, int32_t index);

  /// @brief Method CopyTo, addr 0x416241c, size 0x68, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<::System::Data::DataRow*, ::Array<::System::Data::DataRow*>*> array, int32_t index);

  /// @brief Method DiffInsertAt, addr 0x4161ef0, size 0x208, virtual false, abstract: false, final false
  inline void DiffInsertAt(::System::Data::DataRow* row, int32_t pos);

  /// @brief Method GetEnumerator, addr 0x4162484, size 0x50, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x41620f8, size 0x98, virtual false, abstract: false, final false
  inline int32_t IndexOf(::System::Data::DataRow* row);

  static inline ::System::Data::DataRowCollection* New_ctor(::System::Data::DataTable* table);

  constexpr ::System::Data::DataRowCollection_DataRowTree* const& __cordl_internal_get__list() const;

  constexpr ::System::Data::DataRowCollection_DataRowTree*& __cordl_internal_get__list();

  constexpr int32_t const& __cordl_internal_get__nullInList() const;

  constexpr int32_t& __cordl_internal_get__nullInList();

  constexpr ::System::Data::DataTable* const& __cordl_internal_get__table() const;

  constexpr ::System::Data::DataTable*& __cordl_internal_get__table();

  constexpr void __cordl_internal_set__list(::System::Data::DataRowCollection_DataRowTree* value);

  constexpr void __cordl_internal_set__nullInList(int32_t value);

  constexpr void __cordl_internal_set__table(::System::Data::DataTable* value);

  /// @brief Method .ctor, addr 0x4161da0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::DataTable* table);

  /// @brief Method get_Count, addr 0x4161e80, size 0x50, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x41567c0, size 0x58, virtual false, abstract: false, final false
  inline ::System::Data::DataRow* get_Item(int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataRowCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataRowCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataRowCollection(DataRowCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataRowCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataRowCollection(DataRowCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11394 };

  /// @brief Field _table, offset: 0x10, size: 0x8, def value: None
  ::System::Data::DataTable* ____table;

  /// @brief Field _list, offset: 0x18, size: 0x8, def value: None
  ::System::Data::DataRowCollection_DataRowTree* ____list;

  /// @brief Field _nullInList, offset: 0x20, size: 0x4, def value: None
  int32_t ____nullInList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::DataRowCollection, ____table) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowCollection, ____list) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::DataRowCollection, ____nullInList) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::DataRowCollection, 0x28>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::DataRowCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowCollection*, "System.Data", "DataRowCollection");
NEED_NO_BOX(::System::Data::DataRowCollection_DataRowTree);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataRowCollection_DataRowTree*, "System.Data", "DataRowCollection/DataRowTree");
