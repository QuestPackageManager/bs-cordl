#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IRenderPipelineResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRenderPipelineResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IRenderPipelineResources);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IRenderPipelineResources
class CORDL_TYPE IRenderPipelineResources {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderPipelineResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderPipelineResources(IRenderPipelineResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10743 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IRenderPipelineResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IRenderPipelineResources*, "UnityEngine.Rendering", "IRenderPipelineResources");
