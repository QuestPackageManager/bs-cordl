#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphRecorder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering::Universal {
class RenderGraphSettings;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct ScriptableRenderPassInput;
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
struct ClearFlag;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderPass);
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Color, UnityEngine.Rendering.ClearFlag, UnityEngine.Rendering.RenderBufferStoreAction,
// UnityEngine.Rendering.Universal.RenderPassEvent, UnityEngine.Rendering.Universal.ScriptableRenderPassInput
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderPass
class CORDL_TYPE ScriptableRenderPass : public ::System::Object {
public:
  // Declarations
  /// @brief Field <breakGBufferAndDeferredRenderPass>k__BackingField, offset 0x53, size 0x1
  __declspec(property(get = __cordl_internal_get__breakGBufferAndDeferredRenderPass_k__BackingField,
                      put = __cordl_internal_set__breakGBufferAndDeferredRenderPass_k__BackingField)) bool _breakGBufferAndDeferredRenderPass_k__BackingField;

  /// @brief Field <isBlitRenderPass>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__isBlitRenderPass_k__BackingField, put = __cordl_internal_set__isBlitRenderPass_k__BackingField)) bool _isBlitRenderPass_k__BackingField;

  /// @brief Field <overrideCameraTarget>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__overrideCameraTarget_k__BackingField, put = __cordl_internal_set__overrideCameraTarget_k__BackingField)) bool _overrideCameraTarget_k__BackingField;

