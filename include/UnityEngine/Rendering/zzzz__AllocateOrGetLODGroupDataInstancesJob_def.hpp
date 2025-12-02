#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AllocateOrGetLODGroupDataInstancesJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllocateOrGetLODGroupDataInstancesJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct AllocateOrGetLODGroupDataInstancesJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.GPUInstanceIndex,
// UnityEngine.Rendering.LODGroupCullingData, UnityEngine.Rendering.LODGroupData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AllocateOrGetLODGroupDataInstancesJob
struct CORDL_TYPE AllocateOrGetLODGroupDataInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x66123c0, size 0x2cc, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AllocateOrGetLODGroupDataInstancesJob();

  // Ctor Parameters [CppParam { name: "lodGroupsID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "lodGroupsData", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>", modifiers: "", def_value: None }, CppParam { name: "lodGroupCullingData", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: None }, CppParam { name: "lodGroupDataHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None }, CppParam { name: "freeLODGroupDataHandles", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None }, CppParam { name: "lodGroupInstances", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None }, CppParam { name: "previousRendererCount", ty: "int32_t*", modifiers: "",
  // def_value: None }]
  constexpr AllocateOrGetLODGroupDataInstancesJob(::Unity::Collections::NativeArray_1<int32_t> lodGroupsID, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData,
                                                  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData,
                                                  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash,
                                                  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> freeLODGroupDataHandles,
                                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> lodGroupInstances, int32_t* previousRendererCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field lodGroupsID, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> lodGroupsID;

  /// @brief Field lodGroupsData, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData;

  /// @brief Field lodGroupCullingData, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData;

  /// @brief Field lodGroupDataHash, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash;

  /// @brief Field freeLODGroupDataHandles, offset: 0x30, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> freeLODGroupDataHandles;

  /// @brief Field lodGroupInstances, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> lodGroupInstances;

  /// @brief Field previousRendererCount, offset: 0x48, size: 0x8, def value: None
  int32_t* previousRendererCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, lodGroupsID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, lodGroupsData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, lodGroupCullingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, lodGroupDataHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, freeLODGroupDataHandles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, lodGroupInstances) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, previousRendererCount) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AllocateOrGetLODGroupDataInstancesJob, "UnityEngine.Rendering", "AllocateOrGetLODGroupDataInstancesJob");
