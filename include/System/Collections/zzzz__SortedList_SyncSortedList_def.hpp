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
namespace GlobalNamespace {
class SortedList_SyncSortedList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SortedList_SyncSortedList);
// Dependencies System.Collections.SortedList
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Collections.SortedList/SyncSortedList
class CORDL_TYPE SortedList_SyncSortedList : public ::System::Collections::SortedList {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field _list, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::SortedList* _list;

  /// @brief Field _root, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__root, put = __cordl_internal_set__root)) ::System::Object* _root;

  /// @brief Method Add, addr 0x3dbc830, size 0xe4, virtual true, abstract: false, final false
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear, addr 0x3dbc914, size 0xd4, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x3dbc9e8, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x3dbcacc, size 0xec, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* key);

  /// @brief Method ContainsKey, addr 0x3dbcbb8, size 0xec, virtual true, abstract: false, final false
  inline bool ContainsKey(::System::Object* key);

  /// @brief Method ContainsValue, addr 0x3dbcca4, size 0xec, virtual true, abstract: false, final false
  inline bool ContainsValue(::System::Object* key);

  /// @brief Method CopyTo, addr 0x3dbcd90, size 0xe4, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetByIndex, addr 0x3dbce74, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* GetByIndex(int32_t index);

  /// @brief Method GetEnumerator, addr 0x3dbcf60, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method GetKey, addr 0x3dbd044, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* GetKey(int32_t index);

  /// @brief Method GetKeyList, addr 0x3dbd130, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetKeyList();

  /// @brief Method GetValueList, addr 0x3dbd214, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Collections::IList* GetValueList();

  /// @brief Method IndexOfKey, addr 0x3dbd2f8, size 0x14c, virtual true, abstract: false, final false
  inline int32_t IndexOfKey(::System::Object* key);

  /// @brief Method IndexOfValue, addr 0x3dbd444, size 0xec, virtual true, abstract: false, final false
  inline int32_t IndexOfValue(::System::Object* value);

  static inline ::GlobalNamespace::SortedList_SyncSortedList* New_ctor(::System::Collections::SortedList* list);

  /// @brief Method Remove, addr 0x3dbd60c, size 0xdc, virtual true, abstract: false, final false
  inline void Remove(::System::Object* key);

  /// @brief Method RemoveAt, addr 0x3dbd530, size 0xdc, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  constexpr ::System::Collections::SortedList* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::SortedList*& __cordl_internal_get__list();

  constexpr ::System::Object* const& __cordl_internal_get__root() const;

  constexpr ::System::Object*& __cordl_internal_get__root();

  constexpr void __cordl_internal_set__list(::System::Collections::SortedList* value);

  constexpr void __cordl_internal_set__root(::System::Object* value);

  /// @brief Method .ctor, addr 0x3dbc4d4, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::SortedList* list);

  /// @brief Method get_Count, addr 0x3dbc524, size 0xe4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x3dbc634, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3dbc610, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3dbc658, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x3dbc660, size 0xec, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method get_SyncRoot, addr 0x3dbc608, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method set_Item, addr 0x3dbc74c, size 0xe4, virtual true, abstract: false, final false
  inline void set_Item(::System::Object* key, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedList_SyncSortedList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedList_SyncSortedList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedList_SyncSortedList(SortedList_SyncSortedList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedList_SyncSortedList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedList_SyncSortedList(SortedList_SyncSortedList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3785 };

  /// @brief Field _list, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::SortedList* ____list;

  /// @brief Field _root, offset: 0x50, size: 0x8, def value: None
  ::System::Object* ____root;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SortedList_SyncSortedList, ____list) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SortedList_SyncSortedList, ____root) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SortedList_SyncSortedList, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SortedList_SyncSortedList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SortedList_SyncSortedList*, "System.Collections", "SortedList/SyncSortedList");
