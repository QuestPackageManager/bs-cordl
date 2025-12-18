#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CompactVisibilityMasksJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ParallelBitArray_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompactVisibilityMasksJob)
namespace Unity::Jobs {
class IJobParallelForBatch;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CompactVisibilityMasksJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CompactVisibilityMasksJob);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.ParallelBitArray
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CompactVisibilityMasksJob
struct CORDL_TYPE CompactVisibilityMasksJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelForBatch"
  constexpr operator ::Unity::Jobs::IJobParallelForBatch*();

  /// @brief Method Execute, addr 0x6661784, size 0x6c, virtual true, abstract: false, final true
  inline void Execute(int32_t startIndex, int32_t count);

  /// @brief Convert to "::Unity::Jobs::IJobParallelForBatch"
  constexpr ::Unity::Jobs::IJobParallelForBatch* i___Unity__Jobs__IJobParallelForBatch();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompactVisibilityMasksJob();

  // Ctor Parameters [CppParam { name: "rendererVisibilityMasks", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "compactedVisibilityMasks", ty:
  // "::UnityEngine::Rendering::ParallelBitArray", modifiers: "", def_value: None }]
  constexpr CompactVisibilityMasksJob(::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks, ::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17619 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x40) };

  /// @brief Field rendererVisibilityMasks, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> rendererVisibilityMasks;

  /// @brief Field compactedVisibilityMasks, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::Rendering::ParallelBitArray compactedVisibilityMasks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CompactVisibilityMasksJob, rendererVisibilityMasks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CompactVisibilityMasksJob, compactedVisibilityMasks) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CompactVisibilityMasksJob, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CompactVisibilityMasksJob, "UnityEngine.Rendering", "CompactVisibilityMasksJob");
