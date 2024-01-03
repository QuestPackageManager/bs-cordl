#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(List_1)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> struct __List_1__Enumerator;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> struct __List_1__Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::List_1);
MARK_GEN_VAL_T(::System::Collections::Generic::__List_1__Enumerator);
// Type: ::Enumerator
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3842))
// CS Name: ::List`1::Enumerator<T>
struct CORDL_TYPE __List_1__Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method MoveNextRare, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveNextRare();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  // Ctor Parameters [CppParam { name: "_list", ty: "::System::Collections::Generic::List_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }]
  constexpr __List_1__Enumerator(::System::Collections::Generic::List_1<T>* _list, int32_t _index, int32_t _version, T _current) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __List_1__Enumerator();

  /// @brief Field _list, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<T>* _list;

  /// @brief Field _index, offset: 0x8, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _version, offset: 0xc, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _current, offset: 0x10, size: 0x8, def value: None
  T _current;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: System.Collections.Generic::List`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3843))
// CS Name: ::System.Collections.Generic::List`1<T>*
class CORDL_TYPE List_1 : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Collections::Generic::__List_1__Enumerator<T>;

  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __get__items, put = __set__items))::ArrayW<T, ::Array<T>*> _items;

  /// @brief Field _size, offset 0x18, size 0x4
  __declspec(property(get = __get__size, put = __set__size)) int32_t _size;

  /// @brief Field _version, offset 0x1c, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _syncRoot, offset 0x20, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  /// @brief Field s_emptyArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_emptyArray, put = setStaticF_s_emptyArray))::ArrayW<T, ::Array<T>*> s_emptyArray;

  __declspec(property(get = get_Capacity, put = set_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  __declspec(property(get = System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool System_Collections_Generic_ICollection_T__IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = get_Item, put = set_Item)) T Item[];

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  /// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
  constexpr operator ::System::Collections::Generic::IList_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  constexpr ::ArrayW<T, ::Array<T>*>& __get__items();

  constexpr ::ArrayW<T, ::Array<T>*> const& __get__items() const;

  constexpr void __set__items(::ArrayW<T, ::Array<T>*> value);

  constexpr int32_t& __get__size();

  constexpr int32_t const& __get__size() const;

  constexpr void __set__size(int32_t value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline void setStaticF_s_emptyArray(::ArrayW<T, ::Array<T>*> value);

  static inline ::ArrayW<T, ::Array<T>*> getStaticF_s_emptyArray();

  static inline ::System::Collections::Generic::List_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<T>* New_ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  static inline ::System::Collections::Generic::List_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method set_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Capacity(int32_t value);

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.IList.get_IsFixedSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsFixedSize();

  /// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Item(int32_t index);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_Item(int32_t index, T value);

  /// @brief Method IsCompatibleObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsCompatibleObject(::System::Object* value);

  /// @brief Method System.Collections.IList.get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Add(T item);

  /// @brief Method AddWithResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddWithResize(T item);

  /// @brief Method System.Collections.IList.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* item);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* AsReadOnly();

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t BinarySearch(int32_t index, int32_t count, T item, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t BinarySearch(T item);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t BinarySearch(T item, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T item);

  /// @brief Method System.Collections.IList.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* item);

  /// @brief Method ConvertAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOutput> inline ::System::Collections::Generic::List_1<TOutput>* ConvertAll(::System::Converter_2<T, TOutput>* converter);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method EnsureCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnsureCapacity(int32_t min);

  /// @brief Method Exists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Exists(::System::Predicate_1<T>* match);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T Find(::System::Predicate_1<T>* match);

  /// @brief Method FindAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* FindAll(::System::Predicate_1<T>* match);

  /// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t FindIndex(::System::Predicate_1<T>* match);

  /// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t FindIndex(int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match);

  /// @brief Method FindLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T FindLast(::System::Predicate_1<T>* match);

  /// @brief Method ForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ForEach(::System::Action_1<T>* action);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::__List_1__Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* GetRange(int32_t index, int32_t count);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t IndexOf(T item);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* item);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Insert(int32_t index, T item);

  /// @brief Method System.Collections.IList.Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* item);

  /// @brief Method InsertRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertRange(int32_t index, ::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method System.Collections.IList.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* item);

  /// @brief Method RemoveAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RemoveAll(::System::Predicate_1<T>* match);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reverse();

  /// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reverse(int32_t index, int32_t count);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sort();

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sort(::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sort(int32_t index, int32_t count, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sort(::System::Comparison_1<T>* comparison);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TrimExcess();

  /// @brief Method AddEnumerable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddEnumerable(::System::Collections::Generic::IEnumerable_1<T>* enumerable);

  // Ctor Parameters [CppParam { name: "", ty: "List_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  List_1(List_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "List_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  List_1(List_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr List_1();

public:
  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____items;

  /// @brief Field _size, offset: 0x18, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _version, offset: 0x1c, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _syncRoot, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field DefaultCapacity offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCapacity{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::List_1, "System.Collections.Generic", "List`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__List_1__Enumerator, "System.Collections.Generic", "List`1/Enumerator");
