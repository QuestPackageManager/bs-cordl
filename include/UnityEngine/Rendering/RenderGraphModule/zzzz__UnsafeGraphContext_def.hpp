#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/UnsafeGraphContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnsafeGraphContext)
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
class UnsafeCommandBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext);
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.UnsafeGraphContext
class CORDL_TYPE UnsafeGraphContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field cmd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cmd, put = __cordl_internal_set_cmd)) ::UnityEngine::Rendering::UnsafeCommandBuffer* cmd;

  __declspec(property(get = get_defaultResources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources;

  __declspec(property(get = get_renderGraphPool)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* renderGraphPool;

  /// @brief Field unsCmd, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_unsCmd, put = setStaticF_unsCmd)) ::UnityEngine::Rendering::UnsafeCommandBuffer* unsCmd;

  /// @brief Field wrappedContext, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_wrappedContext, put = __cordl_internal_set_wrappedContext)) ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* wrappedContext;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext*() noexcept;

  /// @brief Method FromInternalContext, addr 0x65bd2f4, size 0xa4, virtual true, abstract: false, final true
  inline void FromInternalContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* context);

  static inline ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* New_ctor();

  constexpr ::UnityEngine::Rendering::UnsafeCommandBuffer* const& __cordl_internal_get_cmd() const;

  constexpr ::UnityEngine::Rendering::UnsafeCommandBuffer*& __cordl_internal_get_cmd();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* const& __cordl_internal_get_wrappedContext() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext*& __cordl_internal_get_wrappedContext();

  constexpr void __cordl_internal_set_cmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value);

  constexpr void __cordl_internal_set_wrappedContext(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* value);

  /// @brief Method .ctor, addr 0x65bd398, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::UnsafeCommandBuffer* getStaticF_unsCmd();

  /// @brief Method get_defaultResources, addr 0x65bd2c4, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphDefaultResources* get_defaultResources();

  /// @brief Method get_renderGraphPool, addr 0x65bd2dc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* get_renderGraphPool();

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IDerivedRendergraphContext* i___UnityEngine__Rendering__RenderGraphModule__IDerivedRendergraphContext() noexcept;

  static inline void setStaticF_unsCmd(::UnityEngine::Rendering::UnsafeCommandBuffer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeGraphContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeGraphContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeGraphContext(UnsafeGraphContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeGraphContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeGraphContext(UnsafeGraphContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12385 };

  /// @brief Field wrappedContext, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* ___wrappedContext;

  /// @brief Field cmd, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnsafeCommandBuffer* ___cmd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext, ___wrappedContext) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext, ___cmd) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*, "UnityEngine.Rendering.RenderGraphModule", "UnsafeGraphContext");
