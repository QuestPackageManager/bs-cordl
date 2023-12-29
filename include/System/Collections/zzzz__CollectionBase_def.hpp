#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionBase)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::Collections {
class CollectionBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::CollectionBase);
// Type: System.Collections::CollectionBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3761))
// CS Name: ::System.Collections::CollectionBase*
class CORDL_TYPE CollectionBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::ArrayList* _list;

  __declspec(property(get = get_InnerList))::System::Collections::ArrayList* InnerList;

  __declspec(property(get = get_List))::System::Collections::IList* List;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::ArrayList*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::ArrayList* value);

  static inline ::System::Collections::CollectionBase* New_ctor();

  /// @brief Method .ctor addr 0x2422cb8 size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method get_InnerList addr 0x2422db0 size 0x8 virtual false final false
  inline ::System::Collections::ArrayList* get_InnerList();

  /// @brief Method get_List addr 0x2422db8 size 0x4 virtual false final false
  inline ::System::Collections::IList* get_List();

  /// @brief Method get_Count addr 0x2422dbc size 0x24 virtual true final true
  inline int32_t get_Count();

  /// @brief Method Clear addr 0x2422de0 size 0x4c virtual true final true
  inline void Clear();

  /// @brief Method RemoveAt addr 0x2422e2c size 0x1d8 virtual true final true
  inline void RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsReadOnly addr 0x2423004 size 0x24 virtual true final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_IsFixedSize addr 0x2423028 size 0x24 virtual true final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x242304c size 0x24 virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x2423070 size 0x24 virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x2423094 size 0x24 virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.IList.get_Item addr 0x24230b8 size 0xbc virtual true final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item addr 0x2423174 size 0x1e8 virtual true final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Contains addr 0x242335c size 0x24 virtual true final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.Add addr 0x2423380 size 0x140 virtual true final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Remove addr 0x24234c0 size 0x19c virtual true final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf addr 0x242365c size 0x24 virtual true final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert addr 0x2423680 size 0x1b4 virtual true final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method GetEnumerator addr 0x2423834 size 0x24 virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method OnSet addr 0x2423858 size 0x4 virtual true final false
  inline void OnSet(int32_t index, ::System::Object* oldValue, ::System::Object* newValue);

  /// @brief Method OnInsert addr 0x242385c size 0x4 virtual true final false
  inline void OnInsert(int32_t index, ::System::Object* value);

  /// @brief Method OnClear addr 0x2423860 size 0x4 virtual true final false
  inline void OnClear();

  /// @brief Method OnRemove addr 0x2423864 size 0x4 virtual true final false
  inline void OnRemove(int32_t index, ::System::Object* value);

  /// @brief Method OnValidate addr 0x2423868 size 0x58 virtual true final false
  inline void OnValidate(::System::Object* value);

  /// @brief Method OnSetComplete addr 0x24238c0 size 0x4 virtual true final false
  inline void OnSetComplete(int32_t index, ::System::Object* oldValue, ::System::Object* newValue);

  /// @brief Method OnInsertComplete addr 0x24238c4 size 0x4 virtual true final false
  inline void OnInsertComplete(int32_t index, ::System::Object* value);

  /// @brief Method OnClearComplete addr 0x24238c8 size 0x4 virtual true final false
  inline void OnClearComplete();

  /// @brief Method OnRemoveComplete addr 0x24238cc size 0x4 virtual true final false
  inline void OnRemoveComplete(int32_t index, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "CollectionBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollectionBase(CollectionBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollectionBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollectionBase(CollectionBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionBase();

public:
  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::CollectionBase, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Collections::CollectionBase, ____list) == 0x10, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::CollectionBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::CollectionBase*, "System.Collections", "CollectionBase");
