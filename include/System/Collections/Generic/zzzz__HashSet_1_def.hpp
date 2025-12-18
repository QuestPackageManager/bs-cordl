#pragma once
// IWYU pragma private; include "System/Collections/Generic/HashSet_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashSet_1)
namespace System::Collections::Generic {
template <typename T> struct HashSet_1_ElementCount;
}
namespace System::Collections::Generic {
template <typename T> struct HashSet_1_Enumerator;
}
namespace System::Collections::Generic {
template <typename T> struct HashSet_1_Slot;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template <typename T> class ISet_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> struct HashSet_1_ElementCount;
}
namespace System::Collections::Generic {
template <typename T> struct HashSet_1_Enumerator;
}
namespace System::Collections::Generic {
template <typename T> struct HashSet_1_Slot;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::HashSet_1);
MARK_GEN_VAL_T(::System::Collections::Generic::HashSet_1_ElementCount);
MARK_GEN_VAL_T(::System::Collections::Generic::HashSet_1_Enumerator);
MARK_GEN_VAL_T(::System::Collections::Generic::HashSet_1_Slot);
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Collections.Generic.HashSet`1/ElementCount<T>
struct CORDL_TYPE HashSet_1_ElementCount {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSet_1_ElementCount();

  // Ctor Parameters [CppParam { name: "uniqueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unfoundCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HashSet_1_ElementCount(int32_t uniqueCount, int32_t unfoundCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16654 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field uniqueCount, offset: 0x0, size: 0x4, def value: None
  int32_t uniqueCount;

  /// @brief Field unfoundCount, offset: 0x4, size: 0x4, def value: None
  int32_t unfoundCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Collections.Generic.HashSet`1/Slot<T>
struct CORDL_TYPE HashSet_1_Slot {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSet_1_Slot();

  // Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value",
  // ty: "T", modifiers: "", def_value: None }]
  constexpr HashSet_1_Slot(int32_t hashCode, int32_t next, T value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16655 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
  int32_t hashCode;

  /// @brief Field next, offset: 0x4, size: 0x4, def value: None
  int32_t next;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  T value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Collections.Generic.HashSet`1/Enumerator<T>
struct CORDL_TYPE HashSet_1_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::HashSet_1<T>* set);

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSet_1_Enumerator();

  // Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }]
  constexpr HashSet_1_Enumerator(::System::Collections::Generic::HashSet_1<T>* _set, int32_t _index, int32_t _version, T _current) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16656 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _set, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* _set;

  /// @brief Field _index, offset: 0x8, size: 0x4, def value: None
  int32_t _index;

  /// @brief Field _version, offset: 0xc, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _current, offset: 0x10, size: 0x8, def value: None
  T _current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.HashSet`1<T>
class CORDL_TYPE HashSet_1 : public ::System::Object {
public:
  // Declarations
  using ElementCount = ::System::Collections::Generic::HashSet_1_ElementCount<T>;

  using Enumerator = ::System::Collections::Generic::HashSet_1_Enumerator<T>;

  using Slot = ::System::Collections::Generic::HashSet_1_Slot<T>;

  __declspec(property(get = get_Comparer)) ::System::Collections::Generic::IEqualityComparer_1<T>* Comparer;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool System_Collections_Generic_ICollection_T__IsReadOnly;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__buckets, put = __cordl_internal_set__buckets)) ::ArrayW<int32_t, ::Array<int32_t>*> _buckets;

  /// @brief Field _comparer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__comparer, put = __cordl_internal_set__comparer)) ::System::Collections::Generic::IEqualityComparer_1<T>* _comparer;

  /// @brief Field _count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int32_t _count;

  /// @brief Field _freeList, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__freeList, put = __cordl_internal_set__freeList)) int32_t _freeList;

  /// @brief Field _lastIndex, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__lastIndex, put = __cordl_internal_set__lastIndex)) int32_t _lastIndex;

  /// @brief Field _siInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__siInfo, put = __cordl_internal_set__siInfo)) ::System::Runtime::Serialization::SerializationInfo* _siInfo;

