#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PrefixSumDrawsAndInstances.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PrefixSumDrawsAndInstances)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct PrefixSumDrawsAndInstances;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::PrefixSumDrawsAndInstances);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.BatchCullingOutputDrawCommands, UnityEngine.Rendering.DrawRange,
// UnityEngine.Rendering.IndirectBufferAllocInfo, UnityEngine.Rendering.IndirectBufferLimits
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.PrefixSumDrawsAndInstances
struct CORDL_TYPE PrefixSumDrawsAndInstances {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x6660a28, size 0x4ac, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PrefixSumDrawsAndInstances();

  // Ctor Parameters [CppParam { name: "drawRanges", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>", modifiers: "", def_value: None }, CppParam { name:
  // "drawBatchIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "batchBinAllocOffsets", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "batchBinCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "binVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "batchDrawCommandOffsets", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "binVisibleInstanceOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "cullingOutput", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers: "", def_value: None },
  // CppParam { name: "indirectBufferLimits", ty: "::UnityEngine::Rendering::IndirectBufferLimits", modifiers: "", def_value: None }, CppParam { name: "indirectBufferAllocInfo", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo>", modifiers: "", def_value: None }, CppParam { name: "indirectAllocationCounters", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr PrefixSumDrawsAndInstances(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges, ::Unity::Collections::NativeArray_1<int32_t> drawBatchIndices,
                                       ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets, ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts,
                                       ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts, ::Unity::Collections::NativeArray_1<int32_t> batchDrawCommandOffsets,
                                       ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceOffsets,
                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> cullingOutput,
                                       ::UnityEngine::Rendering::IndirectBufferLimits indirectBufferLimits,
                                       ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> indirectBufferAllocInfo,
                                       ::Unity::Collections::NativeArray_1<int32_t> indirectAllocationCounters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17617 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field drawRanges, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges;

  /// @brief Field drawBatchIndices, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> drawBatchIndices;

  /// @brief Field batchBinAllocOffsets, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets;

  /// @brief Field batchBinCounts, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts;

  /// @brief Field binVisibleInstanceCounts, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts;

  /// @brief Field batchDrawCommandOffsets, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> batchDrawCommandOffsets;

  /// @brief Field binVisibleInstanceOffsets, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceOffsets;

  /// @brief Field cullingOutput, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> cullingOutput;

  /// @brief Field indirectBufferLimits, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::IndirectBufferLimits indirectBufferLimits;

  /// @brief Field indirectBufferAllocInfo, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> indirectBufferAllocInfo;

  /// @brief Field indirectAllocationCounters, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indirectAllocationCounters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, drawRanges) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, drawBatchIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, batchBinAllocOffsets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, batchBinCounts) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, binVisibleInstanceCounts) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, batchDrawCommandOffsets) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, binVisibleInstanceOffsets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, cullingOutput) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, indirectBufferLimits) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, indirectBufferAllocInfo) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, indirectAllocationCounters) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::PrefixSumDrawsAndInstances, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::PrefixSumDrawsAndInstances, "UnityEngine.Rendering", "PrefixSumDrawsAndInstances");
