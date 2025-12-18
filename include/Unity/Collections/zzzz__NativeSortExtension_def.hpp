#pragma once
// IWYU pragma private; include "Unity/Collections/NativeSortExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeSortExtension)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSortExtension_DefaultComparer_1;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJobDefer_2;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJob_2;
}
// Forward declare root types
namespace Unity::Collections {
class NativeSortExtension;
}
namespace Unity::Collections {
template <typename T> struct NativeSortExtension_DefaultComparer_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeSortExtension);
MARK_GEN_VAL_T(::Unity::Collections::NativeSortExtension_DefaultComparer_1);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeSortExtension/DefaultComparer`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE NativeSortExtension_DefaultComparer_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
  constexpr operator ::System::Collections::Generic::IComparer_1<T>*();

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t Compare(T x, T y);

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
  constexpr ::System::Collections::Generic::IComparer_1<T>* i___System__Collections__Generic__IComparer_1_T_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeSortExtension_DefaultComparer_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15660 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.NativeSortExtension
class CORDL_TYPE NativeSortExtension : public ::System::Object {
public:
  // Declarations
  template <typename T> using DefaultComparer_1 = ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>;

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::Unity::Collections::NativeArray_1<T> array, T value);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t BinarySearch(::Unity::Collections::NativeArray_1<T> array, T value, U comp);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::Unity::Collections::NativeArray_1_ReadOnly<T> array, T value);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t BinarySearch(::Unity::Collections::NativeArray_1_ReadOnly<T> array, T value, U comp);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, T value);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t BinarySearch(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, T value, U comp);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::Unity::Collections::NativeList_1<T> list, T value);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t BinarySearch(::Unity::Collections::NativeList_1<T> list, T value, U comp);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(T* ptr, int32_t length, T value);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t BinarySearch(T* ptr, int32_t length, T value, U comp);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t BinarySearch(::Unity::Collections::NativeSlice_1<T> slice, T value);

  /// @brief Method BinarySearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t BinarySearch(::Unity::Collections::NativeSlice_1<T> slice, T value, U comp);

  /// @brief Method CheckComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void CheckComparer(T* array, int32_t length, U comp);

  /// @brief Method CheckStrideMatchesSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CheckStrideMatchesSize(int32_t stride);

  /// @brief Method HeapSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void HeapSort(void* array, int32_t lo, int32_t hi, U comp);

  /// @brief Method HeapSortStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void HeapSortStruct(void* array, ::ByRef<int32_t> lo, ::ByRef<int32_t> hi, U comp);

  /// @brief Method Heapify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Heapify(void* array, int32_t i, int32_t n, int32_t lo, U comp);

  /// @brief Method HeapifyStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void HeapifyStruct(void* array, int32_t i, int32_t n, ::ByRef<int32_t> lo, U comp);

  /// @brief Method InsertionSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void InsertionSort(void* array, int32_t lo, int32_t hi, U comp);

  /// @brief Method InsertionSortStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void InsertionSortStruct(void* array, ::ByRef<int32_t> lo, ::ByRef<int32_t> hi, U comp);

  /// @brief Method IntroSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void IntroSort(void* array, int32_t length, U comp);

  /// @brief Method IntroSortStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void IntroSortStruct(void* array, int32_t length, U comp);

  /// @brief Method IntroSortStruct_R, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void IntroSortStruct_R(void* array, ::ByRef<int32_t> lo, ::ByRef<int32_t> _hi, int32_t depth, U comp);

  /// @brief Method IntroSort_R, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void IntroSort_R(void* array, int32_t lo, int32_t hi, int32_t depth, U comp);

  /// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t Partition(void* array, int32_t lo, int32_t hi, U comp);

  /// @brief Method PartitionStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline int32_t PartitionStruct(void* array, ::ByRef<int32_t> lo, ::ByRef<int32_t> hi, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::Unity::Collections::NativeArray_1<T> array);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::Unity::Collections::NativeArray_1<T> array, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(T* array, int32_t length);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(T* array, int32_t length, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::Unity::Collections::NativeList_1<T> list);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::Unity::Collections::NativeList_1<T> list, U comp);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Sort(::Unity::Collections::NativeSlice_1<T> slice);

  /// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void Sort(::Unity::Collections::NativeSlice_1<T> slice, U comp);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>> SortJob(::Unity::Collections::NativeArray_1<T> array);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>> SortJob(T* array, int32_t length);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>> SortJob(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>> SortJob(::Unity::Collections::NativeList_1<T> list);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::SortJob_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>> SortJob(::Unity::Collections::NativeSlice_1<T> slice);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::SortJob_2<T, U> SortJob(::Unity::Collections::NativeArray_1<T> array, U comp);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::SortJob_2<T, U> SortJob(T* array, int32_t length, U comp);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::SortJob_2<T, U> SortJob(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U comp);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::SortJob_2<T, U> SortJob(::Unity::Collections::NativeList_1<T> list, U comp);

  /// @brief Method SortJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::SortJob_2<T, U> SortJob(::Unity::Collections::NativeSlice_1<T> slice, U comp);

  /// @brief Method SortJobDefer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::SortJobDefer_2<T, ::Unity::Collections::NativeSortExtension_DefaultComparer_1<T>> SortJobDefer(::Unity::Collections::NativeList_1<T> list);

  /// @brief Method SortJobDefer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::Unity::Collections::SortJobDefer_2<T, U> SortJobDefer(::Unity::Collections::NativeList_1<T> list, U comp);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Swap(void* array, int32_t lhs, int32_t rhs);

  /// @brief Method SwapIfGreaterWithItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void SwapIfGreaterWithItems(void* array, int32_t lhs, int32_t rhs, U comp);

  /// @brief Method SwapIfGreaterWithItemsStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline void SwapIfGreaterWithItemsStruct(void* array, int32_t lhs, int32_t rhs, U comp);

  /// @brief Method SwapStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SwapStruct(void* array, int32_t lhs, int32_t rhs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeSortExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeSortExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeSortExtension(NativeSortExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeSortExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeSortExtension(NativeSortExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15661 };

  /// @brief Field k_IntrosortSizeThreshold offset 0xffffffff size 0x4
  static constexpr int32_t k_IntrosortSizeThreshold{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeSortExtension, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeSortExtension);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeSortExtension*, "Unity.Collections", "NativeSortExtension");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeSortExtension_DefaultComparer_1, "Unity.Collections", "NativeSortExtension/DefaultComparer`1");
