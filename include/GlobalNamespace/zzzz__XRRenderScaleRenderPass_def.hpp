#pragma once
// IWYU pragma private; include "GlobalNamespace/XRRenderScaleRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(XRRenderScaleRenderPass)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class XRRenderScaleRenderPass;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XRRenderScaleRenderPass*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRRenderScaleRenderPass*, "", "XRRenderScaleRenderPass");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: XRRenderScaleRenderPass
class CORDL_TYPE XRRenderScaleRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  static inline ::GlobalNamespace::XRRenderScaleRenderPass* New_ctor();

  /// @brief Method RecordRenderGraph, addr 0x5f4d624, size 0x88, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method .ctor, addr 0x5f4d560, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRRenderScaleRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRRenderScaleRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRRenderScaleRenderPass(XRRenderScaleRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRRenderScaleRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRRenderScaleRenderPass(XRRenderScaleRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20941 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::XRRenderScaleRenderPass) == 0xb8, "Size mismatch!");

} // namespace GlobalNamespace
