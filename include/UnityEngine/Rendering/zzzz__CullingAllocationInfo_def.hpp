#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CullingAllocationInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingAllocationInfo)
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine::Rendering {
struct VisibleReflectionProbe;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CullingAllocationInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CullingAllocationInfo);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CullingAllocationInfo
struct CORDL_TYPE CullingAllocationInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingAllocationInfo();

  // Ctor Parameters [CppParam { name: "visibleLightsPtr", ty: "::UnityEngine::Rendering::VisibleLight*", modifiers: "", def_value: None }, CppParam { name: "visibleOffscreenVertexLightsPtr", ty:
  // "::UnityEngine::Rendering::VisibleLight*", modifiers: "", def_value: None }, CppParam { name: "visibleReflectionProbesPtr", ty: "::UnityEngine::Rendering::VisibleReflectionProbe*", modifiers: "",
  // def_value: None }, CppParam { name: "visibleLightCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleOffscreenVertexLightCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "visibleReflectionProbeCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CullingAllocationInfo(::UnityEngine::Rendering::VisibleLight* visibleLightsPtr, ::UnityEngine::Rendering::VisibleLight* visibleOffscreenVertexLightsPtr,
                                  ::UnityEngine::Rendering::VisibleReflectionProbe* visibleReflectionProbesPtr, int32_t visibleLightCount, int32_t visibleOffscreenVertexLightCount,
                                  int32_t visibleReflectionProbeCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10780 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field visibleLightsPtr, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::VisibleLight* visibleLightsPtr;

  /// @brief Field visibleOffscreenVertexLightsPtr, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::VisibleLight* visibleOffscreenVertexLightsPtr;

  /// @brief Field visibleReflectionProbesPtr, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::VisibleReflectionProbe* visibleReflectionProbesPtr;

  /// @brief Field visibleLightCount, offset: 0x18, size: 0x4, def value: None
  int32_t visibleLightCount;

  /// @brief Field visibleOffscreenVertexLightCount, offset: 0x1c, size: 0x4, def value: None
  int32_t visibleOffscreenVertexLightCount;

  /// @brief Field visibleReflectionProbeCount, offset: 0x20, size: 0x4, def value: None
  int32_t visibleReflectionProbeCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CullingAllocationInfo, visibleLightsPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingAllocationInfo, visibleOffscreenVertexLightsPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingAllocationInfo, visibleReflectionProbesPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingAllocationInfo, visibleLightCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingAllocationInfo, visibleOffscreenVertexLightCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CullingAllocationInfo, visibleReflectionProbeCount) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CullingAllocationInfo, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CullingAllocationInfo, "UnityEngine.Rendering", "CullingAllocationInfo");
