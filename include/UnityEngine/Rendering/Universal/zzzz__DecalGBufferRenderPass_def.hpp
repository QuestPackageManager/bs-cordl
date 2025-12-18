#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalGBufferRenderPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
CORDL_MODULE_EXPORT(DecalGBufferRenderPass)
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
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawGBufferSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalGBufferRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DecalGBufferRenderPass___c;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceSettings;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
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
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalGBufferRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class DecalGBufferRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DecalGBufferRenderPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalGBufferRenderPass/PassData
class CORDL_TYPE DecalGBufferRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field decalLayers, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_decalLayers, put = __cordl_internal_set_decalLayers)) bool decalLayers;

  /// @brief Field drawSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_drawSystem, put = __cordl_internal_set_drawSystem)) ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* drawSystem;

  /// @brief Field rendererList, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  /// @brief Field settings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings;

  static inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr bool const& __cordl_internal_get_decalLayers() const;

  constexpr bool& __cordl_internal_get_decalLayers();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* const& __cordl_internal_get_drawSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*& __cordl_internal_get_drawSystem();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_decalLayers(bool value);

  constexpr void __cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value);

  /// @brief Method .ctor, addr 0x66a8b70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalGBufferRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalGBufferRenderPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalGBufferRenderPass_PassData(DecalGBufferRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalGBufferRenderPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalGBufferRenderPass_PassData(DecalGBufferRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12683 };

  /// @brief Field drawSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* ___drawSystem;

  /// @brief Field settings, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* ___settings;

  /// @brief Field decalLayers, offset: 0x20, size: 0x1, def value: None
  bool ___decalLayers;

  /// @brief Field cameraData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field rendererList, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData, ___drawSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData, ___settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData, ___decalLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData, ___cameraData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData, ___rendererList) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalGBufferRenderPass/<>c
class CORDL_TYPE DecalGBufferRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_0,
                      put = setStaticF___9__15_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__15_0;

  static inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__15_0, addr 0x66aa3c4, size 0x50, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__15_0(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x66aa3c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__15_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c* value);

  static inline void setStaticF___9__15_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalGBufferRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalGBufferRenderPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalGBufferRenderPass___c(DecalGBufferRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalGBufferRenderPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalGBufferRenderPass___c(DecalGBufferRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalGBufferRenderPass
class CORDL_TYPE DecalGBufferRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c;

  /// @brief Field m_DecalLayers, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DecalLayers, put = __cordl_internal_set_m_DecalLayers)) bool m_DecalLayers;

  /// @brief Field m_DeferredLights, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_DrawSystem, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSystem, put = __cordl_internal_set_m_DrawSystem)) ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* m_DrawSystem;

  /// @brief Field m_FilteringSettings, offset 0xb8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_GbufferAttachments, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GbufferAttachments,
                      put = __cordl_internal_set_m_GbufferAttachments)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_GbufferAttachments;

  /// @brief Field m_PassData, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* m_PassData;

  /// @brief Field m_Settings, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* m_Settings;

  /// @brief Field m_ShaderTagIdList, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Method Configure, addr 0x66a8b7c, size 0x470, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Execute, addr 0x66a8ff4, size 0x330, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66a9368, size 0x170, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method InitPassData, addr 0x66a9324, size 0x44, virtual false, abstract: false, final false
  inline void InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*> passData);

  static inline ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* New_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                                      ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* drawSystem, bool decalLayers);

  /// @brief Method OnCameraCleanup, addr 0x66aa280, size 0xec, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method RecordRenderGraph, addr 0x66a94d8, size 0xda8, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Setup, addr 0x66a8b74, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);

  constexpr bool const& __cordl_internal_get_m_DecalLayers() const;

  constexpr bool& __cordl_internal_get_m_DecalLayers();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_m_DeferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* const& __cordl_internal_get_m_DrawSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*& __cordl_internal_get_m_DrawSystem();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_GbufferAttachments() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_GbufferAttachments();

  constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& __cordl_internal_get_m_Settings();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr void __cordl_internal_set_m_DecalLayers(bool value);

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_GbufferAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x66a8898, size 0x2d8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings, ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* drawSystem, bool decalLayers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalGBufferRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalGBufferRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalGBufferRenderPass(DecalGBufferRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalGBufferRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalGBufferRenderPass(DecalGBufferRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12685 };

  /// @brief Field m_FilteringSettings, offset: 0xb8, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_ShaderTagIdList, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_DrawSystem, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* ___m_DrawSystem;

  /// @brief Field m_Settings, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* ___m_Settings;

  /// @brief Field m_DeferredLights, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  /// @brief Field m_GbufferAttachments, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_GbufferAttachments;

  /// @brief Field m_DecalLayers, offset: 0x100, size: 0x1, def value: None
  bool ___m_DecalLayers;

  /// @brief Field m_PassData, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_FilteringSettings) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_ShaderTagIdList) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_DrawSystem) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_Settings) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_DeferredLights) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_GbufferAttachments) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_DecalLayers) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, ___m_PassData) == 0x108, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalGBufferRenderPass, 0x110>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*, "UnityEngine.Rendering.Universal", "DecalGBufferRenderPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass_PassData*, "UnityEngine.Rendering.Universal", "DecalGBufferRenderPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass___c*, "UnityEngine.Rendering.Universal", "DecalGBufferRenderPass/<>c");
