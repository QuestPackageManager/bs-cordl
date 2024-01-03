#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LowLevelList_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class LowLevelList_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::LowLevelList_1);
// Type: System.Collections.Generic::LowLevelList`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3859))
// CS Name: ::System.Collections.Generic::LowLevelList`1<T>*
class CORDL_TYPE LowLevelList_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __get__items, put = __set__items))::ArrayW<T, ::Array<T>*> _items;

  /// @brief Field _size, offset 0x18, size 0x4
  __declspec(property(get = __get__size, put = __set__size)) int32_t _size;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field s_emptyArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_emptyArray, put = setStaticF_s_emptyArray))::ArrayW<T, ::Array<T>*> s_emptyArray;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  constexpr ::ArrayW<T, ::Array<T>*>& __get__items();

  constexpr ::ArrayW<T, ::Array<T>*> const& __get__items() const;

  constexpr void __set__items(::ArrayW<T, ::Array<T>*> value);

  constexpr int32_t& __get__size();

  constexpr int32_t const& __get__size() const;

  constexpr void __set__size(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  static inline void setStaticF_s_emptyArray(::ArrayW<T, ::Array<T>*> value);

  static inline ::ArrayW<T, ::Array<T>*> getStaticF_s_emptyArray();

  static inline ::System::Collections::Generic::LowLevelList_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::LowLevelList_1<T>* New_ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(T item);

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T item);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(T item);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, T item);

  /// @brief Method InsertRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRange(int32_t index, ::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RemoveAll(::System::Predicate_1<T>* match);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  // Ctor Parameters [CppParam { name: "", ty: "LowLevelList_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LowLevelList_1(LowLevelList_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LowLevelList_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LowLevelList_1(LowLevelList_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LowLevelList_1();

public:
  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____items;

  /// @brief Field _size, offset: 0x18, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _defaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t _defaultCapacity{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::LowLevelList_1, "System.Collections.Generic", "LowLevelList`1");
