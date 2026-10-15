#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext, "UnityEngine.Rendering", "ScriptableRenderContext/CullShadowCastersContext");
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

  // Ctor Parameters [CppParam { name: "cullResults", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitBuffer", ty:
  // "::UnityEngine::Rendering::ShadowSplitData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "splitBufferLength", ty: "int32_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "perLightInfos", ty: "::UnityEngine::Rendering::LightShadowCasterCullingInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "perLightInfoCount", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ScriptableRenderContext_CullShadowCastersContext(::System::IntPtr cullResults, ::UnityEngine::Rendering::ShadowSplitData* splitBuffer, int32_t splitBufferLength,
                                                             ::UnityEngine::Rendering::LightShadowCasterCullingInfo* perLightInfos, int32_t perLightInfoCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10442 };

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

static_assert(sizeof(::UnityEngine::Rendering::ScriptableRenderContext_CullShadowCastersContext) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderContext.bindings.h")]
// [NativeHeader("Modules/UI/CanvasManager.h")]
// [NativeHeader("Modules/UI/Canvas.h")]
// [NativeType("Runtime/Graphics/ScriptableRenderLoop/ScriptableRenderContext.h")]
// [NativeHeader("Runtime/Graphics/ScriptableRenderLoop/ScriptableDrawRenderersUtility.h")]
// [NativeHeader("Runtime/Export/RenderPipeline/ScriptableRenderPipeline.bindings.h")]
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

  /// @brief Method CreateGizmoRendererList, addr 0x6fc1ff4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateGizmoRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::GizmoSubset gizmoSubset);

  /// @brief Method CreateGizmoRendererList_Internal, addr 0x6fc0f54, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateGizmoRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::GizmoSubset gizmoSubset);

  /// @brief Method CreateGizmoRendererList_Internal_Injected, addr 0x6fc1068, size 0x5c, virtual false, abstract: false, final false
  static inline void CreateGizmoRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera,
                                                               ::UnityEngine::Rendering::GizmoSubset gizmoSubset, ::by_ref<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateRendererList, addr 0x6fc19f4, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateRendererList(::by_ref<::UnityEngine::Rendering::RendererListParams> param);

  /// @brief Method CreateRendererList_Internal, addr 0x6fc0ad4, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateRendererList_Internal(::System::IntPtr cullResults, ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                            ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings, ::UnityEngine::Rendering::ShaderTagId tagName,
                                                                            bool isPassTagName, ::System::IntPtr tagValues, ::System::IntPtr stateBlocks, int32_t stateCount);

  /// @brief Method CreateRendererList_Internal_Injected, addr 0x6fc0bd8, size 0xa4, virtual false, abstract: false, final false
  static inline void CreateRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr cullResults,
                                                          ::by_ref<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ::by_ref<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                          ::by_ref<::UnityEngine::Rendering::ShaderTagId const> tagName, bool isPassTagName, ::System::IntPtr tagValues, ::System::IntPtr stateBlocks,
                                                          int32_t stateCount, ::by_ref<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateShadowRendererList, addr 0x6fc1b1c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateShadowRendererList(::by_ref<::UnityEngine::Rendering::ShadowDrawingSettings> settings);

  /// @brief Method CreateShadowRendererList_Internal, addr 0x6fc0c7c, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateShadowRendererList_Internal(::System::IntPtr shadowDrawinSettings);

  /// @brief Method CreateShadowRendererList_Internal_Injected, addr 0x6fc0d30, size 0x54, virtual false, abstract: false, final false
  static inline void CreateShadowRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr shadowDrawinSettings,
                                                                ::by_ref<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateSkyboxRendererList, addr 0x6fc1e84, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera* camera);

  /// @brief Method CreateSkyboxRendererList, addr 0x6fc1d08, size 0x17c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 viewMatrix);

  /// @brief Method CreateSkyboxRendererList, addr 0x6fc1bb0, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Matrix4x4 projectionMatrixL, ::UnityEngine::Matrix4x4 viewMatrixL,
                                                                         ::UnityEngine::Matrix4x4 projectionMatrixR, ::UnityEngine::Matrix4x4 viewMatrixR);

  /// @brief Method CreateSkyboxRendererList_Internal, addr 0x6fc0d84, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera, int32_t mode, ::UnityEngine::Matrix4x4 proj,
                                                                                  ::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 projR, ::UnityEngine::Matrix4x4 viewR);

  /// @brief Method CreateSkyboxRendererList_Internal_Injected, addr 0x6fc0ec8, size 0x8c, virtual false, abstract: false, final false
  static inline void CreateSkyboxRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera, int32_t mode,
                                                                ::by_ref<::UnityEngine::Matrix4x4 const> proj, ::by_ref<::UnityEngine::Matrix4x4 const> view,
                                                                ::by_ref<::UnityEngine::Matrix4x4 const> projR, ::by_ref<::UnityEngine::Matrix4x4 const> viewR,
                                                                ::by_ref<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateUIOverlayRendererList, addr 0x6fc2094, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateUIOverlayRendererList(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::UISubset uiSubset);

  /// @brief Method CreateUIOverlayRendererList_Internal, addr 0x6fc10c4, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateUIOverlayRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::UISubset uiSubset);

  /// @brief Method CreateUIOverlayRendererList_Internal_Injected, addr 0x6fc11d8, size 0x5c, virtual false, abstract: false, final false
  static inline void CreateUIOverlayRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera,
                                                                   ::UnityEngine::Rendering::UISubset uiSubset, ::by_ref<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method CreateWireOverlayRendererList, addr 0x6fc2134, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateWireOverlayRendererList(::UnityEngine::Camera* camera);

  /// @brief Method CreateWireOverlayRendererList_Internal, addr 0x6fc1234, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateWireOverlayRendererList_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera);

  /// @brief Method CreateWireOverlayRendererList_Internal_Injected, addr 0x6fc133c, size 0x54, virtual false, abstract: false, final false
  static inline void CreateWireOverlayRendererList_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr camera,
                                                                     ::by_ref<::UnityEngine::Rendering::RendererList> ret);

  /// @brief Method Cull, addr 0x6fc176c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CullingResults Cull(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> parameters);

  /// @brief Method CullShadowCasters, addr 0x6fc17f0, size 0xc8, virtual false, abstract: false, final false
  inline void CullShadowCasters(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::ShadowCastersCullingInfos infos);

  /// [FreeFunction("PlayerEmitCanvasGeometryForCamera")]
  /// @brief Method EmitGeometryForCamera, addr 0x6fc0828, size 0xa8, virtual false, abstract: false, final false
  static inline void EmitGeometryForCamera(::UnityEngine::Camera* camera);

  /// @brief Method EmitGeometryForCamera_Injected, addr 0x6fc08d0, size 0x3c, virtual false, abstract: false, final false
  static inline void EmitGeometryForCamera_Injected(::System::IntPtr camera);

  /// @brief Method Equals, addr 0x6fc1910, size 0xdc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6fc18b8, size 0x58, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ScriptableRenderContext other);

  /// @brief Method ExecuteCommandBuffer, addr 0x6fc1584, size 0xf0, virtual false, abstract: false, final false
  inline void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method ExecuteCommandBufferAsync, addr 0x6fc1674, size 0xf8, virtual false, abstract: false, final false
  inline void ExecuteCommandBufferAsync(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// [NativeThrows]
  /// @brief Method ExecuteCommandBufferAsync_Internal, addr 0x6fc09e0, size 0x98, virtual false, abstract: false, final false
  inline void ExecuteCommandBufferAsync_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// @brief Method ExecuteCommandBufferAsync_Internal_Injected, addr 0x6fc0a78, size 0x54, virtual false, abstract: false, final false
  static inline void ExecuteCommandBufferAsync_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr commandBuffer,
                                                                 ::UnityEngine::Rendering::ComputeQueueType queueType);

  /// [NativeThrows]
  /// @brief Method ExecuteCommandBuffer_Internal, addr 0x6fc090c, size 0x90, virtual false, abstract: false, final false
  inline void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

  /// @brief Method ExecuteCommandBuffer_Internal_Injected, addr 0x6fc099c, size 0x44, virtual false, abstract: false, final false
  static inline void ExecuteCommandBuffer_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self, ::System::IntPtr commandBuffer);

  /// @brief Method GetCameras, addr 0x6fbefa0, size 0xd0, virtual false, abstract: false, final false
  inline void GetCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* results);

  /// @brief Method GetCameras_Internal, addr 0x6fc07d4, size 0x54, virtual false, abstract: false, final false
  inline void GetCameras_Internal(::System::Type* listType, ::System::Object* resultList);

  /// @brief Method GetHashCode, addr 0x6fc19ec, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method HasInvokeOnRenderObjectCallbacks, addr 0x6fc1518, size 0x6c, virtual false, abstract: false, final false
  inline bool HasInvokeOnRenderObjectCallbacks();

  /// [FreeFunction("ScriptableRenderContext::HasInvokeOnRenderObjectCallbacks")]
  /// @brief Method HasInvokeOnRenderObjectCallbacks_Internal, addr 0x6fc04bc, size 0x28, virtual false, abstract: false, final false
  static inline bool HasInvokeOnRenderObjectCallbacks_Internal();

  /// [FreeFunction("InitializeSortSettings")]
  /// @brief Method InitializeSortSettings, addr 0x6fc069c, size 0xb8, virtual false, abstract: false, final false
  static inline void InitializeSortSettings(::UnityEngine::Camera* camera, ::by_ref<::UnityEngine::Rendering::SortingSettings> sortingSettings);

  /// @brief Method InitializeSortSettings_Injected, addr 0x6fc0754, size 0x44, virtual false, abstract: false, final false
  static inline void InitializeSortSettings_Injected(::System::IntPtr camera, ::by_ref<::UnityEngine::Rendering::SortingSettings> sortingSettings);

  /// [FreeFunction("ScriptableRenderPipeline_Bindings::Internal_Cull")]
  /// @brief Method Internal_Cull, addr 0x6fc04e4, size 0x94, virtual false, abstract: false, final false
  static inline void Internal_Cull(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> parameters, ::UnityEngine::Rendering::ScriptableRenderContext renderLoop, ::System::IntPtr results);

  /// [FreeFunction("ScriptableRenderPipeline_Bindings::Internal_CullShadowCasters")]
  /// @brief Method Internal_CullShadowCasters, addr 0x6fc05cc, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_CullShadowCasters(::UnityEngine::Rendering::ScriptableRenderContext renderLoop, ::System::IntPtr context);

  /// @brief Method Internal_CullShadowCasters_Injected, addr 0x6fc0658, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CullShadowCasters_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const> renderLoop, ::System::IntPtr context);

  /// @brief Method Internal_Cull_Injected, addr 0x6fc0578, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_Cull_Injected(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> parameters, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const> renderLoop,
                                            ::System::IntPtr results);

  /// @brief Method Internal_GetPtr, addr 0x6fc0acc, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr Internal_GetPtr();

  /// @brief Method PrepareRendererListsAsync, addr 0x6fc21c8, size 0x88, virtual false, abstract: false, final false
  inline void PrepareRendererListsAsync(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* rendererLists);

  /// @brief Method PrepareRendererListsAsync_Internal, addr 0x6fc1390, size 0x44, virtual false, abstract: false, final false
  inline void PrepareRendererListsAsync_Internal(::System::Object* rendererLists);

  /// @brief Method QueryRendererListStatus, addr 0x6fc2250, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus(::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method QueryRendererListStatus_Internal, addr 0x6fc13d4, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus_Internal(::UnityEngine::Rendering::RendererList handle);

  /// @brief Method QueryRendererListStatus_Internal_Injected, addr 0x6fc145c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RendererListStatus QueryRendererListStatus_Internal_Injected(::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> _unity_self,
                                                                                                       ::by_ref<::UnityEngine::Rendering::RendererList const> handle);

  /// @brief Method Submit, addr 0x6fc14a0, size 0x78, virtual false, abstract: false, final false
  inline void Submit();

  /// @brief Method Submit_Internal, addr 0x6fc0798, size 0x3c, virtual false, abstract: false, final false
  inline void Submit_Internal();

  /// @brief Method .ctor, addr 0x6fbef98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr ptr);

  static inline ::UnityEngine::Rendering::ShaderTagId getStaticF_kRenderTypeTag();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ScriptableRenderContext>* i___System__IEquatable_1___UnityEngine__Rendering__ScriptableRenderContext_();

  static inline void setStaticF_kRenderTypeTag(::UnityEngine::Rendering::ShaderTagId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderContext();

  // Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
  constexpr ScriptableRenderContext(::System::IntPtr m_Ptr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10443 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field deprecateDrawXmethods offset 0xffffffff size 0x1
  static constexpr bool deprecateDrawXmethods{ false };

  /// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ScriptableRenderContext, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::ScriptableRenderContext) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering
