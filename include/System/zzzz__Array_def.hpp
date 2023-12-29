#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Array)
namespace System {
struct __Array__SorterObjectArray;
}
namespace System {
class ArrayTypeMismatchException;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace System::Collections {
class IStructuralComparable;
}
namespace System {
template <typename T> struct __Array__InternalEnumerator_1;
}
namespace System {
template <typename T> class __Array__EmptyInternalEnumerator_1;
}
namespace System {
struct __Array__SorterGenericArray;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class __Array__ArrayEnumerator;
}
namespace System {
class Type;
}
namespace System {
class ICloneable;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class __Array__RawData;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections {
class IStructuralEquatable;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System {
class Array;
}
namespace System {
class __Array__ArrayEnumerator;
}
namespace System {
template <typename T> class __Array__EmptyInternalEnumerator_1;
}
namespace System {
class __Array__RawData;
}
namespace System {
template <typename T> struct __Array__InternalEnumerator_1;
}
namespace System {
struct __Array__SorterGenericArray;
}
namespace System {
struct __Array__SorterObjectArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Array);
MARK_REF_PTR_T(::System::__Array__ArrayEnumerator);
MARK_GEN_REF_PTR_T(::System::__Array__EmptyInternalEnumerator_1);
MARK_REF_PTR_T(::System::__Array__RawData);
MARK_GEN_VAL_T(::System::__Array__InternalEnumerator_1);
MARK_VAL_T(::System::__Array__SorterGenericArray);
MARK_VAL_T(::System::__Array__SorterObjectArray);
// Type: ::ArrayEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2528))
// CS Name: ::Array::ArrayEnumerator*
class CORDL_TYPE __Array__ArrayEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __get__array, put = __set__array))::System::Array* _array;

  /// @brief Field _index, offset 0x18, size 0x4
  __declspec(property(get = __get__index, put = __set__index)) int32_t _index;

  /// @brief Field _endIndex, offset 0x1c, size 0x4
  __declspec(property(get = __get__endIndex, put = __set__endIndex)) int32_t _endIndex;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  constexpr ::System::Array*& __get__array();

  constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& __get__array() const;

  constexpr void __set__array(::System::Array* value);

  constexpr int32_t& __get__index();

  constexpr int32_t const& __get__index() const;

  constexpr void __set__index(int32_t value);

  constexpr int32_t& __get__endIndex();

  constexpr int32_t const& __get__endIndex() const;

  constexpr void __set__endIndex(int32_t value);

  static inline ::System::__Array__ArrayEnumerator* New_ctor(::System::Array* array);

  /// @brief Method .ctor addr 0x2479da0 size 0x48 virtual false final false
  inline void _ctor(::System::Array* array);

  /// @brief Method MoveNext addr 0x2479de8 size 0x28 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2479e10 size 0xc virtual true final true
  inline void Reset();

  /// @brief Method Clone addr 0x2479e1c size 0x8 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method get_Current addr 0x2479e24 size 0x118 virtual true final true
  inline ::System::Object* get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__Array__ArrayEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Array__ArrayEnumerator(__Array__ArrayEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Array__ArrayEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Array__ArrayEnumerator(__Array__ArrayEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Array__ArrayEnumerator();

public:
  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::System::Array* ____array;

  /// @brief Field _index, offset: 0x18, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _endIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ____endIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Array__ArrayEnumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::__Array__ArrayEnumerator, ____array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__Array__ArrayEnumerator, ____index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__Array__ArrayEnumerator, ____endIndex) == 0x1c, "Offset mismatch!");

} // namespace System
// Type: ::RawData
// SizeInfo { instance_size: 40, native_size: 24, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2529))
// CS Name: ::Array::RawData*
class CORDL_TYPE __Array__RawData : public ::System::Object {
public:
  // Declarations
  /// @brief Field Bounds, offset 0x10, size 0x8
  __declspec(property(get = __get_Bounds, put = __set_Bounds)) void* Bounds;

  /// @brief Field Count, offset 0x18, size 0x8
  __declspec(property(get = __get_Count, put = __set_Count)) void* Count;

  /// @brief Field Data, offset 0x20, size 0x1
  __declspec(property(get = __get_Data, put = __set_Data)) uint8_t Data;

  constexpr void*& __get_Bounds();

  constexpr void* const& __get_Bounds() const;

  constexpr void __set_Bounds(void* value);

  constexpr void*& __get_Count();

  constexpr void* const& __get_Count() const;

  constexpr void __set_Count(void* value);

  constexpr uint8_t& __get_Data();

  constexpr uint8_t const& __get_Data() const;

  constexpr void __set_Data(uint8_t value);

  // Ctor Parameters [CppParam { name: "", ty: "__Array__RawData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Array__RawData(__Array__RawData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Array__RawData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Array__RawData(__Array__RawData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Array__RawData();

public:
  /// @brief Field Bounds, offset: 0x10, size: 0x8, def value: None
  void* ___Bounds;

  /// @brief Field Count, offset: 0x18, size: 0x8, def value: None
  void* ___Count;

  /// @brief Field Data, offset: 0x20, size: 0x1, def value: None
  uint8_t ___Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Array__RawData, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::__Array__RawData, ___Bounds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__Array__RawData, ___Count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__Array__RawData, ___Data) == 0x20, "Offset mismatch!");

} // namespace System
// Type: ::InternalEnumerator`1
// SizeInfo { instance_size: 16, native_size: 28, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2530))
// CS Name: ::Array::InternalEnumerator`1<T>
struct CORDL_TYPE __Array__InternalEnumerator_1 {
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
  inline void _ctor(::System::Array* array);

  /// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Dispose();

  /// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool MoveNext();

  /// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline T get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "array", ty: "::System::Array*", modifiers: "", def_value: None }, CppParam { name: "idx", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Array__InternalEnumerator_1(::System::Array* array, int32_t idx) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Array__InternalEnumerator_1();

  /// @brief Field array, offset: 0x0, size: 0x8, def value: None
  ::System::Array* array;

  /// @brief Field idx, offset: 0x8, size: 0x4, def value: None
  int32_t idx;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
// Type: ::EmptyInternalEnumerator`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2531))
// CS Name: ::Array::EmptyInternalEnumerator`1<T>*
class CORDL_TYPE __Array__EmptyInternalEnumerator_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Value, put = setStaticF_Value))::System::__Array__EmptyInternalEnumerator_1<T>* Value;

  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  static inline void setStaticF_Value(::System::__Array__EmptyInternalEnumerator_1<T>* value);

  static inline ::System::__Array__EmptyInternalEnumerator_1<T>* getStaticF_Value();

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

  static inline ::System::__Array__EmptyInternalEnumerator_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Array__EmptyInternalEnumerator_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Array__EmptyInternalEnumerator_1(__Array__EmptyInternalEnumerator_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Array__EmptyInternalEnumerator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Array__EmptyInternalEnumerator_1(__Array__EmptyInternalEnumerator_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Array__EmptyInternalEnumerator_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
// Type: ::SorterObjectArray
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2532))
// CS Name: ::Array::SorterObjectArray
struct CORDL_TYPE __Array__SorterObjectArray {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2479f3c size 0x7c virtual false final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> items, ::System::Collections::IComparer* comparer);

  /// @brief Method SwapIfGreaterWithItems addr 0x2479fb8 size 0x230 virtual false final false
  inline void SwapIfGreaterWithItems(int32_t a, int32_t b);

  /// @brief Method Swap addr 0x247a1e8 size 0x164 virtual false final false
  inline void Swap(int32_t i, int32_t j);

  /// @brief Method Sort addr 0x247a34c size 0x4 virtual false final false
  inline void Sort(int32_t left, int32_t length);

  /// @brief Method IntrospectiveSort addr 0x247a350 size 0x150 virtual false final false
  inline void IntrospectiveSort(int32_t left, int32_t length);

  /// @brief Method IntroSort addr 0x247a4a0 size 0x114 virtual false final false
  inline void IntroSort(int32_t lo, int32_t hi, int32_t depthLimit);

  /// @brief Method PickPivotAndPartition addr 0x247a8f0 size 0x22c virtual false final false
  inline int32_t PickPivotAndPartition(int32_t lo, int32_t hi);

  /// @brief Method Heapsort addr 0x247a850 size 0xa0 virtual false final false
  inline void Heapsort(int32_t lo, int32_t hi);

  /// @brief Method DownHeap addr 0x247ab1c size 0x35c virtual false final false
  inline void DownHeap(int32_t i, int32_t n, int32_t lo);

  /// @brief Method InsertionSort addr 0x247a5b4 size 0x29c virtual false final false
  inline void InsertionSort(int32_t lo, int32_t hi);

  // Ctor Parameters [CppParam { name: "keys", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None }, CppParam { name: "items", ty:
  // "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "::System::Collections::IComparer*", modifiers: "", def_value: None
  // }]
  constexpr __Array__SorterObjectArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> items,
                                       ::System::Collections::IComparer* comparer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Array__SorterObjectArray();

  /// @brief Field keys, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> keys;

  /// @brief Field items, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> items;

  /// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IComparer* comparer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Array__SorterObjectArray, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::__Array__SorterObjectArray, keys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__Array__SorterObjectArray, items) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__Array__SorterObjectArray, comparer) == 0x10, "Offset mismatch!");

} // namespace System
// Type: ::SorterGenericArray
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2533))
// CS Name: ::Array::SorterGenericArray
struct CORDL_TYPE __Array__SorterGenericArray {
public:
  // Declarations
  /// @brief Method .ctor addr 0x247ae78 size 0x7c virtual false final false
  inline void _ctor(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer);

  /// @brief Method SwapIfGreaterWithItems addr 0x247aef4 size 0x1d0 virtual false final false
  inline void SwapIfGreaterWithItems(int32_t a, int32_t b);

  /// @brief Method Swap addr 0x247b0c4 size 0xec virtual false final false
  inline void Swap(int32_t i, int32_t j);

  /// @brief Method Sort addr 0x247b1b0 size 0x4 virtual false final false
  inline void Sort(int32_t left, int32_t length);

  /// @brief Method IntrospectiveSort addr 0x247b1b4 size 0x158 virtual false final false
  inline void IntrospectiveSort(int32_t left, int32_t length);

  /// @brief Method IntroSort addr 0x247b30c size 0x114 virtual false final false
  inline void IntroSort(int32_t lo, int32_t hi, int32_t depthLimit);

  /// @brief Method PickPivotAndPartition addr 0x247b6a8 size 0x21c virtual false final false
  inline int32_t PickPivotAndPartition(int32_t lo, int32_t hi);

  /// @brief Method Heapsort addr 0x247b608 size 0xa0 virtual false final false
  inline void Heapsort(int32_t lo, int32_t hi);

  /// @brief Method DownHeap addr 0x247b8c4 size 0x2d0 virtual false final false
  inline void DownHeap(int32_t i, int32_t n, int32_t lo);

  /// @brief Method InsertionSort addr 0x247b420 size 0x1e8 virtual false final false
  inline void InsertionSort(int32_t lo, int32_t hi);

  // Ctor Parameters [CppParam { name: "keys", ty: "::System::Array*", modifiers: "", def_value: None }, CppParam { name: "items", ty: "::System::Array*", modifiers: "", def_value: None }, CppParam {
  // name: "comparer", ty: "::System::Collections::IComparer*", modifiers: "", def_value: None }]
  constexpr __Array__SorterGenericArray(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Array__SorterGenericArray();

  /// @brief Field keys, offset: 0x0, size: 0x8, def value: None
  ::System::Array* keys;

  /// @brief Field items, offset: 0x8, size: 0x8, def value: None
  ::System::Array* items;

  /// @brief Field comparer, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IComparer* comparer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Array__SorterGenericArray, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::__Array__SorterGenericArray, keys) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__Array__SorterGenericArray, items) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__Array__SorterGenericArray, comparer) == 0x10, "Offset mismatch!");

} // namespace System
// Type: System::Array
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2534))
// CS Name: ::System::Array*
class CORDL_TYPE Array : public ::System::Object {
public:
  // Declarations
  using SorterGenericArray = ::System::__Array__SorterGenericArray;

  using SorterObjectArray = ::System::__Array__SorterObjectArray;

  template <typename T> using EmptyInternalEnumerator_1 = ::System::__Array__EmptyInternalEnumerator_1<T>;

