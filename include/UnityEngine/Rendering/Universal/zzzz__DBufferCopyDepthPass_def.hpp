#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DBufferCopyDepthPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
CORDL_MODULE_EXPORT(DBufferCopyDepthPass)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DBufferCopyDepthPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DBufferCopyDepthPass);
// Dependencies UnityEngine.Rendering.Universal.Internal.CopyDepthPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DBufferCopyDepthPass
class CORDL_TYPE DBufferCopyDepthPass : public ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader, bool shouldClear,
                                                                                    bool copyToDepth, bool copyResolvedDepth);

  /// @brief Method RecordRenderGraph, addr 0x669b038, size 0x244, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method .ctor, addr 0x669b02c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader, bool shouldClear, bool copyToDepth, bool copyResolvedDepth);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DBufferCopyDepthPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DBufferCopyDepthPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DBufferCopyDepthPass(DBufferCopyDepthPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DBufferCopyDepthPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DBufferCopyDepthPass(DBufferCopyDepthPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DBufferCopyDepthPass, 0xe8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DBufferCopyDepthPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*, "UnityEngine.Rendering.Universal", "DBufferCopyDepthPass");
