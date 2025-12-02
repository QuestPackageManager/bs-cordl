#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DepthOnlyPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DepthOnlyPass)
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
class DepthOnlyPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthOnlyPass___c;
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
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DepthOnlyPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthOnlyPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthOnlyPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass/PassData
class CORDL_TYPE DepthOnlyPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field rendererList, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x66dfb54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthOnlyPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthOnlyPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthOnlyPass_PassData(DepthOnlyPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthOnlyPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthOnlyPass_PassData(DepthOnlyPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13056 };

  /// @brief Field rendererList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData, ___rendererList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass/<>c
class CORDL_TYPE DepthOnlyPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c* __9;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__20_0,
                      put = setStaticF___9__20_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__20_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c* New_ctor();

  /// @brief Method <Render>b__20_0, addr 0x66e09d0, size 0x90, virtual false, abstract: false, final false
  inline void _Render_b__20_0(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66e09cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__20_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c* value);

  static inline void setStaticF___9__20_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthOnlyPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthOnlyPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthOnlyPass___c(DepthOnlyPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthOnlyPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthOnlyPass___c(DepthOnlyPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13057 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.ShaderTagId, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DepthOnlyPass
class CORDL_TYPE DepthOnlyPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c;

  /// @brief Field <destination>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__destination_k__BackingField,
                      put = __cordl_internal_set__destination_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _destination_k__BackingField;

  /// @brief Field <shaderTagId>k__BackingField, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__shaderTagId_k__BackingField,
                      put = __cordl_internal_set__shaderTagId_k__BackingField)) ::UnityEngine::Rendering::ShaderTagId _shaderTagId_k__BackingField;

  /// @brief Field depthStencilFormat, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_depthStencilFormat, put = __cordl_internal_set_depthStencilFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat;

  __declspec(property(get = get_destination, put = set_destination)) ::UnityEngine::Rendering::RTHandle* destination;

  /// @brief Field k_ShaderTagId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ShaderTagId, put = setStaticF_k_ShaderTagId)) ::UnityEngine::Rendering::ShaderTagId k_ShaderTagId;

  /// @brief Field m_FilteringSettings, offset 0xd0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* m_PassData;

  /// @brief Field s_CameraDepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraDepthTextureID, put = setStaticF_s_CameraDepthTextureID)) int32_t s_CameraDepthTextureID;

  __declspec(property(get = get_shaderTagId, put = set_shaderTagId)) ::UnityEngine::Rendering::ShaderTagId shaderTagId;

  /// @brief Method Execute, addr 0x66dfcdc, size 0x1fc, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66dfc2c, size 0xb0, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method InitRendererListParams, addr 0x66dfed8, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListParams InitRendererListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  static inline ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                       ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask);

  /// @brief Method OnCameraSetup, addr 0x66dfb68, size 0xc4, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Render, addr 0x66e004c, size 0x888, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> cameraDepthTexture, uint32_t batchLayerMask, bool setGlobalDepth);

  /// @brief Method Setup, addr 0x66dfb58, size 0x10, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::RTHandle* depthAttachmentHandle);

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__destination_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__destination_k__BackingField();

  constexpr ::UnityEngine::Rendering::ShaderTagId const& __cordl_internal_get__shaderTagId_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ShaderTagId& __cordl_internal_get__shaderTagId_k__BackingField();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_depthStencilFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_depthStencilFormat();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr void __cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__shaderTagId_k__BackingField(::UnityEngine::Rendering::ShaderTagId value);

  constexpr void __cordl_internal_set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* value);

  /// @brief Method .ctor, addr 0x66df9b0, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_k_ShaderTagId();

  static inline int32_t getStaticF_s_CameraDepthTextureID();

  /// @brief Method get_destination, addr 0x66df990, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_destination();

  /// @brief Method get_shaderTagId, addr 0x66df9a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId get_shaderTagId();

  static inline void setStaticF_k_ShaderTagId(::UnityEngine::Rendering::ShaderTagId value);

  static inline void setStaticF_s_CameraDepthTextureID(int32_t value);

  /// @brief Method set_destination, addr 0x66df998, size 0x8, virtual false, abstract: false, final false
  inline void set_destination(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_shaderTagId, addr 0x66df9a8, size 0x8, virtual false, abstract: false, final false
  inline void set_shaderTagId(::UnityEngine::Rendering::ShaderTagId value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthOnlyPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthOnlyPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthOnlyPass(DepthOnlyPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthOnlyPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthOnlyPass(DepthOnlyPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13058 };

  /// @brief Field <destination>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____destination_k__BackingField;

  /// @brief Field depthStencilFormat, offset: 0xc0, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___depthStencilFormat;

  /// @brief Field <shaderTagId>k__BackingField, offset: 0xc4, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShaderTagId ____shaderTagId_k__BackingField;

  /// @brief Field m_PassData, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData* ___m_PassData;

  /// @brief Field m_FilteringSettings, offset: 0xd0, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ____destination_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ___depthStencilFormat) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ____shaderTagId_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ___m_PassData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, ___m_FilteringSettings) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*, "UnityEngine.Rendering.Universal.Internal", "DepthOnlyPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "DepthOnlyPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass___c*, "UnityEngine.Rendering.Universal.Internal", "DepthOnlyPass/<>c");
