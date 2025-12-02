#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRenderGraphEnabledRenderPipeline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRenderGraphEnabledRenderPipeline)
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphEnabledRenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphEnabledRenderPipeline);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRenderGraphEnabledRenderPipeline
class CORDL_TYPE IRenderGraphEnabledRenderPipeline {
public:
  // Declarations
  __declspec(property(get = get_isImmediateModeSupported)) bool isImmediateModeSupported;

  /// @brief Method get_isImmediateModeSupported, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isImmediateModeSupported();

  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphEnabledRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderGraphEnabledRenderPipeline(IRenderGraphEnabledRenderPipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphEnabledRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::IRenderGraphEnabledRenderPipeline*, "UnityEngine.Rendering.RenderGraphModule", "IRenderGraphEnabledRenderPipeline");
