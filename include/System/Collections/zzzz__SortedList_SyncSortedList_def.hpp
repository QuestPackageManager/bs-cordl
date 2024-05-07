#pragma once
// IWYU pragma private; include "System/Collections/SortedList_SyncSortedList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__SortedList_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SortedList_SyncSortedList)
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class SortedList;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class __SortedList__SyncSortedList;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::__SortedList__SyncSortedList);
// Type: ::SyncSortedList
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::SortedList::SyncSortedList*
class CORDL_TYPE __SortedList__SyncSortedList : public ::System::Collections::SortedList {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field _list, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list))::System::Collections::SortedList* _list;

  /// @brief Field _root, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__root, put = __cordl_internal_set__root))::System::Object* _root;

  /// @brief Method Add, addr 0x29058a0, size 0xe4, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x2905984, size 0xd4, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x2905a58, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x2905b3c, size 0xec, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey, addr 0x2905c28, size 0xec, virtual true, abstract: false, final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method ContainsValue, addr 0x2905d14, size 0xec, virtual true, abstract: false, final false
  inline bool ContainsValue(::System::Object* key);

  /// @brief Method CopyTo, addr 0x2905e00, size 0xe4, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetByIndex, addr 0x2905ee4, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* GetByIndex(int32_t index);

  /// @brief Method GetEnumerator, addr 0x2905fd0, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetKey, addr 0x29060b4, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* GetKey(int32_t index);

  /// @brief Method GetKeyList, addr 0x29061a0, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetKeyList();

  /// @brief Method GetValueList, addr 0x2906284, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetValueList();

  /// @brief Method IndexOfKey, addr 0x2906368, size 0x154, virtual true, abstract: false, final false
  inline int32_t IndexOfKey(::System::Object* key);

  /// @brief Method IndexOfValue, addr 0x29064bc, size 0xec, virtual true, abstract: false, final false
  inline int32_t IndexOfValue(::System::Object* value);

  static inline ::System::Collections::__SortedList__SyncSortedList* New_ctor(::System::Collections::SortedList* list);

  /// @brief Method Remove, addr 0x2906684, size 0xdc, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method RemoveAt, addr 0x29065a8, size 0xdc, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  constexpr ::System::Collections::SortedList*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::SortedList*> const& __cordl_internal_get__list() const;

  constexpr ::System::Object*& __cordl_internal_get__root();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__root() const;

  constexpr void __cordl_internal_set__list(::System::Collections::SortedList* value);

  constexpr void __cordl_internal_set__root(::System::Object* value);

  /// @brief Method .ctor, addr 0x2905544, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* list);

  /// @brief Method get_Count, addr 0x2905594, size 0xe4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x29056a4, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x2905680, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x29056c8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x29056d0, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_SyncRoot, addr 0x2905678, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method set_Item, addr 0x29057bc, size 0xe4, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SortedList__SyncSortedList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SyncSortedList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SortedList__SyncSortedList(__SortedList__SyncSortedList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SortedList__SyncSortedList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SortedList__SyncSortedList(__SortedList__SyncSortedList const&) = delete;

  /// @brief Field _list, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::SortedList* ____list;

  /// @brief Field _root, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ____root;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__SortedList__SyncSortedList, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SyncSortedList, ____list) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Collections::__SortedList__SyncSortedList, ____root) == 0x50, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::__SortedList__SyncSortedList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__SortedList__SyncSortedList*, "System.Collections", "SortedList/SyncSortedList");
