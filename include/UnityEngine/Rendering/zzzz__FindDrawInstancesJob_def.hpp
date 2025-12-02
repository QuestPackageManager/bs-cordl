#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FindDrawInstancesJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FindDrawInstancesJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FindDrawInstancesJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FindDrawInstancesJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1::ParallelWriter<T>, Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.DrawInstance,
// UnityEngine.Rendering.InstanceHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FindDrawInstancesJob
struct CORDL_TYPE FindDrawInstancesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x65fd57c, size 0x1a4, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr FindDrawInstancesJob();

  // Ctor Parameters [CppParam { name: "instancesSorted", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>", modifiers: "", def_value: None }, CppParam { name:
  // "drawInstances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: None }, CppParam { name: "outDrawInstanceIndicesWriter", ty:
  // "::Unity::Collections::NativeList_1_ParallelWriter<int32_t>", modifiers: "", def_value: None }]
  constexpr FindDrawInstancesJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instancesSorted,
                                 ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances,
                                 ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> outDrawInstanceIndicesWriter) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17622 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field instancesSorted, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle> instancesSorted;

  /// @brief Field drawInstances, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances;

  /// @brief Field outDrawInstanceIndicesWriter, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1_ParallelWriter<int32_t> outDrawInstanceIndicesWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FindDrawInstancesJob, instancesSorted) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindDrawInstancesJob, drawInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FindDrawInstancesJob, outDrawInstanceIndicesWriter) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FindDrawInstancesJob, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FindDrawInstancesJob, "UnityEngine.Rendering", "FindDrawInstancesJob");
