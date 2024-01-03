#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayList_IListWrapper)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class IList;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3791))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3787))
// CS Name: ::ArrayList::IListWrapper*
class CORDL_TYPE __ArrayList__IListWrapper : public ::System::Collections::ArrayList {
public:
  // Declarations
  /// @brief Field _list, offset 0x28, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::IList* _list;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  constexpr ::System::Collections::IList*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::IList* value);

  static inline ::System::Collections::__ArrayList__IListWrapper* New_ctor(::System::Collections::IList* list);

  /// @brief Method .ctor, addr 0x2585060, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* list);

  /// @brief Method set_Capacity, addr 0x258508c, size 0x94, virtual true, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_Count, addr 0x2585120, size 0xa4, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly, addr 0x25851c4, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize, addr 0x2585268, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized, addr 0x258530c, size 0xa4, virtual true, abstract: false, final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item, addr 0x25853b0, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x2585458, size 0xcc, virtual true, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

  /// @brief Method get_SyncRoot, addr 0x2585524, size 0xa4, virtual true, abstract: false, final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method Add, addr 0x25855c8, size 0xbc, virtual true, abstract: false, final false
  inline int32_t Add(::System::Object* obj);

  /// @brief Method AddRange, addr 0x2585684, size 0x48, virtual true, abstract: false, final false
  inline void AddRange(::System::Collections::ICollection* c);

  /// @brief Method Clear, addr 0x25856cc, size 0x168, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Clone, addr 0x2585834, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Contains, addr 0x25858a0, size 0xac, virtual true, abstract: false, final false
  inline bool Contains(::System::Object* obj);

  /// @brief Method CopyTo, addr 0x258594c, size 0xb8, virtual true, abstract: false, final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method CopyTo, addr 0x2585a04, size 0x348, virtual true, abstract: false, final false
  inline void CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count);

  /// @brief Method GetEnumerator, addr 0x2585d4c, size 0xa0, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf, addr 0x2585dec, size 0xac, virtual true, abstract: false, final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert, addr 0x2585e98, size 0xcc, virtual true, abstract: false, final false
  inline void Insert(int32_t index, ::System::Object* obj);

  /// @brief Method InsertRange, addr 0x2585f64, size 0x3d0, virtual true, abstract: false, final false
  inline void InsertRange(int32_t index, ::System::Collections::ICollection* c);

  /// @brief Method Remove, addr 0x2586334, size 0x40, virtual true, abstract: false, final false
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt, addr 0x2586374, size 0xbc, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange, addr 0x2586430, size 0x220, virtual true, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reverse, addr 0x2586650, size 0x370, virtual true, abstract: false, final false
  inline void Reverse(int32_t index, int32_t count);

  /// @brief Method Sort, addr 0x25869c0, size 0x2c4, virtual true, abstract: false, final false
  inline void Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer);

  /// @brief Method ToArray, addr 0x2586c84, size 0x15c, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ToArray();

  /// @brief Method ToArray, addr 0x2586de0, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::Array* ToArray(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__IListWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayList__IListWrapper(__ArrayList__IListWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__IListWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayList__IListWrapper(__ArrayList__IListWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayList__IListWrapper();

public:
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
