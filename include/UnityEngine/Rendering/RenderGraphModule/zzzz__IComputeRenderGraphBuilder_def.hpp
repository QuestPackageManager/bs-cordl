#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IComputeRenderGraphBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IComputeRenderGraphBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class ComputeGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IComputeRenderGraphBuilder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IComputeRenderGraphBuilder
class CORDL_TYPE IComputeRenderGraphBuilder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept;

  /// @brief Method SetRenderFunc, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename PassData>
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* renderFunc);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IComputeRenderGraphBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IComputeRenderGraphBuilder(IComputeRenderGraphBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12358 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*, "UnityEngine.Rendering.RenderGraphModule", "IComputeRenderGraphBuilder");