  /// @brief Field _slots, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__slots,
                      put = __cordl_internal_set__slots)) ::ArrayW<::System::Collections::Generic::HashSet_1_Slot<T>, ::Array<::System::Collections::Generic::HashSet_1_Slot<T>>*>
      _slots;

  /// @brief Field _version, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__version, put = __cordl_internal_set__version)) int32_t _version;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
  constexpr operator ::System::Collections::Generic::ISet_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Add(T item);

  /// @brief Method AddIfNotPresent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool AddIfNotPresent(T value);

  /// @brief Method AddOrGetLocation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool AddOrGetLocation(T value, ::ByRef<int32_t> location);

  /// @brief Method AddValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddValue(int32_t index, int32_t hashCode, T value);

  /// @brief Method AreEqualityComparersEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<T>* set1, ::System::Collections::Generic::HashSet_1<T>* set2);

  /// @brief Method CheckUniqueAndUnfoundElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1_ElementCount<T> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>* other, bool returnIfUnfound);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Contains(T item);

  /// @brief Method ContainsAllElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method CopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyFrom(::System::Collections::Generic::HashSet_1<T>* source);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex, int32_t count);

  /// @brief Method ExceptWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1_Enumerator<T> GetEnumerator();

  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IncreaseCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IncreaseCapacity();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Initialize(int32_t capacity);

  /// @brief Method InternalGetHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t InternalGetHashCode(T item);

  /// @brief Method InternalIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t InternalIndexOf(T item);

  /// @brief Method IntersectWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IntersectWithEnumerable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IntersectWithHashSetWithSameEC, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<T>* other);

  /// @brief Method IsProperSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsProperSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsSubsetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IsSubsetOfHashSetWithSameEC, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool IsSubsetOfHashSetWithSameEC(::System::Collections::Generic::HashSet_1<T>* other);

  /// @brief Method IsSupersetOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor();

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(int32_t capacity);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Overlaps, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Overlaps(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method RemoveWhere, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t RemoveWhere(::System::Predicate_1<T>* match);

  /// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetCapacity(int32_t newSize);

  /// @brief Method SetEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method SymmetricExceptWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method SymmetricExceptWithEnumerable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SymmetricExceptWithEnumerable(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method SymmetricExceptWithUniqueHashSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SymmetricExceptWithUniqueHashSet(::System::Collections::Generic::HashSet_1<T>* other);

  /// @brief Method System.Collections.Generic.ICollection<T>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_T__Add(T item);

  /// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TrimExcess();

  /// @brief Method UnionWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__buckets() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__buckets();

  constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* const& __cordl_internal_get__comparer() const;

  constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& __cordl_internal_get__comparer();

  constexpr int32_t const& __cordl_internal_get__count() const;

  constexpr int32_t& __cordl_internal_get__count();

  constexpr int32_t const& __cordl_internal_get__freeList() const;

  constexpr int32_t& __cordl_internal_get__freeList();

  constexpr int32_t const& __cordl_internal_get__lastIndex() const;

  constexpr int32_t& __cordl_internal_get__lastIndex();

  constexpr ::System::Runtime::Serialization::SerializationInfo* const& __cordl_internal_get__siInfo() const;

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get__siInfo();

  constexpr ::ArrayW<::System::Collections::Generic::HashSet_1_Slot<T>, ::Array<::System::Collections::Generic::HashSet_1_Slot<T>>*> const& __cordl_internal_get__slots() const;

  constexpr ::ArrayW<::System::Collections::Generic::HashSet_1_Slot<T>, ::Array<::System::Collections::Generic::HashSet_1_Slot<T>>*>& __cordl_internal_get__slots();

  constexpr int32_t const& __cordl_internal_get__version() const;

  constexpr int32_t& __cordl_internal_get__version();

  constexpr void __cordl_internal_set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__comparer(::System::Collections::Generic::IEqualityComparer_1<T>* value);

  constexpr void __cordl_internal_set__count(int32_t value);

  constexpr void __cordl_internal_set__freeList(int32_t value);

  constexpr void __cordl_internal_set__lastIndex(int32_t value);

  constexpr void __cordl_internal_set__siInfo(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr void __cordl_internal_set__slots(::ArrayW<::System::Collections::Generic::HashSet_1_Slot<T>, ::Array<::System::Collections::Generic::HashSet_1_Slot<T>>*> value);

  constexpr void __cordl_internal_set__version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Comparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEqualityComparer_1<T>* get_Comparer();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
  constexpr ::System::Collections::Generic::ISet_1<T>* i___System__Collections__Generic__ISet_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSet_1(HashSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSet_1(HashSet_1 const&) = delete;

  /// @brief Field CapacityName offset 0xffffffff size 0x8
  static constexpr ::ConstString CapacityName{ u"Capacity" };

  /// @brief Field ComparerName offset 0xffffffff size 0x8
  static constexpr ::ConstString ComparerName{ u"Comparer" };

  /// @brief Field ElementsName offset 0xffffffff size 0x8
  static constexpr ::ConstString ElementsName{ u"Elements" };

  /// @brief Field Lower31BitMask offset 0xffffffff size 0x4
  static constexpr int32_t Lower31BitMask{ static_cast<int32_t>(0x7fffffff) };

  /// @brief Field ShrinkThreshold offset 0xffffffff size 0x4
  static constexpr int32_t ShrinkThreshold{ static_cast<int32_t>(0x3) };

  /// @brief Field StackAllocThreshold offset 0xffffffff size 0x4
  static constexpr int32_t StackAllocThreshold{ static_cast<int32_t>(0x64) };

  /// @brief Field VersionName offset 0xffffffff size 0x8
  static constexpr ::ConstString VersionName{ u"Version" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16657 };

  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____buckets;

  /// @brief Field _slots, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::HashSet_1_Slot<T>, ::Array<::System::Collections::Generic::HashSet_1_Slot<T>>*> ____slots;

  /// @brief Field _count, offset: 0x20, size: 0x4, def value: None
  int32_t ____count;

  /// @brief Field _lastIndex, offset: 0x24, size: 0x4, def value: None
  int32_t ____lastIndex;

  /// @brief Field _freeList, offset: 0x28, size: 0x4, def value: None
  int32_t ____freeList;

  /// @brief Field _comparer, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IEqualityComparer_1<T>* ____comparer;

  /// @brief Field _version, offset: 0x38, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _siInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ____siInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::HashSet_1, "System.Collections.Generic", "HashSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::HashSet_1_ElementCount, "System.Collections.Generic", "HashSet`1/ElementCount");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::HashSet_1_Enumerator, "System.Collections.Generic", "HashSet`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::HashSet_1_Slot, "System.Collections.Generic", "HashSet`1/Slot");
