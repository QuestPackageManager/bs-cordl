#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/UnsafeRenderGraphPass_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderGraphPass_2_def.hpp"
CORDL_MODULE_EXPORT(UnsafeRenderGraphPass_1)
namespace UnityEngine::Rendering::RenderGraphModule {
class InternalRenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData> class UnsafeRenderGraphPass_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::UnsafeRenderGraphPass_1);
// Dependencies UnityEngine.Rendering.RenderGraphModule.BaseRenderGraphPass`2<PassData, TRenderGraphContext>
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename PassData>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.UnsafeRenderGraphPass`1<PassData>
class CORDL_TYPE UnsafeRenderGraphPass_1 : public ::UnityEngine::Rendering::RenderGraphModule::BaseRenderGraphPass_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*> {
public:
  // Declarations
  /// @brief Field c, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_c, put = setStaticF_c)) ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* c;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::RenderGraphModule::InternalRenderGraphContext* renderGraphContext);

  static inline ::UnityEngine::Rendering::RenderGraphModule::UnsafeRenderGraphPass_1<PassData>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::Rendering::RenderGraphModule::RenderGraphObjectPool* pool);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* getStaticF_c();

  static inline void setStaticF_c(::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeRenderGraphPass_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeRenderGraphPass_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeRenderGraphPass_1(UnsafeRenderGraphPass_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeRenderGraphPass_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeRenderGraphPass_1(UnsafeRenderGraphPass_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12404 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderGraphModule::UnsafeRenderGraphPass_1, "UnityEngine.Rendering.RenderGraphModule", "UnsafeRenderGraphPass`1");
