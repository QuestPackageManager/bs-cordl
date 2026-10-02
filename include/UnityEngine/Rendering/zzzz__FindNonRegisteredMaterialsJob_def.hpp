#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindNonRegisteredMaterialsJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindNonRegisteredMaterialsJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FindNonRegisteredMaterialsJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FindNonRegisteredMaterialsJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::FindNonRegisteredMaterialsJob, "UnityEngine.Rendering", "FindNonRegisteredMaterialsJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.EntityId,
// UnityEngine.Rendering.BatchMaterialID, UnityEngine.Rendering.GPUDrivenPackedMaterialData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FindNonRegisteredMaterialsJob
struct CORDL_TYPE FindNonRegisteredMaterialsJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x6c4f6e8, size 0x2f0, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FindNonRegisteredMaterialsJob();

  // Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "packedMaterialDatas", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "hashMap", ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "outInstancesWriter", ty: "::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "outPackedMaterialDatasWriter", ty: "::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None, comment: None }]
  constexpr FindNonRegisteredMaterialsJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> instanceIDs,
                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas,
                                          ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> hashMap,
                                          ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId> outInstancesWriter,
                                          ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> outPackedMaterialDatasWriter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18190 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// [ReadOnly]
  /// @brief Field instanceIDs, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> instanceIDs;

  /// [ReadOnly]
  /// @brief Field packedMaterialDatas, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas;

  /// [ReadOnly]
  /// @brief Field hashMap, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMaterialID> hashMap;

  /// [WriteOnly]
  /// @brief Field outInstancesWriter, offset: 0x30, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId> outInstancesWriter;

  /// [WriteOnly]
  /// @brief Field outPackedMaterialDatasWriter, offset: 0x38, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> outPackedMaterialDatasWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FindNonRegisteredMaterialsJob, instanceIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindNonRegisteredMaterialsJob, packedMaterialDatas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindNonRegisteredMaterialsJob, hashMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindNonRegisteredMaterialsJob, outInstancesWriter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindNonRegisteredMaterialsJob, outPackedMaterialDatasWriter) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::FindNonRegisteredMaterialsJob) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering
