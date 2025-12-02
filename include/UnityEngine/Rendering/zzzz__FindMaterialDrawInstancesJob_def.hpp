#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindMaterialDrawInstancesJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindMaterialDrawInstancesJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FindMaterialDrawInstancesJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FindMaterialDrawInstancesJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.DrawInstance
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FindMaterialDrawInstancesJob
struct CORDL_TYPE FindMaterialDrawInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x65fd778, size 0x160, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FindMaterialDrawInstancesJob();

  // Ctor Parameters [CppParam { name: "materialsSorted", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "drawInstances", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: None }, CppParam { name: "outDrawInstanceIndicesWriter", ty:
  // "::Unity::Collections::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: None }]
  constexpr FindMaterialDrawInstancesJob(::Unity::Collections::NativeArray_1<uint32_t> materialsSorted, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances,
                                         ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> outDrawInstanceIndicesWriter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17623 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field materialsSorted, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> materialsSorted;

  /// @brief Field drawInstances, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances;

  /// @brief Field outDrawInstanceIndicesWriter, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> outDrawInstanceIndicesWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FindMaterialDrawInstancesJob, materialsSorted) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindMaterialDrawInstancesJob, drawInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindMaterialDrawInstancesJob, outDrawInstanceIndicesWriter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FindMaterialDrawInstancesJob, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FindMaterialDrawInstancesJob, "UnityEngine.Rendering", "FindMaterialDrawInstancesJob");
