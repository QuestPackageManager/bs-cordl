#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayList_ReadOnlyArrayList)
namespace System::Collections {
class ArrayList;
}
namespace System {
class Object;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Type;
}
namespace System {
class Array;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IComparer;
}
// Forward declare root types
namespace System::Collections {
class __ArrayList__ReadOnlyArrayList;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::__ArrayList__ReadOnlyArrayList);
// Type: ::ReadOnlyArrayList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3779))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3776))
// CS Name: ::ArrayList::ReadOnlyArrayList*
class CORDL_TYPE __ArrayList__ReadOnlyArrayList : public ::System::Collections::ArrayList {
public:
  // Declarations
  /// @brief Field _list, offset 0x28, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::ArrayList* _list;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(put = set_Capacity)) int32_t Capacity;

  constexpr ::System::Collections::ArrayList*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::ArrayList* value);

  static inline ::System::Collections::__ArrayList__ReadOnlyArrayList* New_ctor(::System::Collections::ArrayList* l);

  /// @brief Method .ctor addr 0x242960c size 0x24 virtual false final false
  inline void _ctor(::System::Collections::ArrayList* l);

  /// @brief Method get_Count addr 0x242bc54 size 0x24 virtual true final false
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly addr 0x242bc78 size 0x8 virtual true final false
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize addr 0x242bc80 size 0x8 virtual true final false
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized addr 0x242bc88 size 0x24 virtual true final false
  inline bool get_IsSynchronized();

  /// @brief Method get_Item addr 0x242bcac size 0x24 virtual true final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method set_Item addr 0x242bcd0 size 0x50 virtual true final false
  inline void set_Item(int32_t index, ::System::Object* value);

  /// @brief Method get_SyncRoot addr 0x242bd20 size 0x24 virtual true final false
  inline ::System::Object* get_SyncRoot();

  /// @brief Method Add addr 0x242bd44 size 0x50 virtual true final false
  inline int32_t Add(::System::Object* obj);

  /// @brief Method AddRange addr 0x242bd94 size 0x50 virtual true final false
  inline void AddRange(::System::Collections::ICollection* c);

  /// @brief Method set_Capacity addr 0x242bde4 size 0x50 virtual true final false
  inline void set_Capacity(int32_t value);

  /// @brief Method Clear addr 0x242be34 size 0x50 virtual true final false
  inline void Clear();

  /// @brief Method Clone addr 0x242be84 size 0xec virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method Contains addr 0x242bf70 size 0x24 virtual true final false
  inline bool Contains(::System::Object* obj);

  /// @brief Method CopyTo addr 0x242bf94 size 0x24 virtual true final false
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method CopyTo addr 0x242bfb8 size 0x24 virtual true final false
  inline void CopyTo(int32_t index, ::System::Array* array, int32_t arrayIndex, int32_t count);

  /// @brief Method GetEnumerator addr 0x242bfdc size 0x24 virtual true final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method IndexOf addr 0x242c000 size 0x24 virtual true final false
  inline int32_t IndexOf(::System::Object* value);

  /// @brief Method Insert addr 0x242c024 size 0x50 virtual true final false
  inline void Insert(int32_t index, ::System::Object* obj);

  /// @brief Method InsertRange addr 0x242c074 size 0x50 virtual true final false
  inline void InsertRange(int32_t index, ::System::Collections::ICollection* c);

  /// @brief Method Remove addr 0x242c0c4 size 0x50 virtual true final false
  inline void Remove(::System::Object* value);

  /// @brief Method RemoveAt addr 0x242c114 size 0x50 virtual true final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange addr 0x242c164 size 0x50 virtual true final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reverse addr 0x242c1b4 size 0x50 virtual true final false
  inline void Reverse(int32_t index, int32_t count);

  /// @brief Method Sort addr 0x242c204 size 0x50 virtual true final false
  inline void Sort(int32_t index, int32_t count, ::System::Collections::IComparer* comparer);

  /// @brief Method ToArray addr 0x242c254 size 0x24 virtual true final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ToArray();

  /// @brief Method ToArray addr 0x242c278 size 0x24 virtual true final false
  inline ::System::Array* ToArray(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ReadOnlyArrayList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ArrayList__ReadOnlyArrayList(__ArrayList__ReadOnlyArrayList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ArrayList__ReadOnlyArrayList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ArrayList__ReadOnlyArrayList(__ArrayList__ReadOnlyArrayList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ArrayList__ReadOnlyArrayList();

public:
  /// @brief Field _list, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::__ArrayList__ReadOnlyArrayList, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Collections::__ArrayList__ReadOnlyArrayList, ____list) == 0x28, "Offset mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::__ArrayList__ReadOnlyArrayList);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::__ArrayList__ReadOnlyArrayList*, "System.Collections", "ArrayList/ReadOnlyArrayList");
