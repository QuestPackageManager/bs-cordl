#pragma once
// IWYU pragma private; include "System\Collections\ArrayList_ReadOnlyArrayList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayList_ReadOnlyArrayList)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ArrayList_ReadOnlyArrayList;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ArrayList_ReadOnlyArrayList*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArrayList_ReadOnlyArrayList*, "System.Collections", "ArrayList/ReadOnlyArrayList");
// Dependencies System.Collections.ArrayList
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Collections.ArrayList/ReadOnlyArrayList
class CORDL_TYPE ArrayList_ReadOnlyArrayList : public ::System::Collections::ArrayList {
public:
  // Declarations
  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  /// @brief Field _list, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list)) ::System::Collections::ArrayList* _list;

  /// @brief Method Add, addr 0x5beefe4, size 0x4c, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* obj);

  /// @brief Method AddRange, addr 0x5bef030, size 0x4c, virtual true, abstract: false, final false
  inline void AddRange(::System::Collections::ICollection* c);

  /// @brief Method Clear, addr 0x5bef0c8, size 0x4c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x5bef114, size 0xf4, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x5bef208, size 0x20, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* obj);

  /// @brief Method CopyTo, addr 0x5bef228, size 0x20, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method CopyTo, addr 0x5bef248, size 0x20, virtual true, abstract: false, final false
  inline void CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count);

  /// @brief Method GetEnumerator, addr 0x5bef268, size 0x20, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x5bef288, size 0x20, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x5bef2a8, size 0x4c, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* obj);

  /// @brief Method InsertRange, addr 0x5bef2f4, size 0x4c, virtual true, abstract: false, final false
  inline void InsertRange(int32_t index, ::System::Collections::ICollection* c);

  static inline ::GlobalNamespace::ArrayList_ReadOnlyArrayList* New_ctor(::System::Collections::ArrayList* l);

  /// @brief Method Remove, addr 0x5bef340, size 0x4c, virtual true, abstract: false, final false
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x5bef38c, size 0x4c, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange, addr 0x5bef3d8, size 0x4c, virtual true, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reverse, addr 0x5bef424, size 0x4c, virtual true, abstract: false, final false
  inline void Reverse(int32_t index, int32_t count);

  /// @brief Method Sort, addr 0x5bef470, size 0x4c, virtual true, abstract: false, final false
  inline void Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer);

  /// @brief Method ToArray, addr 0x5bef4bc, size 0x20, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*> ToArray();

  /// @brief Method ToArray, addr 0x5bef4dc, size 0x20, virtual true, abstract: false, final false
  inline ::System::Array* ToArray(::System::Type* type);

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__list() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__list();

  constexpr void __cordl_internal_set__list(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x5bec898, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* l);

  /// @brief Method get_Count, addr 0x5beef08, size 0x20, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x5beef30, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x5beef28, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x5beef38, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x5beef58, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x5beefc4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method set_Capacity, addr 0x5bef07c, size 0x4c, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x5beef78, size 0x4c, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayList_ReadOnlyArrayList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayList_ReadOnlyArrayList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayList_ReadOnlyArrayList(ArrayList_ReadOnlyArrayList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayList_ReadOnlyArrayList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayList_ReadOnlyArrayList(ArrayList_ReadOnlyArrayList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3722 };

  /// @brief Field _list, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArrayList_ReadOnlyArrayList, ____list) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArrayList_ReadOnlyArrayList) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
