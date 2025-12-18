#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightMinMaxZJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Fixed2_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightMinMaxZJob)
namespace Unity::Jobs {
class IJobFor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct LightMinMaxZJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::LightMinMaxZJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float4x4, UnityEngine.Rendering.Universal.Fixed2`1<T>, UnityEngine.Rendering.VisibleLight
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightMinMaxZJob
struct CORDL_TYPE LightMinMaxZJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method Execute, addr 0x6709698, size 0x440, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightMinMaxZJob();

  // Ctor Parameters [CppParam { name: "worldToViews", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "lights",
  // ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: None }, CppParam { name: "minMaxZs", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: None }]
  constexpr LightMinMaxZJob(::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews,
                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12949 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field worldToViews, offset: 0x0, size: 0x80, def value: None
  ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews;

  /// @brief Field lights, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights;

  /// @brief Field minMaxZs, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> minMaxZs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightMinMaxZJob, worldToViews) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightMinMaxZJob, lights) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightMinMaxZJob, minMaxZs) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LightMinMaxZJob, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LightMinMaxZJob, "UnityEngine.Rendering.Universal", "LightMinMaxZJob");
