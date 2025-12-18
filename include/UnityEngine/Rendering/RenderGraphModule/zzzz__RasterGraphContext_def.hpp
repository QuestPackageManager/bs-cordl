#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RasterGraphContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RasterGraphContext)
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
class RasterCommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.RasterGraphContext
struct CORDL_TYPE RasterGraphContext {
public:
  // Declarations
  __declspec(property(get = get_defaultResources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources;

  /// @brief Field rastercmd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_rastercmd, put = setStaticF_rastercmd)) ::UnityEngine::Rendering::RasterCommandBuffer* rastercmd;

  __declspec(property(get = get_renderGraphPool)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* renderGraphPool;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*();

  /// @brief Method FromInternalContext, addr 0x6624bf4, size 0xa4, virtual true, abstract: false, final true
  inline void FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context);

  static inline ::UnityEngine::Rendering::RasterCommandBuffer* getStaticF_rastercmd();

  /// @brief Method get_defaultResources, addr 0x6624bc4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* get_defaultResources();

  /// @brief Method get_renderGraphPool, addr 0x6624bdc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* get_renderGraphPool();

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext* i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext();

  static inline void setStaticF_rastercmd(::UnityEngine::Rendering::RasterCommandBuffer* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RasterGraphContext();

  // Ctor Parameters [CppParam { name: "wrappedContext", ty: "::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*", modifiers: "", def_value: None }, CppParam { name: "cmd", ty:
  // "::UnityEngine::Rendering::RasterCommandBuffer*", modifiers: "", def_value: None }]
  constexpr RasterGraphContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext, ::UnityEngine::Rendering::RasterCommandBuffer* cmd) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12387 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field wrappedContext, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext;

  /// @brief Field cmd, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RasterCommandBuffer* cmd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext, wrappedContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext, cmd) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext, "UnityEngine.Rendering.RenderGraphModule", "RasterGraphContext");
