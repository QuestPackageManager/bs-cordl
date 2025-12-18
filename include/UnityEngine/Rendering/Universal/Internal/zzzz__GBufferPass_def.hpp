#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/GBufferPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GBufferPass)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderQueueRange;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::GBufferPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::GBufferPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RendererList
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.GBufferPass/PassData
class CORDL_TYPE GBufferPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field deferredLights, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_deferredLights, put = __cordl_internal_set_deferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights;

  /// @brief Field depth, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depth;

  /// @brief Field gbuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_gbuffer,
                      put = __cordl_internal_set_gbuffer)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      gbuffer;

  /// @brief Field objectsWithErrorRendererList, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get_objectsWithErrorRendererList,
                      put = __cordl_internal_set_objectsWithErrorRendererList)) ::UnityEngine::Rendering::RendererList objectsWithErrorRendererList;

  /// @brief Field objectsWithErrorRendererListHdl, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get_objectsWithErrorRendererListHdl,
                      put = __cordl_internal_set_objectsWithErrorRendererListHdl)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle objectsWithErrorRendererListHdl;

  /// @brief Field rendererList, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RendererList rendererList;

  /// @brief Field rendererListHdl, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererListHdl, put = __cordl_internal_set_rendererListHdl)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererListHdl;

  static inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_deferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_deferredLights();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depth();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const& __cordl_internal_get_gbuffer() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get_gbuffer();

  constexpr ::UnityEngine::Rendering::RendererList const& __cordl_internal_get_objectsWithErrorRendererList() const;

  constexpr ::UnityEngine::Rendering::RendererList& __cordl_internal_get_objectsWithErrorRendererList();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_objectsWithErrorRendererListHdl() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_objectsWithErrorRendererListHdl();

  constexpr ::UnityEngine::Rendering::RendererList const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RendererList& __cordl_internal_get_rendererList();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererListHdl() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererListHdl();

  constexpr void __cordl_internal_set_deferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_depth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_gbuffer(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set_objectsWithErrorRendererList(::UnityEngine::Rendering::RendererList value);

  constexpr void __cordl_internal_set_objectsWithErrorRendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RendererList value);

  constexpr void __cordl_internal_set_rendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x674dc90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GBufferPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GBufferPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GBufferPass_PassData(GBufferPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GBufferPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GBufferPass_PassData(GBufferPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13075 };

  /// @brief Field gbuffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ___gbuffer;

  /// @brief Field depth, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depth;

  /// @brief Field deferredLights, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___deferredLights;

  /// @brief Field rendererListHdl, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererListHdl;

  /// @brief Field objectsWithErrorRendererListHdl, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___objectsWithErrorRendererListHdl;

  /// @brief Field rendererList, offset: 0x48, size: 0x18, def value: None
  ::UnityEngine::Rendering::RendererList ___rendererList;

  /// @brief Field objectsWithErrorRendererList, offset: 0x60, size: 0x18, def value: None
  ::UnityEngine::Rendering::RendererList ___objectsWithErrorRendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData, ___gbuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData, ___depth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData, ___deferredLights) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData, ___rendererListHdl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData, ___objectsWithErrorRendererListHdl) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData, ___rendererList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData, ___objectsWithErrorRendererList) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.GBufferPass/<>c
