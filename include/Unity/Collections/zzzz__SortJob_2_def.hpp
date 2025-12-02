#pragma once
// IWYU pragma private; include "Unity/Collections/SortJob_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortJob_2)
namespace Unity::Collections {
template <typename T, typename U> struct SortJob_2_SegmentSortMerge;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJob_2_SegmentSort;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T, typename U> struct SortJob_2;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJob_2_SegmentSort;
}
namespace Unity::Collections {
template <typename T, typename U> struct SortJob_2_SegmentSortMerge;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::SortJob_2);
MARK_GEN_VAL_T(::Unity::Collections::SortJob_2_SegmentSort);
MARK_GEN_VAL_T(::Unity::Collections::SortJob_2_SegmentSortMerge);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T, typename U>
// Is value type: true
// CS Name: Unity.Collections.SortJob`2/SegmentSort<T,U>
struct CORDL_TYPE SortJob_2_SegmentSort {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortJob_2_SegmentSort();

  // Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortJob_2_SegmentSort(T* Data, U Comp, int32_t Length, int32_t SegmentWidth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Data, offset: 0x0, size: 0x8, def value: None
  T* Data;

  /// @brief Field Comp, offset: 0x8, size: 0x8, def value: None
  U Comp;

  /// @brief Field Length, offset: 0x10, size: 0x4, def value: None
  int32_t Length;

  /// @brief Field SegmentWidth, offset: 0x14, size: 0x4, def value: None
  int32_t SegmentWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T, typename U>
// Is value type: true
// CS Name: Unity.Collections.SortJob`2/SegmentSortMerge<T,U>
struct CORDL_TYPE SortJob_2_SegmentSortMerge {
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
  constexpr SortJob_2_SegmentSortMerge();

  // Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortJob_2_SegmentSortMerge(T* Data, U Comp, int32_t Length, int32_t SegmentWidth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Data, offset: 0x0, size: 0x8, def value: None
  T* Data;

  /// @brief Field Comp, offset: 0x8, size: 0x8, def value: None
  U Comp;

  /// @brief Field Length, offset: 0x10, size: 0x4, def value: None
  int32_t Length;

  /// @brief Field SegmentWidth, offset: 0x14, size: 0x4, def value: None
  int32_t SegmentWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename T, typename U>
// Is value type: true
// CS Name: Unity.Collections.SortJob`2<T,U>
struct CORDL_TYPE SortJob_2 {
public:
  // Declarations
  using SegmentSort = ::Unity::Collections::SortJob_2_SegmentSort<T, U>;

  using SegmentSortMerge = ::Unity::Collections::SortJob_2_SegmentSortMerge<T, U>;

  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Schedule(::Unity::Jobs::JobHandle inputDeps);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortJob_2();

  // Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: None }, CppParam { name: "Length", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr SortJob_2(T* Data, U Comp, int32_t Length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15650 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Data, offset: 0x0, size: 0x8, def value: None
  T* Data;

  /// @brief Field Comp, offset: 0x8, size: 0x8, def value: None
  U Comp;

  /// @brief Field Length, offset: 0x10, size: 0x4, def value: None
  int32_t Length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::SortJob_2, "Unity.Collections", "SortJob`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::SortJob_2_SegmentSort, "Unity.Collections", "SortJob`2/SegmentSort");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::SortJob_2_SegmentSortMerge, "Unity.Collections", "SortJob`2/SegmentSortMerge");
