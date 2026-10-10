#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphBuilders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphBuilders)
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
struct BufferDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct BufferHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class ComputeGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ExtendedFeatureFlags;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IBaseRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IComputeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRasterRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderAttachmentRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IUnsafeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class TextureResource;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
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
class RenderGraphBuilders;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphBuilders");
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.RenderGraphBuilders
class CORDL_TYPE RenderGraphBuilders : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Disposed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Disposed, put = __cordl_internal_set_m_Disposed)) bool m_Disposed;

  /// @brief Field m_RenderGraph, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraph, put = __cordl_internal_set_m_RenderGraph)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* m_RenderGraph;

  /// @brief Field m_RenderPass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderPass, put = __cordl_internal_set_m_RenderPass)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* m_RenderPass;

  /// @brief Field m_Resources, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resources, put = __cordl_internal_set_m_Resources)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*() noexcept;

  /// @brief Method AllowGlobalStateModification, addr 0x6c04060, size 0x24, virtual true, abstract: false, final true
  inline void AllowGlobalStateModification(bool value);

  /// @brief Method AllowPassCulling, addr 0x6c0402c, size 0x34, virtual true, abstract: false, final true
  inline void AllowPassCulling(bool value);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckFrameBufferFetchEmulationIsSupported, addr 0x6c075f0, size 0x18c, virtual false, abstract: false, final false
  inline void CheckFrameBufferFetchEmulationIsSupported(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckNotUseFragment, addr 0x6c04d30, size 0x4b0, virtual false, abstract: false, final false
  inline void CheckNotUseFragment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckResource, addr 0x6c06f68, size 0x688, virtual false, abstract: false, final false
  inline void CheckResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> res, bool checkTransientReadWrite);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckTextureUVOriginIsValid, addr 0x6c051e0, size 0x1d4, virtual false, abstract: false, final false
  inline void CheckTextureUVOriginIsValid(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle,
                                          ::UnityEngine::Rendering::RenderGraphModule::TextureResource* texRes);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckUseFragment, addr 0x6c057ac, size 0x1380, virtual false, abstract: false, final false
  inline void CheckUseFragment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex, bool isDepth);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CheckWriteTo, addr 0x6c04760, size 0x3b0, virtual false, abstract: false, final false
  inline void CheckWriteTo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> handle);

  /// @brief Method CreateTransientBuffer, addr 0x6c041c0, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateTransientBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> computebuffer);

  /// @brief Method CreateTransientBuffer, addr 0x6c040a0, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateTransientBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const> desc);

  /// @brief Method CreateTransientTexture, addr 0x6c041f8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc);

  /// @brief Method CreateTransientTexture, addr 0x6c04258, size 0x30, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> texture);

  /// @brief Method Dispose, addr 0x6c042a4, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6c042b8, size 0x44c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnableAsyncCompute, addr 0x6c04010, size 0x1c, virtual true, abstract: false, final true
  inline void EnableAsyncCompute(bool value);

  /// @brief Method EnableFoveatedRasterization, addr 0x6c04084, size 0x1c, virtual true, abstract: false, final true
  inline void EnableFoveatedRasterization(bool value);

  /// @brief Method GenerateDebugData, addr 0x6c04288, size 0x1c, virtual true, abstract: false, final true
  inline void GenerateDebugData(bool value);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* New_ctor();

  /// @brief Method SetExtendedFeatureFlags, addr 0x6c077e8, size 0x20, virtual true, abstract: false, final true
  inline void SetExtendedFeatureFlags(::UnityEngine::Rendering::RenderGraphModule::ExtendedFeatureFlags extendedFeatureFlags);

  /// @brief Method SetGlobalTextureAfterPass, addr 0x6c056ac, size 0x100, virtual false, abstract: false, final false
  inline void SetGlobalTextureAfterPass(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> input, int32_t propertyId);

  /// @brief Method SetInputAttachment, addr 0x6c06ba8, size 0x7c, virtual true, abstract: false, final true
  inline void SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                 int32_t depthSlice);

  /// @brief Method SetRandomAccessAttachment, addr 0x6c06c98, size 0x80, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle SetRandomAccessAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle input, int32_t index,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetRenderAttachment, addr 0x6c06b2c, size 0x7c, virtual true, abstract: false, final true
  inline void SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                  int32_t depthSlice);

  /// @brief Method SetRenderAttachmentDepth, addr 0x6c06c24, size 0x74, virtual true, abstract: false, final true
  inline void SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                       int32_t depthSlice);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* renderFunc);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* renderFunc);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename PassData>
    requires(::cordl_internals::reference_type_constraint<PassData> && ::cordl_internals::default_constructor_constraint<PassData>)
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* renderFunc);

  /// @brief Method SetShadingRateCombiner, addr 0x6c077d0, size 0x18, virtual true, abstract: false, final true
  inline void SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage stage, ::UnityEngine::Rendering::ShadingRateCombiner combiner);

  /// @brief Method SetShadingRateFragmentSize, addr 0x6c0777c, size 0x54, virtual true, abstract: false, final true
  inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize);

  /// @brief Method SetShadingRateImageAttachment, addr 0x6c06d18, size 0x7c, virtual false, abstract: false, final false
  inline void SetShadingRateImageAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex);

  /// @brief Method Setup, addr 0x6c03f7c, size 0x94, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* renderPass, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer, addr 0x6c0784c, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> computebuffer);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer, addr 0x6c07838, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferDesc const> desc);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture, addr 0x6c07830, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture, addr 0x6c07834, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> texture);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.SetGlobalTextureAfterPass, addr 0x6c07810, size 0x4, virtual true, abstract: false, final true
  inline void
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_SetGlobalTextureAfterPass(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> input,
                                                                                            int32_t propertyId);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseBuffer, addr 0x6c07814, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> input,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseRendererList, addr 0x6c07860, size 0xd98, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const> input);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseTexture, addr 0x6c0780c, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> input,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IRasterRenderGraphBuilder.SetShadingRateImageAttachment, addr 0x6c07808, size 0x4, virtual true, abstract: false, final true
  inline void
  UnityEngine_Rendering_RenderGraphModule_IRasterRenderGraphBuilder_SetShadingRateImageAttachment(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> tex);

  /// @brief Method UseAllGlobalTextures, addr 0x6c05690, size 0x1c, virtual true, abstract: false, final true
  inline void UseAllGlobalTextures(bool enable);

  /// @brief Method UseBuffer, addr 0x6c04d14, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBuffer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::BufferHandle const> input,
                                                                             ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseBufferRandomAccess, addr 0x6c06d94, size 0x80, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle input, int32_t index,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseBufferRandomAccess, addr 0x6c06e14, size 0x8c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle input, int32_t index, bool preserveCounterValue,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseGlobalTexture, addr 0x6c053b4, size 0x2dc, virtual true, abstract: false, final true
  inline void UseGlobalTexture(int32_t propertyId, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseRendererList, addr 0x6c06ea0, size 0xc8, virtual false, abstract: false, final false
  inline void UseRendererList(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const> input);

  /// @brief Method UseResource, addr 0x6c04b10, size 0x204, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle UseResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> inputHandle,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseTexture, addr 0x6c04704, size 0x5c, virtual false, abstract: false, final false
  inline void UseTexture(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> input, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseTransientResource, addr 0x6c04104, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle UseTransientResource(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle const> inputHandle);

  constexpr bool const& __cordl_internal_get_m_Disposed() const;

  constexpr bool& __cordl_internal_get_m_Disposed();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* const& __cordl_internal_get_m_RenderGraph() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*& __cordl_internal_get_m_RenderGraph();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* const& __cordl_internal_get_m_RenderPass() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*& __cordl_internal_get_m_RenderPass();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* const& __cordl_internal_get_m_Resources() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry*& __cordl_internal_get_m_Resources();

  constexpr void __cordl_internal_set_m_Disposed(bool value);

  constexpr void __cordl_internal_set_m_RenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* value);

  constexpr void __cordl_internal_set_m_RenderPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* value);

  constexpr void __cordl_internal_set_m_Resources(::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

  /// @brief Method .ctor, addr 0x6bf3fe8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IComputeRenderGraphBuilder() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IRasterRenderGraphBuilder() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderAttachmentRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IRenderAttachmentRenderGraphBuilder() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IUnsafeRenderGraphBuilder() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphBuilders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphBuilders", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphBuilders(RenderGraphBuilders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphBuilders", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphBuilders(RenderGraphBuilders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9334 };

  /// @brief Field m_RenderPass, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* ___m_RenderPass;

  /// @brief Field m_Resources, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* ___m_Resources;

  /// @brief Field m_RenderGraph, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* ___m_RenderGraph;

  /// @brief Field m_Disposed, offset: 0x28, size: 0x1, def value: None
  bool ___m_Disposed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders, ___m_RenderPass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders, ___m_Resources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders, ___m_RenderGraph) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders, ___m_Disposed) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
