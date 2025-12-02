#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/InternalRenderGraphContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
CORDL_MODULE_EXPORT(InternalRenderGraphContext)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphDefaultResources;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext);
// Dependencies System.Object, UnityEngine.Rendering.ScriptableRenderContext
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.InternalRenderGraphContext
class CORDL_TYPE InternalRenderGraphContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field cmd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cmd, put = __cordl_internal_set_cmd)) ::UnityEngine::Rendering::CommandBuffer* cmd;

  /// @brief Field contextlessTesting, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_contextlessTesting, put = __cordl_internal_set_contextlessTesting)) bool contextlessTesting;

  /// @brief Field defaultResources, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultResources,
                      put = __cordl_internal_set_defaultResources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources;

  /// @brief Field executingPass, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_executingPass, put = __cordl_internal_set_executingPass)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass;

  /// @brief Field renderContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_renderContext, put = __cordl_internal_set_renderContext)) ::UnityEngine::Rendering::ScriptableRenderContext renderContext;

  /// @brief Field renderGraphPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_renderGraphPool, put = __cordl_internal_set_renderGraphPool)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* renderGraphPool;

  static inline ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* New_ctor();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_cmd() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_cmd();

  constexpr bool const& __cordl_internal_get_contextlessTesting() const;

  constexpr bool& __cordl_internal_get_contextlessTesting();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* const& __cordl_internal_get_defaultResources() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources*& __cordl_internal_get_defaultResources();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* const& __cordl_internal_get_executingPass() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*& __cordl_internal_get_executingPass();

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& __cordl_internal_get_renderContext() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext& __cordl_internal_get_renderContext();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* const& __cordl_internal_get_renderGraphPool() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool*& __cordl_internal_get_renderGraphPool();

  constexpr void __cordl_internal_set_cmd(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_contextlessTesting(bool value);

  constexpr void __cordl_internal_set_defaultResources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* value);

  constexpr void __cordl_internal_set_executingPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* value);

  constexpr void __cordl_internal_set_renderContext(::UnityEngine::Rendering::ScriptableRenderContext value);

  constexpr void __cordl_internal_set_renderGraphPool(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* value);

  /// @brief Method .ctor, addr 0x65bcfe4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalRenderGraphContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalRenderGraphContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalRenderGraphContext(InternalRenderGraphContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalRenderGraphContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalRenderGraphContext(InternalRenderGraphContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12380 };

  /// @brief Field renderContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext ___renderContext;

  /// @brief Field cmd, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___cmd;

  /// @brief Field renderGraphPool, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* ___renderGraphPool;

  /// @brief Field defaultResources, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* ___defaultResources;

  /// @brief Field executingPass, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* ___executingPass;

  /// @brief Field contextlessTesting, offset: 0x38, size: 0x1, def value: None
  bool ___contextlessTesting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext, ___renderContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext, ___cmd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext, ___renderGraphPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext, ___defaultResources) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext, ___executingPass) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext, ___contextlessTesting) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*, "UnityEngine.Rendering.RenderGraphModule", "InternalRenderGraphContext");
