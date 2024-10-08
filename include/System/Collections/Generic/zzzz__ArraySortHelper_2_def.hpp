#pragma once
// IWYU pragma private; include "System/Collections/Generic/ArraySortHelper_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySortHelper_2)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class ArraySortHelper_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::ArraySortHelper_2);
// Type: System.Collections.Generic::ArraySortHelper`2
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ::System.Collections.Generic::ArraySortHelper`2<TKey,TValue>*
class CORDL_TYPE ArraySortHelper_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_defaultArraySortHelper, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_defaultArraySortHelper,
                             put = setStaticF_s_defaultArraySortHelper)) ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* s_defaultArraySortHelper;

  /// @brief Method DownHeap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void DownHeap(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, int32_t i, int32_t n, int32_t lo,
                              ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Heapsort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Heapsort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, int32_t lo, int32_t hi, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method InsertionSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void InsertionSort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, int32_t lo, int32_t hi, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method IntroSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void IntroSort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, int32_t lo, int32_t hi, int32_t depthLimit,
                               ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method IntrospectiveSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void IntrospectiveSort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, int32_t left, int32_t length,
                                       ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  static inline ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* New_ctor();

  /// @brief Method PickPivotAndPartition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t PickPivotAndPartition(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, int32_t lo, int32_t hi,
                                              ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Sort(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<TKey>* comparer);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Swap(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, int32_t i, int32_t j);

  /// @brief Method SwapIfGreaterWithItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void SwapIfGreaterWithItems(::ArrayW<TKey, ::Array<TKey>*> keys, ::ArrayW<TValue, ::Array<TValue>*> values, ::System::Collections::Generic::IComparer_1<TKey>* comparer, int32_t a,
                                            int32_t b);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* getStaticF_s_defaultArraySortHelper();

  /// @brief Method get_Default, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* get_Default();

  static inline void setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArraySortHelper_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArraySortHelper_2(ArraySortHelper_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArraySortHelper_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArraySortHelper_2(ArraySortHelper_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3879 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::ArraySortHelper_2, "System.Collections.Generic", "ArraySortHelper`2");
