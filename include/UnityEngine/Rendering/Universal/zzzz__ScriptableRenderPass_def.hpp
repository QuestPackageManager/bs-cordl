#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderPass*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, "UnityEngine.Rendering.Universal", "ScriptableRenderPass");
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Rendering.Universal.RenderPassEvent,
// UnityEngine.Rendering.Universal.ScriptableRenderPassInput
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderPass
class CORDL_TYPE ScriptableRenderPass : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isBlitRenderPass>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isBlitRenderPass_k__BackingField, put = __cordl_internal_set__isBlitRenderPass_k__BackingField)) bool _isBlitRenderPass_k__BackingField;

  /// @brief Field <renderPassEvent>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__renderPassEvent_k__BackingField,
                      put = __cordl_internal_set__renderPassEvent_k__BackingField)) ::UnityEngine::Rendering::Universal::RenderPassEvent _renderPassEvent_k__BackingField;

  /// @brief Field <renderPassQueueIndex>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__renderPassQueueIndex_k__BackingField,
                      put = __cordl_internal_set__renderPassQueueIndex_k__BackingField)) int32_t _renderPassQueueIndex_k__BackingField;

  /// @brief Field <renderTargetFormat>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__renderTargetFormat_k__BackingField,
                      put = __cordl_internal_set__renderTargetFormat_k__BackingField)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>
      _renderTargetFormat_k__BackingField;

  /// @brief Field <requiresIntermediateTexture>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresIntermediateTexture_k__BackingField,
                      put = __cordl_internal_set__requiresIntermediateTexture_k__BackingField)) bool _requiresIntermediateTexture_k__BackingField;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_clearColor)) ::UnityEngine::Color clearColor;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_clearFlag)) ::UnityEngine::Rendering::ClearFlag clearFlag;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_colorAttachmentHandle)) ::UnityEngine::Rendering::RTHandle* colorAttachmentHandle;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_colorAttachmentHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*> colorAttachmentHandles;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_colorStoreActions)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> colorStoreActions;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_depthAttachmentHandle)) ::UnityEngine::Rendering::RTHandle* depthAttachmentHandle;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_depthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction;

  __declspec(property(get = get_input)) ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput input;

  __declspec(property(get = get_isBlitRenderPass, put = set_isBlitRenderPass)) bool isBlitRenderPass;

  /// @brief Field k_CameraTarget, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CameraTarget, put = setStaticF_k_CameraTarget)) ::UnityEngine::Rendering::RTHandle* k_CameraTarget;

  /// @brief Field m_ColorAttachmentIndices, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ColorAttachmentIndices, put = __cordl_internal_set_m_ColorAttachmentIndices)) ::Unity::Collections::NativeArray_1<int32_t> m_ColorAttachmentIndices;

  /// @brief Field m_Input, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Input, put = __cordl_internal_set_m_Input)) ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput m_Input;

  /// @brief Field m_InputAttachmentIndices, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_m_InputAttachmentIndices, put = __cordl_internal_set_m_InputAttachmentIndices)) ::Unity::Collections::NativeArray_1<int32_t> m_InputAttachmentIndices;

  /// @brief Field m_PassName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassName, put = __cordl_internal_set_m_PassName)) ::StringW m_PassName;

  /// @brief Field m_ProfingSampler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfingSampler, put = __cordl_internal_set_m_ProfingSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfingSampler;

  __declspec(property(get = get_passName)) ::StringW passName;

  __declspec(property(get = get_profilingSampler, put = set_profilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* profilingSampler;

  __declspec(property(get = get_renderPassEvent, put = set_renderPassEvent)) ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent;

  __declspec(property(get = get_renderPassQueueIndex, put = set_renderPassQueueIndex)) int32_t renderPassQueueIndex;

  __declspec(property(get = get_renderTargetFormat, put = set_renderTargetFormat)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> renderTargetFormat;

  __declspec(property(get = get_requiresIntermediateTexture, put = set_requiresIntermediateTexture)) bool requiresIntermediateTexture;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder*() noexcept;

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Blit, addr 0x6c9ab10, size 0x4, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> data, ::UnityEngine::Material* material, int32_t passIndex);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Blit, addr 0x6c9ab14, size 0x4, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> data, ::UnityEngine::Rendering::RTHandle* source,
                   ::UnityEngine::Material* material, int32_t passIndex);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Blit, addr 0x6c9ab0c, size 0x4, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Material* material,
                   int32_t passIndex);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Configure, addr 0x6c9ab00, size 0x4, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureClear, addr 0x6c9aaf8, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureClear(::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureColorStoreAction, addr 0x6c9aad8, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureColorStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction storeAction, uint32_t attachmentIndex);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureColorStoreActions, addr 0x6c9aadc, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> storeActions);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureDepthStoreAction, addr 0x6c9aae0, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction storeAction);

  /// @brief Method ConfigureInput, addr 0x6c9abc8, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureInput(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput passInput);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureTarget, addr 0x6c9aaf0, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RTHandle* colorAttachment);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureTarget, addr 0x6c9aae8, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureTarget(::UnityEngine::Rendering::RTHandle* colorAttachment, ::UnityEngine::Rendering::RTHandle* depthAttachment);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureTarget, addr 0x6c9aaf4, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorAttachments);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureTarget, addr 0x6c9aaec, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureTarget(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorAttachments, ::UnityEngine::Rendering::RTHandle* depthAttachment);

  /// @brief Method CreateDrawingSettings, addr 0x6c9adf8, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                         ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                         ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6c9ac90, size 0x168, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                         ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6c9b040, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                         ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                         ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                         ::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6c9aed8, size 0x168, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                         ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                         ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Execute, addr 0x6c9ab08, size 0x4, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief Method FrameCleanup, addr 0x6c9aa88, size 0xc, virtual true, abstract: false, final false
  inline void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetActiveDebugHandler, addr 0x6c9ab78, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::DebugHandler* GetActiveDebugHandler(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method GetRenderPassEventRange, addr 0x6c9b170, size 0x178, virtual false, abstract: false, final false
  static inline int32_t GetRenderPassEventRange(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderPass* New_ctor();

  /// @brief Method OnCameraCleanup, addr 0x6c9abd0, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method OnCameraSetup, addr 0x6c9aafc, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method OnFinishCameraStackRendering, addr 0x6c9ab04, size 0x4, virtual true, abstract: false, final false
  inline void OnFinishCameraStackRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method RecordRenderGraph, addr 0x6c9abd4, size 0xbc, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ResetTarget, addr 0x6c9aae4, size 0x4, virtual false, abstract: false, final false
  inline void ResetTarget();

  constexpr bool const& __cordl_internal_get__isBlitRenderPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isBlitRenderPass_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get__renderPassEvent_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get__renderPassEvent_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__renderPassQueueIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__renderPassQueueIndex_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> const& __cordl_internal_get__renderTargetFormat_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat>& __cordl_internal_get__renderTargetFormat_k__BackingField();

  constexpr bool const& __cordl_internal_get__requiresIntermediateTexture_k__BackingField() const;

  constexpr bool& __cordl_internal_get__requiresIntermediateTexture_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_m_ColorAttachmentIndices() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_m_ColorAttachmentIndices();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const& __cordl_internal_get_m_Input() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput& __cordl_internal_get_m_Input();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_m_InputAttachmentIndices() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_m_InputAttachmentIndices();

  constexpr ::StringW const& __cordl_internal_get_m_PassName() const;

  constexpr ::StringW& __cordl_internal_get_m_PassName();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfingSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfingSampler();

  constexpr void __cordl_internal_set__isBlitRenderPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__renderPassEvent_k__BackingField(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  constexpr void __cordl_internal_set__renderPassQueueIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__renderTargetFormat_k__BackingField(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value);

  constexpr void __cordl_internal_set__requiresIntermediateTexture_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ColorAttachmentIndices(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_m_Input(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);

  constexpr void __cordl_internal_set_m_InputAttachmentIndices(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_m_PassName(::StringW value);

  constexpr void __cordl_internal_set_m_ProfingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x6c8c628, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_k_CameraTarget();

  /// @brief Method get_clearColor, addr 0x6c9aac4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_clearColor();

  /// @brief Method get_clearFlag, addr 0x6c9aabc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ClearFlag get_clearFlag();

  /// @brief Method get_colorAttachmentHandle, addr 0x6c9aa9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_colorAttachmentHandle();

  /// @brief Method get_colorAttachmentHandles, addr 0x6c9aa94, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> get_colorAttachmentHandles();

  /// @brief Method get_colorStoreActions, addr 0x6c9aaac, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> get_colorStoreActions();

  /// @brief Method get_depthAttachmentHandle, addr 0x6c9aaa4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_depthAttachmentHandle();

  /// @brief Method get_depthStoreAction, addr 0x6c9aab4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderBufferStoreAction get_depthStoreAction();

  /// @brief Method get_input, addr 0x6c9ab28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput get_input();

  /// [CompilerGenerated]
  /// @brief Method get_isBlitRenderPass, addr 0x6c9ab48, size 0x8, virtual false, abstract: false, final false
  inline bool get_isBlitRenderPass();

  /// @brief Method get_passName, addr 0x6c9ab40, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_passName();

  /// @brief Method get_profilingSampler, addr 0x6c8e310, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* get_profilingSampler();

  /// [CompilerGenerated]
  /// @brief Method get_renderPassEvent, addr 0x6c9ab18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderPassEvent get_renderPassEvent();

  /// [CompilerGenerated]
  /// @brief Method get_renderPassQueueIndex, addr 0x6c9ab58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderPassQueueIndex();

  /// [CompilerGenerated]
  /// @brief Method get_renderTargetFormat, addr 0x6c9ab68, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> get_renderTargetFormat();

  /// [CompilerGenerated]
  /// @brief Method get_requiresIntermediateTexture, addr 0x6c9ab30, size 0x8, virtual false, abstract: false, final false
  inline bool get_requiresIntermediateTexture();

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphRecorder* i___UnityEngine__Rendering__RenderGraphModule__IRenderGraphRecorder() noexcept;

  /// @brief Method op_GreaterThan, addr 0x6c9b148, size 0x28, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs);

  /// @brief Method op_LessThan, addr 0x6c9b120, size 0x28, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lhs, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* rhs);

  static inline void setStaticF_k_CameraTarget(::UnityEngine::Rendering::RTHandle* value);

  /// [CompilerGenerated]
  /// @brief Method set_isBlitRenderPass, addr 0x6c9ab50, size 0x8, virtual false, abstract: false, final false
  inline void set_isBlitRenderPass(bool value);

  /// @brief Method set_profilingSampler, addr 0x6c8c6bc, size 0x44, virtual false, abstract: false, final false
  inline void set_profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// [CompilerGenerated]
  /// @brief Method set_renderPassEvent, addr 0x6c9ab20, size 0x8, virtual false, abstract: false, final false
  inline void set_renderPassEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  /// [CompilerGenerated]
  /// @brief Method set_renderPassQueueIndex, addr 0x6c9ab60, size 0x8, virtual false, abstract: false, final false
  inline void set_renderPassQueueIndex(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_renderTargetFormat, addr 0x6c9ab70, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTargetFormat(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> value);

  /// [CompilerGenerated]
  /// @brief Method set_requiresIntermediateTexture, addr 0x6c9ab38, size 0x8, virtual false, abstract: false, final false
  inline void set_requiresIntermediateTexture(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderPass(ScriptableRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderPass(ScriptableRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12934 };

  /// [CompilerGenerated]
  /// @brief Field <renderPassEvent>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ____renderPassEvent_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <requiresIntermediateTexture>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____requiresIntermediateTexture_k__BackingField;

  /// @brief Field m_ProfingSampler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfingSampler;

  /// @brief Field m_PassName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_PassName;

  /// [CompilerGenerated]
  /// @brief Field <isBlitRenderPass>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____isBlitRenderPass_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <renderPassQueueIndex>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____renderPassQueueIndex_k__BackingField;

  /// @brief Field m_ColorAttachmentIndices, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___m_ColorAttachmentIndices;

  /// @brief Field m_InputAttachmentIndices, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___m_InputAttachmentIndices;

  /// [CompilerGenerated]
  /// @brief Field <renderTargetFormat>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat> ____renderTargetFormat_k__BackingField;

  /// @brief Field m_Input, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput ___m_Input;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderPassEvent_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____requiresIntermediateTexture_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ProfingSampler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_PassName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____isBlitRenderPass_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderPassQueueIndex_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_ColorAttachmentIndices) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_InputAttachmentIndices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ____renderTargetFormat_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderPass, ___m_Input) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderPass) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
