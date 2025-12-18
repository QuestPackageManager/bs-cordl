#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UpdatePackedMaterialDataCacheJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUDrivenPackedMaterialData_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdatePackedMaterialDataCacheJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct UpdatePackedMaterialDataCacheJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob);
// Dependencies Unity.Collections.NativeArray`1::ReadOnly<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.GPUDrivenPackedMaterialData
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.UpdatePackedMaterialDataCacheJob
struct CORDL_TYPE UpdatePackedMaterialDataCacheJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x6665b3c, size 0x6c, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method ProcessMaterial, addr 0x6665a58, size 0xe4, virtual false, abstract: false, final false
  inline void ProcessMaterial(int32_t i);

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UpdatePackedMaterialDataCacheJob();

  // Ctor Parameters [CppParam { name: "materialIDs", ty: "::Unity::Collections::NativeArray_1_ReadOnly<int32_t>", modifiers: "", def_value: None }, CppParam { name: "packedMaterialDatas", ty:
  // "::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None }, CppParam { name: "packedMaterialHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>", modifiers: "", def_value: None }]
  constexpr UpdatePackedMaterialDataCacheJob(::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs,
                                             ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas,
                                             ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialHash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17641 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field materialIDs, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<int32_t> materialIDs;

  /// @brief Field packedMaterialDatas, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialDatas;

  /// @brief Field packedMaterialHash, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, ::UnityEngine::Rendering::GPUDrivenPackedMaterialData> packedMaterialHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob, materialIDs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob, packedMaterialDatas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob, packedMaterialHash) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UpdatePackedMaterialDataCacheJob, "UnityEngine.Rendering", "UpdatePackedMaterialDataCacheJob");
