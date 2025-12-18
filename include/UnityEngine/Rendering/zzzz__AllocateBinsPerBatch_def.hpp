#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AllocateBinsPerBatch.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllocateBinsPerBatch)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct AllocateBinsPerBatch;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AllocateBinsPerBatch);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.BinningConfig, UnityEngine.Rendering.CPUInstanceData::ReadOnly,
// UnityEngine.Rendering.DrawBatch
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AllocateBinsPerBatch
struct CORDL_TYPE AllocateBinsPerBatch {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x66604ec, size 0x53c, virtual true, abstract: false, final true
  inline void Execute(int32_t batchIndex);

  /// @brief Method IsInstanceFlipped, addr 0x666044c, size 0xa0, virtual false, abstract: false, final false
  inline bool IsInstanceFlipped(int32_t rendererIndex);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocateBinsPerBatch();

  // Ctor Parameters [CppParam { name: "binningConfig", ty: "::UnityEngine::Rendering::BinningConfig", modifiers: "", def_value: None }, CppParam { name: "drawBatches", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: None }, CppParam { name: "drawInstanceIndices", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly", modifiers: "",
  // def_value: None }, CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "batchBinAllocOffsets", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "batchBinCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value:
  // None }, CppParam { name: "binAllocCounter", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "binConfigIndices", ty:
  // "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "binVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "debugCounterIndexBase", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "splitDebugCounters", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr AllocateBinsPerBatch(::UnityEngine::Rendering::BinningConfig binningConfig, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches,
                                 ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices, ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData,
                                 ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets,
                                 ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts, ::Unity::Collections::NativeArray_1<int32_t> binAllocCounter,
                                 ::Unity::Collections::NativeArray_1<int16_t> binConfigIndices, ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts, int32_t debugCounterIndexBase,
                                 ::Unity::Collections::NativeArray_1<int32_t> splitDebugCounters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x170 };

  /// @brief Field binningConfig, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::BinningConfig binningConfig;

  /// @brief Field drawBatches, offset: 0x8, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches;

  /// @brief Field drawInstanceIndices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices;

  /// @brief Field instanceData, offset: 0x20, size: 0xd8, def value: None
  ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData;

  /// @brief Field rendererVisibilityMasks, offset: 0xf8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks;

  /// @brief Field batchBinAllocOffsets, offset: 0x108, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets;

  /// @brief Field batchBinCounts, offset: 0x118, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts;

  /// @brief Field binAllocCounter, offset: 0x128, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> binAllocCounter;

  /// @brief Field binConfigIndices, offset: 0x138, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int16_t> binConfigIndices;

  /// @brief Field binVisibleInstanceCounts, offset: 0x148, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts;

  /// @brief Field debugCounterIndexBase, offset: 0x158, size: 0x4, def value: None
  int32_t debugCounterIndexBase;

  /// @brief Field splitDebugCounters, offset: 0x160, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> splitDebugCounters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, binningConfig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, drawBatches) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, drawInstanceIndices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, instanceData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, rendererVisibilityMasks) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, batchBinAllocOffsets) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, batchBinCounts) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, binAllocCounter) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, binConfigIndices) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, binVisibleInstanceCounts) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, debugCounterIndexBase) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateBinsPerBatch, splitDebugCounters) == 0x160, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AllocateBinsPerBatch, 0x170>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AllocateBinsPerBatch, "UnityEngine.Rendering", "AllocateBinsPerBatch");
