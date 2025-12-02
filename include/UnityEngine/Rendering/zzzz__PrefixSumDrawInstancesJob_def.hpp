#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PrefixSumDrawInstancesJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrefixSumDrawInstancesJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct PrefixSumDrawInstancesJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PrefixSumDrawInstancesJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.DrawBatch,
// UnityEngine.Rendering.DrawRange, UnityEngine.Rendering.RangeKey
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.PrefixSumDrawInstancesJob
struct CORDL_TYPE PrefixSumDrawInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x65fd0e8, size 0x300, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefixSumDrawInstancesJob();

  // Ctor Parameters [CppParam { name: "rangeHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "drawRanges", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>", modifiers: "", def_value: None }, CppParam { name: "drawBatches", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: None }, CppParam { name: "drawBatchIndices", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr PrefixSumDrawInstancesJob(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash,
                                      ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges,
                                      ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches, ::Unity::Collections::NativeArray_1<int32_t> drawBatchIndices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17620 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field rangeHash, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash;

  /// @brief Field drawRanges, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges;

  /// @brief Field drawBatches, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches;

  /// @brief Field drawBatchIndices, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> drawBatchIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawInstancesJob, rangeHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawInstancesJob, drawRanges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawInstancesJob, drawBatches) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawInstancesJob, drawBatchIndices) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PrefixSumDrawInstancesJob, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PrefixSumDrawInstancesJob, "UnityEngine.Rendering", "PrefixSumDrawInstancesJob");
