#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RenderGraphContext)
namespace UnityEngine::Rendering::RenderGraphModule {
class IDerivedRendergraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDefaultResources;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphContext
struct CORDL_TYPE RenderGraphContext {
public:
  // Declarations
  __declspec(property(get = get_cmd)) ::UnityEngine::Rendering::CommandBuffer* cmd;

  __declspec(property(get = get_defaultResources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources;

  __declspec(property(get = get_renderContext)) ::UnityEngine::Rendering::ScriptableRenderContext renderContext;

  __declspec(property(get = get_renderGraphPool)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* renderGraphPool;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*();

  /// @brief Method FromInternalContext, addr 0x6624b74, size 0x8, virtual true, abstract: false, final true
  inline void FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context);

  /// @brief Method get_cmd, addr 0x6624b30, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CommandBuffer* get_cmd();

  /// @brief Method get_defaultResources, addr 0x6624bac, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* get_defaultResources();

  /// @brief Method get_renderContext, addr 0x6624b7c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ScriptableRenderContext get_renderContext();

  /// @brief Method get_renderGraphPool, addr 0x6624b94, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* get_renderGraphPool();

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext* i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphContext();

  // Ctor Parameters [CppParam { name: "wrappedContext", ty: "::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*", modifiers: "", def_value: None }]
  constexpr RenderGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12386 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field wrappedContext, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext, wrappedContext) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphContext");
