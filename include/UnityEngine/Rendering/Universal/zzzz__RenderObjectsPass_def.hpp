#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderObjectsPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderQueueType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderObjectsPass)
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
class DebugRendererLists;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjectsPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjectsPass___c;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjects_CustomCameraSettings;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderQueueType;
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
struct CompareFunction;
}
namespace UnityEngine::Rendering {
class ContextContainer;
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
namespace UnityEngine::Rendering {
struct StencilOp;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RenderObjectsPass;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjectsPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class RenderObjectsPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderObjectsPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderObjectsPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RendererList,
// UnityEngine.Rendering.Universal.RenderPassEvent
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderObjectsPass/PassData
class CORDL_TYPE RenderObjectsPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field cameraSettings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraSettings, put = __cordl_internal_set_cameraSettings)) ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings;

  /// @brief Field color, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color;

  /// @brief Field debugRendererLists, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_debugRendererLists, put = __cordl_internal_set_debugRendererLists)) ::UnityEngine::Rendering::Universal::DebugRendererLists* debugRendererLists;

  /// @brief Field renderPassEvent, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_renderPassEvent, put = __cordl_internal_set_renderPassEvent)) ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent;

  /// @brief Field rendererList, offset 0x48, size 0x18
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RendererList rendererList;

  /// @brief Field rendererListHdl, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererListHdl, put = __cordl_internal_set_rendererListHdl)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererListHdl;

  static inline ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* const& __cordl_internal_get_cameraSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*& __cordl_internal_get_cameraSettings();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_color();

  constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists* const& __cordl_internal_get_debugRendererLists() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugRendererLists*& __cordl_internal_get_debugRendererLists();

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get_renderPassEvent() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get_renderPassEvent();

  constexpr ::UnityEngine::Rendering::RendererList const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RendererList& __cordl_internal_get_rendererList();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererListHdl() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererListHdl();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_cameraSettings(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_debugRendererLists(::UnityEngine::Rendering::Universal::DebugRendererLists* value);

  constexpr void __cordl_internal_set_renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RendererList value);

  constexpr void __cordl_internal_set_rendererListHdl(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x6682ba0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjectsPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjectsPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjectsPass_PassData(RenderObjectsPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjectsPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjectsPass_PassData(RenderObjectsPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12844 };

  /// @brief Field cameraSettings, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* ___cameraSettings;

  /// @brief Field renderPassEvent, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ___renderPassEvent;

  /// @brief Field color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___color;

  /// @brief Field rendererListHdl, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererListHdl;

  /// @brief Field debugRendererLists, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugRendererLists* ___debugRendererLists;

  /// @brief Field cameraData, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field rendererList, offset: 0x48, size: 0x18, def value: None
  ::UnityEngine::Rendering::RendererList ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData, ___cameraSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData, ___renderPassEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData, ___color) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData, ___rendererListHdl) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData, ___debugRendererLists) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData, ___cameraData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData, ___rendererList) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderObjectsPass/<>c
