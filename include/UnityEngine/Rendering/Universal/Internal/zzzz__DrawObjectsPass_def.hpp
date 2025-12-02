#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DrawObjectsPass.hpp"
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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DrawObjectsPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
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
class DrawObjectsPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsPass___c;
}
namespace UnityEngine::Rendering::Universal {
class DebugRendererLists;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct URPProfileId;
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
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderQueueRange;
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
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RendererList
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DrawObjectsPass/PassData
class CORDL_TYPE DrawObjectsPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field albedoHdl, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_albedoHdl, put = __cordl_internal_set_albedoHdl)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle albedoHdl;

  /// @brief Field batchLayerMask, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_batchLayerMask, put = __cordl_internal_set_batchLayerMask)) uint32_t batchLayerMask;

  /// @brief Field cameraData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field debugRendererLists, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_debugRendererLists, put = __cordl_internal_set_debugRendererLists)) ::UnityEngine::Rendering::Universal::DebugRendererLists* debugRendererLists;

  /// @brief Field depthHdl, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_depthHdl, put = __cordl_internal_set_depthHdl)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthHdl;

  /// @brief Field isActiveTargetBackBuffer, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveTargetBackBuffer, put = __cordl_internal_set_isActiveTargetBackBuffer)) bool isActiveTargetBackBuffer;

  /// @brief Field isOpaque, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isOpaque, put = __cordl_internal_set_isOpaque)) bool isOpaque;

  /// @brief Field objectsWithErrorRendererList, offset 0x80, size 0x18
  __declspec(property(get = __cordl_internal_get_objectsWithErrorRendererList,
                      put = __cordl_internal_set_objectsWithErrorRendererList)) ::UnityEngine::Rendering::RendererList objectsWithErrorRendererList;

  /// @brief Field objectsWithErrorRendererListHdl, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_objectsWithErrorRendererListHdl,
                      put = __cordl_internal_set_objectsWithErrorRendererListHdl)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle objectsWithErrorRendererListHdl;

  /// @brief Field rendererList, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RendererList rendererList;

  /// @brief Field rendererListHdl, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererListHdl, put = __cordl_internal_set_rendererListHdl)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererListHdl;

  /// @brief Field shouldTransparentsReceiveShadows, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldTransparentsReceiveShadows, put = __cordl_internal_set_shouldTransparentsReceiveShadows)) bool shouldTransparentsReceiveShadows;

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_albedoHdl() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_albedoHdl();

  constexpr uint32_t const& __cordl_internal_get_batchLayerMask() const;

  constexpr uint32_t& __cordl_internal_get_batchLayerMask();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists* const& __cordl_internal_get_debugRendererLists() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists*& __cordl_internal_get_debugRendererLists();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthHdl() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthHdl();

  constexpr bool const& __cordl_internal_get_isActiveTargetBackBuffer() const;

  constexpr bool& __cordl_internal_get_isActiveTargetBackBuffer();

  constexpr bool const& __cordl_internal_get_isOpaque() const;

  constexpr bool& __cordl_internal_get_isOpaque();

  constexpr ::UnityEngine::Rendering::RendererList const& __cordl_internal_get_objectsWithErrorRendererList() const;

  constexpr ::UnityEngine::Rendering::RendererList& __cordl_internal_get_objectsWithErrorRendererList();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_objectsWithErrorRendererListHdl() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_objectsWithErrorRendererListHdl();

  constexpr ::UnityEngine::Rendering::RendererList const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RendererList& __cordl_internal_get_rendererList();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererListHdl() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererListHdl();

  constexpr bool const& __cordl_internal_get_shouldTransparentsReceiveShadows() const;

  constexpr bool& __cordl_internal_get_shouldTransparentsReceiveShadows();

  constexpr void __cordl_internal_set_albedoHdl(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_batchLayerMask(uint32_t value);

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_debugRendererLists(::UnityEngine::Rendering::Universal::DebugRendererLists* value);

  constexpr void __cordl_internal_set_depthHdl(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_isActiveTargetBackBuffer(bool value);

  constexpr void __cordl_internal_set_isOpaque(bool value);

  constexpr void __cordl_internal_set_objectsWithErrorRendererList(::UnityEngine::Rendering::RendererList value);

  constexpr void __cordl_internal_set_objectsWithErrorRendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RendererList value);

  constexpr void __cordl_internal_set_rendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_shouldTransparentsReceiveShadows(bool value);

  /// @brief Method .ctor, addr 0x66e1008, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawObjectsPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawObjectsPass_PassData(DrawObjectsPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawObjectsPass_PassData(DrawObjectsPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13059 };

  /// @brief Field albedoHdl, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___albedoHdl;

  /// @brief Field depthHdl, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthHdl;

  /// @brief Field cameraData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field isOpaque, offset: 0x38, size: 0x1, def value: None
  bool ___isOpaque;

  /// @brief Field shouldTransparentsReceiveShadows, offset: 0x39, size: 0x1, def value: None
  bool ___shouldTransparentsReceiveShadows;

  /// @brief Field batchLayerMask, offset: 0x3c, size: 0x4, def value: None
  uint32_t ___batchLayerMask;

  /// @brief Field isActiveTargetBackBuffer, offset: 0x40, size: 0x1, def value: None
  bool ___isActiveTargetBackBuffer;

  /// @brief Field rendererListHdl, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererListHdl;

  /// @brief Field objectsWithErrorRendererListHdl, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___objectsWithErrorRendererListHdl;

  /// @brief Field debugRendererLists, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugRendererLists* ___debugRendererLists;

  /// @brief Field rendererList, offset: 0x68, size: 0x18, def value: None
  ::UnityEngine::Rendering::RendererList ___rendererList;

  /// @brief Field objectsWithErrorRendererList, offset: 0x80, size: 0x18, def value: None
  ::UnityEngine::Rendering::RendererList ___objectsWithErrorRendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___albedoHdl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___depthHdl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___cameraData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___isOpaque) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___shouldTransparentsReceiveShadows) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___batchLayerMask) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___isActiveTargetBackBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___rendererListHdl) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___objectsWithErrorRendererListHdl) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___debugRendererLists) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___rendererList) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, ___objectsWithErrorRendererList) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DrawObjectsPass/<>c
