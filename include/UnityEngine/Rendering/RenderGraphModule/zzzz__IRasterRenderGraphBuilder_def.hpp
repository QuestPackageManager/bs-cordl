#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/IRasterRenderGraphBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRasterRenderGraphBuilder)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct AccessFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ExtendedFeatureFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderAttachmentRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
struct ShadingRateCombinerStage;
}
namespace UnityEngine::Rendering {
struct ShadingRateCombiner;
}
namespace UnityEngine::Rendering {
struct ShadingRateFragmentSize;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class IRasterRenderGraphBuilder;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*, "UnityEngine.Rendering.RenderGraphModule", "IRasterRenderGraphBuilder");
// [MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.IRasterRenderGraphBuilder
class CORDL_TYPE IRasterRenderGraphBuilder {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*() noexcept;

  /// @brief Method SetExtendedFeatureFlags, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetExtendedFeatureFlags(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags);

  /// @brief Method SetInputAttachment, addr 0x6c02d80, size 0xd4, virtual true, abstract: false, final false
  inline void SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetInputAttachment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                 int32_t depthSlice);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* renderFunc);

  /// @brief Method SetShadingRateCombiner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage stage, ::UnityEngine::Rendering::ShadingRateCombiner combiner);

  /// @brief Method SetShadingRateFragmentSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize);

  /// @brief Method SetShadingRateImageAttachment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetShadingRateImageAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tex);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IRenderAttachmentRenderGraphBuilder() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IRasterRenderGraphBuilder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRasterRenderGraphBuilder(IRasterRenderGraphBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9316 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
