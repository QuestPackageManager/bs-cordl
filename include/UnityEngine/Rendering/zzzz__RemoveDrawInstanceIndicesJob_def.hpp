#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RemoveDrawInstanceIndicesJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawBatch_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawInstance_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoveDrawInstanceIndicesJob)
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine::Rendering {
struct DrawKey;
}
namespace UnityEngine::Rendering {
struct RangeKey;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RemoveDrawInstanceIndicesJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.DrawBatch,
// UnityEngine.Rendering.DrawInstance, UnityEngine.Rendering.DrawKey, UnityEngine.Rendering.DrawRange, UnityEngine.Rendering.RangeKey
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RemoveDrawInstanceIndicesJob
struct CORDL_TYPE RemoveDrawInstanceIndicesJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x6665878, size 0x1e0, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Method RemoveDrawBatch, addr 0x6665608, size 0x270, virtual false, abstract: false, final false
  inline void RemoveDrawBatch(::ByRef<::UnityEngine::Rendering::DrawKey> key);

  /// @brief Method RemoveDrawRange, addr 0x6665464, size 0x1a4, virtual false, abstract: false, final false
  inline void RemoveDrawRange(::ByRef<::UnityEngine::Rendering::RangeKey> key);

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoveDrawInstanceIndicesJob();

  // Ctor Parameters [CppParam { name: "drawInstanceIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "drawInstances", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>", modifiers: "", def_value: None }, CppParam { name: "rangeHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>", modifiers: "", def_value: None }, CppParam { name: "batchHash", ty:
  // "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>", modifiers: "", def_value: None }, CppParam { name: "drawRanges", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>", modifiers: "", def_value: None }, CppParam { name: "drawBatches", ty:
  // "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>", modifiers: "", def_value: None }]
  constexpr RemoveDrawInstanceIndicesJob(::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances,
                                         ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash,
                                         ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash,
                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges,
                                         ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17640 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field drawInstanceIndices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> drawInstanceIndices;

  /// @brief Field drawInstances, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance> drawInstances;

  /// @brief Field rangeHash, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey, int32_t> rangeHash;

  /// @brief Field batchHash, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey, int32_t> batchHash;

  /// @brief Field drawRanges, offset: 0x38, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange> drawRanges;

  /// @brief Field drawBatches, offset: 0x40, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch> drawBatches;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob, drawInstanceIndices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob, drawInstances) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob, rangeHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob, batchHash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob, drawRanges) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob, drawBatches) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RemoveDrawInstanceIndicesJob, "UnityEngine.Rendering", "RemoveDrawInstanceIndicesJob");
