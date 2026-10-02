#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RegisterNewMeshesJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegisterNewMeshesJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RegisterNewMeshesJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RegisterNewMeshesJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RegisterNewMeshesJob, "UnityEngine.Rendering", "RegisterNewMeshesJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2::ParallelWriter<TKey, TValue>, UnityEngine.EntityId, UnityEngine.Rendering.BatchMeshID
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RegisterNewMeshesJob
struct CORDL_TYPE RegisterNewMeshesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6c4f9d8, size 0x68, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RegisterNewMeshesJob();

  // Ctor Parameters [CppParam { name: "instanceIDs", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None, comment: None }, CppParam { name: "batchIDs",
  // ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hashMap", ty:
  // "::Unity::Collections::NativeParallelHashMap_2_ParallelWriter<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>", modifiers: "", def_value: None, comment: None }]
  constexpr RegisterNewMeshesJob(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> instanceIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID> batchIDs,
                                 ::Unity::Collections::NativeParallelHashMap_2_ParallelWriter<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> hashMap) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18191 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// [ReadOnly]
  /// @brief Field instanceIDs, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> instanceIDs;

  /// [ReadOnly]
  /// @brief Field batchIDs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID> batchIDs;

  /// [WriteOnly]
  /// @brief Field hashMap, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2_ParallelWriter<::UnityEngine::EntityId, ::UnityEngine::Rendering::BatchMeshID> hashMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RegisterNewMeshesJob, instanceIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RegisterNewMeshesJob, batchIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RegisterNewMeshesJob, hashMap) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RegisterNewMeshesJob) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering
