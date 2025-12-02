#pragma once
// IWYU pragma private; include "System/Collections/Generic/ArraySortHelper_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySortHelper_1)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System {
template <typename T> class Comparison_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class ArraySortHelper_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::ArraySortHelper_1);
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.ArraySortHelper`1<T>
class CORDL_TYPE ArraySortHelper_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_defaultArraySortHelper, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_defaultArraySortHelper, put = setStaticF_s_defaultArraySortHelper)) ::System::Collections::Generic::ArraySortHelper_1<T>* s_defaultArraySortHelper;

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t BinarySearch(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length, T value, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method DownHeap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void DownHeap(::ArrayW<T, ::Array<T>*> keys, int32_t i, int32_t n, int32_t lo, ::System::Comparison_1<T>* comparer);

  /// @brief Method Heapsort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Heapsort(::ArrayW<T, ::Array<T>*> keys, int32_t lo, int32_t hi, ::System::Comparison_1<T>* comparer);

  /// @brief Method InsertionSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void InsertionSort(::ArrayW<T, ::Array<T>*> keys, int32_t lo, int32_t hi, ::System::Comparison_1<T>* comparer);

  /// @brief Method InternalBinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t InternalBinarySearch(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t length, T value, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method IntroSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void IntroSort(::ArrayW<T, ::Array<T>*> keys, int32_t lo, int32_t hi, int32_t depthLimit, ::System::Comparison_1<T>* comparer);

  /// @brief Method IntrospectiveSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void IntrospectiveSort(::ArrayW<T, ::Array<T>*> keys, int32_t left, int32_t length, ::System::Comparison_1<T>* comparer);

  static inline ::System::Collections::Generic::ArraySortHelper_1<T>* New_ctor();

  /// @brief Method PickPivotAndPartition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t PickPivotAndPartition(::ArrayW<T, ::Array<T>*> keys, int32_t lo, int32_t hi, ::System::Comparison_1<T>* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sort(::ArrayW<T, ::Array<T>*> keys, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<T>* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Sort(::ArrayW<T, ::Array<T>*> keys, int32_t index, int32_t length, ::System::Comparison_1<T>* comparer);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Swap(::ArrayW<T, ::Array<T>*> a, int32_t i, int32_t j);

  /// @brief Method SwapIfGreater, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void SwapIfGreater(::ArrayW<T, ::Array<T>*> keys, ::System::Comparison_1<T>* comparer, int32_t a, int32_t b);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::ArraySortHelper_1<T>* getStaticF_s_defaultArraySortHelper();

  /// @brief Method get_Default, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::ArraySortHelper_1<T>* get_Default();

  static inline void setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArraySortHelper_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArraySortHelper_1(ArraySortHelper_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArraySortHelper_1(ArraySortHelper_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ArraySortHelper_1, "System.Collections.Generic", "ArraySortHelper`1");
