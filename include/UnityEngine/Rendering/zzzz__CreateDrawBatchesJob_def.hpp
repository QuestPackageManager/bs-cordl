#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CreateDrawBatchesJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenRendererGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CreateDrawBatchesJob)
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine::Rendering {
struct DrawBatch;
}
namespace UnityEngine::Rendering {
struct DrawKey;
}
namespace UnityEngine::Rendering {
struct DrawRange;
}
namespace UnityEngine::Rendering {
struct RangeKey;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CreateDrawBatchesJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CreateDrawBatchesJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2::ReadOnly<TKey, TValue>,
// Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.BatchMaterialID, UnityEngine.Rendering.BatchMeshID, UnityEngine.Rendering.DrawBatch,
// UnityEngine.Rendering.DrawInstance, UnityEngine.Rendering.DrawKey, UnityEngine.Rendering.DrawRange, UnityEngine.Rendering.GPUDrivenPackedMaterialData,
// UnityEngine.Rendering.GPUDrivenRendererGroupData, UnityEngine.Rendering.InstanceHandle, UnityEngine.Rendering.RangeKey
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CreateDrawBatchesJob
struct CORDL_TYPE CreateDrawBatchesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method EditDrawBatch, addr 0x65fe194, size 0x1ac, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::DrawBatch> EditDrawBatch(::ByRef<::UnityEngine::Rendering::DrawKey> key, ::ByRef<::UnityEngine::Rendering::SubMeshDescriptor> subMeshDescriptor);

  /// @brief Method EditDrawRange, addr 0x65fe01c, size 0x178, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::DrawRange> EditDrawRange(::ByRef<::UnityEngine::Rendering::RangeKey> key);

  /// @brief Method Execute, addr 0x65fe9dc, size 0x44, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method ProcessRenderer, addr 0x65fe340, size 0x69c, virtual false, abstract: false, final false
  inline void ProcessRenderer(int32_t i);

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CreateDrawBatchesJob();

  // Ctor Parameters [CppParam { name: "implicitInstanceIndices", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "rendererData", ty:
  // "::UnityEngine::Rendering::GPUDrivenRendererGroupData", modifiers: "", def_value: None }, CppParam { name: "batchMeshHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMeshID>", modifiers: "", def_value: None }, CppParam { name: "batchMaterialHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::BatchMaterialID>", modifiers: "", def_value: None }, CppParam { name: "packedMaterialDataHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None }, CppParam { name: "rangeHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>", modifiers: "", def_value: None }, CppParam { name: "drawRanges", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>", modifiers: "", def_value: None }, CppParam { name: "batchHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>", modifiers: "", def_value: None }, CppParam { name: "drawBatches", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: None }, CppParam { name: "drawInstances", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: None }]
  constexpr CreateDrawBatchesJob(bool implicitInstanceIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances,
                                 ::UnityEngine::Rendering::GPUDrivenRendererGroupData rendererData,
                                 ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMeshID> batchMeshHash,
                                 ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMaterialID> batchMaterialHash,
                                 ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDataHash,
                                 ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash,
                                 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges,
                                 ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash,
                                 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches,
                                 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17628 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x240 };

  /// @brief Field implicitInstanceIndices, offset: 0x0, size: 0x1, def value: None
  bool implicitInstanceIndices;

  /// @brief Field instances, offset: 0x8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instances;

  /// @brief Field rendererData, offset: 0x18, size: 0x1c0, def value: None
  ::UnityEngine::Rendering::GPUDrivenRendererGroupData rendererData;

  /// @brief Field batchMeshHash, offset: 0x1d8, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMeshID> batchMeshHash;

  /// @brief Field batchMaterialHash, offset: 0x1e8, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::BatchMaterialID> batchMaterialHash;

  /// @brief Field packedMaterialDataHash, offset: 0x1f8, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2_ReadOnly<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDataHash;

  /// @brief Field rangeHash, offset: 0x208, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash;

  /// @brief Field drawRanges, offset: 0x218, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges;

  /// @brief Field batchHash, offset: 0x220, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash;

  /// @brief Field drawBatches, offset: 0x230, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches;

  /// @brief Field drawInstances, offset: 0x238, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, implicitInstanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, instances) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, rendererData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, batchMeshHash) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, batchMaterialHash) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, packedMaterialDataHash) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, rangeHash) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, drawRanges) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, batchHash) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, drawBatches) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CreateDrawBatchesJob, drawInstances) == 0x238, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CreateDrawBatchesJob, 0x240>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CreateDrawBatchesJob, "UnityEngine.Rendering", "CreateDrawBatchesJob");
