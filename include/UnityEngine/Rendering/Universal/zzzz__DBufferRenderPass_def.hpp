#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DBufferRenderPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DBufferRenderPass)
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
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class DBufferRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DBufferRenderPass___c;
}
namespace UnityEngine::Rendering::Universal {
class DBufferSettings;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawDBufferSystem;
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
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RendererListParams;
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
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DBufferRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class DBufferRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DBufferRenderPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DBufferRenderPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DBufferRenderPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DBufferRenderPass/PassData
class CORDL_TYPE DBufferRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field dBufferClear, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dBufferClear, put = __cordl_internal_set_dBufferClear)) ::UnityW<::UnityEngine::Material> dBufferClear;

  /// @brief Field dBufferClearSampler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_dBufferClearSampler, put = __cordl_internal_set_dBufferClearSampler)) ::UnityEngine::Rendering::ProfilingSampler* dBufferClearSampler;

  /// @brief Field dBufferColorHandles, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_dBufferColorHandles,
                      put = __cordl_internal_set_dBufferColorHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      dBufferColorHandles;

  /// @brief Field dBufferDepth, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dBufferDepth, put = __cordl_internal_set_dBufferDepth)) ::UnityEngine::Rendering::RTHandle* dBufferDepth;

  /// @brief Field decalLayers, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_decalLayers, put = __cordl_internal_set_decalLayers)) bool decalLayers;

  /// @brief Field drawSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_drawSystem, put = __cordl_internal_set_drawSystem)) ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* drawSystem;

  /// @brief Field rendererList, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  /// @brief Field settings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::UnityEngine::Rendering::Universal::DBufferSettings* settings;

  static inline ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_dBufferClear() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_dBufferClear();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_dBufferClearSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_dBufferClearSampler();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_dBufferColorHandles() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_dBufferColorHandles();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_dBufferDepth() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_dBufferDepth();

  constexpr bool const& __cordl_internal_get_decalLayers() const;

  constexpr bool& __cordl_internal_get_decalLayers();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* const& __cordl_internal_get_drawSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& __cordl_internal_get_drawSystem();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set_dBufferClear(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_dBufferClearSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_dBufferColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_dBufferDepth(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_decalLayers(bool value);

  constexpr void __cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Rendering::Universal::DBufferSettings* value);

  /// @brief Method .ctor, addr 0x669ba7c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DBufferRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DBufferRenderPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DBufferRenderPass_PassData(DBufferRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DBufferRenderPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DBufferRenderPass_PassData(DBufferRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12647 };

  /// @brief Field drawSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* ___drawSystem;

  /// @brief Field settings, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DBufferSettings* ___settings;

  /// @brief Field dBufferClear, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___dBufferClear;

  /// @brief Field dBufferClearSampler, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___dBufferClearSampler;

  /// @brief Field decalLayers, offset: 0x30, size: 0x1, def value: None
  bool ___decalLayers;

  /// @brief Field dBufferDepth, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___dBufferDepth;

  /// @brief Field dBufferColorHandles, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___dBufferColorHandles;

  /// @brief Field rendererList, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, ___drawSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, ___settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, ___dBufferClear) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, ___dBufferClearSampler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, ___decalLayers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, ___dBufferDepth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, ___dBufferColorHandles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, ___rendererList) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DBufferRenderPass/<>c
class CORDL_TYPE DBufferRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DBufferRenderPass___c* __9;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__36_0,
                      put = setStaticF___9__36_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__36_0;

  static inline ::UnityEngine::Rendering::Universal::DBufferRenderPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__36_0, addr 0x669e7f0, size 0xa4, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__36_0(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x669e7ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DBufferRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__36_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DBufferRenderPass___c* value);

  static inline void setStaticF___9__36_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DBufferRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DBufferRenderPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DBufferRenderPass___c(DBufferRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DBufferRenderPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DBufferRenderPass___c(DBufferRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12648 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DBufferRenderPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DBufferRenderPass
class CORDL_TYPE DBufferRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::DBufferRenderPass___c;

  /// @brief Field <dBufferColorHandles>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__dBufferColorHandles_k__BackingField,
                      put = __cordl_internal_set__dBufferColorHandles_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      _dBufferColorHandles_k__BackingField;

  /// @brief Field <depthHandle>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__depthHandle_k__BackingField,
                      put = __cordl_internal_set__depthHandle_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _depthHandle_k__BackingField;

  __declspec(property(get = get_dBufferColorHandles, put = set_dBufferColorHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> dBufferColorHandles;

  __declspec(property(get = get_dBufferDepth)) ::UnityEngine::Rendering::RTHandle* dBufferDepth;

  /// @brief Field dbufferHandles, offset 0x128, size 0x8
  __declspec(property(
      get = __cordl_internal_get_dbufferHandles,
      put = __cordl_internal_set_dbufferHandles)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      dbufferHandles;

  __declspec(property(get = get_depthHandle, put = set_depthHandle)) ::UnityEngine::Rendering::RTHandle* depthHandle;

  /// @brief Field m_DBufferClear, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBufferClear, put = __cordl_internal_set_m_DBufferClear)) ::UnityW<::UnityEngine::Material> m_DBufferClear;

  /// @brief Field m_DBufferClearSampler, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBufferClearSampler, put = __cordl_internal_set_m_DBufferClearSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_DBufferClearSampler;

  /// @brief Field m_DBufferDepth, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBufferDepth, put = __cordl_internal_set_m_DBufferDepth)) ::UnityEngine::Rendering::RTHandle* m_DBufferDepth;

  /// @brief Field m_DecalLayers, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DecalLayers, put = __cordl_internal_set_m_DecalLayers)) bool m_DecalLayers;

  /// @brief Field m_DrawSystem, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSystem, put = __cordl_internal_set_m_DrawSystem)) ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* m_DrawSystem;

  /// @brief Field m_FilteringSettings, offset 0xd0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* m_PassData;

  /// @brief Field m_Settings, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::Universal::DBufferSettings* m_Settings;

  /// @brief Field m_ShaderTagIdList, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Field s_DBufferDepthName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DBufferDepthName, put = setStaticF_s_DBufferDepthName)) ::StringW s_DBufferDepthName;

  /// @brief Field s_DBufferNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DBufferNames, put = setStaticF_s_DBufferNames)) ::ArrayW<::StringW, ::Array<::StringW>*> s_DBufferNames;

  /// @brief Field s_SSAOTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_SSAOTextureID, put = setStaticF_s_SSAOTextureID)) int32_t s_SSAOTextureID;

  /// @brief Method Clear, addr 0x669c984, size 0xec, virtual false, abstract: false, final false
  static inline void Clear(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* passData);

  /// @brief Method Dispose, addr 0x669ba80, size 0x78, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x669c26c, size 0x3ac, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x669cba0, size 0x60, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList, bool renderGraph);

  /// @brief Method InitPassData, addr 0x669c618, size 0x78, virtual false, abstract: false, final false
  inline void InitPassData(::ByRef<::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*> passData);

  /// @brief Method InitRendererListParams, addr 0x669ca70, size 0x130, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListParams InitRendererListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  static inline ::UnityEngine::Rendering::Universal::DBufferRenderPass* New_ctor(::UnityEngine::Material* dBufferClear, ::UnityEngine::Rendering::Universal::DBufferSettings* settings,
                                                                                 ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* drawSystem, bool decalLayers);

  /// @brief Method OnCameraCleanup, addr 0x669e538, size 0xec, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x669bf78, size 0x8, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RecordRenderGraph, addr 0x669cdd4, size 0x1764, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method SetGlobalTextures, addr 0x669c730, size 0x15c, virtual false, abstract: false, final false
  static inline void SetGlobalTextures(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* passData);

  /// @brief Method SetKeywords, addr 0x669c88c, size 0xf8, virtual false, abstract: false, final false
  static inline void SetKeywords(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* passData);

  /// @brief Method Setup, addr 0x669baf8, size 0x138, virtual false, abstract: false, final false
  inline void Setup(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method Setup, addr 0x669bc30, size 0x348, virtual false, abstract: false, final false
  inline void Setup(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::RTHandle* depthTextureHandle);

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get__dBufferColorHandles_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get__dBufferColorHandles_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__depthHandle_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__depthHandle_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const&
  __cordl_internal_get_dbufferHandles() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get_dbufferHandles();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DBufferClear() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DBufferClear();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_DBufferClearSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_DBufferClearSampler();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DBufferDepth() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DBufferDepth();

  constexpr bool const& __cordl_internal_get_m_DecalLayers() const;

  constexpr bool& __cordl_internal_get_m_DecalLayers();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* const& __cordl_internal_get_m_DrawSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& __cordl_internal_get_m_DrawSystem();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& __cordl_internal_get_m_Settings();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr void __cordl_internal_set__dBufferColorHandles_k__BackingField(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set__depthHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_dbufferHandles(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set_m_DBufferClear(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DBufferClearSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_DBufferDepth(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DecalLayers(bool value);

  constexpr void __cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DBufferSettings* value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x669b45c, size 0x364, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* dBufferClear, ::UnityEngine::Rendering::Universal::DBufferSettings* settings, ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* drawSystem,
                    bool decalLayers);

  static inline ::StringW getStaticF_s_DBufferDepthName();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_DBufferNames();

  static inline int32_t getStaticF_s_SSAOTextureID();

  /// @brief Method get_dBufferColorHandles, addr 0x669b434, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> get_dBufferColorHandles();

  /// @brief Method get_dBufferDepth, addr 0x669b454, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_dBufferDepth();

  /// @brief Method get_depthHandle, addr 0x669b444, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_depthHandle();

  static inline void setStaticF_s_DBufferDepthName(::StringW value);

  static inline void setStaticF_s_DBufferNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_SSAOTextureID(int32_t value);

  /// @brief Method set_dBufferColorHandles, addr 0x669b43c, size 0x8, virtual false, abstract: false, final false
  inline void set_dBufferColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  /// @brief Method set_depthHandle, addr 0x669b44c, size 0x8, virtual false, abstract: false, final false
  inline void set_depthHandle(::UnityEngine::Rendering::RTHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DBufferRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DBufferRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DBufferRenderPass(DBufferRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DBufferRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DBufferRenderPass(DBufferRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12649 };

  /// @brief Field m_DrawSystem, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* ___m_DrawSystem;

  /// @brief Field m_Settings, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DBufferSettings* ___m_Settings;

  /// @brief Field m_DBufferClear, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DBufferClear;

  /// @brief Field m_FilteringSettings, offset: 0xd0, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_ShaderTagIdList, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_DBufferClearSampler, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_DBufferClearSampler;

  /// @brief Field m_DecalLayers, offset: 0x100, size: 0x1, def value: None
  bool ___m_DecalLayers;

  /// @brief Field m_DBufferDepth, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DBufferDepth;

  /// @brief Field m_PassData, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData* ___m_PassData;

  /// @brief Field <dBufferColorHandles>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ____dBufferColorHandles_k__BackingField;

  /// @brief Field <depthHandle>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____depthHandle_k__BackingField;

  /// @brief Field dbufferHandles, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ___dbufferHandles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_DrawSystem) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_Settings) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_DBufferClear) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_FilteringSettings) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_ShaderTagIdList) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_DBufferClearSampler) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_DecalLayers) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_DBufferDepth) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___m_PassData) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ____dBufferColorHandles_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ____depthHandle_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DBufferRenderPass, ___dbufferHandles) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DBufferRenderPass, 0x130>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DBufferRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DBufferRenderPass*, "UnityEngine.Rendering.Universal", "DBufferRenderPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DBufferRenderPass_PassData*, "UnityEngine.Rendering.Universal", "DBufferRenderPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DBufferRenderPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DBufferRenderPass___c*, "UnityEngine.Rendering.Universal", "DBufferRenderPass/<>c");
