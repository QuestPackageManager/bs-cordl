#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DepthNormalOnlyPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DepthNormalOnlyPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
class DepthNormalOnlyPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthNormalOnlyPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_MaskSize;
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
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderQueueRange;
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
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DepthNormalOnlyPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthNormalOnlyPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthNormalOnlyPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle,
// UnityEngine.Rendering.Universal.RenderingLayerUtils::MaskSize
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass/PassData
class CORDL_TYPE DepthNormalOnlyPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraDepthTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_cameraDepthTexture, put = __cordl_internal_set_cameraDepthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepthTexture;

  /// @brief Field cameraNormalsTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_cameraNormalsTexture,
                      put = __cordl_internal_set_cameraNormalsTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraNormalsTexture;

  /// @brief Field enableRenderingLayers, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_enableRenderingLayers, put = __cordl_internal_set_enableRenderingLayers)) bool enableRenderingLayers;

  /// @brief Field maskSize, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maskSize, put = __cordl_internal_set_maskSize)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize;

  /// @brief Field rendererList, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_cameraDepthTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_cameraDepthTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_cameraNormalsTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_cameraNormalsTexture();

  constexpr bool const& __cordl_internal_get_enableRenderingLayers() const;

  constexpr bool& __cordl_internal_get_enableRenderingLayers();

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const& __cordl_internal_get_maskSize() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize& __cordl_internal_get_maskSize();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr void __cordl_internal_set_cameraDepthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_cameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_enableRenderingLayers(bool value);

  constexpr void __cordl_internal_set_maskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x6745d80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthNormalOnlyPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthNormalOnlyPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthNormalOnlyPass_PassData(DepthNormalOnlyPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthNormalOnlyPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthNormalOnlyPass_PassData(DepthNormalOnlyPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13057 };

  /// @brief Field cameraDepthTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___cameraDepthTexture;

  /// @brief Field cameraNormalsTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___cameraNormalsTexture;

  /// @brief Field enableRenderingLayers, offset: 0x30, size: 0x1, def value: None
  bool ___enableRenderingLayers;

  /// @brief Field maskSize, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize ___maskSize;

  /// @brief Field rendererList, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData, ___cameraDepthTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData, ___cameraNormalsTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData, ___enableRenderingLayers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData, ___maskSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData, ___rendererList) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass/<>c
class CORDL_TYPE DepthNormalOnlyPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c* __9;

  /// @brief Field <>9__42_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__42_0,
                      put = setStaticF___9__42_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__42_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c* New_ctor();

  /// @brief Method <Render>b__42_0, addr 0x6747478, size 0xa4, virtual false, abstract: false, final false
  inline void _Render_b__42_0(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6747474, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__42_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c* value);

  static inline void setStaticF___9__42_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthNormalOnlyPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthNormalOnlyPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthNormalOnlyPass___c(DepthNormalOnlyPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthNormalOnlyPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthNormalOnlyPass___c(DepthNormalOnlyPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13058 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.Universal.RenderingLayerUtils::MaskSize, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DepthNormalOnlyPass
class CORDL_TYPE DepthNormalOnlyPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c;

  /// @brief Field <depthHandle>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__depthHandle_k__BackingField,
                      put = __cordl_internal_set__depthHandle_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _depthHandle_k__BackingField;

  /// @brief Field <enableRenderingLayers>k__BackingField, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__enableRenderingLayers_k__BackingField,
                      put = __cordl_internal_set__enableRenderingLayers_k__BackingField)) bool _enableRenderingLayers_k__BackingField;

  /// @brief Field <normalHandle>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__normalHandle_k__BackingField,
                      put = __cordl_internal_set__normalHandle_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _normalHandle_k__BackingField;

  /// @brief Field <renderingLayersHandle>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__renderingLayersHandle_k__BackingField,
                      put = __cordl_internal_set__renderingLayersHandle_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _renderingLayersHandle_k__BackingField;

  /// @brief Field <renderingLayersMaskSize>k__BackingField, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get__renderingLayersMaskSize_k__BackingField,
                      put = __cordl_internal_set__renderingLayersMaskSize_k__BackingField)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize _renderingLayersMaskSize_k__BackingField;

  /// @brief Field <shaderTagIds>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderTagIds_k__BackingField,
                      put = __cordl_internal_set__shaderTagIds_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* _shaderTagIds_k__BackingField;

  __declspec(property(get = get_depthHandle, put = set_depthHandle)) ::UnityEngine::Rendering::RTHandle* depthHandle;

  __declspec(property(get = get_enableRenderingLayers, put = set_enableRenderingLayers)) bool enableRenderingLayers;

  /// @brief Field k_ColorAttachment1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ColorAttachment1, put = setStaticF_k_ColorAttachment1)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      k_ColorAttachment1;

  /// @brief Field k_ColorAttachment2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ColorAttachment2, put = setStaticF_k_ColorAttachment2)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      k_ColorAttachment2;

  /// @brief Field k_DepthNormals, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DepthNormals, put = setStaticF_k_DepthNormals)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* k_DepthNormals;

  /// @brief Field m_FilteringSettings, offset 0xe0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* m_PassData;

  __declspec(property(get = get_normalHandle, put = set_normalHandle)) ::UnityEngine::Rendering::RTHandle* normalHandle;

  __declspec(property(get = get_renderingLayersHandle, put = set_renderingLayersHandle)) ::UnityEngine::Rendering::RTHandle* renderingLayersHandle;

  __declspec(property(get = get_renderingLayersMaskSize, put = set_renderingLayersMaskSize)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize renderingLayersMaskSize;

  /// @brief Field s_CameraDepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraDepthTextureID, put = setStaticF_s_CameraDepthTextureID)) int32_t s_CameraDepthTextureID;

  /// @brief Field s_CameraNormalsTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraNormalsTextureID, put = setStaticF_s_CameraNormalsTextureID)) int32_t s_CameraNormalsTextureID;

  /// @brief Field s_CameraRenderingLayersTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraRenderingLayersTextureID, put = setStaticF_s_CameraRenderingLayersTextureID)) int32_t s_CameraRenderingLayersTextureID;

  __declspec(property(get = get_shaderTagIds, put = set_shaderTagIds)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIds;

  /// @brief Method Execute, addr 0x6746110, size 0x280, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6746008, size 0x108, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method GetGraphicsFormat, addr 0x6745d84, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat();

  /// @brief Method InitRendererListParams, addr 0x6746390, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListParams InitRendererListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                             ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask);

  /// @brief Method OnCameraCleanup, addr 0x6746504, size 0xc4, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x6745e28, size 0x1e0, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Render, addr 0x67465c8, size 0xbd0, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraNormalsTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle cameraDepthTexture,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle renderingLayersTexture, uint32_t batchLayerMask, bool setGlobalDepth, bool setGlobalTextures);

  /// @brief Method Setup, addr 0x6745e08, size 0xc, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* depthHandle, ::UnityEngine::Rendering::RTHandle* normalHandle);

  /// @brief Method Setup, addr 0x6745e14, size 0x14, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* depthHandle, ::UnityEngine::Rendering::RTHandle* normalHandle, ::UnityEngine::Rendering::RTHandle* decalLayerHandle);

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__depthHandle_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__depthHandle_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableRenderingLayers_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableRenderingLayers_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__normalHandle_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__normalHandle_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__renderingLayersHandle_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__renderingLayersHandle_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const& __cordl_internal_get__renderingLayersMaskSize_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize& __cordl_internal_get__renderingLayersMaskSize_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get__shaderTagIds_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get__shaderTagIds_k__BackingField();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr void __cordl_internal_set__depthHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__enableRenderingLayers_k__BackingField(bool value);

  constexpr void __cordl_internal_set__normalHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__renderingLayersHandle_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__renderingLayersMaskSize_k__BackingField(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value);

  constexpr void __cordl_internal_set__shaderTagIds_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* value);

  /// @brief Method .ctor, addr 0x6745c20, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask);

  static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> getStaticF_k_ColorAttachment1();

  static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> getStaticF_k_ColorAttachment2();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF_k_DepthNormals();

  static inline int32_t getStaticF_s_CameraDepthTextureID();

  static inline int32_t getStaticF_s_CameraNormalsTextureID();

  static inline int32_t getStaticF_s_CameraRenderingLayersTextureID();

  /// @brief Method get_depthHandle, addr 0x6745bd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_depthHandle();

  /// @brief Method get_enableRenderingLayers, addr 0x6745c00, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableRenderingLayers();

  /// @brief Method get_normalHandle, addr 0x6745be0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_normalHandle();

  /// @brief Method get_renderingLayersHandle, addr 0x6745bf0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_renderingLayersHandle();

  /// @brief Method get_renderingLayersMaskSize, addr 0x6745c10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize get_renderingLayersMaskSize();

  /// @brief Method get_shaderTagIds, addr 0x6745bc0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* get_shaderTagIds();

  static inline void setStaticF_k_ColorAttachment1(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  static inline void setStaticF_k_ColorAttachment2(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  static inline void setStaticF_k_DepthNormals(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  static inline void setStaticF_s_CameraDepthTextureID(int32_t value);

  static inline void setStaticF_s_CameraNormalsTextureID(int32_t value);

  static inline void setStaticF_s_CameraRenderingLayersTextureID(int32_t value);

  /// @brief Method set_depthHandle, addr 0x6745bd8, size 0x8, virtual false, abstract: false, final false
  inline void set_depthHandle(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_enableRenderingLayers, addr 0x6745c08, size 0x8, virtual false, abstract: false, final false
  inline void set_enableRenderingLayers(bool value);

  /// @brief Method set_normalHandle, addr 0x6745be8, size 0x8, virtual false, abstract: false, final false
  inline void set_normalHandle(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_renderingLayersHandle, addr 0x6745bf8, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingLayersHandle(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_renderingLayersMaskSize, addr 0x6745c18, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingLayersMaskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value);

  /// @brief Method set_shaderTagIds, addr 0x6745bc8, size 0x8, virtual false, abstract: false, final false
  inline void set_shaderTagIds(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthNormalOnlyPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthNormalOnlyPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthNormalOnlyPass(DepthNormalOnlyPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthNormalOnlyPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthNormalOnlyPass(DepthNormalOnlyPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13059 };

  /// @brief Field <shaderTagIds>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ____shaderTagIds_k__BackingField;

  /// @brief Field <depthHandle>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____depthHandle_k__BackingField;

  /// @brief Field <normalHandle>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____normalHandle_k__BackingField;

  /// @brief Field <renderingLayersHandle>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____renderingLayersHandle_k__BackingField;

  /// @brief Field <enableRenderingLayers>k__BackingField, offset: 0xd8, size: 0x1, def value: None
  bool ____enableRenderingLayers_k__BackingField;

  /// @brief Field <renderingLayersMaskSize>k__BackingField, offset: 0xdc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize ____renderingLayersMaskSize_k__BackingField;

  /// @brief Field m_FilteringSettings, offset: 0xe0, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_PassData, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____shaderTagIds_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____depthHandle_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____normalHandle_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____renderingLayersHandle_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____enableRenderingLayers_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ____renderingLayersMaskSize_k__BackingField) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ___m_FilteringSettings) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, ___m_PassData) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass, 0x108>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*, "UnityEngine.Rendering.Universal.Internal", "DepthNormalOnlyPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "DepthNormalOnlyPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass___c*, "UnityEngine.Rendering.Universal.Internal", "DepthNormalOnlyPass/<>c");
