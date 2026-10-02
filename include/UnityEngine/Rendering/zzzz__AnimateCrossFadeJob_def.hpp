#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AnimateCrossFadeJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimateCrossFadeJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct AnimateCrossFadeJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AnimateCrossFadeJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::AnimateCrossFadeJob, "UnityEngine.Rendering", "AnimateCrossFadeJob");
// [BurstCompile(DisableSafetyChecks = true, OptimizeFor = (Unity.Burst.OptimizeFor)1)]
// Dependencies Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AnimateCrossFadeJob
struct CORDL_TYPE AnimateCrossFadeJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method Execute, addr 0x6c48458, size 0xa0, virtual true, abstract: false, final true
  inline void Execute(int32_t instanceIndex);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AnimateCrossFadeJob();

  // Ctor Parameters [CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "crossFadeArray", ty:
  // "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t>", modifiers: "", def_value: None, comment: None }]
  constexpr AnimateCrossFadeJob(float_t deltaTime, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> crossFadeArray) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18161 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field k_BatchSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BatchSize{ static_cast<int32_t>(0x200) };

  /// @brief Field k_CrossfadeAnimationTimeS offset 0xffffffff size 0x4
  static constexpr float_t k_CrossfadeAnimationTimeS{ static_cast<float_t>(0.333f) };

  /// @brief Field k_LODFadeOff offset 0xffffffff size 0x1
  static constexpr uint8_t k_LODFadeOff{ static_cast<uint8_t>(0xffu) };

  /// @brief Field k_MeshLODTransitionToLowerLODBit offset 0xffffffff size 0x1
  static constexpr uint8_t k_MeshLODTransitionToLowerLODBit{ static_cast<uint8_t>(0x80u) };

  /// [ReadOnly]
  /// @brief Field deltaTime, offset: 0x0, size: 0x4, def value: None
  float_t deltaTime;

  /// @brief Field crossFadeArray, offset: 0x8, size: 0x18, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<uint8_t> crossFadeArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AnimateCrossFadeJob, deltaTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::AnimateCrossFadeJob, crossFadeArray) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::AnimateCrossFadeJob) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering
