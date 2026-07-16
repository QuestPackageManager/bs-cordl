#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectCopyDepthPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
CORDL_MODULE_EXPORT(ScreenDisplacementEffectCopyDepthPass)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class ScreenDisplacementEffectCopyDepthPass;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass*, "", "ScreenDisplacementEffectCopyDepthPass");
// Dependencies UnityEngine.Rendering.Universal.Internal.CopyDepthPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectCopyDepthPass
class CORDL_TYPE ScreenDisplacementEffectCopyDepthPass : public ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass {
public:
  // Declarations
  static inline ::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass* New_ctor(::UnityEngine::Shader* copyDepthShader);

  /// @brief Method RecordRenderGraph, addr 0x5f48920, size 0x110, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method .ctor, addr 0x5f46e74, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* copyDepthShader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenDisplacementEffectCopyDepthPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectCopyDepthPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenDisplacementEffectCopyDepthPass(ScreenDisplacementEffectCopyDepthPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectCopyDepthPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenDisplacementEffectCopyDepthPass(ScreenDisplacementEffectCopyDepthPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20917 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ScreenDisplacementEffectCopyDepthPass) == 0xe8, "Size mismatch!");

} // namespace GlobalNamespace
