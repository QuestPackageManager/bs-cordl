#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphParameters)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphParameters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters);
// Dependencies UnityEngine.Rendering.ScriptableRenderContext
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphParameters
struct CORDL_TYPE RenderGraphParameters {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphParameters();

  // Ctor Parameters [CppParam { name: "executionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "rendererListCulling", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scriptableRenderContext", ty: "::UnityEngine::Rendering::ScriptableRenderContext",
  // modifiers: "", def_value: None }, CppParam { name: "commandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }, CppParam { name: "invalidContextForTesting",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderGraphParameters(::StringW executionName, int32_t currentFrameIndex, bool rendererListCulling, ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext,
                                  ::UnityEngine::Rendering::CommandBuffer* commandBuffer, bool invalidContextForTesting) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12386 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field executionName, offset: 0x0, size: 0x8, def value: None
  ::StringW executionName;

  /// @brief Field currentFrameIndex, offset: 0x8, size: 0x4, def value: None
  int32_t currentFrameIndex;

  /// @brief Field rendererListCulling, offset: 0xc, size: 0x1, def value: None
  bool rendererListCulling;

  /// @brief Field scriptableRenderContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext scriptableRenderContext;

  /// @brief Field commandBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* commandBuffer;

  /// @brief Field invalidContextForTesting, offset: 0x20, size: 0x1, def value: None
  bool invalidContextForTesting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters, executionName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters, currentFrameIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters, rendererListCulling) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters, scriptableRenderContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters, commandBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters, invalidContextForTesting) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphParameters, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphParameters");
