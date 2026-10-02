#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindNonRegisteredMeshesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindNonRegisteredMeshesJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FindNonRegisteredMeshesJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FindNonRegisteredMeshesJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::FindNonRegisteredMeshesJob, "UnityEngine.Rendering", "FindNonRegisteredMeshesJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.EntityId,
// UnityEngine.Rendering.BatchMeshID
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FindNonRegisteredMeshesJob
struct CORDL_TYPE FindNonRegisteredMeshesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x6c4f508, size 0x1e0, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FindNonRegisteredMeshesJob();

  // Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hashMap",
  // ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "outInstancesWriter", ty: "::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId>", modifiers: "", def_value: None, comment: None }]
  constexpr FindNonRegisteredMeshesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> instanceIDs,
                                       ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> hashMap,
                                       ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId> outInstancesWriter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18189 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// [ReadOnly]
  /// @brief Field instanceIDs, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> instanceIDs;

  /// [ReadOnly]
  /// @brief Field hashMap, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> hashMap;

  /// [WriteOnly]
  /// @brief Field outInstancesWriter, offset: 0x20, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1_ParallelWriter<::UnityEngine::EntityId> outInstancesWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FindNonRegisteredMeshesJob, instanceIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindNonRegisteredMeshesJob, hashMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindNonRegisteredMeshesJob, outInstancesWriter) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::FindNonRegisteredMeshesJob) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering
