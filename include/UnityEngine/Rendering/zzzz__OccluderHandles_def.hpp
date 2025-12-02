#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderHandles.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OccluderHandles)
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OccluderHandles;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OccluderHandles);
// Dependencies UnityEngine.Rendering.RenderGraphModule.BufferHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderHandles
struct CORDL_TYPE OccluderHandles {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x660f8f4, size 0x120, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method UseForOccluderUpdate, addr 0x660fb74, size 0x160, virtual false, abstract: false, final false
  inline void UseForOccluderUpdate(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder);

  /// @brief Method UseForOcclusionTest, addr 0x660fa14, size 0x160, virtual false, abstract: false, final false
  inline void UseForOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* builder);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderHandles();

  // Ctor Parameters [CppParam { name: "occluderDepthPyramid", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None }, CppParam { name:
  // "occlusionDebugOverlay", ty: "::UnityEngine::Rendering::RenderGraphModule::BufferHandle", modifiers: "", def_value: None }]
  constexpr OccluderHandles(::UnityEngine::Rendering::RenderGraphModule::TextureHandle occluderDepthPyramid, ::UnityEngine::Rendering::RenderGraphModule::BufferHandle occlusionDebugOverlay) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field occluderDepthPyramid, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle occluderDepthPyramid;

  /// @brief Field occlusionDebugOverlay, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle occlusionDebugOverlay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderHandles, occluderDepthPyramid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderHandles, occlusionDebugOverlay) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderHandles, 0x1c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderHandles, "UnityEngine.Rendering", "OccluderHandles");
