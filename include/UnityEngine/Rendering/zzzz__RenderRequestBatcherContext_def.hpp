#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderRequestBatcherContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RenderRequestBatcherContext)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderRequestBatcherContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderRequestBatcherContext);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderRequestBatcherContext
struct CORDL_TYPE RenderRequestBatcherContext {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderRequestBatcherContext();

  // Ctor Parameters [CppParam { name: "commandBuffer", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }]
  constexpr RenderRequestBatcherContext(::UnityEngine::Rendering::CommandBuffer* commandBuffer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17598 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field commandBuffer, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* commandBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderRequestBatcherContext, commandBuffer) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderRequestBatcherContext, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderRequestBatcherContext, "UnityEngine.Rendering", "RenderRequestBatcherContext");
