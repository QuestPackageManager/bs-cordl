#pragma once
// IWYU pragma private; include "Unity/Collections/SortJobDefer_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortJobDefer_2)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename T> struct UnsafeList_1;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJobDefer_2_SegmentSortMerge;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJobDefer_2_SegmentSort;
}
namespace Unity::Jobs {
class IJobParallelForDefer;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T, typename U> struct SortJobDefer_2;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJobDefer_2_SegmentSort;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJobDefer_2_SegmentSortMerge;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::SortJobDefer_2);
MARK_GEN_VAL_T(::Unity::Collections::SortJobDefer_2_SegmentSort);
MARK_GEN_VAL_T(::Unity::Collections::SortJobDefer_2_SegmentSortMerge);
// Dependencies Unity.Collections.NativeList`1<T>
namespace Unity::Collections {
// cpp template
template <typename T, typename U>
// Is value type: true
// CS Name: Unity.Collections.SortJobDefer`2/SegmentSort<T,U>
struct CORDL_TYPE SortJobDefer_2_SegmentSort {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForDefer"
  constexpr operator ::Unity::Jobs::IJobParallelForDefer*();

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForDefer"
  constexpr ::Unity::Jobs::IJobParallelForDefer* i___Unity__Jobs__IJobParallelForDefer();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortJobDefer_2_SegmentSort();

  // Ctor Parameters [CppParam { name: "DataRO", ty: "::Unity::Collections::NativeList_1<T>", modifiers: "", def_value: None }, CppParam { name: "Data", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: None }, CppParam { name: "SegmentWidth",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortJobDefer_2_SegmentSort(::Unity::Collections::NativeList_1<T> DataRO, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* Data, U Comp, int32_t SegmentWidth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15665 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field DataRO, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<T> DataRO;

  /// @brief Field Data, offset: 0x8, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* Data;

  /// @brief Field Comp, offset: 0x10, size: 0x8, def value: None
  U Comp;

  /// @brief Field SegmentWidth, offset: 0x18, size: 0x4, def value: None
  int32_t SegmentWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.NativeList`1<T>
namespace Unity::Collections {
// cpp template
template <typename T, typename U>
// Is value type: true
// CS Name: Unity.Collections.SortJobDefer`2/SegmentSortMerge<T,U>
struct CORDL_TYPE SortJobDefer_2_SegmentSortMerge {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortJobDefer_2_SegmentSortMerge();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeList_1<T>", modifiers: "", def_value: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: None },
  // CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortJobDefer_2_SegmentSortMerge(::Unity::Collections::NativeList_1<T> Data, U Comp, int32_t SegmentWidth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15666 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<T> Data;

  /// @brief Field Comp, offset: 0x8, size: 0x8, def value: None
  U Comp;

  /// @brief Field SegmentWidth, offset: 0x10, size: 0x4, def value: None
  int32_t SegmentWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies Unity.Collections.NativeList`1<T>
namespace Unity::Collections {
// cpp template
template <typename T, typename U>
// Is value type: true
// CS Name: Unity.Collections.SortJobDefer`2<T,U>
struct CORDL_TYPE SortJobDefer_2 {
public:
  // Declarations
  using SegmentSort = ::Unity::Collections::SortJobDefer_2_SegmentSort<T, U>;

  using SegmentSortMerge = ::Unity::Collections::SortJobDefer_2_SegmentSortMerge<T, U>;

  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Schedule(::Unity::Jobs::JobHandle inputDeps);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortJobDefer_2();

  // Ctor Parameters [CppParam { name: "Data", ty: "::Unity::Collections::NativeList_1<T>", modifiers: "", def_value: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: None }]
  constexpr SortJobDefer_2(::Unity::Collections::NativeList_1<T> Data, U Comp) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15667 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<T> Data;

  /// @brief Field Comp, offset: 0x8, size: 0x8, def value: None
  U Comp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::SortJobDefer_2, "Unity.Collections", "SortJobDefer`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::SortJobDefer_2_SegmentSort, "Unity.Collections", "SortJobDefer`2/SegmentSort");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::SortJobDefer_2_SegmentSortMerge, "Unity.Collections", "SortJobDefer`2/SegmentSortMerge");