  template <typename T> using InternalEnumerator_1 = ::System::__Array__InternalEnumerator_1<T>;

  using RawData = ::System::__Array__RawData;

  using ArrayEnumerator = ::System::__Array__ArrayEnumerator;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  __declspec(property(get = get_LongLength)) int64_t LongLength;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Length)) int32_t Length;

  __declspec(property(get = get_Rank)) int32_t Rank;

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

  /// @brief Method CreateInstance addr 0x2474f34 size 0x184 virtual false final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, ::ArrayW<int64_t, ::Array<int64_t>*> lengths);

  /// @brief Method AsReadOnly addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* AsReadOnly(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Resize(ByRef<::ArrayW<T, ::Array<T>*>> array, int32_t newSize);

  /// @brief Method System.Collections.ICollection.get_Count addr 0x247534c size 0x4 virtual true final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.IList.get_IsReadOnly addr 0x2475350 size 0x8 virtual true final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_Item addr 0x2475358 size 0x4 virtual true final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item addr 0x247535c size 0x10 virtual true final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Add addr 0x24754e8 size 0x50 virtual true final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains addr 0x2475538 size 0x18 virtual true final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear addr 0x24755e0 size 0x38 virtual true final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.IndexOf addr 0x2475744 size 0x4 virtual true final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert addr 0x2475748 size 0x50 virtual true final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove addr 0x2475798 size 0x50 virtual true final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt addr 0x24757e8 size 0x50 virtual true final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method CopyTo addr 0x2475838 size 0xb4 virtual true final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method Clone addr 0x2475e24 size 0x8 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method System.Collections.IStructuralComparable.CompareTo addr 0x2475e2c size 0x1e4 virtual true final true
  inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.Equals addr 0x2476010 size 0x190 virtual true final true
  inline bool System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method CombineHashCodes addr 0x24761a0 size 0xc virtual false final false
  static inline int32_t CombineHashCodes(int32_t h1, int32_t h2);

  /// @brief Method System.Collections.IStructuralEquatable.GetHashCode addr 0x24761ac size 0x174 virtual true final true
  inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method BinarySearch addr 0x2476320 size 0x94 virtual false final false
  static inline int32_t BinarySearch(::System::Array* array, ::System::Object* value);

  /// @brief Method ConvertAll addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInput, typename TOutput>
  static inline ::ArrayW<TOutput, ::Array<TOutput>*> ConvertAll(::ArrayW<TInput, ::Array<TInput>*> array, ::System::Converter_2<TInput, TOutput>* converter);

  /// @brief Method Copy addr 0x247685c size 0x74 virtual false final false
  static inline void Copy(::System::Array* sourceArray, ::System::Array* destinationArray, int64_t length);

  /// @brief Method Copy addr 0x247699c size 0xd4 virtual false final false
  static inline void Copy(::System::Array* sourceArray, int64_t sourceIndex, ::System::Array* destinationArray, int64_t destinationIndex, int64_t length);

  /// @brief Method CopyTo addr 0x2476a70 size 0x74 virtual false final false
  inline void CopyTo(::System::Array* array, int64_t index);

  /// @brief Method ForEach addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void ForEach(::ArrayW<T, ::Array<T>*> array, ::System::Action_1<T>* action);

  /// @brief Method get_LongLength addr 0x2476ae4 size 0x64 virtual false final false
  inline int64_t get_LongLength();

  /// @brief Method GetLongLength addr 0x2476b4c size 0x14 virtual false final false
  inline int64_t GetLongLength(int32_t dimension);

  /// @brief Method GetValue addr 0x2476b60 size 0x74 virtual false final false
  inline ::System::Object* GetValue(int64_t index);

  /// @brief Method GetValue addr 0x2476bd4 size 0xa8 virtual false final false
  inline ::System::Object* GetValue(int64_t index1, int64_t index2);

  /// @brief Method GetValue addr 0x2476d04 size 0xd4 virtual false final false
  inline ::System::Object* GetValue(int64_t index1, int64_t index2, int64_t index3);

  /// @brief Method GetValue addr 0x2476e78 size 0x194 virtual false final false
  inline ::System::Object* GetValue(::ArrayW<int64_t, ::Array<int64_t>*> indices);

  /// @brief Method get_IsFixedSize addr 0x2477010 size 0x8 virtual true final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsReadOnly addr 0x2477018 size 0x8 virtual true final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsSynchronized addr 0x2477020 size 0x8 virtual true final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x2477028 size 0x4 virtual true final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method BinarySearch addr 0x247702c size 0x8 virtual false final false
  static inline int32_t BinarySearch(::System::Array* array, int32_t index, int32_t length, ::System::Object* value);

  /// @brief Method BinarySearch addr 0x2477034 size 0xa0 virtual false final false
  static inline int32_t BinarySearch(::System::Array* array, ::System::Object* value, ::System::Collections::IComparer* comparer);

  /// @brief Method BinarySearch addr 0x24763b4 size 0x4a8 virtual false final false
  static inline int32_t BinarySearch(::System::Array* array, int32_t index, int32_t length, ::System::Object* value, ::System::Collections::IComparer* comparer);

  /// @brief Method GetMedian addr 0x24770d4 size 0xc virtual false final false
  static inline int32_t GetMedian(int32_t low, int32_t hi);

  /// @brief Method BinarySearch addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, T value);

  /// @brief Method BinarySearch addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, T value, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method BinarySearch addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length, T value);

  /// @brief Method BinarySearch addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length, T value, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method IndexOf addr 0x2475550 size 0x90 virtual false final false
  static inline int32_t IndexOf(::System::Array* array, ::System::Object* value);

  /// @brief Method IndexOf addr 0x2477380 size 0xa0 virtual false final false
  static inline int32_t IndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex);

  /// @brief Method IndexOf addr 0x24770e0 size 0x2a0 virtual false final false
  static inline int32_t IndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex, int32_t count);

  /// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t IndexOf(::ArrayW<T, ::Array<T>*> array, T value);

  /// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t IndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex);

  /// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t IndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf addr 0x2477420 size 0x8c virtual false final false
  static inline int32_t LastIndexOf(::System::Array* array, ::System::Object* value);

  /// @brief Method LastIndexOf addr 0x2477768 size 0x5c virtual false final false
  static inline int32_t LastIndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex);

  /// @brief Method LastIndexOf addr 0x24774ac size 0x2bc virtual false final false
  static inline int32_t LastIndexOf(::System::Array* array, ::System::Object* value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value);

  /// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex);

  /// @brief Method LastIndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method Reverse addr 0x24777c4 size 0x88 virtual false final false
  static inline void Reverse(::System::Array* array);

  /// @brief Method Reverse addr 0x247784c size 0x254 virtual false final false
  static inline void Reverse(::System::Array* array, int32_t index, int32_t length);

  /// @brief Method Reverse addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Reverse(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Reverse addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Reverse(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length);

  /// @brief Method SetValue addr 0x2477aa0 size 0x74 virtual false final false
  inline void SetValue(::System::Object* value, int64_t index);

  /// @brief Method SetValue addr 0x2477b14 size 0xa8 virtual false final false
  inline void SetValue(::System::Object* value, int64_t index1, int64_t index2);

  /// @brief Method SetValue addr 0x2477c54 size 0xd4 virtual false final false
  inline void SetValue(::System::Object* value, int64_t index1, int64_t index2, int64_t index3);

  /// @brief Method SetValue addr 0x2477dd0 size 0x1a4 virtual false final false
  inline void SetValue(::System::Object* value, ::ArrayW<int64_t, ::Array<int64_t>*> indices);

  /// @brief Method Sort addr 0x2477f78 size 0x90 virtual false final false
  static inline void Sort(::System::Array* array);

  /// @brief Method Sort addr 0x2478258 size 0x14 virtual false final false
  static inline void Sort(::System::Array* array, int32_t index, int32_t length);

  /// @brief Method Sort addr 0x247826c size 0x94 virtual false final false
  static inline void Sort(::System::Array* array, ::System::Collections::IComparer* comparer);

  /// @brief Method Sort addr 0x2478300 size 0x14 virtual false final false
  static inline void Sort(::System::Array* array, int32_t index, int32_t length, ::System::Collections::IComparer* comparer);

  /// @brief Method Sort addr 0x2478314 size 0x94 virtual false final false
  static inline void Sort(::System::Array* keys, ::System::Array* items);

  /// @brief Method Sort addr 0x24783a8 size 0xa0 virtual false final false
  static inline void Sort(::System::Array* keys, ::System::Array* items, ::System::Collections::IComparer* comparer);

  /// @brief Method Sort addr 0x2478448 size 0x8 virtual false final false
  static inline void Sort(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length);

  /// @brief Method Sort addr 0x2478008 size 0x250 virtual false final false
  static inline void Sort(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length, ::System::Collections::IComparer* comparer);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Sort(::ArrayW<T, ::Array<T>*> array, ::System::Comparison_1<T>* comparison);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TKey, typename TValue> static inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> items);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TKey, typename TValue> static inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> items, int32_t index, int32_t length);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TKey, typename TValue>
  static inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> items, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TKey, typename TValue>
  static inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> items, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Exists addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool Exists(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Fill(::ArrayW<T, ::Array<T>*> array, T value);

  /// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void Fill(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T Find(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindAll addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> FindAll(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindIndex addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t FindIndex(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindIndex addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t FindIndex(::ArrayW<T, ::Array<T>*> array, int32_t startIndex, ::System::Predicate_1<T>* match);

  /// @brief Method FindIndex addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t FindIndex(::ArrayW<T, ::Array<T>*> array, int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match);

  /// @brief Method FindLast addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T FindLast(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindLastIndex addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t FindLastIndex(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method FindLastIndex addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t FindLastIndex(::ArrayW<T, ::Array<T>*> array, int32_t startIndex, ::System::Predicate_1<T>* match);

  /// @brief Method FindLastIndex addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t FindLastIndex(::ArrayW<T, ::Array<T>*> array, int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match);

  /// @brief Method TrueForAll addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline bool TrueForAll(::ArrayW<T, ::Array<T>*> array, ::System::Predicate_1<T>* match);

  /// @brief Method GetEnumerator addr 0x2478548 size 0x64 virtual true final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  static inline ::System::Array* New_ctor();

  /// @brief Method .ctor addr 0x24785ac size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method InternalArray__ICollection_get_Count addr 0x24785b4 size 0x4 virtual false final false
  inline int32_t InternalArray__ICollection_get_Count();

  /// @brief Method InternalArray__ICollection_get_IsReadOnly addr 0x24785b8 size 0x8 virtual false final false
  inline bool InternalArray__ICollection_get_IsReadOnly();

  /// @brief Method GetRawSzArrayData addr 0x24785c0 size 0x14 virtual false final false
  inline ByRef<uint8_t> GetRawSzArrayData();

  /// @brief Method InternalArray__IEnumerable_GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* InternalArray__IEnumerable_GetEnumerator();

  /// @brief Method InternalArray__ICollection_Clear addr 0x24785d4 size 0x50 virtual false final false
  inline void InternalArray__ICollection_Clear();

  /// @brief Method InternalArray__ICollection_Add addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void InternalArray__ICollection_Add(T item);

  /// @brief Method InternalArray__ICollection_Remove addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline bool InternalArray__ICollection_Remove(T item);

  /// @brief Method InternalArray__ICollection_Contains addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline bool InternalArray__ICollection_Contains(T item);

  /// @brief Method InternalArray__ICollection_CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void InternalArray__ICollection_CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t arrayIndex);

  /// @brief Method InternalArray__IReadOnlyList_get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T InternalArray__IReadOnlyList_get_Item(int32_t index);

  /// @brief Method InternalArray__IReadOnlyCollection_get_Count addr 0x2478624 size 0x4 virtual false final false
  inline int32_t InternalArray__IReadOnlyCollection_get_Count();

  /// @brief Method InternalArray__Insert addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void InternalArray__Insert(int32_t index, T item);

  /// @brief Method InternalArray__RemoveAt addr 0x2478628 size 0x50 virtual false final false
  inline void InternalArray__RemoveAt(int32_t index);

  /// @brief Method InternalArray__IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline int32_t InternalArray__IndexOf(T item);

  /// @brief Method InternalArray__get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline T InternalArray__get_Item(int32_t index);

  /// @brief Method InternalArray__set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void InternalArray__set_Item(int32_t index, T item);

  /// @brief Method GetGenericValueImpl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void GetGenericValueImpl(int32_t pos, ByRef<T> value);

  /// @brief Method SetGenericValueImpl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void SetGenericValueImpl(int32_t pos, ByRef<T> value);

  /// @brief Method get_Length addr 0x246b278 size 0x60 virtual false final false
  inline int32_t get_Length();

  /// @brief Method get_Rank addr 0x24758ec size 0x4 virtual false final false
  inline int32_t get_Rank();

  /// @brief Method GetRank addr 0x2478678 size 0x4 virtual false final false
  inline int32_t GetRank();

  /// @brief Method GetLength addr 0x2476b48 size 0x4 virtual false final false
  inline int32_t GetLength(int32_t dimension);

  /// @brief Method GetLowerBound addr 0x2475618 size 0x4 virtual false final false
  inline int32_t GetLowerBound(int32_t dimension);

  /// @brief Method GetValue addr 0x247700c size 0x4 virtual false final false
  inline ::System::Object* GetValue(::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method SetValue addr 0x2477f74 size 0x4 virtual false final false
  inline void SetValue(::System::Object* value, ::ArrayW<int32_t, ::Array<int32_t>*> indices);

  /// @brief Method GetValueImpl addr 0x247867c size 0x4 virtual false final false
  inline ::System::Object* GetValueImpl(int32_t pos);

  /// @brief Method SetValueImpl addr 0x2478680 size 0x4 virtual false final false
  inline void SetValueImpl(::System::Object* value, int32_t pos);

  /// @brief Method FastCopy addr 0x2478684 size 0x4 virtual false final false
  static inline bool FastCopy(::System::Array* source, int32_t source_idx, ::System::Array* dest, int32_t dest_idx, int32_t length);

  /// @brief Method CreateInstanceImpl addr 0x2478688 size 0x4 virtual false final false
  static inline ::System::Array* CreateInstanceImpl(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths, ::ArrayW<int32_t, ::Array<int32_t>*> bounds);

  /// @brief Method GetUpperBound addr 0x247868c size 0x38 virtual false final false
  inline int32_t GetUpperBound(int32_t dimension);

  /// @brief Method GetValue addr 0x246b2d8 size 0x174 virtual false final false
  inline ::System::Object* GetValue(int32_t index);

  /// @brief Method GetValue addr 0x2476c7c size 0x88 virtual false final false
  inline ::System::Object* GetValue(int32_t index1, int32_t index2);

  /// @brief Method GetValue addr 0x2476dd8 size 0xa0 virtual false final false
  inline ::System::Object* GetValue(int32_t index1, int32_t index2, int32_t index3);

  /// @brief Method SetValue addr 0x247536c size 0x17c virtual false final false
  inline void SetValue(::System::Object* value, int32_t index);

  /// @brief Method SetValue addr 0x2477bbc size 0x98 virtual false final false
  inline void SetValue(::System::Object* value, int32_t index1, int32_t index2);

  /// @brief Method SetValue addr 0x2477d28 size 0xa8 virtual false final false
  inline void SetValue(::System::Object* value, int32_t index1, int32_t index2, int32_t index3);

  /// @brief Method UnsafeCreateInstance addr 0x24786c4 size 0x4 virtual false final false
  static inline ::System::Array* UnsafeCreateInstance(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths, ::ArrayW<int32_t, ::Array<int32_t>*> lowerBounds);

  /// @brief Method UnsafeCreateInstance addr 0x2478abc size 0x4 virtual false final false
  static inline ::System::Array* UnsafeCreateInstance(::System::Type* elementType, int32_t length1, int32_t length2);

  /// @brief Method UnsafeCreateInstance addr 0x2478b48 size 0x4 virtual false final false
  static inline ::System::Array* UnsafeCreateInstance(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths);

  /// @brief Method CreateInstance addr 0x2478b4c size 0x78 virtual false final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, int32_t length);

  /// @brief Method CreateInstance addr 0x2478ac0 size 0x88 virtual false final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, int32_t length1, int32_t length2);

  /// @brief Method CreateInstance addr 0x2478bc4 size 0xa0 virtual false final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, int32_t length1, int32_t length2, int32_t length3);

  /// @brief Method CreateInstance addr 0x24750b8 size 0x294 virtual false final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths);

  /// @brief Method CreateInstance addr 0x24786c8 size 0x3f4 virtual false final false
  static inline ::System::Array* CreateInstance(::System::Type* elementType, ::ArrayW<int32_t, ::Array<int32_t>*> lengths, ::ArrayW<int32_t, ::Array<int32_t>*> lowerBounds);

  /// @brief Method Clear addr 0x247561c size 0x128 virtual false final false
  static inline void Clear(::System::Array* array, int32_t index, int32_t length);

  /// @brief Method ClearInternal addr 0x2478c64 size 0x4 virtual false final false
  static inline void ClearInternal(::System::Array* a, int32_t index, int32_t count);

  /// @brief Method Copy addr 0x24768d0 size 0xcc virtual false final false
  static inline void Copy(::System::Array* sourceArray, ::System::Array* destinationArray, int32_t length);

  /// @brief Method Copy addr 0x24758f0 size 0x534 virtual false final false
  static inline void Copy(::System::Array* sourceArray, int32_t sourceIndex, ::System::Array* destinationArray, int32_t destinationIndex, int32_t length);

  /// @brief Method CreateArrayTypeMismatchException addr 0x2478c68 size 0x5c virtual false final false
  static inline ::System::ArrayTypeMismatchException* CreateArrayTypeMismatchException();

  /// @brief Method CanAssignArrayElement addr 0x2478cc4 size 0xd4 virtual false final false
  static inline bool CanAssignArrayElement(::System::Type* source, ::System::Type* target);

  /// @brief Method ConstrainedCopy addr 0x2478d98 size 0x4 virtual false final false
  static inline void ConstrainedCopy(::System::Array* sourceArray, int32_t sourceIndex, ::System::Array* destinationArray, int32_t destinationIndex, int32_t length);

  /// @brief Method Empty addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<T, ::Array<T>*> Empty();

  /// @brief Method Initialize addr 0x2478d9c size 0x1004 virtual false final false
  inline void Initialize();

  /// @brief Method IndexOfImpl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t IndexOfImpl(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOfImpl addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline int32_t LastIndexOfImpl(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method SortImpl addr 0x2478450 size 0xf8 virtual false final false
  static inline void SortImpl(::System::Array* keys, ::System::Array* items, int32_t index, int32_t length, ::System::Collections::IComparer* comparer);

  /// @brief Method UnsafeLoad addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T UnsafeLoad(::ArrayW<T, ::Array<T>*> array, int32_t index);

  /// @brief Method UnsafeStore addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void UnsafeStore(::ArrayW<T, ::Array<T>*> array, int32_t index, T value);

  /// @brief Method UnsafeMov addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename S, typename R> static inline R UnsafeMov(S instance);

  // Ctor Parameters [CppParam { name: "", ty: "Array", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Array(Array&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Array", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Array(Array const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Array();

public:
  /// @brief Size padding 0x20 - 0x10 = 0x10, packed as 0x10
  uint8_t _cordl_size_padding[0x10];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Array, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Array);
DEFINE_IL2CPP_ARG_TYPE(::System::Array*, "System", "Array");
NEED_NO_BOX(::System::__Array__ArrayEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::__Array__ArrayEnumerator*, "System", "Array/ArrayEnumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::__Array__EmptyInternalEnumerator_1, "System", "Array/EmptyInternalEnumerator`1");
NEED_NO_BOX(::System::__Array__RawData);
DEFINE_IL2CPP_ARG_TYPE(::System::__Array__RawData*, "System", "Array/RawData");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::__Array__InternalEnumerator_1, "System", "Array/InternalEnumerator`1");
DEFINE_IL2CPP_ARG_TYPE(::System::__Array__SorterGenericArray, "System", "Array/SorterGenericArray");
DEFINE_IL2CPP_ARG_TYPE(::System::__Array__SorterObjectArray, "System", "Array/SorterObjectArray");