  /// @brief Field <renderPassEvent>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__renderPassEvent_k__BackingField,
                      put = __cordl_internal_set__renderPassEvent_k__BackingField)) ::UnityEngine::Rendering::Universal::RenderPassEvent _renderPassEvent_k__BackingField;

  /// @brief Field <renderPassQueueIndex>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__renderPassQueueIndex_k__BackingField,
                      put = __cordl_internal_set__renderPassQueueIndex_k__BackingField)) int32_t _renderPassQueueIndex_k__BackingField;

  /// @brief Field <renderTargetFormat>k__BackingField, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get__renderTargetFormat_k__BackingField,
      put =
          __cordl_internal_set__renderTargetFormat_k__BackingField)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      _renderTargetFormat_k__BackingField;

  /// @brief Field <requiresIntermediateTexture>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresIntermediateTexture_k__BackingField,
                      put = __cordl_internal_set__requiresIntermediateTexture_k__BackingField)) bool _requiresIntermediateTexture_k__BackingField;

  /// @brief Field <useNativeRenderPass>k__BackingField, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get__useNativeRenderPass_k__BackingField, put = __cordl_internal_set__useNativeRenderPass_k__BackingField)) bool _useNativeRenderPass_k__BackingField;

  __declspec(property(get = get_breakGBufferAndDeferredRenderPass, put = set_breakGBufferAndDeferredRenderPass)) bool breakGBufferAndDeferredRenderPass;

  __declspec(property(get = get_clearColor)) ::UnityEngine::Color clearColor;

  __declspec(property(get = get_clearFlag)) ::UnityEngine::Rendering::ClearFlag clearFlag;

  __declspec(property(get = get_colorAttachment)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachment;

  __declspec(property(get = get_colorAttachmentHandle)) ::UnityEngine::Rendering::RTHandle* colorAttachmentHandle;

  __declspec(property(get = get_colorAttachmentHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> colorAttachmentHandles;

  __declspec(property(get = get_colorAttachments)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments;

  __declspec(property(get = get_colorStoreActions)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStoreActions;

  __declspec(property(get = get_depthAttachment)) ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment;

  __declspec(property(get = get_depthAttachmentHandle)) ::UnityEngine::Rendering::RTHandle* depthAttachmentHandle;

  __declspec(property(get = get_depthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction;

  __declspec(property(get = get_input)) ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput input;

  __declspec(property(get = get_isBlitRenderPass, put = set_isBlitRenderPass)) bool isBlitRenderPass;

  /// @brief Field k_CameraTarget, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CameraTarget, put = setStaticF_k_CameraTarget)) ::UnityEngine::Rendering::RTHandle* k_CameraTarget;

  /// @brief Field m_ClearColor, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ClearColor, put = __cordl_internal_set_m_ClearColor)) ::UnityEngine::Color m_ClearColor;

  /// @brief Field m_ClearFlag, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClearFlag, put = __cordl_internal_set_m_ClearFlag)) ::UnityEngine::Rendering::ClearFlag m_ClearFlag;

  /// @brief Field m_ColorAttachmentIndices, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ColorAttachmentIndices, put = __cordl_internal_set_m_ColorAttachmentIndices)) ::Unity::Collections::NativeArray_1<int32_t> m_ColorAttachmentIndices;

  /// @brief Field m_ColorAttachments, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorAttachments,
                      put = __cordl_internal_set_m_ColorAttachments)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_ColorAttachments;

  /// @brief Field m_ColorStoreActions, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorStoreActions,
                      put = __cordl_internal_set_m_ColorStoreActions)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>
      m_ColorStoreActions;

  /// @brief Field m_DepthAttachment, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthAttachment, put = __cordl_internal_set_m_DepthAttachment)) ::UnityEngine::Rendering::RTHandle* m_DepthAttachment;

  /// @brief Field m_DepthStoreAction, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthStoreAction, put = __cordl_internal_set_m_DepthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction m_DepthStoreAction;

  /// @brief Field m_Input, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Input, put = __cordl_internal_set_m_Input)) ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput m_Input;

  /// @brief Field m_InputAttachmentIndices, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_m_InputAttachmentIndices, put = __cordl_internal_set_m_InputAttachmentIndices)) ::Unity::Collections::NativeArray_1<int32_t> m_InputAttachmentIndices;

  /// @brief Field m_InputAttachmentIsTransient, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputAttachmentIsTransient, put = __cordl_internal_set_m_InputAttachmentIsTransient)) ::ArrayW<bool, ::Array<bool>*> m_InputAttachmentIsTransient;

  /// @brief Field m_InputAttachments, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InputAttachments,
                      put = __cordl_internal_set_m_InputAttachments)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_InputAttachments;

  /// @brief Field m_OverriddenColorStoreActions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OverriddenColorStoreActions, put = __cordl_internal_set_m_OverriddenColorStoreActions)) ::ArrayW<bool, ::Array<bool>*> m_OverriddenColorStoreActions;

  /// @brief Field m_OverriddenDepthStoreAction, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OverriddenDepthStoreAction, put = __cordl_internal_set_m_OverriddenDepthStoreAction)) bool m_OverriddenDepthStoreAction;

  /// @brief Field m_PassName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassName, put = __cordl_internal_set_m_PassName)) ::StringW m_PassName;

  /// @brief Field m_ProfingSampler, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfingSampler, put = __cordl_internal_set_m_ProfingSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfingSampler;

  /// @brief Field m_RenderGraphSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphSettings,
                      put = __cordl_internal_set_m_RenderGraphSettings)) ::UnityEngine::Rendering::Universal::RenderGraphSettings* m_RenderGraphSettings;

  __declspec(property(get = get_overriddenColorStoreActions)) ::ArrayW<bool, ::Array<bool>*> overriddenColorStoreActions;

  __declspec(property(get = get_overriddenDepthStoreAction)) bool overriddenDepthStoreAction;

  __declspec(property(get = get_overrideCameraTarget, put = set_overrideCameraTarget)) bool overrideCameraTarget;

  __declspec(property(get = get_passName)) ::StringW passName;

  __declspec(property(get = get_profilingSampler, put = set_profilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* profilingSampler;

  __declspec(property(get = get_renderPassEvent, put = set_renderPassEvent)) ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent;

  __declspec(property(get = get_renderPassQueueIndex, put = set_renderPassQueueIndex)) int32_t renderPassQueueIndex;

  __declspec(property(get = get_renderTargetFormat,
                      put = set_renderTargetFormat)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      renderTargetFormat;

  __declspec(property(get = get_requiresIntermediateTexture, put = set_requiresIntermediateTexture)) bool requiresIntermediateTexture;

  __declspec(property(get = get_useNativeRenderPass, put = set_useNativeRenderPass)) bool useNativeRenderPass;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*() noexcept;

  /// @brief Method Blit, addr 0x6644824, size 0x8c, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> data, ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method Blit, addr 0x664493c, size 0x5c, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> data, ::UnityEngine::Rendering::RTHandle* source,
                   ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method Blit, addr 0x66446f8, size 0x12c, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Material* material,
                   int32_t passIndex);

  /// @brief Method Blit, addr 0x66446ac, size 0x4c, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination,
                   ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method Configure, addr 0x6644528, size 0x4, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method ConfigureClear, addr 0x6644514, size 0x10, virtual false, abstract: false, final false
  inline void ConfigureClear(::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method ConfigureColorStoreAction, addr 0x6643f40, size 0x54, virtual false, abstract: false, final false
  inline void ConfigureColorStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction storeAction, uint32_t attachmentIndex);

  /// @brief Method ConfigureColorStoreActions, addr 0x6643f94, size 0xf0, virtual false, abstract: false, final false
  inline void ConfigureColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> storeActions);

  /// @brief Method ConfigureDepthStoreAction, addr 0x6644084, size 0x10, virtual false, abstract: false, final false
  inline void ConfigureDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction storeAction);

  /// @brief Method ConfigureInput, addr 0x6643f38, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureInput(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput passInput);

  /// @brief Method ConfigureInputAttachments, addr 0x6644094, size 0x80, virtual false, abstract: false, final false
  inline void ConfigureInputAttachments(::UnityEngine::Rendering::RTHandle* input, bool isTransient);

  /// @brief Method ConfigureInputAttachments, addr 0x6644114, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureInputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> inputs);

  /// @brief Method ConfigureInputAttachments, addr 0x6641460, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureInputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> inputs, ::ArrayW<bool, ::Array<bool>*> isTransient);

  /// @brief Method ConfigureTarget, addr 0x66443e0, size 0x74, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RTHandle* colorAttachment);

  /// @brief Method ConfigureTarget, addr 0x6644230, size 0x9c, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RTHandle* colorAttachment, ::UnityEngine::Rendering::RTHandle* depthAttachment);

  /// @brief Method ConfigureTarget, addr 0x6644394, size 0x4c, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment);

  /// @brief Method ConfigureTarget, addr 0x66441e4, size 0x4c, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment);

  /// @brief Method ConfigureTarget, addr 0x66444a0, size 0x74, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> colorAttachments);

  /// @brief Method ConfigureTarget, addr 0x66343f4, size 0x2ec, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> colorAttachments, ::UnityEngine::Rendering::RTHandle* depthAttachment);

  /// @brief Method ConfigureTarget, addr 0x6644318, size 0x7c, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> colorAttachments, ::UnityEngine::Rendering::RTHandle* depthAttachment,
                              ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> formats);

  /// @brief Method ConfigureTarget, addr 0x6644454, size 0x4c, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments);

  /// @brief Method ConfigureTarget, addr 0x66442cc, size 0x4c, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachments,
                              ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment);

  /// @brief Method CreateDrawingSettings, addr 0x6644998, size 0x168, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                         ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6644b00, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                         ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                         ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6644be0, size 0x168, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                         ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                         ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6644d48, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                         ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                         ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                         ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method Execute, addr 0x6644534, size 0xbc, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method FrameCleanup, addr 0x6643cfc, size 0xc, virtual true, abstract: false, final false
  inline void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetActiveDebugHandler, addr 0x6643ee8, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::DebugHandler* GetActiveDebugHandler(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method GetRenderPassEventRange, addr 0x6644e78, size 0x178, virtual false, abstract: false, final false
  static inline int32_t GetRenderPassEventRange(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent);

  /// @brief Method IsInputAttachmentTransient, addr 0x6644150, size 0x30, virtual false, abstract: false, final false
  inline bool IsInputAttachmentTransient(int32_t idx);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderPass* New_ctor();

  /// @brief Method OnCameraCleanup, addr 0x664452c, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x6644524, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method OnFinishCameraStackRendering, addr 0x6644530, size 0x4, virtual true, abstract: false, final false
  inline void OnFinishCameraStackRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method RecordRenderGraph, addr 0x66445f0, size 0xbc, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method ResetTarget, addr 0x6644180, size 0x64, virtual false, abstract: false, final false
  inline void ResetTarget();

  /// @brief Method SetInputAttachmentTransient, addr 0x664411c, size 0x34, virtual false, abstract: false, final false
  inline void SetInputAttachmentTransient(int32_t idx, bool isTransient);

  constexpr bool const& __cordl_internal_get__breakGBufferAndDeferredRenderPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__breakGBufferAndDeferredRenderPass_k__BackingField();

  constexpr bool const& __cordl_internal_get__isBlitRenderPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isBlitRenderPass_k__BackingField();

  constexpr bool const& __cordl_internal_get__overrideCameraTarget_k__BackingField() const;

  constexpr bool& __cordl_internal_get__overrideCameraTarget_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get__renderPassEvent_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get__renderPassEvent_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__renderPassQueueIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__renderPassQueueIndex_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> const&
  __cordl_internal_get__renderTargetFormat_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>&
  __cordl_internal_get__renderTargetFormat_k__BackingField();

  constexpr bool const& __cordl_internal_get__requiresIntermediateTexture_k__BackingField() const;

  constexpr bool& __cordl_internal_get__requiresIntermediateTexture_k__BackingField();

  constexpr bool const& __cordl_internal_get__useNativeRenderPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useNativeRenderPass_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_ClearColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_ClearColor();

  constexpr ::UnityEngine::Rendering::ClearFlag const& __cordl_internal_get_m_ClearFlag() const;

  constexpr ::UnityEngine::Rendering::ClearFlag& __cordl_internal_get_m_ClearFlag();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_m_ColorAttachmentIndices() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_m_ColorAttachmentIndices();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_ColorAttachments() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_ColorAttachments();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> const& __cordl_internal_get_m_ColorStoreActions() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>& __cordl_internal_get_m_ColorStoreActions();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DepthAttachment() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DepthAttachment();

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& __cordl_internal_get_m_DepthStoreAction() const;

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& __cordl_internal_get_m_DepthStoreAction();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const& __cordl_internal_get_m_Input() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput& __cordl_internal_get_m_Input();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_m_InputAttachmentIndices() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_m_InputAttachmentIndices();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_InputAttachmentIsTransient() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_InputAttachmentIsTransient();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_InputAttachments() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_InputAttachments();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_OverriddenColorStoreActions() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_OverriddenColorStoreActions();

  constexpr bool const& __cordl_internal_get_m_OverriddenDepthStoreAction() const;

  constexpr bool& __cordl_internal_get_m_OverriddenDepthStoreAction();

  constexpr ::StringW const& __cordl_internal_get_m_PassName() const;

  constexpr ::StringW& __cordl_internal_get_m_PassName();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfingSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfingSampler();

  constexpr ::UnityEngine::Rendering::Universal::RenderGraphSettings* const& __cordl_internal_get_m_RenderGraphSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderGraphSettings*& __cordl_internal_get_m_RenderGraphSettings();

  constexpr void __cordl_internal_set__breakGBufferAndDeferredRenderPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isBlitRenderPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__overrideCameraTarget_k__BackingField(bool value);

  constexpr void __cordl_internal_set__renderPassEvent_k__BackingField(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  constexpr void __cordl_internal_set__renderPassQueueIndex_k__BackingField(int32_t value);

  constexpr void
  __cordl_internal_set__renderTargetFormat_k__BackingField(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  constexpr void __cordl_internal_set__requiresIntermediateTexture_k__BackingField(bool value);

  constexpr void __cordl_internal_set__useNativeRenderPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ClearColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_ClearFlag(::UnityEngine::Rendering::ClearFlag value);

  constexpr void __cordl_internal_set_m_ColorAttachmentIndices(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_m_ColorAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_m_ColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> value);

  constexpr void __cordl_internal_set_m_DepthAttachment(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  constexpr void __cordl_internal_set_m_Input(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);

  constexpr void __cordl_internal_set_m_InputAttachmentIndices(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_m_InputAttachmentIsTransient(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_InputAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_m_OverriddenColorStoreActions(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_OverriddenDepthStoreAction(bool value);

  constexpr void __cordl_internal_set_m_PassName(::StringW value);

  constexpr void __cordl_internal_set_m_ProfingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_RenderGraphSettings(::UnityEngine::Rendering::Universal::RenderGraphSettings* value);

  /// @brief Method .ctor, addr 0x6633c34, size 0x278, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_k_CameraTarget();

  /// @brief Method get_breakGBufferAndDeferredRenderPass, addr 0x6643eb8, size 0x8, virtual false, abstract: false, final false
  inline bool get_breakGBufferAndDeferredRenderPass();

  /// @brief Method get_clearColor, addr 0x6643e64, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_clearColor();

  /// @brief Method get_clearFlag, addr 0x6643e5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ClearFlag get_clearFlag();

  /// @brief Method get_colorAttachment, addr 0x6643d64, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> get_colorAttachment();

  /// @brief Method get_colorAttachmentHandle, addr 0x6643e04, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_colorAttachmentHandle();

  /// @brief Method get_colorAttachmentHandles, addr 0x6643dfc, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> get_colorAttachmentHandles();

  /// @brief Method get_colorAttachments, addr 0x6643d18, size 0x4c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> get_colorAttachments();

  /// @brief Method get_colorStoreActions, addr 0x6643e34, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> get_colorStoreActions();

  /// @brief Method get_depthAttachment, addr 0x6643db0, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_depthAttachment();

  /// @brief Method get_depthAttachmentHandle, addr 0x6643e2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_depthAttachmentHandle();

  /// @brief Method get_depthStoreAction, addr 0x6643e3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderBufferStoreAction get_depthStoreAction();

  /// @brief Method get_input, addr 0x6643e54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput get_input();

  /// @brief Method get_isBlitRenderPass, addr 0x6643e98, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBlitRenderPass();

  /// @brief Method get_overriddenColorStoreActions, addr 0x6643e44, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<bool, ::Array<bool>*> get_overriddenColorStoreActions();

  /// @brief Method get_overriddenDepthStoreAction, addr 0x6643e4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_overriddenDepthStoreAction();

  /// @brief Method get_overrideCameraTarget, addr 0x6643e88, size 0x8, virtual false, abstract: false, final false
  inline bool get_overrideCameraTarget();

  /// @brief Method get_passName, addr 0x6643e80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_passName();

  /// @brief Method get_profilingSampler, addr 0x6634b04, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* get_profilingSampler();

  /// @brief Method get_renderPassEvent, addr 0x6643d08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderPassEvent get_renderPassEvent();

  /// @brief Method get_renderPassQueueIndex, addr 0x6643ec8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderPassQueueIndex();

  /// @brief Method get_renderTargetFormat, addr 0x6643ed8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> get_renderTargetFormat();

  /// @brief Method get_requiresIntermediateTexture, addr 0x6643e70, size 0x8, virtual false, abstract: false, final false
  inline bool get_requiresIntermediateTexture();

  /// @brief Method get_useNativeRenderPass, addr 0x6643ea8, size 0x8, virtual false, abstract: false, final false
  inline bool get_useNativeRenderPass();

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder* i___UnityEngine__Rendering__RenderGraphModule__IRenderGraphRecorder() noexcept;

  /// @brief Method op_GreaterThan, addr 0x6644e50, size 0x28, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs);

  /// @brief Method op_LessThan, addr 0x6644e28, size 0x28, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs);

  static inline void setStaticF_k_CameraTarget(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_breakGBufferAndDeferredRenderPass, addr 0x6643ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_breakGBufferAndDeferredRenderPass(bool value);

  /// @brief Method set_isBlitRenderPass, addr 0x6643ea0, size 0x8, virtual false, abstract: false, final false
  inline void set_isBlitRenderPass(bool value);

  /// @brief Method set_overrideCameraTarget, addr 0x6643e90, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideCameraTarget(bool value);

  /// @brief Method set_profilingSampler, addr 0x6633eac, size 0x44, virtual false, abstract: false, final false
  inline void set_profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method set_renderPassEvent, addr 0x6643d10, size 0x8, virtual false, abstract: false, final false
  inline void set_renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  /// @brief Method set_renderPassQueueIndex, addr 0x6643ed0, size 0x8, virtual false, abstract: false, final false
  inline void set_renderPassQueueIndex(int32_t value);

  /// @brief Method set_renderTargetFormat, addr 0x6643ee0, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTargetFormat(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  /// @brief Method set_requiresIntermediateTexture, addr 0x6643e78, size 0x8, virtual false, abstract: false, final false
  inline void set_requiresIntermediateTexture(bool value);

  /// @brief Method set_useNativeRenderPass, addr 0x6643eb0, size 0x8, virtual false, abstract: false, final false
  inline void set_useNativeRenderPass(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderPass(ScriptableRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderPass(ScriptableRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12686 };

  /// @brief Field <renderPassEvent>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ____renderPassEvent_k__BackingField;

  /// @brief Field m_ColorStoreActions, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> ___m_ColorStoreActions;

  /// @brief Field m_DepthStoreAction, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction ___m_DepthStoreAction;

  /// @brief Field <requiresIntermediateTexture>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____requiresIntermediateTexture_k__BackingField;

  /// @brief Field m_OverriddenColorStoreActions, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_OverriddenColorStoreActions;

  /// @brief Field m_OverriddenDepthStoreAction, offset: 0x30, size: 0x1, def value: None
  bool ___m_OverriddenDepthStoreAction;

  /// @brief Field m_ProfingSampler, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfingSampler;

  /// @brief Field m_PassName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_PassName;

  /// @brief Field m_RenderGraphSettings, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::RenderGraphSettings* ___m_RenderGraphSettings;

  /// @brief Field <overrideCameraTarget>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____overrideCameraTarget_k__BackingField;

  /// @brief Field <isBlitRenderPass>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____isBlitRenderPass_k__BackingField;

  /// @brief Field <useNativeRenderPass>k__BackingField, offset: 0x52, size: 0x1, def value: None
  bool ____useNativeRenderPass_k__BackingField;

  /// @brief Field <breakGBufferAndDeferredRenderPass>k__BackingField, offset: 0x53, size: 0x1, def value: None
  bool ____breakGBufferAndDeferredRenderPass_k__BackingField;

  /// @brief Field <renderPassQueueIndex>k__BackingField, offset: 0x54, size: 0x4, def value: None
  int32_t ____renderPassQueueIndex_k__BackingField;

  /// @brief Field m_ColorAttachmentIndices, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___m_ColorAttachmentIndices;

  /// @brief Field m_InputAttachmentIndices, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___m_InputAttachmentIndices;

  /// @brief Field <renderTargetFormat>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> ____renderTargetFormat_k__BackingField;

  /// @brief Field m_ColorAttachments, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_ColorAttachments;

  /// @brief Field m_InputAttachments, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_InputAttachments;

  /// @brief Field m_InputAttachmentIsTransient, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_InputAttachmentIsTransient;

  /// @brief Field m_DepthAttachment, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DepthAttachment;

  /// @brief Field m_Input, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput ___m_Input;

  /// @brief Field m_ClearFlag, offset: 0xa4, size: 0x4, def value: None
  ::UnityEngine::Rendering::ClearFlag ___m_ClearFlag;

  /// @brief Field m_ClearColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ___m_ClearColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderPassEvent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ColorStoreActions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_DepthStoreAction) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____requiresIntermediateTexture_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_OverriddenColorStoreActions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_OverriddenDepthStoreAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ProfingSampler) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_PassName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_RenderGraphSettings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____overrideCameraTarget_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____isBlitRenderPass_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____useNativeRenderPass_k__BackingField) == 0x52, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____breakGBufferAndDeferredRenderPass_k__BackingField) == 0x53, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderPassQueueIndex_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ColorAttachmentIndices) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_InputAttachmentIndices) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderTargetFormat_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ColorAttachments) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_InputAttachments) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_InputAttachmentIsTransient) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_DepthAttachment) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_Input) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ClearFlag) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ClearColor) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderPass, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, "UnityEngine.Rendering.Universal", "ScriptableRenderPass");
