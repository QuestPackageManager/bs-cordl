#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ParallelSortExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelSortExtensions)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct ParallelSortExtensions_RadixSortBatchPrefixSumJob;
}
namespace UnityEngine::Rendering {
struct ParallelSortExtensions_RadixSortBucketCountJob;
}
namespace UnityEngine::Rendering {
struct ParallelSortExtensions_RadixSortBucketSortJob;
}
namespace UnityEngine::Rendering {
struct ParallelSortExtensions_RadixSortPrefixSumJob;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ParallelSortExtensions;
}
namespace UnityEngine::Rendering {
struct ParallelSortExtensions_RadixSortBatchPrefixSumJob;
}
namespace UnityEngine::Rendering {
struct ParallelSortExtensions_RadixSortBucketCountJob;
}
namespace UnityEngine::Rendering {
struct ParallelSortExtensions_RadixSortBucketSortJob;
}
namespace UnityEngine::Rendering {
struct ParallelSortExtensions_RadixSortPrefixSumJob;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ParallelSortExtensions);
MARK_VAL_T(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob);
MARK_VAL_T(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob);
MARK_VAL_T(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob);
MARK_VAL_T(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob);
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelSortExtensions/RadixSortBucketCountJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBucketCountJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x668213c, size 0x68, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParallelSortExtensions_RadixSortBucketCountJob();

  // Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "batchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "buckets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr ParallelSortExtensions_RadixSortBucketCountJob(int32_t radix, int32_t jobsCount, int32_t batchSize, ::Unity::Collections::NativeArray_1<int32_t> array,
                                                           ::Unity::Collections::NativeArray_1<int32_t> buckets) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17768 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field radix, offset: 0x0, size: 0x4, def value: None
  int32_t radix;

  /// @brief Field jobsCount, offset: 0x4, size: 0x4, def value: None
  int32_t jobsCount;

  /// @brief Field batchSize, offset: 0x8, size: 0x4, def value: None
  int32_t batchSize;

  /// @brief Field array, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> array;

  /// @brief Field buckets, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> buckets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob, radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob, jobsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob, batchSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob, array) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob, buckets) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelSortExtensions/RadixSortBatchPrefixSumJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBatchPrefixSumJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method AtomicIncrement, addr 0x66821a4, size 0x68, virtual false, abstract: false, final false
  static inline int32_t AtomicIncrement(::Unity::Collections::NativeArray_1<int32_t> counter);

  /// @brief Method Execute, addr 0x6682254, size 0xec, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Method JobIndexPrefixSum, addr 0x668220c, size 0x48, virtual false, abstract: false, final false
  inline int32_t JobIndexPrefixSum(int32_t sum, int32_t i);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParallelSortExtensions_RadixSortBatchPrefixSumJob();

  // Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "counter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "indicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "buckets", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr ParallelSortExtensions_RadixSortBatchPrefixSumJob(int32_t radix, int32_t jobsCount, ::Unity::Collections::NativeArray_1<int32_t> array,
                                                              ::Unity::Collections::NativeArray_1<int32_t> counter, ::Unity::Collections::NativeArray_1<int32_t> indicesSum,
                                                              ::Unity::Collections::NativeArray_1<int32_t> buckets, ::Unity::Collections::NativeArray_1<int32_t> indices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17769 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field radix, offset: 0x0, size: 0x4, def value: None
  int32_t radix;

  /// @brief Field jobsCount, offset: 0x4, size: 0x4, def value: None
  int32_t jobsCount;

  /// @brief Field array, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> array;

  /// @brief Field counter, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> counter;

  /// @brief Field indicesSum, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indicesSum;

  /// @brief Field buckets, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> buckets;

  /// @brief Field indices, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, jobsCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, counter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, indicesSum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, buckets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, indices) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelSortExtensions/RadixSortPrefixSumJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortPrefixSumJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x6682340, size 0x78, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParallelSortExtensions_RadixSortPrefixSumJob();

  // Ctor Parameters [CppParam { name: "jobsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indicesSum", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr ParallelSortExtensions_RadixSortPrefixSumJob(int32_t jobsCount, ::Unity::Collections::NativeArray_1<int32_t> indicesSum, ::Unity::Collections::NativeArray_1<int32_t> indices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17770 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field jobsCount, offset: 0x0, size: 0x4, def value: None
  int32_t jobsCount;

  /// @brief Field indicesSum, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indicesSum;

  /// @brief Field indices, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob, jobsCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob, indicesSum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob, indices) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ParallelSortExtensions/RadixSortBucketSortJob
struct CORDL_TYPE ParallelSortExtensions_RadixSortBucketSortJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x66823b8, size 0x70, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParallelSortExtensions_RadixSortBucketSortJob();

  // Ctor Parameters [CppParam { name: "radix", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "batchSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "array", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "arraySorted", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr ParallelSortExtensions_RadixSortBucketSortJob(int32_t radix, int32_t batchSize, ::Unity::Collections::NativeArray_1<int32_t> array, ::Unity::Collections::NativeArray_1<int32_t> indices,
                                                          ::Unity::Collections::NativeArray_1<int32_t> arraySorted) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17771 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field radix, offset: 0x0, size: 0x4, def value: None
  int32_t radix;

  /// @brief Field batchSize, offset: 0x4, size: 0x4, def value: None
  int32_t batchSize;

  /// @brief Field array, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> array;

  /// @brief Field indices, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indices;

  /// @brief Field arraySorted, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> arraySorted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob, radix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob, batchSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob, array) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob, indices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob, arraySorted) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ParallelSortExtensions
class CORDL_TYPE ParallelSortExtensions : public ::System::Object {
public:
  // Declarations
  using RadixSortBatchPrefixSumJob = ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob;

  using RadixSortBucketCountJob = ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob;

  using RadixSortBucketSortJob = ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob;

  using RadixSortPrefixSumJob = ::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob;

  /// @brief Method ParallelSort, addr 0x6681c40, size 0x4e0, virtual false, abstract: false, final false
  static inline ::Unity::Jobs::JobHandle ParallelSort(::Unity::Collections::NativeArray_1<int32_t> array);

  /// @brief Method <ParallelSort>g__Swap|2_0, addr 0x6682120, size 0x1c, virtual false, abstract: false, final false
  static inline void _ParallelSort_g__Swap_2_0(::ByRef<::Unity::Collections::NativeArray_1<int32_t>> a, ::ByRef<::Unity::Collections::NativeArray_1<int32_t>> b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParallelSortExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParallelSortExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParallelSortExtensions(ParallelSortExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParallelSortExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParallelSortExtensions(ParallelSortExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17772 };

  /// @brief Field kMinRadixSortArraySize offset 0xffffffff size 0x4
  static constexpr int32_t kMinRadixSortArraySize{ static_cast<int32_t>(0x800) };

  /// @brief Field kMinRadixSortBatchSize offset 0xffffffff size 0x4
  static constexpr int32_t kMinRadixSortBatchSize{ static_cast<int32_t>(0x100) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ParallelSortExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ParallelSortExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ParallelSortExtensions*, "UnityEngine.Rendering", "ParallelSortExtensions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBatchPrefixSumJob, "UnityEngine.Rendering", "ParallelSortExtensions/RadixSortBatchPrefixSumJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketCountJob, "UnityEngine.Rendering", "ParallelSortExtensions/RadixSortBucketCountJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortBucketSortJob, "UnityEngine.Rendering", "ParallelSortExtensions/RadixSortBucketSortJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ParallelSortExtensions_RadixSortPrefixSumJob, "UnityEngine.Rendering", "ParallelSortExtensions/RadixSortPrefixSumJob");
