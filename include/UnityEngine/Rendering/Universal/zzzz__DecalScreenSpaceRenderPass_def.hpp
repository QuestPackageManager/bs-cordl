#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalScreenSpaceRenderPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
CORDL_MODULE_EXPORT(DecalScreenSpaceRenderPass)
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
namespace UnityEngine::Rendering::Universal {
class DecalDrawScreenSpaceSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceRenderPass___c;
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
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceRenderPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalScreenSpaceRenderPass/PassData
class CORDL_TYPE DecalScreenSpaceRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field colorTarget, offset 0x24, size 0x10
  __declspec(property(get = __cordl_internal_get_colorTarget, put = __cordl_internal_set_colorTarget)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget;

  /// @brief Field decalLayers, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_decalLayers, put = __cordl_internal_set_decalLayers)) bool decalLayers;

  /// @brief Field drawSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_drawSystem, put = __cordl_internal_set_drawSystem)) ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem;

  /// @brief Field isGLDevice, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_isGLDevice, put = __cordl_internal_set_isGLDevice)) bool isGLDevice;

  /// @brief Field rendererList, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  /// @brief Field settings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings;

  static inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_colorTarget() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_colorTarget();

  constexpr bool const& __cordl_internal_get_decalLayers() const;

  constexpr bool& __cordl_internal_get_decalLayers();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* const& __cordl_internal_get_drawSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& __cordl_internal_get_drawSystem();

  constexpr bool const& __cordl_internal_get_isGLDevice() const;

  constexpr bool& __cordl_internal_get_isGLDevice();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& __cordl_internal_get_settings();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_colorTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_decalLayers(bool value);

  constexpr void __cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value);

  constexpr void __cordl_internal_set_isGLDevice(bool value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value);

  /// @brief Method .ctor, addr 0x6642bbc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalScreenSpaceRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceRenderPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalScreenSpaceRenderPass_PassData(DecalScreenSpaceRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceRenderPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalScreenSpaceRenderPass_PassData(DecalScreenSpaceRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12683 };

  /// @brief Field drawSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* ___drawSystem;

  /// @brief Field settings, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* ___settings;

  /// @brief Field decalLayers, offset: 0x20, size: 0x1, def value: None
  bool ___decalLayers;

  /// @brief Field isGLDevice, offset: 0x21, size: 0x1, def value: None
  bool ___isGLDevice;

  /// @brief Field colorTarget, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___colorTarget;

  /// @brief Field cameraData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field rendererList, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData, ___drawSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData, ___settings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData, ___decalLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData, ___isGLDevice) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData, ___colorTarget) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData, ___cameraData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData, ___rendererList) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalScreenSpaceRenderPass/<>c
class CORDL_TYPE DecalScreenSpaceRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0,
                      put = setStaticF___9__12_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__12_0;

  static inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__12_0, addr 0x6643c0c, size 0xf0, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__12_0(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x6643c08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__12_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c* value);

  static inline void setStaticF___9__12_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalScreenSpaceRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceRenderPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalScreenSpaceRenderPass___c(DecalScreenSpaceRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceRenderPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalScreenSpaceRenderPass___c(DecalScreenSpaceRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalScreenSpaceRenderPass
class CORDL_TYPE DecalScreenSpaceRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c;

  /// @brief Field m_DecalLayers, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DecalLayers, put = __cordl_internal_set_m_DecalLayers)) bool m_DecalLayers;

  /// @brief Field m_DrawSystem, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSystem, put = __cordl_internal_set_m_DrawSystem)) ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* m_DrawSystem;

  /// @brief Field m_FilteringSettings, offset 0xb8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* m_PassData;

  /// @brief Field m_Settings, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* m_Settings;

  /// @brief Field m_ShaderTagIdList, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Method CreateRenderListParams, addr 0x6642bc0, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListParams CreateRenderListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method Execute, addr 0x6642cec, size 0x2d8, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6643078, size 0x178, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method InitPassData, addr 0x6642fc4, size 0xb4, virtual false, abstract: false, final false
  inline void InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*> passData);

  static inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* New_ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings,
                                                                                          ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem, bool decalLayers);

  /// @brief Method OnCameraCleanup, addr 0x6643ac8, size 0xec, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method RecordRenderGraph, addr 0x66431f0, size 0x8d8, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr bool const& __cordl_internal_get_m_DecalLayers() const;

  constexpr bool& __cordl_internal_get_m_DecalLayers();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* const& __cordl_internal_get_m_DrawSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& __cordl_internal_get_m_DrawSystem();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& __cordl_internal_get_m_Settings();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr void __cordl_internal_set_m_DecalLayers(bool value);

  constexpr void __cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x6642920, size 0x29c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* settings, ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* drawSystem, bool decalLayers);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalScreenSpaceRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalScreenSpaceRenderPass(DecalScreenSpaceRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalScreenSpaceRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalScreenSpaceRenderPass(DecalScreenSpaceRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12685 };

  /// @brief Field m_FilteringSettings, offset: 0xb8, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_ShaderTagIdList, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_DrawSystem, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* ___m_DrawSystem;

  /// @brief Field m_Settings, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* ___m_Settings;

  /// @brief Field m_DecalLayers, offset: 0xf0, size: 0x1, def value: None
  bool ___m_DecalLayers;

  /// @brief Field m_PassData, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_FilteringSettings) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_ShaderTagIdList) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_DrawSystem) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_Settings) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_DecalLayers) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, ___m_PassData) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass, 0x100>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*, "UnityEngine.Rendering.Universal", "DecalScreenSpaceRenderPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass_PassData*, "UnityEngine.Rendering.Universal", "DecalScreenSpaceRenderPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass___c*, "UnityEngine.Rendering.Universal", "DecalScreenSpaceRenderPass/<>c");
