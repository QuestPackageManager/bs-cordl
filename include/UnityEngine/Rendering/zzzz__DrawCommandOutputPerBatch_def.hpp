#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawCommandOutputPerBatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingOutputDrawCommands_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BinningConfig_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUInstanceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceDataBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferAllocInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferLimits_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectDrawInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectInstanceInfo_def.hpp"
#include "UnityEngine/zzzz__GraphicsBufferHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawCommandOutputPerBatch)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DrawCommandOutputPerBatch;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DrawCommandOutputPerBatch);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DrawCommandOutputPerBatch, "UnityEngine.Rendering", "DrawCommandOutputPerBatch");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.GraphicsBufferHandle,
// UnityEngine.Rendering.BatchCullingOutputDrawCommands, UnityEngine.Rendering.BatchID, UnityEngine.Rendering.BinningConfig, UnityEngine.Rendering.CPUInstanceData::ReadOnly,
// UnityEngine.Rendering.DrawBatch, UnityEngine.Rendering.GPUInstanceDataBuffer::ReadOnly, UnityEngine.Rendering.IndirectBufferAllocInfo, UnityEngine.Rendering.IndirectBufferLimits,
// UnityEngine.Rendering.IndirectDrawInfo, UnityEngine.Rendering.IndirectInstanceInfo
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.DrawCommandOutputPerBatch
struct CORDL_TYPE DrawCommandOutputPerBatch {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method EncodeGPUInstanceIndexAndCrossFade, addr 0x681803c, size 0xcc, virtual false, abstract: false, final false
  inline int32_t EncodeGPUInstanceIndexAndCrossFade(int32_t rendererIndex, bool negateCrossFade);

  /// @brief Method Execute, addr 0x68181a8, size 0x744, virtual true, abstract: false, final true
  inline void Execute(int32_t batchIndex);

  /// @brief Method IsInstanceFlipped, addr 0x6818108, size 0xa0, virtual false, abstract: false, final false
  inline bool IsInstanceFlipped(int32_t rendererIndex);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawCommandOutputPerBatch();

  // Ctor Parameters [CppParam { name: "binningConfig", ty: "::UnityEngine::Rendering::BinningConfig", modifiers: "", def_value: None, comment: None }, CppParam { name: "batchIDs", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<uint32_t,::UnityEngine::Rendering::BatchID>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceDataBuffer", ty:
  // "::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawBatches", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: None, comment: None }, CppParam { name: "drawInstanceIndices", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceData", ty: "::UnityEngine::Rendering::CPUInstanceData_ReadOnly",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "rendererCrossFadeValues", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "batchBinAllocOffsets", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "batchBinCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "batchDrawCommandOffsets", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "binConfigIndices", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "binVisibleInstanceOffsets", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "binVisibleInstanceCounts", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "cullingOutput", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands>", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "indirectBufferLimits", ty: "::UnityEngine::Rendering::IndirectBufferLimits", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "visibleInstancesBufferHandle", ty: "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "indirectArgsBufferHandle", ty:
  // "::UnityEngine::GraphicsBufferHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "indirectBufferAllocInfo", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indirectDrawInfoGlobalArray", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indirectInstanceInfoGlobalArray", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo>", modifiers: "", def_value: None, comment: None }]
  constexpr DrawCommandOutputPerBatch(::UnityEngine::Rendering::BinningConfig binningConfig, ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> batchIDs,
                                      ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly instanceDataBuffer, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches,
                                      ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices, ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData,
                                      ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::Unity::Collections::NativeArray_1<uint8_t> rendererCrossFadeValues,
                                      ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets, ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts,
                                      ::Unity::Collections::NativeArray_1<int32_t> batchDrawCommandOffsets, ::Unity::Collections::NativeArray_1<int16_t> binConfigIndices,
                                      ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceOffsets, ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts,
                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> cullingOutput,
                                      ::UnityEngine::Rendering::IndirectBufferLimits indirectBufferLimits, ::UnityEngine::GraphicsBufferHandle visibleInstancesBufferHandle,
                                      ::UnityEngine::GraphicsBufferHandle indirectArgsBufferHandle,
                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> indirectBufferAllocInfo,
                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> indirectDrawInfoGlobalArray,
                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> indirectInstanceInfoGlobalArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17650 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1e8 };

  /// [ReadOnly]
  /// @brief Field binningConfig, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::BinningConfig binningConfig;

