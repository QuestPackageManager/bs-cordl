#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashSet_1)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Collections::Generic {
template <typename T> struct __HashSet_1__ElementCount;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections::Generic {
template <typename T> struct __HashSet_1__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename T> struct __HashSet_1__Slot;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> struct __HashSet_1__ElementCount;
}
namespace System::Collections::Generic {
template <typename T> struct __HashSet_1__Enumerator;
}
namespace System::Collections::Generic {
template <typename T> struct __HashSet_1__Slot;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::HashSet_1);
MARK_GEN_VAL_T(::System::Collections::Generic::__HashSet_1__ElementCount);
MARK_GEN_VAL_T(::System::Collections::Generic::__HashSet_1__Enumerator);
MARK_GEN_VAL_T(::System::Collections::Generic::__HashSet_1__Slot);
// Type: ::ElementCount
// SizeInfo { instance_size: 8, native_size: 24, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14650))
// CS Name: ::HashSet`1::ElementCount<T>
struct CORDL_TYPE __HashSet_1__ElementCount {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "uniqueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unfoundCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HashSet_1__ElementCount(int32_t uniqueCount, int32_t unfoundCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HashSet_1__ElementCount();

  /// @brief Field uniqueCount, offset: 0x0, size: 0x4, def value: None
  int32_t uniqueCount;

  /// @brief Field unfoundCount, offset: 0x4, size: 0x4, def value: None
  int32_t unfoundCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::Slot
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14651))
// CS Name: ::HashSet`1::Slot<T>
struct CORDL_TYPE __HashSet_1__Slot {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "value",
  // ty: "T", modifiers: "", def_value: None }]
  constexpr __HashSet_1__Slot(int32_t hashCode, int32_t next, T value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HashSet_1__Slot();

  /// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
  int32_t hashCode;

  /// @brief Field next, offset: 0x4, size: 0x4, def value: None
  int32_t next;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  T value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Type: ::Enumerator
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14652))
// CS Name: ::HashSet`1::Enumerator<T>
struct CORDL_TYPE __HashSet_1__Enumerator {
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

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Generic::HashSet_1<T>* set);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  // Ctor Parameters [CppParam { name: "_set", ty: "::System::Collections::Generic::HashSet_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_current", ty: "T", modifiers: "", def_value: None }]
  constexpr __HashSet_1__Enumerator(::System::Collections::Generic::HashSet_1<T>* _set, int32_t _index, int32_t _version, T _current) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HashSet_1__Enumerator();

  /// @brief Field _set, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<T>* _set;

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
// Type: System.Collections.Generic::HashSet`1
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14653))
// CS Name: ::System.Collections.Generic::HashSet`1<T>*
class CORDL_TYPE HashSet_1 : public ::System::Object {
public:
  // Declarations
  using Enumerator = ::System::Collections::Generic::__HashSet_1__Enumerator<T>;

  using Slot = ::System::Collections::Generic::__HashSet_1__Slot<T>;

  using ElementCount = ::System::Collections::Generic::__HashSet_1__ElementCount<T>;

  /// @brief Field _buckets, offset 0x10, size 0x8
  __declspec(property(get = __get__buckets, put = __set__buckets))::ArrayW<int32_t, ::Array<int32_t>*> _buckets;

  /// @brief Field _slots, offset 0x18, size 0x8
  __declspec(property(get = __get__slots, put = __set__slots))::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>, ::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*> _slots;

  /// @brief Field _count, offset 0x20, size 0x4
  __declspec(property(get = __get__count, put = __set__count)) int32_t _count;

  /// @brief Field _lastIndex, offset 0x24, size 0x4
  __declspec(property(get = __get__lastIndex, put = __set__lastIndex)) int32_t _lastIndex;

  /// @brief Field _freeList, offset 0x28, size 0x4
  __declspec(property(get = __get__freeList, put = __set__freeList)) int32_t _freeList;

  /// @brief Field _comparer, offset 0x30, size 0x8
  __declspec(property(get = __get__comparer, put = __set__comparer))::System::Collections::Generic::IEqualityComparer_1<T>* _comparer;

  /// @brief Field _version, offset 0x38, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _siInfo, offset 0x40, size 0x8
  __declspec(property(get = __get__siInfo, put = __set__siInfo))::System::Runtime::Serialization::SerializationInfo* _siInfo;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool System_Collections_Generic_ICollection_T__IsReadOnly;

  __declspec(property(get = get_Comparer))::System::Collections::Generic::IEqualityComparer_1<T>* Comparer;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__buckets();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__buckets() const;