class CORDL_TYPE DrawObjectsPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0,
                      put = setStaticF___9__17_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__17_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c* New_ctor();

  /// @brief Method <Render>b__17_0, addr 0x66e27bc, size 0x13c, virtual false, abstract: false, final false
  inline void _Render_b__17_0(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66e27b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__17_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c* value);

  static inline void setStaticF___9__17_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawObjectsPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawObjectsPass___c(DrawObjectsPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawObjectsPass___c(DrawObjectsPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13060 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.RenderStateBlock, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DrawObjectsPass
class CORDL_TYPE DrawObjectsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c;

  /// @brief Field m_FilteringSettings, offset 0xb8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_IsActiveTargetBackBuffer, offset 0x151, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsActiveTargetBackBuffer, put = __cordl_internal_set_m_IsActiveTargetBackBuffer)) bool m_IsActiveTargetBackBuffer;

  /// @brief Field m_IsOpaque, offset 0x150, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOpaque, put = __cordl_internal_set_m_IsOpaque)) bool m_IsOpaque;

  /// @brief Field m_PassData, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* m_PassData;

  /// @brief Field m_RenderStateBlock, offset 0xd8, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_RenderStateBlock, put = __cordl_internal_set_m_RenderStateBlock)) ::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;

  /// @brief Field m_ShaderTagIdList, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Field m_ShouldTransparentsReceiveShadows, offset 0x152, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldTransparentsReceiveShadows, put = __cordl_internal_set_m_ShouldTransparentsReceiveShadows)) bool m_ShouldTransparentsReceiveShadows;

  /// @brief Field s_DrawObjectPassDataPropID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_DrawObjectPassDataPropID, put = setStaticF_s_DrawObjectPassDataPropID)) int32_t s_DrawObjectPassDataPropID;

  /// @brief Method Execute, addr 0x66e100c, size 0x238, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66e15e0, size 0x274, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* data,
                                 ::UnityEngine::Rendering::RendererList rendererList, ::UnityEngine::Rendering::RendererList objectsWithErrorRendererList, bool yFlip);

  /// @brief Method Init, addr 0x66e0bb4, size 0x2dc, virtual false, abstract: false, final false
  inline void Init(bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                   ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference,
                   ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> shaderTagIds);

  /// @brief Method InitPassData, addr 0x66e1244, size 0x40, virtual false, abstract: false, final false
  inline void InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*> passData,
                           uint32_t batchLayerMask, bool isActiveTargetBackBuffer);

  /// @brief Method InitRendererLists, addr 0x66e1284, size 0x35c, virtual false, abstract: false, final false
  inline void InitRendererLists(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::ByRef<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*> passData,
                                ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph);

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* New_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, bool opaque,
                                                                                         ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                         ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                         ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* New_ctor(::StringW profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                         ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                         ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* New_ctor(::StringW profilerTag,
                                                                                         ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> shaderTagIds,
                                                                                         bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                         ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                         ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  /// @brief Method Render, addr 0x66e1854, size 0xea0, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle mainShadowsTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle additionalShadowsTexture,
                     uint32_t batchLayerMask);

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr bool const& __cordl_internal_get_m_IsActiveTargetBackBuffer() const;

  constexpr bool& __cordl_internal_get_m_IsActiveTargetBackBuffer();

  constexpr bool const& __cordl_internal_get_m_IsOpaque() const;

  constexpr bool& __cordl_internal_get_m_IsOpaque();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::RenderStateBlock const& __cordl_internal_get_m_RenderStateBlock() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock& __cordl_internal_get_m_RenderStateBlock();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr bool const& __cordl_internal_get_m_ShouldTransparentsReceiveShadows() const;

  constexpr bool& __cordl_internal_get_m_ShouldTransparentsReceiveShadows();

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_IsActiveTargetBackBuffer(bool value);

  constexpr void __cordl_internal_set_m_IsOpaque(bool value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* value);

  constexpr void __cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  constexpr void __cordl_internal_set_m_ShouldTransparentsReceiveShadows(bool value);

  /// @brief Method .ctor, addr 0x66e0ed4, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                    ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  /// @brief Method .ctor, addr 0x66e0e90, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                    ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  /// @brief Method .ctor, addr 0x66e0a60, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::StringW profilerTag, ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> shaderTagIds, bool opaque,
                    ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                    ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  static inline int32_t getStaticF_s_DrawObjectPassDataPropID();

  static inline void setStaticF_s_DrawObjectPassDataPropID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawObjectsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawObjectsPass(DrawObjectsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawObjectsPass(DrawObjectsPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13061 };

  /// @brief Field m_FilteringSettings, offset: 0xb8, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_RenderStateBlock, offset: 0xd8, size: 0x6c, def value: None
  ::UnityEngine::Rendering::RenderStateBlock ___m_RenderStateBlock;

  /// @brief Field m_ShaderTagIdList, offset: 0x148, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_IsOpaque, offset: 0x150, size: 0x1, def value: None
  bool ___m_IsOpaque;

  /// @brief Field m_IsActiveTargetBackBuffer, offset: 0x151, size: 0x1, def value: None
  bool ___m_IsActiveTargetBackBuffer;

  /// @brief Field m_ShouldTransparentsReceiveShadows, offset: 0x152, size: 0x1, def value: None
  bool ___m_ShouldTransparentsReceiveShadows;

  /// @brief Field m_PassData, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_FilteringSettings) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_RenderStateBlock) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_ShaderTagIdList) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_IsOpaque) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_IsActiveTargetBackBuffer) == 0x151, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_ShouldTransparentsReceiveShadows) == 0x152, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_PassData) == 0x158, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, 0x160>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*, "UnityEngine.Rendering.Universal.Internal", "DrawObjectsPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "DrawObjectsPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass___c*, "UnityEngine.Rendering.Universal.Internal", "DrawObjectsPass/<>c");
