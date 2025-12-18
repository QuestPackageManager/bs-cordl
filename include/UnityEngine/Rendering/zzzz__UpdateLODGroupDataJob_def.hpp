#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UpdateLODGroupDataJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenLODGroupData_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateLODGroupDataJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct UpdateLODGroupDataJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UpdateLODGroupDataJob);
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.GPUDrivenLODGroupData, UnityEngine.Rendering.GPUInstanceIndex,
// UnityEngine.Rendering.LODGroupCullingData, UnityEngine.Rendering.LODGroupData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.UpdateLODGroupDataJob
struct CORDL_TYPE UpdateLODGroupDataJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x667a218, size 0x2d4, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateLODGroupDataJob();

  // Ctor Parameters [CppParam { name: "lodGroupInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None }, CppParam { name:
  // "inputData", ty: "::UnityEngine::Rendering::GPUDrivenLODGroupData", modifiers: "", def_value: None }, CppParam { name: "supportDitheringCrossFade", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "lodGroupsData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupData>", modifiers: "", def_value: None }, CppParam { name: "lodGroupsCullingData", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: None }, CppParam { name: "rendererCount", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }]
  constexpr UpdateLODGroupDataJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> lodGroupInstances, ::UnityEngine::Rendering::GPUDrivenLODGroupData inputData,
                                  bool supportDitheringCrossFade, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData,
                                  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupsCullingData,
                                  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 rendererCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x100) };

  /// @brief Field lodGroupInstances, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex> lodGroupInstances;

  /// @brief Field inputData, offset: 0x10, size: 0xc0, def value: None
  ::UnityEngine::Rendering::GPUDrivenLODGroupData inputData;

  /// @brief Field supportDitheringCrossFade, offset: 0xd0, size: 0x1, def value: None
  bool supportDitheringCrossFade;

  /// @brief Field lodGroupsData, offset: 0xd8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupData> lodGroupsData;

  /// @brief Field lodGroupsCullingData, offset: 0xe8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupsCullingData;

  /// @brief Field rendererCount, offset: 0xf8, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 rendererCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupDataJob, lodGroupInstances) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupDataJob, inputData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupDataJob, supportDitheringCrossFade) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupDataJob, lodGroupsData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupDataJob, lodGroupsCullingData) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupDataJob, rendererCount) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UpdateLODGroupDataJob, 0x100>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UpdateLODGroupDataJob, "UnityEngine.Rendering", "UpdateLODGroupDataJob");