  constexpr void __set__buckets(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>, ::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*>& __get__slots();

  constexpr ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>, ::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*> const& __get__slots() const;

  constexpr void __set__slots(::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>, ::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*> value);

  constexpr int32_t& __get__count();

  constexpr int32_t const& __get__count() const;

  constexpr void __set__count(int32_t value);

  constexpr int32_t& __get__lastIndex();

  constexpr int32_t const& __get__lastIndex() const;

  constexpr void __set__lastIndex(int32_t value);

  constexpr int32_t& __get__freeList();

  constexpr int32_t const& __get__freeList() const;

  constexpr void __set__freeList(int32_t value);

  constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*& __get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<T>*> const& __get__comparer() const;

  constexpr void __set__comparer(::System::Collections::Generic::IEqualityComparer_1<T>* value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __get__siInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> const& __get__siInfo() const;

  constexpr void __set__siInfo(::System::Runtime::Serialization::SerializationInfo* value);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* collection);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<T>* collection, ::System::Collections::Generic::IEqualityComparer_1<T>* comparer);

  static inline ::System::Collections::Generic::HashSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CopyFrom(::System::Collections::Generic::HashSet_1<T>* source);

  /// @brief Method System.Collections.Generic.ICollection<T>.Add addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_Generic_ICollection_T__Add(T item);

  /// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Contains(T item);

  /// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Remove(T item);

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
  inline int32_t get_Count();

  /// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly();

  /// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::__HashSet_1__Enumerator<T> GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method GetObjectData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialization addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Add(T item);

  /// @brief Method UnionWith addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IntersectWith addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method ExceptWith addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method SetEquals addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex, int32_t count);

  /// @brief Method RemoveWhere addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t RemoveWhere(::System::Predicate_1<T>* match);

  /// @brief Method get_Comparer addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::IEqualityComparer_1<T>* get_Comparer();

  /// @brief Method TrimExcess addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void TrimExcess();

  /// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t Initialize(int32_t capacity);

  /// @brief Method IncreaseCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void IncreaseCapacity();

  /// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SetCapacity(int32_t newSize);

  /// @brief Method AddIfNotPresent addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool AddIfNotPresent(T value);

  /// @brief Method AddValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AddValue(int32_t index, int32_t hashCode, T value);

  /// @brief Method ContainsAllElements addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool ContainsAllElements(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method IntersectWithHashSetWithSameEC addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void IntersectWithHashSetWithSameEC(::System::Collections::Generic::HashSet_1<T>* other);

  /// @brief Method IntersectWithEnumerable addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void IntersectWithEnumerable(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method InternalIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t InternalIndexOf(T item);

  /// @brief Method CheckUniqueAndUnfoundElements addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::System::Collections::Generic::__HashSet_1__ElementCount<T> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>* other, bool returnIfUnfound);

  /// @brief Method AreEqualityComparersEqual addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool AreEqualityComparersEqual(::System::Collections::Generic::HashSet_1<T>* set1, ::System::Collections::Generic::HashSet_1<T>* set2);

  /// @brief Method InternalGetHashCode addr 0x0 size 0xffffffffffffffff virtual false final false
  inline int32_t InternalGetHashCode(T item);

  // Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashSet_1(HashSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashSet_1(HashSet_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashSet_1();

public:
  /// @brief Field _buckets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____buckets;

  /// @brief Field _slots, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::__HashSet_1__Slot<T>, ::Array<::System::Collections::Generic::__HashSet_1__Slot<T>>*> ____slots;

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

  /// @brief Field Lower31BitMask offset 0xffffffff size 0x4
  static constexpr int32_t Lower31BitMask{ static_cast<int32_t>(0x7fffffff) };

  /// @brief Field StackAllocThreshold offset 0xffffffff size 0x4
  static constexpr int32_t StackAllocThreshold{ static_cast<int32_t>(0x64) };

  /// @brief Field ShrinkThreshold offset 0xffffffff size 0x4
  static constexpr int32_t ShrinkThreshold{ static_cast<int32_t>(0x3) };

  /// @brief Field CapacityName offset 0xffffffff size 0x8
  static constexpr ::ConstString CapacityName{ u"Capacity" };

  /// @brief Field ElementsName offset 0xffffffff size 0x8
  static constexpr ::ConstString ElementsName{ u"Elements" };

  /// @brief Field ComparerName offset 0xffffffff size 0x8
  static constexpr ::ConstString ComparerName{ u"Comparer" };

  /// @brief Field VersionName offset 0xffffffff size 0x8
  static constexpr ::ConstString VersionName{ u"Version" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::HashSet_1, "System.Collections.Generic", "HashSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__HashSet_1__ElementCount, "System.Collections.Generic", "HashSet`1/ElementCount");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__HashSet_1__Enumerator, "System.Collections.Generic", "HashSet`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__HashSet_1__Slot, "System.Collections.Generic", "HashSet`1/Slot");
