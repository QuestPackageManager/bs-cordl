#pragma once
// IWYU pragma private; include "System/Array.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Array)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class ArrayTypeMismatchException;
}
namespace System {
class Array_ArrayEnumerator;
}
namespace System {
template <typename T> class Array_EmptyInternalEnumerator_1;
}
namespace System {
template <typename T> struct Array_InternalEnumerator_1;
}
namespace System {
class Array_RawData;
}
namespace System {
struct Array_SorterGenericArray;
}
namespace System {
struct Array_SorterObjectArray;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class Array;
}
namespace System {
class Array_ArrayEnumerator;
}
namespace System {
template <typename T> class Array_EmptyInternalEnumerator_1;
}
namespace System {
class Array_RawData;
}
namespace System {
template <typename T> struct Array_InternalEnumerator_1;
}
namespace System {
struct Array_SorterGenericArray;
}
namespace System {
struct Array_SorterObjectArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Array);
MARK_REF_PTR_T(::System::Array_ArrayEnumerator);
MARK_GEN_REF_PTR_T(::System::Array_EmptyInternalEnumerator_1);
MARK_REF_PTR_T(::System::Array_RawData);
MARK_GEN_VAL_T(::System::Array_InternalEnumerator_1);
MARK_VAL_T(::System::Array_SorterGenericArray);
MARK_VAL_T(::System::Array_SorterObjectArray);
// Dependencies System.Collections.IEnumerator, System.ICloneable, System.Object
namespace System {
// Is value type: false
// CS Name: System.Array/ArrayEnumerator
class CORDL_TYPE Array_ArrayEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Object* Current;

  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array)) ::System::Array* _array;

  /// @brief Field _endIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__endIndex, put = __cordl_internal_set__endIndex)) int32_t _endIndex;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x3e1f514, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method MoveNext, addr 0x3e1f4e0, size 0x28, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Array_ArrayEnumerator* New_ctor(::System::Array* array);

  /// @brief Method Reset, addr 0x3e1f508, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  constexpr ::System::Array* const& __cordl_internal_get__array() const;

  constexpr ::System::Array*& __cordl_internal_get__array();

  constexpr int32_t const& __cordl_internal_get__endIndex() const;

  constexpr int32_t& __cordl_internal_get__endIndex();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr void __cordl_internal_set__array(::System::Array* value);

  constexpr void __cordl_internal_set__endIndex(int32_t value);

  constexpr void __cordl_internal_set__index(int32_t value);

  /// @brief Method .ctor, addr 0x3e1f498, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::System::Array* array);

  /// @brief Method get_Current, addr 0x3e1f51c, size 0x10c, virtual true, abstract: false, final true
  inline ::System::Object* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Array_ArrayEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Array_ArrayEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Array_ArrayEnumerator(Array_ArrayEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Array_ArrayEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Array_ArrayEnumerator(Array_ArrayEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2529 };

  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::System::Array* ____array;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _endIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ____endIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Array_ArrayEnumerator, ____array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Array_ArrayEnumerator, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Array_ArrayEnumerator, ____endIndex) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Array_ArrayEnumerator, 0x20>, "Size mismatch!");

} // namespace System
// Dependencies System.IntPtr, System.Object
namespace System {
// Is value type: false
// CS Name: System.Array/RawData
class CORDL_TYPE Array_RawData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Bounds, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Bounds, put = __cordl_internal_set_Bounds)) ::System::IntPtr Bounds;

  /// @brief Field Count, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Count, put = __cordl_internal_set_Count)) ::System::IntPtr Count;

  /// @brief Field Data, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) uint8_t Data;

  constexpr ::System::IntPtr const& __cordl_internal_get_Bounds() const;

  constexpr ::System::IntPtr& __cordl_internal_get_Bounds();

  constexpr ::System::IntPtr const& __cordl_internal_get_Count() const;

  constexpr ::System::IntPtr& __cordl_internal_get_Count();

  constexpr uint8_t const& __cordl_internal_get_Data() const;

  constexpr uint8_t& __cordl_internal_get_Data();

  constexpr void __cordl_internal_set_Bounds(::System::IntPtr value);

  constexpr void __cordl_internal_set_Count(::System::IntPtr value);

  constexpr void __cordl_internal_set_Data(uint8_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Array_RawData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Array_RawData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Array_RawData(Array_RawData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Array_RawData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Array_RawData(Array_RawData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2530 };

  /// @brief Field Bounds, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___Bounds;

  /// @brief Field Count, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___Count;

  /// @brief Field Data, offset: 0x20, size: 0x1, def value: None
  uint8_t ___Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Array_RawData, ___Bounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Array_RawData, ___Count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Array_RawData, ___Data) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Array_RawData, 0x28>, "Size mismatch!");

} // namespace System
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable
namespace System {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Array/InternalEnumerator`1<T>
struct CORDL_TYPE Array_InternalEnumerator_1 {
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
  inline void _ctor(::System::Array* array);

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
  constexpr Array_InternalEnumerator_1();

  // Ctor Parameters [CppParam { name: "array", ty: "::System::Array*", modifiers: "", def_value: None }, CppParam { name: "idx", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Array_InternalEnumerator_1(::System::Array* array, int32_t idx) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2531 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field array, offset: 0x0, size: 0x8, def value: None
  ::System::Array* array;

  /// @brief Field idx, offset: 0x8, size: 0x4, def value: None
  int32_t idx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Array/EmptyInternalEnumerator`1<T>
class CORDL_TYPE Array_EmptyInternalEnumerator_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field Value, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Value, put = setStaticF_Value)) ::System::Array_EmptyInternalEnumerator_1<T>* Value;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Array_EmptyInternalEnumerator_1<T>* New_ctor();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Array_EmptyInternalEnumerator_1<T>* getStaticF_Value();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_Value(::System::Array_EmptyInternalEnumerator_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Array_EmptyInternalEnumerator_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Array_EmptyInternalEnumerator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Array_EmptyInternalEnumerator_1(Array_EmptyInternalEnumerator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Array_EmptyInternalEnumerator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Array_EmptyInternalEnumerator_1(Array_EmptyInternalEnumerator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2532 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Array/SorterObjectArray
struct CORDL_TYPE Array_SorterObjectArray {
public:
  // Declarations
  /// @brief Method DownHeap, addr 0x3e20210, size 0x35c, virtual false, abstract: false, final false
  inline void DownHeap(int32_t i, int32_t n, int32_t lo);

  /// @brief Method Heapsort, addr 0x3e1ff44, size 0xa0, virtual false, abstract: false, final false
  inline void Heapsort(int32_t lo, int32_t hi);

  /// @brief Method InsertionSort, addr 0x3e1fc9c, size 0x2a8, virtual false, abstract: false, final false
  inline void InsertionSort(int32_t lo, int32_t hi);

  /// @brief Method IntroSort, addr 0x3e1fb88, size 0x114, virtual false, abstract: false, final false
  inline void IntroSort(int32_t lo, int32_t hi, int32_t depthLimit);

  /// @brief Method IntrospectiveSort, addr 0x3e1fa3c, size 0x14c, virtual false, abstract: false, final false
  inline void IntrospectiveSort(int32_t left, int32_t length);

  /// @brief Method PickPivotAndPartition, addr 0x3e1ffe4, size 0x22c, virtual false, abstract: false, final false
  inline int32_t PickPivotAndPartition(int32_t lo, int32_t hi);

  /// @brief Method Sort, addr 0x3e1fa38, size 0x4, virtual false, abstract: false, final false
  inline void Sort(int32_t left, int32_t length);

  /// @brief Method Swap, addr 0x3e1f8d4, size 0x164, virtual false, abstract: false, final false
  inline void Swap(int32_t i, int32_t j);

  /// @brief Method SwapIfGreaterWithItems, addr 0x3e1f6a4, size 0x230, virtual false, abstract: false, final false
  inline void SwapIfGreaterWithItems(int32_t a, int32_t b);

  /// @brief Method .ctor, addr 0x3e1f628, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> items, ::System::Collections::IComparer* comparer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Array_SorterObjectArray();

  // Ctor Parameters [CppParam { name: "keys", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None }, CppParam { name: "items", ty:
  // "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::IComparer*", modifiers: "", def_value: None
  // }]
  constexpr Array_SorterObjectArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> items,
                                    ::System::Collections::IComparer* comparer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2533 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field keys, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys;

  /// @brief Field items, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> items;

  /// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IComparer* comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Array_SorterObjectArray, keys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Array_SorterObjectArray, items) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Array_SorterObjectArray, comparer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Array_SorterObjectArray, 0x18>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Array/SorterGenericArray
struct CORDL_TYPE Array_SorterGenericArray {
public:
  // Declarations
  /// @brief Method DownHeap, addr 0x3e20fb4, size 0x2d0, virtual false, abstract: false, final false
  inline void DownHeap(int32_t i, int32_t n, int32_t lo);

  /// @brief Method Heapsort, addr 0x3e20cf8, size 0xa0, virtual false, abstract: false, final false
  inline void Heapsort(int32_t lo, int32_t hi);

  /// @brief Method InsertionSort, addr 0x3e20b10, size 0x1e8, virtual false, abstract: false, final false
  inline void InsertionSort(int32_t lo, int32_t hi);

  /// @brief Method IntroSort, addr 0x3e209fc, size 0x114, virtual false, abstract: false, final false
  inline void IntroSort(int32_t lo, int32_t hi, int32_t depthLimit);

  /// @brief Method IntrospectiveSort, addr 0x3e208a8, size 0x154, virtual false, abstract: false, final false
  inline void IntrospectiveSort(int32_t left, int32_t length);

  /// @brief Method PickPivotAndPartition, addr 0x3e20d98, size 0x21c, virtual false, abstract: false, final false
  inline int32_t PickPivotAndPartition(int32_t lo, int32_t hi);

  /// @brief Method Sort, addr 0x3e208a4, size 0x4, virtual false, abstract: false, final false
  inline void Sort(int32_t left, int32_t length);

  /// @brief Method Swap, addr 0x3e207b8, size 0xec, virtual false, abstract: false, final false
  inline void Swap(int32_t i, int32_t j);

  /// @brief Method SwapIfGreaterWithItems, addr 0x3e205e8, size 0x1d0, virtual false, abstract: false, final false
  inline void SwapIfGreaterWithItems(int32_t a, int32_t b);

  /// @brief Method .ctor, addr 0x3e2056c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Array_SorterGenericArray();

  // Ctor Parameters [CppParam { name: "keys", ty: "::System::Array*", modifiers: "", def_value: None }, CppParam { name: "items", ty: "::System::Array*", modifiers: "", def_value: None }, CppParam {
  // name: "comparer", ty: "::System::Collections::IComparer*", modifiers: "", def_value: None }]
  constexpr Array_SorterGenericArray(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2534 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field keys, offset: 0x0, size: 0x8, def value: None
  ::System::Array* keys;

  /// @brief Field items, offset: 0x8, size: 0x8, def value: None
  ::System::Array* items;

  /// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IComparer* comparer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Array_SorterGenericArray, keys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Array_SorterGenericArray, items) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Array_SorterGenericArray, comparer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Array_SorterGenericArray, 0x18>, "Size mismatch!");

} // namespace System
// Dependencies System.Collections.ICollection, System.Collections.IEnumerable, System.Collections.IList, System.Collections.IStructuralComparable, System.Collections.IStructuralEquatable,
// System.ICloneable, System.Object
namespace System {
// Is value type: false
// CS Name: System.Array
class CORDL_TYPE Array : public ::System::Object {
public:
  // Declarations
  using ArrayEnumerator = ::System::Array_ArrayEnumerator;

  template <typename T> using EmptyInternalEnumerator_1 = ::System::Array_EmptyInternalEnumerator_1<T>;

  template <typename T> using InternalEnumerator_1 = ::System::Array_InternalEnumerator_1<T>;

  using RawData = ::System::Array_RawData;

  using SorterGenericArray = ::System::Array_SorterGenericArray;

  using SorterObjectArray = ::System::Array_SorterObjectArray;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_LongLength)) int64_t LongLength;

  __declspec(property(get = get_Rank)) int32_t Rank;

  __declspec(property(get = get_SyncRoot)) ::System::Object* SyncRoot;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item)) ::System::Object* System_Collections_IList_Item[];

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  /// @brief Convert operator to "::System::Collections::IStructuralComparable"
  constexpr operator ::System::Collections::IStructuralComparable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IStructuralEquatable"
  constexpr operator ::System::Collections::IStructuralEquatable*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method AsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* AsReadOnly(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length, T value);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length, T value, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, T value);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, T value, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method BinarySearch, addr 0x3e1d438, size 0x8, virtual false, abstract: false, final false
  static inline int32_t BinarySearch(::System::Array* array, int32_t index, int32_t length, ::System::Object* value);

  /// @brief Method BinarySearch, addr 0x3e1c814, size 0x494, virtual false, abstract: false, final false
  static inline int32_t BinarySearch(::System::Array* array, int32_t index, int32_t length, ::System::Object* value, ::System::Collections::IComparer* comparer);

  /// @brief Method BinarySearch, addr 0x3e1c784, size 0x90, virtual false, abstract: false, final false
  static inline int32_t BinarySearch(::System::Array* array, ::System::Object* value);

  /// @brief Method BinarySearch, addr 0x3e1d440, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t BinarySearch(::System::Array* array, ::System::Object* value, ::System::Collections::IComparer* comparer);

  /// @brief Method CanAssignArrayElement, addr 0x3e1f004, size 0xd4, virtual false, abstract: false, final false
  static inline bool CanAssignArrayElement(::System::Type* source, ::System::Type* target);

  /// @brief Method Clear, addr 0x3e1bad0, size 0x118, virtual false, abstract: false, final false
  static inline void Clear(::System::Array* array, int32_t index, int32_t length);

  /// @brief Method ClearInternal, addr 0x3e1efac, size 0x4, virtual false, abstract: false, final false
  static inline void ClearInternal(::System::Array* a, int32_t index, int32_t count);

  /// @brief Method Clone, addr 0x3e1c28c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method CombineHashCodes, addr 0x3e1c608, size 0xc, virtual false, abstract: false, final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2);

  /// @brief Method ConstrainedCopy, addr 0x3e1f0d8, size 0x4, virtual false, abstract: false, final false
  static inline void ConstrainedCopy(::System::Array* sourceArray, int32_t sourceIndex, ::System::Array* destinationArray, int32_t destinationIndex, int32_t length);

  /// @brief Method ConvertAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TInput, typename TOutput>
  static inline ::ArrayW<TOutput, ::Array<TOutput>*> ConvertAll(::ArrayW<TInput, ::Array<TInput>*> array, ::System::Converter_2<TInput, TOutput>* converter);

  /// @brief Method Copy, addr 0x3e1cd18, size 0xc4, virtual false, abstract: false, final false
  static inline void Copy(::System::Array* sourceArray, ::System::Array* destinationArray, int32_t length);

  /// @brief Method Copy, addr 0x3e1cca8, size 0x70, virtual false, abstract: false, final false
  static inline void Copy(::System::Array* sourceArray, ::System::Array* destinationArray, int64_t length);

  /// @brief Method Copy, addr 0x3e1bd84, size 0x508, virtual false, abstract: false, final false
  static inline void Copy(::System::Array* sourceArray, int32_t sourceIndex, ::System::Array* destinationArray, int32_t destinationIndex, int32_t length);

  /// @brief Method Copy, addr 0x3e1cddc, size 0xc8, virtual false, abstract: false, final false
  static inline void Copy(::System::Array* sourceArray, int64_t sourceIndex, ::System::Array* destinationArray, int64_t destinationIndex, int64_t length);

  /// @brief Method CopyTo, addr 0x3e1bcd0, size 0xb0, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method CopyTo, addr 0x3e1cea4, size 0x70, virtual false, abstract: false, final false
  inline void CopyTo(::System::Array* array, int64_t index);

  /// @brief Method CreateArrayTypeMismatchException, addr 0x3e1efb0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::ArrayTypeMismatchException* CreateArrayTypeMismatchException();

  /// @brief Method CreateInstance, addr 0x3e1ee94, size 0x78, virtual false, abstract: false, final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, int32_t length);

  /// @brief Method CreateInstance, addr 0x3e1ee08, size 0x88, virtual false, abstract: false, final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, int32_t length1, int32_t length2);

  /// @brief Method CreateInstance, addr 0x3e1ef0c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, int32_t length1, int32_t length2, int32_t length3);

  /// @brief Method CreateInstance, addr 0x3e1b59c, size 0x278, virtual false, abstract: false, final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths);

  /// @brief Method CreateInstance, addr 0x3e1ea40, size 0x3c4, virtual false, abstract: false, final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths, ::ArrayW<int32_t, ::Array<int32_t>*> lowerBounds);

  /// @brief Method CreateInstance, addr 0x3e1b424, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, ::ArrayW<int64_t, ::Array<int64_t>*> lengths);

  /// @brief Method CreateInstanceImpl, addr 0x3e1ea00, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Array* CreateInstanceImpl(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths, ::ArrayW<int32_t, ::Array<int32_t>*> bounds);

  /// @brief Method Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Empty();

  /// @brief Method Exists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool Exists(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FastCopy, addr 0x3e1e9fc, size 0x4, virtual false, abstract: false, final false
  static inline bool FastCopy(::System::Array* source, int32_t source_idx, ::System::Array* dest, int32_t dest_idx, int32_t length);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Fill(::ArrayW<T, ::Array<T>*> array, T value);

  /// @brief Method Fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Fill(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Find(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> FindAll(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindIndex(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindIndex(::ArrayW<T, ::Array<T>*> array, int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match);

  /// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindIndex(::ArrayW<T, ::Array<T>*> array, int32_t startIndex, ::System::Predicate_1<T>* match);

  /// @brief Method FindLast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FindLast(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindLastIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindLastIndex(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindLastIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindLastIndex(::ArrayW<T, ::Array<T>*> array, int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match);

  /// @brief Method FindLastIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindLastIndex(::ArrayW<T, ::Array<T>*> array, int32_t startIndex, ::System::Predicate_1<T>* match);

  /// @brief Method ForEach, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void ForEach(::ArrayW<T, ::Array<T>*> array, ::System::Action_1<T>* action);

  /// @brief Method GetEnumerator, addr 0x3e1e8d0, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetGenericValueImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void GetGenericValueImpl(int32_t pos, ::ByRef<T> value);

  /// @brief Method GetLength, addr 0x3e1cf78, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetLength(int32_t dimension);

  /// @brief Method GetLongLength, addr 0x3e1cf7c, size 0x14, virtual false, abstract: false, final false
  inline int64_t GetLongLength(int32_t dimension);

  /// @brief Method GetLowerBound, addr 0x3e1bacc, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetLowerBound(int32_t dimension);

  /// @brief Method GetMedian, addr 0x3e1d4dc, size 0xc, virtual false, abstract: false, final false
  static inline int32_t GetMedian(int32_t low, int32_t hi);

  /// @brief Method GetRank, addr 0x3e1e9f0, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetRank();

  /// @brief Method GetRawSzArrayData, addr 0x3e1e940, size 0x14, virtual false, abstract: false, final false
  inline ::ByRef<uint8_t> GetRawSzArrayData();

  /// @brief Method GetUpperBound, addr 0x3e1ea04, size 0x38, virtual false, abstract: false, final false
  inline int32_t GetUpperBound(int32_t dimension);

  /// @brief Method GetValue, addr 0x3e117a8, size 0x168, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(int32_t index);

  /// @brief Method GetValue, addr 0x3e1cf90, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(int64_t index);

  /// @brief Method GetValue, addr 0x3e1d0a0, size 0x88, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(int32_t index1, int32_t index2);

  /// @brief Method GetValue, addr 0x3e1d1f0, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(int32_t index1, int32_t index2, int32_t index3);

  /// @brief Method GetValue, addr 0x3e1d000, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(int64_t index1, int64_t index2);

  /// @brief Method GetValue, addr 0x3e1d128, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(int64_t index1, int64_t index2, int64_t index3);

  /// @brief Method GetValue, addr 0x3e1d418, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method GetValue, addr 0x3e1d290, size 0x188, virtual false, abstract: false, final false
  inline ::System::Object* GetValue(::ArrayW<int64_t, ::Array<int64_t>*> indices);

  /// @brief Method GetValueImpl, addr 0x3e1e9f4, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* GetValueImpl(int32_t pos);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::ArrayW<T, ::Array<T>*> array, T value);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOf, addr 0x3e1ba08, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::System::Array* array, ::System::Object* value);

  /// @brief Method IndexOf, addr 0x3e1d780, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex);

  /// @brief Method IndexOf, addr 0x3e1d4e8, size 0x298, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOfImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOfImpl(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method Initialize, addr 0x3e1f0dc, size 0x3bc, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method InternalArray__ICollection_Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void InternalArray__ICollection_Add(T item);

  /// @brief Method InternalArray__ICollection_Clear, addr 0x3e1e954, size 0x4c, virtual false, abstract: false, final false
  inline void InternalArray__ICollection_Clear();

  /// @brief Method InternalArray__ICollection_Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool InternalArray__ICollection_Contains(T item);

  /// @brief Method InternalArray__ICollection_CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void InternalArray__ICollection_CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method InternalArray__ICollection_Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool InternalArray__ICollection_Remove(T item);

  /// @brief Method InternalArray__ICollection_get_Count, addr 0x3e1e934, size 0x4, virtual false, abstract: false, final false
  inline int32_t InternalArray__ICollection_get_Count();

  /// @brief Method InternalArray__ICollection_get_IsReadOnly, addr 0x3e1e938, size 0x8, virtual false, abstract: false, final false
  inline bool InternalArray__ICollection_get_IsReadOnly();

  /// @brief Method InternalArray__IEnumerable_GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* InternalArray__IEnumerable_GetEnumerator();

  /// @brief Method InternalArray__IReadOnlyCollection_get_Count, addr 0x3e1e9a0, size 0x4, virtual false, abstract: false, final false
  inline int32_t InternalArray__IReadOnlyCollection_get_Count();

  /// @brief Method InternalArray__IReadOnlyList_get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T InternalArray__IReadOnlyList_get_Item(int32_t index);

  /// @brief Method InternalArray__IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline int32_t InternalArray__IndexOf(T item);

  /// @brief Method InternalArray__Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void InternalArray__Insert(int32_t index, T item);

  /// @brief Method InternalArray__RemoveAt, addr 0x3e1e9a4, size 0x4c, virtual false, abstract: false, final false
  inline void InternalArray__RemoveAt(int32_t index);

  /// @brief Method InternalArray__get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T InternalArray__get_Item(int32_t index);

  /// @brief Method InternalArray__set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void InternalArray__set_Item(int32_t index, T item);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf, addr 0x3e1d81c, size 0x88, virtual false, abstract: false, final false
  static inline int32_t LastIndexOf(::System::Array* array, ::System::Object* value);

  /// @brief Method LastIndexOf, addr 0x3e1db4c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t LastIndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex);

  /// @brief Method LastIndexOf, addr 0x3e1d8a4, size 0x2a8, virtual false, abstract: false, final false
  static inline int32_t LastIndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t LastIndexOfImpl(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  static inline ::System::Array* New_ctor();

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Resize(::ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t newSize);

  /// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Reverse(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Reverse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Reverse(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length);

  /// @brief Method Reverse, addr 0x3e1dba4, size 0x84, virtual false, abstract: false, final false
  static inline void Reverse(::System::Array* array);

  /// @brief Method Reverse, addr 0x3e1dc28, size 0x244, virtual false, abstract: false, final false
  static inline void Reverse(::System::Array* array, int32_t index, int32_t length);

  /// @brief Method SetGenericValueImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetGenericValueImpl(int32_t pos, ::ByRef<T> value);

  /// @brief Method SetValue, addr 0x3e1b834, size 0x170, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value, int32_t index);

  /// @brief Method SetValue, addr 0x3e1de6c, size 0x70, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value, int64_t index);

  /// @brief Method SetValue, addr 0x3e1df7c, size 0x98, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value, int32_t index1, int32_t index2);

  /// @brief Method SetValue, addr 0x3e1e0dc, size 0xa8, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value, int32_t index1, int32_t index2, int32_t index3);

  /// @brief Method SetValue, addr 0x3e1dedc, size 0xa0, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value, int64_t index1, int64_t index2);

  /// @brief Method SetValue, addr 0x3e1e014, size 0xc8, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value, int64_t index1, int64_t index2, int64_t index3);

  /// @brief Method SetValue, addr 0x3e1e31c, size 0x4, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value, ::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method SetValue, addr 0x3e1e184, size 0x198, virtual false, abstract: false, final false
  inline void SetValue(::System::Object* value, ::ArrayW<int64_t, ::Array<int64_t>*> indices);

  /// @brief Method SetValueImpl, addr 0x3e1e9f8, size 0x4, virtual false, abstract: false, final false
  inline void SetValueImpl(::System::Object* value, int32_t pos);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array, ::System::Comparison_1<T>* comparison);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Sort, addr 0x3e1e320, size 0x8c, virtual false, abstract: false, final false
  static inline void Sort(::System::Array* array);

  /// @brief Method Sort, addr 0x3e1e5fc, size 0x90, virtual false, abstract: false, final false
  static inline void Sort(::System::Array* array, ::System::Collections::IComparer* comparer);

  /// @brief Method Sort, addr 0x3e1e5e8, size 0x14, virtual false, abstract: false, final false
  static inline void Sort(::System::Array* array, int32_t index, int32_t length);

  /// @brief Method Sort, addr 0x3e1e68c, size 0x14, virtual false, abstract: false, final false
  static inline void Sort(::System::Array* array, int32_t index, int32_t length, ::System::Collections::IComparer* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> items);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> items, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue> static inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> items, int32_t index, int32_t length);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> items, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Sort, addr 0x3e1e6a0, size 0x90, virtual false, abstract: false, final false
  static inline void Sort(::System::Array* keys, ::System::Array* items);

  /// @brief Method Sort, addr 0x3e1e730, size 0x9c, virtual false, abstract: false, final false
  static inline void Sort(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer);

  /// @brief Method Sort, addr 0x3e1e7cc, size 0x8, virtual false, abstract: false, final false
  static inline void Sort(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length);

  /// @brief Method Sort, addr 0x3e1e3ac, size 0x23c, virtual false, abstract: false, final false
  static inline void Sort(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length, ::System::Collections::IComparer* comparer);

  /// @brief Method SortImpl, addr 0x3e1e7d4, size 0xfc, virtual false, abstract: false, final false
  static inline void SortImpl(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length, ::System::Collections::IComparer* comparer);

  /// @brief Method System.Collections.ICollection.get_Count, addr 0x3e1b814, size 0x4, virtual true, abstract: false, final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.IList.Add, addr 0x3e1b9a4, size 0x4c, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear, addr 0x3e1ba94, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.Contains, addr 0x3e1b9f0, size 0x18, virtual true, abstract: false, final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.IndexOf, addr 0x3e1bbe8, size 0x4, virtual true, abstract: false, final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert, addr 0x3e1bbec, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove, addr 0x3e1bc38, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt, addr 0x3e1bc84, size 0x4c, virtual true, abstract: false, final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsReadOnly, addr 0x3e1b818, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item, addr 0x3e1b820, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item, addr 0x3e1b824, size 0x10, virtual true, abstract: false, final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IStructuralComparable.CompareTo, addr 0x3e1c294, size 0x1e0, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.Equals, addr 0x3e1c474, size 0x194, virtual true, abstract: false, final true
  inline bool System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.GetHashCode, addr 0x3e1c614, size 0x170, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method TrueForAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TrueForAll(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method UnsafeCreateInstance, addr 0x3e1ee04, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Array* UnsafeCreateInstance(::System::Type* elementType, int32_t length1, int32_t length2);

  /// @brief Method UnsafeCreateInstance, addr 0x3e1ee90, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Array* UnsafeCreateInstance(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths);

  /// @brief Method UnsafeCreateInstance, addr 0x3e1ea3c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Array* UnsafeCreateInstance(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths, ::ArrayW<int32_t, ::Array<int32_t>*> lowerBounds);

  /// @brief Method UnsafeLoad, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T UnsafeLoad(::ArrayW<T, ::Array<T>*> array, int32_t index);

  /// @brief Method UnsafeMov, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename S, typename R> static inline R UnsafeMov(S instance);

  /// @brief Method UnsafeStore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void UnsafeStore(::ArrayW<T, ::Array<T>*> array, int32_t index, T value);

  /// @brief Method .ctor, addr 0x3e1e92c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsFixedSize, addr 0x3e1d41c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly, addr 0x3e1d424, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized, addr 0x3e1d42c, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsSynchronized();

  /// @brief Method get_Length, addr 0x3e11748, size 0x60, virtual false, abstract: false, final false
  inline int32_t get_Length();

  /// @brief Method get_LongLength, addr 0x3e1cf14, size 0x64, virtual false, abstract: false, final false
  inline int64_t get_LongLength();

  /// @brief Method get_Rank, addr 0x3e1bd80, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_Rank();

  /// @brief Method get_SyncRoot, addr 0x3e1d434, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IList"
  constexpr ::System::Collections::IList* i___System__Collections__IList() noexcept;

  /// @brief Convert to "::System::Collections::IStructuralComparable"
  constexpr ::System::Collections::IStructuralComparable* i___System__Collections__IStructuralComparable() noexcept;

  /// @brief Convert to "::System::Collections::IStructuralEquatable"
  constexpr ::System::Collections::IStructuralEquatable* i___System__Collections__IStructuralEquatable() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Array();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Array", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Array(Array&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Array", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Array(Array const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2535 };

  /// @brief Size padding 0x20 - 0x10 = 0x10, packed as 0x10
  uint8_t _cordl_size_padding[0x10];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Array, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Array);
DEFINE_IL2CPP_ARG_TYPE(::System::Array*, "System", "Array");
NEED_NO_BOX(::System::Array_ArrayEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Array_ArrayEnumerator*, "System", "Array/ArrayEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Array_EmptyInternalEnumerator_1, "System", "Array/EmptyInternalEnumerator`1");
NEED_NO_BOX(::System::Array_RawData);
DEFINE_IL2CPP_ARG_TYPE(::System::Array_RawData*, "System", "Array/RawData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Array_InternalEnumerator_1, "System", "Array/InternalEnumerator`1");
DEFINE_IL2CPP_ARG_TYPE(::System::Array_SorterGenericArray, "System", "Array/SorterGenericArray");
DEFINE_IL2CPP_ARG_TYPE(::System::Array_SorterObjectArray, "System", "Array/SorterObjectArray");
