#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderContext)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ComputeQueueType;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
struct GizmoSubset;
}
namespace UnityEngine::Rendering {
struct LightShadowCasterCullingInfo;
}
namespace UnityEngine::Rendering {
struct RendererListParams;
}
namespace UnityEngine::Rendering {
struct RendererListStatus;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext_CullShadowCastersContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct ShadowCastersCullingInfos;
}
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
namespace UnityEngine::Rendering {
struct SortingSettings;
}
namespace UnityEngine::Rendering {
struct UISubset;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext_CullShadowCastersContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ScriptableRenderContext);
MARK_VAL_T(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext);
// Dependencies System.IntPtr
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableRenderContext/CullShadowCastersContext
struct CORDL_TYPE ScriptableRenderContext_CullShadowCastersContext {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderContext_CullShadowCastersContext();

  // Ctor Parameters [CppParam { name: "cullResults", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "splitBuffer", ty: "::UnityEngine::Rendering::ShadowSplitData*",
  // modifiers: "", def_value: None }, CppParam { name: "splitBufferLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "perLightInfos", ty:
  // "::UnityEngine::Rendering::LightShadowCasterCullingInfo*", modifiers: "", def_value: None }, CppParam { name: "perLightInfoCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScriptableRenderContext_CullShadowCastersContext(::System::IntPtr cullResults, ::UnityEngine::Rendering::ShadowSplitData* splitBuffer, int32_t splitBufferLength,
                                                             ::UnityEngine::Rendering::LightShadowCasterCullingInfo* perLightInfos, int32_t perLightInfoCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10806 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field cullResults, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr cullResults;

  /// @brief Field splitBuffer, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ShadowSplitData* splitBuffer;

  /// @brief Field splitBufferLength, offset: 0x10, size: 0x4, def value: None
  int32_t splitBufferLength;

  /// @brief Field perLightInfos, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::LightShadowCasterCullingInfo* perLightInfos;

  /// @brief Field perLightInfoCount, offset: 0x20, size: 0x4, def value: None
  int32_t perLightInfoCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext, cullResults) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext, splitBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext, splitBufferLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext, perLightInfos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext, perLightInfoCount) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, UnityEngine.Rendering.ShaderTagId
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ScriptableRenderContext
struct CORDL_TYPE ScriptableRenderContext {
public:
  // Declarations
  using CullShadowCastersContext = ::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext;

  /// @brief Field kRenderTypeTag, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kRenderTypeTag, put = setStaticF_kRenderTypeTag)) ::UnityEngine::Rendering::ShaderTagId kRenderTypeTag;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>*();

  /// @brief Method BeginRenderPass, addr 0x695b914, size 0xdc, virtual false, abstract: false, final false
  inline void BeginRenderPass(int32_t width, int32_t height, int32_t samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments,
                              int32_t depthAttachmentIndex);

  /// @brief Method BeginRenderPass_Internal, addr 0x695a4fc, size 0x8c, virtual false, abstract: false, final false
  static inline void BeginRenderPass_Internal(::System::IntPtr self, int32_t width, int32_t height, int32_t volumeDepth, int32_t samples, ::System::IntPtr colors, int32_t colorCount,
                                              int32_t depthAttachmentIndex);

  /// @brief Method BeginSubPass, addr 0x695b9f0, size 0xd4, virtual false, abstract: false, final false
  inline void BeginSubPass(::Unity::Collections::NativeArray_1<int32_t> colors, ::Unity::Collections::NativeArray_1<int32_t> inputs, bool isDepthStencilReadOnly);

  /// @brief Method BeginSubPass, addr 0x695bac4, size 0xc4, virtual false, abstract: false, final false
  inline void BeginSubPass(::Unity::Collections::NativeArray_1<int32_t> colors, bool isDepthStencilReadOnly);

  /// @brief Method BeginSubPass_Internal, addr 0x695a588, size 0x84, virtual false, abstract: false, final false
  static inline void BeginSubPass_Internal(::System::IntPtr self, ::System::IntPtr colors, int32_t colorCount, ::System::IntPtr inputs, int32_t inputCount, bool isDepthReadOnly,
                                           bool isStencilReadOnly);

  /// @brief Method CreateGizmoRendererList, addr 0x695c9a8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateGizmoRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::GizmoSubset gizmoSubset);

