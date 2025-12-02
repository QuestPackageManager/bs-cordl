#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FreeLODGroupDataJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FreeLODGroupDataJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FreeLODGroupDataJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FreeLODGroupDataJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.GPUInstanceIndex,
// UnityEngine.Rendering.LODGroupData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FreeLODGroupDataJob
struct CORDL_TYPE FreeLODGroupDataJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x6612960, size 0x25c, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FreeLODGroupDataJob();

  // Ctor Parameters [CppParam { name: "destroyedLODGroupsID", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "lodGroupsData", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>", modifiers: "", def_value: None }, CppParam { name: "lodGroupDataHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None }, CppParam { name: "freeLODGroupDataHandles", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None }, CppParam { name: "removedRendererCount", ty: "int32_t*", modifiers: "",
  // def_value: None }]
  constexpr FreeLODGroupDataJob(::Unity::Collections::NativeArray_1<int32_t> destroyedLODGroupsID, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData,
                                ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash,
                                ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> freeLODGroupDataHandles, int32_t* removedRendererCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field destroyedLODGroupsID, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> destroyedLODGroupsID;

  /// @brief Field lodGroupsData, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData;

  /// @brief Field lodGroupDataHash, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash;

  /// @brief Field freeLODGroupDataHandles, offset: 0x28, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex> freeLODGroupDataHandles;

  /// @brief Field removedRendererCount, offset: 0x30, size: 0x8, def value: None
  int32_t* removedRendererCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FreeLODGroupDataJob, destroyedLODGroupsID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeLODGroupDataJob, lodGroupsData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeLODGroupDataJob, lodGroupDataHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeLODGroupDataJob, freeLODGroupDataHandles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FreeLODGroupDataJob, removedRendererCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FreeLODGroupDataJob, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FreeLODGroupDataJob, "UnityEngine.Rendering", "FreeLODGroupDataJob");
