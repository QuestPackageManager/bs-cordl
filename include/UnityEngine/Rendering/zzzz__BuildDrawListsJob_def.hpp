#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BuildDrawListsJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuildDrawListsJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BuildDrawListsJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BuildDrawListsJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.DrawBatch,
// UnityEngine.Rendering.DrawInstance, UnityEngine.Rendering.DrawKey
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BuildDrawListsJob
struct CORDL_TYPE BuildDrawListsJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6664fc4, size 0x144, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Method IncrementCounter, addr 0x6664f74, size 0x50, virtual false, abstract: false, final false
  static inline int32_t IncrementCounter(int32_t* counter);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BuildDrawListsJob();

  // Ctor Parameters [CppParam { name: "batchHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "drawInstances", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: None }, CppParam { name: "drawBatches", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: None }, CppParam { name: "internalDrawIndex", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "drawInstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "",
  // def_value: None }]
  constexpr BuildDrawListsJob(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash,
                              ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances,
                              ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches, ::Unity::Collections::NativeArray_1<int32_t> internalDrawIndex,
                              ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17635 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x80) };

  /// @brief Field k_IntsPerCacheLine offset 0xffffffff size 0x4
  static constexpr int32_t k_IntsPerCacheLine{ static_cast<int32_t>(0x10) };

  /// @brief Field batchHash, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash;

  /// @brief Field drawInstances, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances;

  /// @brief Field drawBatches, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches;

  /// @brief Field internalDrawIndex, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> internalDrawIndex;

  /// @brief Field drawInstanceIndices, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BuildDrawListsJob, batchHash) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BuildDrawListsJob, drawInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BuildDrawListsJob, drawBatches) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BuildDrawListsJob, internalDrawIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BuildDrawListsJob, drawInstanceIndices) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BuildDrawListsJob, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BuildDrawListsJob, "UnityEngine.Rendering", "BuildDrawListsJob");