  /// @brief Method CreateGizmoRendererList_Internal, addr 0x695b3c8, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateGizmoRendererList_Internal(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::GizmoSubset gizmoSubset);

  /// @brief Method CreateGizmoRendererList_Internal_Injected, addr 0x695b4dc, size 0x5c, virtual false, abstract: false, final false
  static inline void CreateGizmoRendererList_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera,
                                                               ::UnityEngine::Rendering::GizmoSubset gizmoSubset, ::ByRef<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateRendererList, addr 0x695c3a8, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateRendererList(::ByRef<::UnityEngine::Rendering::RendererListParams> param);

  /// @brief Method CreateRendererList_Internal, addr 0x695af48, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateRendererList_Internal(::System::IntPtr cullResults, ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                            ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings, ::UnityEngine::Rendering::ShaderTagId tagName,
                                                                            bool isPassTagName, ::System::IntPtr tagValues, ::System::IntPtr stateBlocks, int32_t stateCount);

  /// @brief Method CreateRendererList_Internal_Injected, addr 0x695b04c, size 0xa4, virtual false, abstract: false, final false
  static inline void CreateRendererList_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr cullResults,
                                                          ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                          ::ByRef<::UnityEngine::Rendering::ShaderTagId> tagName, bool isPassTagName, ::System::IntPtr tagValues, ::System::IntPtr stateBlocks,
                                                          int32_t stateCount, ::ByRef<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateShadowRendererList, addr 0x695c4d0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateShadowRendererList(::ByRef<::UnityEngine::Rendering::ShadowDrawingSettings> settings);

  /// @brief Method CreateShadowRendererList_Internal, addr 0x695b0f0, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateShadowRendererList_Internal(::System::IntPtr shadowDrawinSettings);

  /// @brief Method CreateShadowRendererList_Internal_Injected, addr 0x695b1a4, size 0x54, virtual false, abstract: false, final false
  static inline void CreateShadowRendererList_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr shadowDrawinSettings,
                                                                ::ByRef<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateSkyboxRendererList, addr 0x695c838, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera* camera);

  /// @brief Method CreateSkyboxRendererList, addr 0x695c6bc, size 0x17c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix);

  /// @brief Method CreateSkyboxRendererList, addr 0x695c564, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Matrix4x4 projectionMatrixL, ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                         ::UnityEngine::Matrix4x4 projectionMatrixR, ::UnityEngine::Matrix4x4 viewMatrixR);

  /// @brief Method CreateSkyboxRendererList_Internal, addr 0x695b1f8, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList_Internal(::UnityEngine::Camera* camera, int32_t mode, ::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view,
                                                                                  ::UnityEngine::Matrix4x4 projR, ::UnityEngine::Matrix4x4 viewR);

  /// @brief Method CreateSkyboxRendererList_Internal_Injected, addr 0x695b33c, size 0x8c, virtual false, abstract: false, final false
  static inline void CreateSkyboxRendererList_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera, int32_t mode,
                                                                ::ByRef<::UnityEngine::Matrix4x4> proj, ::ByRef<::UnityEngine::Matrix4x4> view, ::ByRef<::UnityEngine::Matrix4x4> projR,
                                                                ::ByRef<::UnityEngine::Matrix4x4> viewR, ::ByRef<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateUIOverlayRendererList, addr 0x695ca48, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateUIOverlayRendererList(::UnityEngine::Camera* camera);

  /// @brief Method CreateUIOverlayRendererList, addr 0x695cae0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateUIOverlayRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::UISubset uiSubset);

  /// @brief Method CreateUIOverlayRendererList_Internal, addr 0x695b538, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateUIOverlayRendererList_Internal(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::UISubset uiSubset);

  /// @brief Method CreateUIOverlayRendererList_Internal_Injected, addr 0x695b64c, size 0x5c, virtual false, abstract: false, final false
  static inline void CreateUIOverlayRendererList_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera,
                                                                   ::UnityEngine::Rendering::UISubset uiSubset, ::ByRef<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateWireOverlayRendererList, addr 0x695cb80, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateWireOverlayRendererList(::UnityEngine::Camera* camera);

  /// @brief Method CreateWireOverlayRendererList_Internal, addr 0x695b6a8, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateWireOverlayRendererList_Internal(::UnityEngine::Camera* camera);

  /// @brief Method CreateWireOverlayRendererList_Internal_Injected, addr 0x695b7b0, size 0x54, virtual false, abstract: false, final false
  static inline void CreateWireOverlayRendererList_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera,
                                                                     ::ByRef<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method Cull, addr 0x695c120, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CullingResults Cull(::ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> parameters);

  /// @brief Method CullShadowCasters, addr 0x695c1a4, size 0xc8, virtual false, abstract: false, final false
  inline void CullShadowCasters(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::ShadowCastersCullingInfos infos);

  /// @brief Method DrawWireOverlay, addr 0x695c0b8, size 0x68, virtual false, abstract: false, final false
  inline void DrawWireOverlay(::UnityEngine::Camera* camera);

  /// @brief Method DrawWireOverlay_Impl, addr 0x695ae20, size 0xdc, virtual false, abstract: false, final false
  inline void DrawWireOverlay_Impl(::UnityEngine::Camera* camera);

  /// @brief Method DrawWireOverlay_Impl_Injected, addr 0x695aefc, size 0x44, virtual false, abstract: false, final false
  static inline void DrawWireOverlay_Impl_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera);

  /// @brief Method EmitGeometryForCamera, addr 0x695aa2c, size 0xa8, virtual false, abstract: false, final false
  static inline void EmitGeometryForCamera(::UnityEngine::Camera* camera);

  /// @brief Method EmitGeometryForCamera_Injected, addr 0x695aad4, size 0x3c, virtual false, abstract: false, final false
  static inline void EmitGeometryForCamera_Injected(::System::IntPtr camera);

  /// @brief Method EndRenderPass, addr 0x695bc04, size 0x7c, virtual false, abstract: false, final false
  inline void EndRenderPass();

  /// @brief Method EndRenderPass_Internal, addr 0x695a648, size 0x3c, virtual false, abstract: false, final false
  static inline void EndRenderPass_Internal(::System::IntPtr self);

  /// @brief Method EndSubPass, addr 0x695bb88, size 0x7c, virtual false, abstract: false, final false
  inline void EndSubPass();

  /// @brief Method EndSubPass_Internal, addr 0x695a60c, size 0x3c, virtual false, abstract: false, final false
  static inline void EndSubPass_Internal(::System::IntPtr self);

  /// @brief Method Equals, addr 0x695c2c4, size 0xdc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x695c26c, size 0x58, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ScriptableRenderContext other);

  /// @brief Method ExecuteCommandBuffer, addr 0x695bddc, size 0xf0, virtual false, abstract: false, final false
  inline void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method ExecuteCommandBufferAsync, addr 0x695becc, size 0xf8, virtual false, abstract: false, final false
  inline void ExecuteCommandBufferAsync(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method ExecuteCommandBufferAsync_Internal, addr 0x695abe4, size 0x98, virtual false, abstract: false, final false
  inline void ExecuteCommandBufferAsync_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method ExecuteCommandBufferAsync_Internal_Injected, addr 0x695ac7c, size 0x54, virtual false, abstract: false, final false
  static inline void ExecuteCommandBufferAsync_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr commandBuffer,
                                                                 ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method ExecuteCommandBuffer_Internal, addr 0x695ab10, size 0x90, virtual false, abstract: false, final false
  inline void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method ExecuteCommandBuffer_Internal_Injected, addr 0x695aba0, size 0x44, virtual false, abstract: false, final false
  static inline void ExecuteCommandBuffer_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr commandBuffer);

  /// @brief Method GetCameras, addr 0x6958f2c, size 0xd0, virtual false, abstract: false, final false
  inline void GetCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* results);

  /// @brief Method GetCameras_Internal, addr 0x695a9d8, size 0x54, virtual false, abstract: false, final false
  inline void GetCameras_Internal(::System::Type* listType, ::System::Object* resultList);

  /// @brief Method GetHashCode, addr 0x695c3a0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method HasInvokeOnRenderObjectCallbacks, addr 0x695bd70, size 0x6c, virtual false, abstract: false, final false
  inline bool HasInvokeOnRenderObjectCallbacks();

  /// @brief Method HasInvokeOnRenderObjectCallbacks_Internal, addr 0x695a684, size 0x28, virtual false, abstract: false, final false
  static inline bool HasInvokeOnRenderObjectCallbacks_Internal();

  /// @brief Method InitializeSortSettings, addr 0x695a864, size 0xb8, virtual false, abstract: false, final false
  static inline void InitializeSortSettings(::UnityEngine::Camera* camera, ::ByRef<::UnityEngine::Rendering::SortingSettings> sortingSettings);

  /// @brief Method InitializeSortSettings_Injected, addr 0x695a91c, size 0x44, virtual false, abstract: false, final false
  static inline void InitializeSortSettings_Injected(::System::IntPtr camera, ::ByRef<::UnityEngine::Rendering::SortingSettings> sortingSettings);

  /// @brief Method Internal_Cull, addr 0x695a6ac, size 0x94, virtual false, abstract: false, final false
  static inline void Internal_Cull(::ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> parameters, ::UnityEngine::Rendering::ScriptableRenderContext renderLoop, ::System::IntPtr results);

  /// @brief Method Internal_CullShadowCasters, addr 0x695a794, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_CullShadowCasters(::UnityEngine::Rendering::ScriptableRenderContext renderLoop, ::System::IntPtr context);

  /// @brief Method Internal_CullShadowCasters_Injected, addr 0x695a820, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CullShadowCasters_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> renderLoop, ::System::IntPtr context);

  /// @brief Method Internal_Cull_Injected, addr 0x695a740, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_Cull_Injected(::ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> parameters, ::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> renderLoop,
                                            ::System::IntPtr results);

  /// @brief Method Internal_GetPtr, addr 0x695af40, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr Internal_GetPtr();

  /// @brief Method PrepareRendererListsAsync, addr 0x695cc14, size 0x88, virtual false, abstract: false, final false
  inline void PrepareRendererListsAsync(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* rendererLists);

  /// @brief Method PrepareRendererListsAsync_Internal, addr 0x695b804, size 0x44, virtual false, abstract: false, final false
  inline void PrepareRendererListsAsync_Internal(::System::Object* rendererLists);

  /// @brief Method QueryRendererListStatus, addr 0x695cc9c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus(::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method QueryRendererListStatus_Internal, addr 0x695b848, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus_Internal(::UnityEngine::Rendering::RendererList handle);

  /// @brief Method QueryRendererListStatus_Internal_Injected, addr 0x695b8d0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                       ::ByRef<::UnityEngine::Rendering::RendererList> handle);

  /// @brief Method SetupCameraProperties, addr 0x695bfc4, size 0x74, virtual false, abstract: false, final false
  inline void SetupCameraProperties(::UnityEngine::Camera* camera, bool stereoSetup);

  /// @brief Method SetupCameraProperties, addr 0x695c038, size 0x80, virtual false, abstract: false, final false
  inline void SetupCameraProperties(::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye);

  /// @brief Method SetupCameraProperties_Internal, addr 0x695acd0, size 0xf4, virtual false, abstract: false, final false
  inline void SetupCameraProperties_Internal(::UnityEngine::Camera* camera, bool stereoSetup, int32_t eye);

  /// @brief Method SetupCameraProperties_Internal_Injected, addr 0x695adc4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetupCameraProperties_Internal_Injected(::ByRef<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera, bool stereoSetup, int32_t eye);

  /// @brief Method Submit, addr 0x695bc80, size 0x78, virtual false, abstract: false, final false
  inline void Submit();

  /// @brief Method SubmitForRenderPassValidation, addr 0x695bcf8, size 0x78, virtual false, abstract: false, final false
  inline bool SubmitForRenderPassValidation();

  /// @brief Method SubmitForRenderPassValidation_Internal, addr 0x695a99c, size 0x3c, virtual false, abstract: false, final false
  inline bool SubmitForRenderPassValidation_Internal();

  /// @brief Method Submit_Internal, addr 0x695a960, size 0x3c, virtual false, abstract: false, final false
  inline void Submit_Internal();

  /// @brief Method .ctor, addr 0x6958f24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_kRenderTypeTag();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>* i___System__IEquatable_1___UnityEngine__Rendering__ScriptableRenderContext_();

  static inline void setStaticF_kRenderTypeTag(::UnityEngine::Rendering::ShaderTagId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderContext();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr ScriptableRenderContext(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10807 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ScriptableRenderContext, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext, "UnityEngine.Rendering", "ScriptableRenderContext/CullShadowCastersContext");
