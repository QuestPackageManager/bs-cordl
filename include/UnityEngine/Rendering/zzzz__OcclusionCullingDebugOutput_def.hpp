#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingDebugOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugShaderVariables_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OcclusionCullingDebugOutput)
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OcclusionCullingDebugOutput;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingDebugOutput);
// Dependencies UnityEngine.Rendering.OcclusionCullingDebugShaderVariables
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingDebugOutput
struct CORDL_TYPE OcclusionCullingDebugOutput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingDebugOutput();

  // Ctor Parameters [CppParam { name: "occluderDepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "occlusionDebugOverlay", ty:
  // "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "cb", ty: "::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables", modifiers: "", def_value: None }]
  constexpr OcclusionCullingDebugOutput(::UnityEngine::Rendering::RTHandle* occluderDepthPyramid, ::UnityEngine::GraphicsBuffer* occlusionDebugOverlay,
                                        ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables cb) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  /// @brief Field occluderDepthPyramid, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* occluderDepthPyramid;

  /// @brief Field occlusionDebugOverlay, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* occlusionDebugOverlay;

  /// @brief Field cb, offset: 0x10, size: 0xa0, def value: None
  ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables cb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugOutput, occluderDepthPyramid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugOutput, occlusionDebugOverlay) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingDebugOutput, cb) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingDebugOutput, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingDebugOutput, "UnityEngine.Rendering", "OcclusionCullingDebugOutput");
