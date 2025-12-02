#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ReflectionProbeMinMaxZJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Fixed2_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionProbeMinMaxZJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct ReflectionProbeMinMaxZJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float4x4, UnityEngine.Rendering.Universal.Fixed2`1<T>, UnityEngine.Rendering.VisibleReflectionProbe
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ReflectionProbeMinMaxZJob
struct CORDL_TYPE ReflectionProbeMinMaxZJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x66a1f4c, size 0x198, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionProbeMinMaxZJob();

  // Ctor Parameters [CppParam { name: "worldToViews", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name:
  // "reflectionProbes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>", modifiers: "", def_value: None }, CppParam { name: "minMaxZs", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: None }]
  constexpr ReflectionProbeMinMaxZJob(::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews,
                                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> reflectionProbes,
                                      ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12946 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field worldToViews, offset: 0x0, size: 0x80, def value: None
  ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews;

  /// @brief Field reflectionProbes, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> reflectionProbes;

  /// @brief Field minMaxZs, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob, worldToViews) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob, reflectionProbes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob, minMaxZs) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ReflectionProbeMinMaxZJob, "UnityEngine.Rendering.Universal", "ReflectionProbeMinMaxZJob");
