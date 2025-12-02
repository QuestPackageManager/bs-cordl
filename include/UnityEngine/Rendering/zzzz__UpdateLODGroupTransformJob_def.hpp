#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UpdateLODGroupTransformJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAtomicCounter32_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUInstanceIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupCullingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODGroupData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateLODGroupTransformJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct UpdateLODGroupTransformJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UpdateLODGroupTransformJob);
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeAtomicCounter32, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>,
// UnityEngine.Rendering.GPUInstanceIndex, UnityEngine.Rendering.LODGroupCullingData, UnityEngine.Rendering.LODGroupData, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.UpdateLODGroupTransformJob
struct CORDL_TYPE UpdateLODGroupTransformJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x66121e4, size 0x1d4, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdateLODGroupTransformJob();

  // Ctor Parameters [CppParam { name: "lodGroupDataHash", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>", modifiers: "", def_value: None },
  // CppParam { name: "lodGroupIDs", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "worldSpaceReferencePoints", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "worldSpaceSizes", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers:
  // "", def_value: None }, CppParam { name: "requiresGPUUpload", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "supportDitheringCrossFade", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "lodGroupData", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>", modifiers: "", def_value: None }, CppParam { name: "lodGroupCullingData", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>", modifiers: "", def_value: None }, CppParam { name: "atomicUpdateCount", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32", modifiers: "", def_value: None }]
  constexpr UpdateLODGroupTransformJob(::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash,
                                       ::Unity::Collections::NativeArray_1<int32_t> lodGroupIDs, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> worldSpaceReferencePoints,
                                       ::Unity::Collections::NativeArray_1<float_t> worldSpaceSizes, bool requiresGPUUpload, bool supportDitheringCrossFade,
                                       ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupData,
                                       ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData,
                                       ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicUpdateCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17711 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x100) };

  /// @brief Field lodGroupDataHash, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUInstanceIndex> lodGroupDataHash;

  /// @brief Field lodGroupIDs, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> lodGroupIDs;

  /// @brief Field worldSpaceReferencePoints, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> worldSpaceReferencePoints;

  /// @brief Field worldSpaceSizes, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> worldSpaceSizes;

  /// @brief Field requiresGPUUpload, offset: 0x40, size: 0x1, def value: None
  bool requiresGPUUpload;

  /// @brief Field supportDitheringCrossFade, offset: 0x41, size: 0x1, def value: None
  bool supportDitheringCrossFade;

  /// @brief Field lodGroupData, offset: 0x48, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData> lodGroupData;

  /// @brief Field lodGroupCullingData, offset: 0x50, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData> lodGroupCullingData;

  /// @brief Field atomicUpdateCount, offset: 0x58, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeAtomicCounter32 atomicUpdateCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, lodGroupDataHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, lodGroupIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, worldSpaceReferencePoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, worldSpaceSizes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, requiresGPUUpload) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, supportDitheringCrossFade) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, lodGroupData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, lodGroupCullingData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdateLODGroupTransformJob, atomicUpdateCount) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UpdateLODGroupTransformJob, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UpdateLODGroupTransformJob, "UnityEngine.Rendering", "UpdateLODGroupTransformJob");