class CORDL_TYPE GBufferPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c* __9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__21_0,
                      put = setStaticF___9__21_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__21_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c* New_ctor();

  /// @brief Method <Render>b__21_0, addr 0x674f510, size 0xa8, virtual false, abstract: false, final false
  inline void _Render_b__21_0(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x674f50c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__21_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::GBufferPass___c* value);

  static inline void setStaticF___9__21_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GBufferPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GBufferPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GBufferPass___c(GBufferPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GBufferPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GBufferPass___c(GBufferPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13076 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::GBufferPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.RenderStateBlock, UnityEngine.Rendering.ShaderTagId, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.GBufferPass
class CORDL_TYPE GBufferPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::GBufferPass___c;

  /// @brief Field m_DeferredLights, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_FilteringSettings, offset 0xc0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* m_PassData;

  /// @brief Field m_RenderStateBlock, offset 0xe0, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_RenderStateBlock, put = __cordl_internal_set_m_RenderStateBlock)) ::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;

  /// @brief Field s_CameraNormalsTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraNormalsTextureID, put = setStaticF_s_CameraNormalsTextureID)) int32_t s_CameraNormalsTextureID;

  /// @brief Field s_CameraRenderingLayersTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraRenderingLayersTextureID, put = setStaticF_s_CameraRenderingLayersTextureID)) int32_t s_CameraRenderingLayersTextureID;

  /// @brief Field s_RenderStateBlocks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RenderStateBlocks,
                      put = setStaticF_s_RenderStateBlocks)) ::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*>
      s_RenderStateBlocks;

  /// @brief Field s_ShaderTagComplexLit, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShaderTagComplexLit, put = setStaticF_s_ShaderTagComplexLit)) ::UnityEngine::Rendering::ShaderTagId s_ShaderTagComplexLit;

  /// @brief Field s_ShaderTagLit, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShaderTagLit, put = setStaticF_s_ShaderTagLit)) ::UnityEngine::Rendering::ShaderTagId s_ShaderTagLit;

  /// @brief Field s_ShaderTagSimpleLit, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShaderTagSimpleLit, put = setStaticF_s_ShaderTagSimpleLit)) ::UnityEngine::Rendering::ShaderTagId s_ShaderTagSimpleLit;

  /// @brief Field s_ShaderTagUniversalGBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShaderTagUniversalGBuffer, put = setStaticF_s_ShaderTagUniversalGBuffer)) ::UnityEngine::Rendering::ShaderTagId s_ShaderTagUniversalGBuffer;

  /// @brief Field s_ShaderTagUniversalMaterialType, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShaderTagUniversalMaterialType, put = setStaticF_s_ShaderTagUniversalMaterialType)) ::UnityEngine::Rendering::ShaderTagId s_ShaderTagUniversalMaterialType;

  /// @brief Field s_ShaderTagUnlit, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShaderTagUnlit, put = setStaticF_s_ShaderTagUnlit)) ::UnityEngine::Rendering::ShaderTagId s_ShaderTagUnlit;

  /// @brief Field s_ShaderTagValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ShaderTagValues, put = setStaticF_s_ShaderTagValues)) ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*>
      s_ShaderTagValues;

  /// @brief Method Configure, addr 0x674dca8, size 0x298, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Dispose, addr 0x674dc94, size 0x14, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x674df40, size 0x2d4, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x674e59c, size 0x140, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* data,
                                 ::UnityEngine::Rendering::RendererList rendererList, ::UnityEngine::Rendering::RendererList errorRendererList);

  /// @brief Method InitRendererLists, addr 0x674e214, size 0x388, virtual false, abstract: false, final false
  inline void InitRendererLists(::ByRef<::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*> passData, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, bool useRenderGraph);

  static inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                     ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                     ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference,
                                                                                     ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);

  /// @brief Method Render, addr 0x674e6dc, size 0xc00, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraColor, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepth, bool setGlobalTextures);

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_m_DeferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::RenderStateBlock const& __cordl_internal_get_m_RenderStateBlock() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock& __cordl_internal_get_m_RenderStateBlock();

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* value);

  constexpr void __cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value);

  /// @brief Method .ctor, addr 0x674d77c, size 0x514, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                    ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference, ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);

  static inline int32_t getStaticF_s_CameraNormalsTextureID();

  static inline int32_t getStaticF_s_CameraRenderingLayersTextureID();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*> getStaticF_s_RenderStateBlocks();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagComplexLit();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagLit();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagSimpleLit();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagUniversalGBuffer();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagUniversalMaterialType();

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_s_ShaderTagUnlit();

  static inline ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> getStaticF_s_ShaderTagValues();

  static inline void setStaticF_s_CameraNormalsTextureID(int32_t value);

  static inline void setStaticF_s_CameraRenderingLayersTextureID(int32_t value);

  static inline void setStaticF_s_RenderStateBlocks(::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*> value);

  static inline void setStaticF_s_ShaderTagComplexLit(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagLit(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagSimpleLit(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagUniversalGBuffer(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagUniversalMaterialType(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagUnlit(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_ShaderTagValues(::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GBufferPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GBufferPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GBufferPass(GBufferPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GBufferPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GBufferPass(GBufferPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13077 };

  /// @brief Field m_DeferredLights, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  /// @brief Field m_FilteringSettings, offset: 0xc0, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_RenderStateBlock, offset: 0xe0, size: 0x6c, def value: None
  ::UnityEngine::Rendering::RenderStateBlock ___m_RenderStateBlock;

  /// @brief Field m_PassData, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_DeferredLights) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_FilteringSettings) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_RenderStateBlock) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::GBufferPass, ___m_PassData) == 0x150, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::GBufferPass, 0x158>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::GBufferPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::GBufferPass*, "UnityEngine.Rendering.Universal.Internal", "GBufferPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::GBufferPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "GBufferPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::GBufferPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::GBufferPass___c*, "UnityEngine.Rendering.Universal.Internal", "GBufferPass/<>c");