  /// [ReadOnly]
  /// @brief Field batchIDs, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<uint32_t, ::UnityEngine::Rendering::BatchID> batchIDs;

  /// [ReadOnly]
  /// @brief Field instanceDataBuffer, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::GPUInstanceDataBuffer_ReadOnly instanceDataBuffer;

  /// [ReadOnly]
  /// @brief Field drawBatches, offset: 0x28, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches;

  /// [ReadOnly]
  /// @brief Field drawInstanceIndices, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices;

  /// [ReadOnly]
  /// @brief Field instanceData, offset: 0x40, size: 0xd8, def value: None
  ::UnityEngine::Rendering::CPUInstanceData_ReadOnly instanceData;

  /// [ReadOnly]
  /// @brief Field rendererVisibilityMasks, offset: 0x118, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks;

  /// [ReadOnly]
  /// @brief Field rendererCrossFadeValues, offset: 0x128, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> rendererCrossFadeValues;

  /// [ReadOnly]
  /// [DeallocateOnJobCompletion]
  /// @brief Field batchBinAllocOffsets, offset: 0x138, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> batchBinAllocOffsets;

  /// [ReadOnly]
  /// [DeallocateOnJobCompletion]
  /// @brief Field batchBinCounts, offset: 0x148, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> batchBinCounts;

  /// [ReadOnly]
  /// [DeallocateOnJobCompletion]
  /// @brief Field batchDrawCommandOffsets, offset: 0x158, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> batchDrawCommandOffsets;

  /// [ReadOnly]
  /// [DeallocateOnJobCompletion]
  /// @brief Field binConfigIndices, offset: 0x168, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int16_t> binConfigIndices;

  /// [ReadOnly]
  /// [DeallocateOnJobCompletion]
  /// @brief Field binVisibleInstanceOffsets, offset: 0x178, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceOffsets;

  /// [ReadOnly]
  /// [DeallocateOnJobCompletion]
  /// @brief Field binVisibleInstanceCounts, offset: 0x188, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> binVisibleInstanceCounts;

  /// [ReadOnly]
  /// @brief Field cullingOutput, offset: 0x198, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchCullingOutputDrawCommands> cullingOutput;

  /// [ReadOnly]
  /// @brief Field indirectBufferLimits, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::Rendering::IndirectBufferLimits indirectBufferLimits;

  /// [ReadOnly]
  /// @brief Field visibleInstancesBufferHandle, offset: 0x1b0, size: 0x4, def value: None
  ::UnityEngine::GraphicsBufferHandle visibleInstancesBufferHandle;

  /// [ReadOnly]
  /// @brief Field indirectArgsBufferHandle, offset: 0x1b4, size: 0x4, def value: None
  ::UnityEngine::GraphicsBufferHandle indirectArgsBufferHandle;

  /// [NativeDisableContainerSafetyRestriction]
  /// [NoAlias]
  /// @brief Field indirectBufferAllocInfo, offset: 0x1b8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectBufferAllocInfo> indirectBufferAllocInfo;

  /// [NativeDisableContainerSafetyRestriction]
  /// [NoAlias]
  /// @brief Field indirectDrawInfoGlobalArray, offset: 0x1c8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectDrawInfo> indirectDrawInfoGlobalArray;

  /// [NativeDisableContainerSafetyRestriction]
  /// [NoAlias]
  /// @brief Field indirectInstanceInfoGlobalArray, offset: 0x1d8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::IndirectInstanceInfo> indirectInstanceInfoGlobalArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, binningConfig) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, batchIDs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, instanceDataBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, drawBatches) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, drawInstanceIndices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, instanceData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, rendererVisibilityMasks) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, rendererCrossFadeValues) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, batchBinAllocOffsets) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, batchBinCounts) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, batchDrawCommandOffsets) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, binConfigIndices) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, binVisibleInstanceOffsets) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, binVisibleInstanceCounts) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, cullingOutput) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, indirectBufferLimits) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, visibleInstancesBufferHandle) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, indirectArgsBufferHandle) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, indirectBufferAllocInfo) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, indirectDrawInfoGlobalArray) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawCommandOutputPerBatch, indirectInstanceInfoGlobalArray) == 0x1d8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DrawCommandOutputPerBatch) == 0x1e8, "Size mismatch!");

} // namespace UnityEngine::Rendering
