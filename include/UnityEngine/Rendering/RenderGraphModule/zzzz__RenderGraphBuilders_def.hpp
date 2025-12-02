#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphBuilders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
class IBaseRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IComputeRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRasterRenderGraphBuilder;
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
class UnsafeGraphContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphBuilders;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders);
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

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*() noexcept;

  /// @brief Method AllowGlobalStateModification, addr 0x65bea68, size 0x24, virtual true, abstract: false, final true
  inline void AllowGlobalStateModification(bool value);

  /// @brief Method AllowPassCulling, addr 0x65bea34, size 0x34, virtual true, abstract: false, final true
  inline void AllowPassCulling(bool value);

  /// @brief Method CheckNotUseFragment, addr 0x65bf970, size 0x42c, virtual false, abstract: false, final false
  inline void CheckNotUseFragment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex);

  /// @brief Method CheckResource, addr 0x65c0f88, size 0x334, virtual false, abstract: false, final false
  inline void CheckResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> res, bool checkTransientReadWrite);

  /// @brief Method CheckUseFragment, addr 0x65c007c, size 0x714, virtual false, abstract: false, final false
  inline void CheckUseFragment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, bool isDepth);

  /// @brief Method CreateTransientBuffer, addr 0x65bed64, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateTransientBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> computebuffer);

  /// @brief Method CreateTransientBuffer, addr 0x65beaa8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle CreateTransientBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc);

  /// @brief Method CreateTransientTexture, addr 0x65bedac, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method CreateTransientTexture, addr 0x65bee10, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateTransientTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method Dispose, addr 0x65bee60, size 0x14, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x65bee74, size 0x348, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnableAsyncCompute, addr 0x65bea18, size 0x1c, virtual true, abstract: false, final true
  inline void EnableAsyncCompute(bool value);

  /// @brief Method EnableFoveatedRasterization, addr 0x65bea8c, size 0x1c, virtual true, abstract: false, final true
  inline void EnableFoveatedRasterization(bool value);

  /// @brief Method GetLatestVersionHandle, addr 0x65bf660, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle GetLatestVersionHandle(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle);

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders* New_ctor();

  /// @brief Method SetGlobalTextureAfterPass, addr 0x65bff7c, size 0x100, virtual false, abstract: false, final false
  inline void SetGlobalTextureAfterPass(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, int32_t propertyId);

  /// @brief Method SetInputAttachment, addr 0x65c0c30, size 0x80, virtual true, abstract: false, final true
  inline void SetInputAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                 int32_t depthSlice);

  /// @brief Method SetRandomAccessAttachment, addr 0x65c0d28, size 0x84, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle SetRandomAccessAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle input, int32_t index,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method SetRenderAttachment, addr 0x65c0bb0, size 0x80, virtual true, abstract: false, final true
  inline void SetRenderAttachment(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, int32_t index, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                  int32_t depthSlice);

  /// @brief Method SetRenderAttachmentDepth, addr 0x65c0cb0, size 0x78, virtual true, abstract: false, final true
  inline void SetRenderAttachmentDepth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle tex, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, int32_t mipLevel,
                                       int32_t depthSlice);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename PassData>
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* renderFunc);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename PassData>
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* renderFunc);

  /// @brief Method SetRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename PassData>
  inline void SetRenderFunc(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* renderFunc);

  /// @brief Method Setup, addr 0x65be984, size 0x94, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* renderPass, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourceRegistry* resources,
                    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer, addr 0x65c1304, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> computebuffer);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientBuffer, addr 0x65c12f0, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferDesc> desc);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture, addr 0x65c12e8, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.CreateTransientTexture, addr 0x65c12ec, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_CreateTransientTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.SetGlobalTextureAfterPass, addr 0x65c12c4, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_SetGlobalTextureAfterPass(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, int32_t propertyId);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseBuffer, addr 0x65c12c8, size 0x20, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle
  UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input,
                                                                            ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseRendererList, addr 0x65c1318, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseRendererList(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input);

  /// @brief Method UnityEngine.Rendering.RenderGraphModule.IBaseRenderGraphBuilder.UseTexture, addr 0x65c12bc, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_RenderGraphModule_IBaseRenderGraphBuilder_UseTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseAllGlobalTextures, addr 0x65bff60, size 0x1c, virtual true, abstract: false, final true
  inline void UseAllGlobalTextures(bool enable);

  /// @brief Method UseBuffer, addr 0x65bf950, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBuffer(::ByRef<::UnityEngine::Rendering::RenderGraphModule::BufferHandle> input,
                                                                             ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseBufferRandomAccess, addr 0x65c0dac, size 0x84, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle input, int32_t index,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseBufferRandomAccess, addr 0x65c0e30, size 0x90, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::RenderGraphModule::BufferHandle UseBufferRandomAccess(::UnityEngine::Rendering::RenderGraphModule::BufferHandle input, int32_t index, bool preserveCounterValue,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseGlobalTexture, addr 0x65bfd9c, size 0x1c4, virtual true, abstract: false, final true
  inline void UseGlobalTexture(int32_t propertyId, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method UseRendererList, addr 0x65c0ec0, size 0xc8, virtual false, abstract: false, final false
  inline void UseRendererList(::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> input);

  /// @brief Method UseResource, addr 0x65beb10, size 0x254, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle UseResource(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags, bool isTransient);

  /// @brief Method UseTexture, addr 0x65bf1bc, size 0x8, virtual false, abstract: false, final false
  inline void UseTexture(::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> input, ::UnityEngine::Rendering::RenderGraphModule::AccessFlags flags);

  /// @brief Method ValidateWriteTo, addr 0x65bf1c4, size 0x238, virtual false, abstract: false, final false
  inline void ValidateWriteTo(::ByRef<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> handle);

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

  /// @brief Method .ctor, addr 0x65be970, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IBaseRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IBaseRenderGraphBuilder() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IComputeRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IComputeRenderGraphBuilder() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IRasterRenderGraphBuilder() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* i___UnityEngine__Rendering__RenderGraphModule__IUnsafeRenderGraphBuilder() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphBuilders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphBuilders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphBuilders(RenderGraphBuilders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphBuilders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphBuilders(RenderGraphBuilders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12390 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::RenderGraphBuilders*, "UnityEngine.Rendering.RenderGraphModule", "RenderGraphBuilders");
