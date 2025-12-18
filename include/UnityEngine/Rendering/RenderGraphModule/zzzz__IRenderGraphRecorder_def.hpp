#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRenderGraphRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRenderGraphRecorder)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphRecorder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRenderGraphRecorder
class CORDL_TYPE IRenderGraphRecorder {
public:
  // Declarations
  /// @brief Method RecordRenderGraph, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderGraphRecorder(IRenderGraphRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12362 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*, "UnityEngine.Rendering.RenderGraphModule", "IRenderGraphRecorder");