class CORDL_TYPE RenderObjectsPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::RenderObjectsPass___c* __9;

  /// @brief Field <>9__33_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__33_0,
                      put = setStaticF___9__33_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__33_0;

  static inline ::UnityEngine::Rendering::Universal::RenderObjectsPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__33_0, addr 0x6684dac, size 0xd4, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__33_0(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x6684da8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::RenderObjectsPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__33_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::RenderObjectsPass___c* value);

  static inline void setStaticF___9__33_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjectsPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjectsPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjectsPass___c(RenderObjectsPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjectsPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjectsPass___c(RenderObjectsPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12845 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderObjectsPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.RenderStateBlock, UnityEngine.Rendering.Universal.RenderQueueType, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderObjectsPass
class CORDL_TYPE RenderObjectsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::RenderObjectsPass___c;

  /// @brief Field <overrideMaterialPassIndex>k__BackingField, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get__overrideMaterialPassIndex_k__BackingField,
                      put = __cordl_internal_set__overrideMaterialPassIndex_k__BackingField)) int32_t _overrideMaterialPassIndex_k__BackingField;

  /// @brief Field <overrideMaterial>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideMaterial_k__BackingField, put = __cordl_internal_set__overrideMaterial_k__BackingField)) ::UnityW<::UnityEngine::Material>
      _overrideMaterial_k__BackingField;

  /// @brief Field <overrideShaderPassIndex>k__BackingField, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__overrideShaderPassIndex_k__BackingField,
                      put = __cordl_internal_set__overrideShaderPassIndex_k__BackingField)) int32_t _overrideShaderPassIndex_k__BackingField;

  /// @brief Field <overrideShader>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideShader_k__BackingField, put = __cordl_internal_set__overrideShader_k__BackingField)) ::UnityW<::UnityEngine::Shader>
      _overrideShader_k__BackingField;

  /// @brief Field m_CameraSettings, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraSettings,
                      put = __cordl_internal_set_m_CameraSettings)) ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* m_CameraSettings;

  /// @brief Field m_FilteringSettings, offset 0xbc, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* m_PassData;

  /// @brief Field m_RenderStateBlock, offset 0x118, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_RenderStateBlock, put = __cordl_internal_set_m_RenderStateBlock)) ::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;

  /// @brief Field m_ShaderTagIdList, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  __declspec(property(get = get_overrideMaterial, put = set_overrideMaterial)) ::UnityW<::UnityEngine::Material> overrideMaterial;

  __declspec(property(get = get_overrideMaterialPassIndex, put = set_overrideMaterialPassIndex)) int32_t overrideMaterialPassIndex;

  __declspec(property(get = get_overrideShader, put = set_overrideShader)) ::UnityW<::UnityEngine::Shader> overrideShader;

  __declspec(property(get = get_overrideShaderPassIndex, put = set_overrideShaderPassIndex)) int32_t overrideShaderPassIndex;

  /// @brief Field renderQueueType, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_renderQueueType, put = __cordl_internal_set_renderQueueType)) ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType;

  /// @brief Method Execute, addr 0x6682ba4, size 0x1f0, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6683114, size 0x3f4, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* passData, ::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                 ::UnityEngine::Rendering::RendererList rendererList, bool isYFlipped);

  /// @brief Method Init, addr 0x66826e4, size 0x3ac, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
                   ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask, ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings);

  /// @brief Method InitPassData, addr 0x6682d94, size 0x34, virtual false, abstract: false, final false
  inline void InitPassData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*> passData);

  /// @brief Method InitRendererLists, addr 0x6682dc8, size 0x34c, virtual false, abstract: false, final false
  inline void InitRendererLists(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                ::ByRef<::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*> passData, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useRenderGraph);

  static inline ::UnityEngine::Rendering::Universal::RenderObjectsPass*
  New_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
           ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask, ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings);

  static inline ::UnityEngine::Rendering::Universal::RenderObjectsPass* New_ctor(::StringW profilerTag, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                                                                                 ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
                                                                                 ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                                                 ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings);

  /// @brief Method RecordRenderGraph, addr 0x6683f8c, size 0xdc8, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method SetDepthState, addr 0x66824d4, size 0x3c, virtual false, abstract: false, final false
  inline void SetDepthState(bool writeEnabled, ::UnityEngine::Rendering::CompareFunction function);

  /// @brief Method SetDetphState, addr 0x6682498, size 0x3c, virtual false, abstract: false, final false
  inline void SetDetphState(bool writeEnabled, ::UnityEngine::Rendering::CompareFunction function);

  /// @brief Method SetStencilState, addr 0x6682510, size 0xa4, virtual false, abstract: false, final false
  inline void SetStencilState(int32_t reference, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::StencilOp passOp, ::UnityEngine::Rendering::StencilOp failOp,
                              ::UnityEngine::Rendering::StencilOp zFailOp);

  constexpr int32_t const& __cordl_internal_get__overrideMaterialPassIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__overrideMaterialPassIndex_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__overrideMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__overrideMaterial_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__overrideShaderPassIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__overrideShaderPassIndex_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__overrideShader_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__overrideShader_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* const& __cordl_internal_get_m_CameraSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings*& __cordl_internal_get_m_CameraSettings();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::RenderStateBlock const& __cordl_internal_get_m_RenderStateBlock() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock& __cordl_internal_get_m_RenderStateBlock();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr ::UnityEngine::Rendering::Universal::RenderQueueType const& __cordl_internal_get_renderQueueType() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderQueueType& __cordl_internal_get_renderQueueType();

  constexpr void __cordl_internal_set__overrideMaterialPassIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__overrideMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__overrideShaderPassIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__overrideShader_k__BackingField(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_CameraSettings(::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* value);

  constexpr void __cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  constexpr void __cordl_internal_set_renderQueueType(::UnityEngine::Rendering::Universal::RenderQueueType value);

  /// @brief Method .ctor, addr 0x6682a90, size 0x110, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                    ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags, ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                    ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings);

  /// @brief Method .ctor, addr 0x66825b4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::StringW profilerTag, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
                    ::UnityEngine::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask, ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings);

  /// @brief Method get_overrideMaterial, addr 0x6682458, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_overrideMaterial();

  /// @brief Method get_overrideMaterialPassIndex, addr 0x6682468, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_overrideMaterialPassIndex();

  /// @brief Method get_overrideShader, addr 0x6682478, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_overrideShader();

  /// @brief Method get_overrideShaderPassIndex, addr 0x6682488, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_overrideShaderPassIndex();

  /// @brief Method set_overrideMaterial, addr 0x6682460, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideMaterial(::UnityEngine::Material* value);

  /// @brief Method set_overrideMaterialPassIndex, addr 0x6682470, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideMaterialPassIndex(int32_t value);

  /// @brief Method set_overrideShader, addr 0x6682480, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideShader(::UnityEngine::Shader* value);

  /// @brief Method set_overrideShaderPassIndex, addr 0x6682490, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideShaderPassIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjectsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjectsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjectsPass(RenderObjectsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjectsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjectsPass(RenderObjectsPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12846 };

  /// @brief Field renderQueueType, offset: 0xb8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderQueueType ___renderQueueType;

  /// @brief Field m_FilteringSettings, offset: 0xbc, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_CameraSettings, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::RenderObjects_CustomCameraSettings* ___m_CameraSettings;

  /// @brief Field <overrideMaterial>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____overrideMaterial_k__BackingField;

  /// @brief Field <overrideMaterialPassIndex>k__BackingField, offset: 0xf0, size: 0x4, def value: None
  int32_t ____overrideMaterialPassIndex_k__BackingField;

  /// @brief Field <overrideShader>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ____overrideShader_k__BackingField;

  /// @brief Field <overrideShaderPassIndex>k__BackingField, offset: 0x100, size: 0x4, def value: None
  int32_t ____overrideShaderPassIndex_k__BackingField;

  /// @brief Field m_ShaderTagIdList, offset: 0x108, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_PassData, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData* ___m_PassData;

  /// @brief Field m_RenderStateBlock, offset: 0x118, size: 0x6c, def value: None
  ::UnityEngine::Rendering::RenderStateBlock ___m_RenderStateBlock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ___renderQueueType) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ___m_FilteringSettings) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ___m_CameraSettings) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ____overrideMaterial_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ____overrideMaterialPassIndex_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ____overrideShader_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ____overrideShaderPassIndex_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ___m_ShaderTagIdList) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ___m_PassData) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderObjectsPass, ___m_RenderStateBlock) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderObjectsPass, 0x188>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderObjectsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderObjectsPass*, "UnityEngine.Rendering.Universal", "RenderObjectsPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderObjectsPass_PassData*, "UnityEngine.Rendering.Universal", "RenderObjectsPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderObjectsPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderObjectsPass___c*, "UnityEngine.Rendering.Universal", "RenderObjectsPass/<>c");
