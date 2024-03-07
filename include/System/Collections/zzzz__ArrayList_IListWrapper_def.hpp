#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayList_IListWrapper)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IList;
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
namespace System::Collections {
class __ArrayList__IListWrapper;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::__ArrayList__IListWrapper);
// Type: ::IListWrapper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::ArrayList::IListWrapper*
class CORDL_TYPE __ArrayList__IListWrapper : public ::System::Collections::ArrayList {
public:
  // Declarations
  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  /// @brief Field _list, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__list, put = __cordl_internal_set__list))::System::Collections::IList* _list;

  /// @brief Method Add, addr 0x26d9f14, size 0xbc, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* obj);

  /// @brief Method AddRange, addr 0x26d9fd0, size 0x48, virtual true, abstract: false, final false
  inline void AddRange(::System::Collections::ICollection* c);

  /// @brief Method Clear, addr 0x26da018, size 0x168, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x26da180, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x26da1ec, size 0xac, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* obj);

  /// @brief Method CopyTo, addr 0x26da298, size 0xb8, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method CopyTo, addr 0x26da350, size 0x348, virtual true, abstract: false, final false
  inline void CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count);

  /// @brief Method GetEnumerator, addr 0x26da698, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x26da738, size 0xac, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x26da7e4, size 0xcc, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* obj);

  /// @brief Method InsertRange, addr 0x26da8b0, size 0x3d0, virtual true, abstract: false, final false
  inline void InsertRange(int32_t index, ::System::Collections::ICollection* c);

  static inline ::System::Collections::__ArrayList__IListWrapper* New_ctor(::System::Collections::IList* list);

  /// @brief Method Remove, addr 0x26dac80, size 0x40, virtual true, abstract: false, final false
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x26dacc0, size 0xbc, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange, addr 0x26dad7c, size 0x220, virtual true, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reverse, addr 0x26daf9c, size 0x370, virtual true, abstract: false, final false
  inline void Reverse(int32_t index, int32_t count);

  /// @brief Method Sort, addr 0x26db30c, size 0x2c4, virtual true, abstract: false, final false
  inline void Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer);

  /// @brief Method ToArray, addr 0x26db5d0, size 0x15c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ToArray();

  /// @brief Method ToArray, addr 0x26db72c, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::Array* ToArray(::System::Type* type);

  constexpr ::System::Collections::IList*& __cordl_internal_get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get__list() const;

  constexpr void __cordl_internal_set__list(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x26d99ac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* list);

  /// @brief Method get_Count, addr 0x26d9a6c, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsFixedSize, addr 0x26d9bb4, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x26d9b10, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x26d9c58, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x26d9cfc, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_SyncRoot, addr 0x26d9e70, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method set_Capacity, addr 0x26d99d8, size 0x94, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method set_Item, addr 0x26d9da4, size 0xcc, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayList__IListWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__IListWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayList__IListWrapper(__ArrayList__IListWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__IListWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayList__IListWrapper(__ArrayList__IListWrapper const&) = delete;

  /// @brief Field _list, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::IList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ArrayList__IListWrapper, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__IListWrapper, ____list) == 0x28, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::__ArrayList__IListWrapper);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__ArrayList__IListWrapper*, "System.Collections", "ArrayList/IListWrapper");
