#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderer)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
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
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct CameraRenderType;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering::Universal {
struct FramebufferFetchEvent;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_ScriptableRenderer_RenderBlock;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_ScriptableRenderer_RenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderBlocks_ScriptableRenderer_BlockRange;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_BeginXRPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DrawGizmosPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DrawWireOverlayPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DummyData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_EndXRPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_Profiling;
}
namespace UnityEngine::Rendering::Universal {
struct ScriptableRenderer_RenderBlocks;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_RenderPassBlock;
}
namespace UnityEngine::Rendering::Universal {
struct ScriptableRenderer_RenderPassDescriptor;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_RenderingFeatures;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_VFXProcessCameraPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
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
struct GizmoSubset;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
class IBaseCommandBuffer;
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
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Hash128;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Profiling_ScriptableRenderer_RenderBlock;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_ScriptableRenderer_RenderPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_BeginXRPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DrawGizmosPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DrawWireOverlayPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_DummyData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_EndXRPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_RenderPassBlock;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_RenderingFeatures;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer_VFXProcessCameraPassData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderBlocks_ScriptableRenderer_BlockRange;
}
namespace UnityEngine::Rendering::Universal {
struct ScriptableRenderer_RenderBlocks;
}
namespace UnityEngine::Rendering::Universal {
struct ScriptableRenderer_RenderPassDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRenderer___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderBlock
class CORDL_TYPE Profiling_ScriptableRenderer_RenderBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field afterRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_afterRendering, put = setStaticF_afterRendering)) ::UnityEngine::Rendering::ProfilingSampler* afterRendering;

  /// @brief Field beforeRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beforeRendering, put = setStaticF_beforeRendering)) ::UnityEngine::Rendering::ProfilingSampler* beforeRendering;

  /// @brief Field mainRenderingOpaque, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_mainRenderingOpaque, put = setStaticF_mainRenderingOpaque)) ::UnityEngine::Rendering::ProfilingSampler* mainRenderingOpaque;

  /// @brief Field mainRenderingTransparent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_mainRenderingTransparent, put = setStaticF_mainRenderingTransparent)) ::UnityEngine::Rendering::ProfilingSampler* mainRenderingTransparent;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_afterRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beforeRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_mainRenderingOpaque();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_mainRenderingTransparent();

  static inline void setStaticF_afterRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_beforeRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_mainRenderingOpaque(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_mainRenderingTransparent(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Profiling_ScriptableRenderer_RenderBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Profiling_ScriptableRenderer_RenderBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Profiling_ScriptableRenderer_RenderBlock(Profiling_ScriptableRenderer_RenderBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Profiling_ScriptableRenderer_RenderBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Profiling_ScriptableRenderer_RenderBlock(Profiling_ScriptableRenderer_RenderBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12693 };

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"RenderPassBlock" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling/RenderPass
class CORDL_TYPE Profiling_ScriptableRenderer_RenderPass : public ::System::Object {
public:
  // Declarations
  /// @brief Field configure, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_configure, put = setStaticF_configure)) ::UnityEngine::Rendering::ProfilingSampler* configure;

  /// @brief Field setRenderPassAttachments, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setRenderPassAttachments, put = setStaticF_setRenderPassAttachments)) ::UnityEngine::Rendering::ProfilingSampler* setRenderPassAttachments;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_configure();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setRenderPassAttachments();

  static inline void setStaticF_configure(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setRenderPassAttachments(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Profiling_ScriptableRenderer_RenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Profiling_ScriptableRenderer_RenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Profiling_ScriptableRenderer_RenderPass(Profiling_ScriptableRenderer_RenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Profiling_ScriptableRenderer_RenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Profiling_ScriptableRenderer_RenderPass(Profiling_ScriptableRenderer_RenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12694 };

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderPass" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling
class CORDL_TYPE ScriptableRenderer_Profiling : public ::System::Object {
public:
  // Declarations
  using RenderBlock = ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock;

  using RenderPass = ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass;

  /// @brief Field addRenderPasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_addRenderPasses, put = setStaticF_addRenderPasses)) ::UnityEngine::Rendering::ProfilingSampler* addRenderPasses;

  /// @brief Field beginXRRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beginXRRendering, put = setStaticF_beginXRRendering)) ::UnityEngine::Rendering::ProfilingSampler* beginXRRendering;

  /// @brief Field clearRenderingState, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_clearRenderingState, put = setStaticF_clearRenderingState)) ::UnityEngine::Rendering::ProfilingSampler* clearRenderingState;

  /// @brief Field drawGizmos, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_drawGizmos, put = setStaticF_drawGizmos)) ::UnityEngine::Rendering::ProfilingSampler* drawGizmos;

  /// @brief Field drawWireOverlay, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_drawWireOverlay, put = setStaticF_drawWireOverlay)) ::UnityEngine::Rendering::ProfilingSampler* drawWireOverlay;

  /// @brief Field endXRRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endXRRendering, put = setStaticF_endXRRendering)) ::UnityEngine::Rendering::ProfilingSampler* endXRRendering;

  /// @brief Field execute, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_execute, put = setStaticF_execute)) ::UnityEngine::Rendering::ProfilingSampler* execute;

  /// @brief Field initRenderGraphFrame, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initRenderGraphFrame, put = setStaticF_initRenderGraphFrame)) ::UnityEngine::Rendering::ProfilingSampler* initRenderGraphFrame;

  /// @brief Field internalFinishRenderingCommon, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_internalFinishRenderingCommon, put = setStaticF_internalFinishRenderingCommon)) ::UnityEngine::Rendering::ProfilingSampler* internalFinishRenderingCommon;

  /// @brief Field internalStartRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_internalStartRendering, put = setStaticF_internalStartRendering)) ::UnityEngine::Rendering::ProfilingSampler* internalStartRendering;

  /// @brief Field recordRenderGraph, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_recordRenderGraph, put = setStaticF_recordRenderGraph)) ::UnityEngine::Rendering::ProfilingSampler* recordRenderGraph;

  /// @brief Field setAttachmentList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setAttachmentList, put = setStaticF_setAttachmentList)) ::UnityEngine::Rendering::ProfilingSampler* setAttachmentList;

  /// @brief Field setEditorTarget, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setEditorTarget, put = setStaticF_setEditorTarget)) ::UnityEngine::Rendering::ProfilingSampler* setEditorTarget;

  /// @brief Field setMRTAttachmentsList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setMRTAttachmentsList, put = setStaticF_setMRTAttachmentsList)) ::UnityEngine::Rendering::ProfilingSampler* setMRTAttachmentsList;

  /// @brief Field setPerCameraShaderVariables, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setPerCameraShaderVariables, put = setStaticF_setPerCameraShaderVariables)) ::UnityEngine::Rendering::ProfilingSampler* setPerCameraShaderVariables;

  /// @brief Field setupCamera, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setupCamera, put = setStaticF_setupCamera)) ::UnityEngine::Rendering::ProfilingSampler* setupCamera;

  /// @brief Field setupFrameData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setupFrameData, put = setStaticF_setupFrameData)) ::UnityEngine::Rendering::ProfilingSampler* setupFrameData;

  /// @brief Field setupLights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setupLights, put = setStaticF_setupLights)) ::UnityEngine::Rendering::ProfilingSampler* setupLights;

  /// @brief Field setupRenderPasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setupRenderPasses, put = setStaticF_setupRenderPasses)) ::UnityEngine::Rendering::ProfilingSampler* setupRenderPasses;

  /// @brief Field sortRenderPasses, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sortRenderPasses, put = setStaticF_sortRenderPasses)) ::UnityEngine::Rendering::ProfilingSampler* sortRenderPasses;

  /// @brief Field vfxProcessCamera, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_vfxProcessCamera, put = setStaticF_vfxProcessCamera)) ::UnityEngine::Rendering::ProfilingSampler* vfxProcessCamera;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_addRenderPasses();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beginXRRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_clearRenderingState();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_drawGizmos();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_drawWireOverlay();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_endXRRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_execute();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initRenderGraphFrame();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_internalFinishRenderingCommon();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_internalStartRendering();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_recordRenderGraph();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setAttachmentList();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setEditorTarget();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setMRTAttachmentsList();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setPerCameraShaderVariables();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupCamera();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupFrameData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupLights();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupRenderPasses();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_sortRenderPasses();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_vfxProcessCamera();

  static inline void setStaticF_addRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_beginXRRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_clearRenderingState(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_drawGizmos(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_drawWireOverlay(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_endXRRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_execute(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initRenderGraphFrame(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_internalFinishRenderingCommon(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_internalStartRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_recordRenderGraph(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setAttachmentList(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setEditorTarget(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setMRTAttachmentsList(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setPerCameraShaderVariables(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupCamera(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupFrameData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupLights(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_sortRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_vfxProcessCamera(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_Profiling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_Profiling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_Profiling(ScriptableRenderer_Profiling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_Profiling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_Profiling(ScriptableRenderer_Profiling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12695 };

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassDescriptor
struct CORDL_TYPE ScriptableRenderer_RenderPassDescriptor {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x66bad78, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t width, int32_t height, int32_t sampleCount, int32_t rtID);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_RenderPassDescriptor();

  // Ctor Parameters [CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "samples", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "depthID", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ScriptableRenderer_RenderPassDescriptor(int32_t w, int32_t h, int32_t samples, int32_t depthID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12696 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field w, offset: 0x0, size: 0x4, def value: None
  int32_t w;

  /// @brief Field h, offset: 0x4, size: 0x4, def value: None
  int32_t h;

  /// @brief Field samples, offset: 0x8, size: 0x4, def value: None
  int32_t samples;

  /// @brief Field depthID, offset: 0xc, size: 0x4, def value: None
  int32_t depthID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor, w) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor, h) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor, samples) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor, depthID) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderingFeatures
class CORDL_TYPE ScriptableRenderer_RenderingFeatures : public ::System::Object {
public:
  // Declarations
  /// @brief Field <cameraStacking>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__cameraStacking_k__BackingField, put = __cordl_internal_set__cameraStacking_k__BackingField)) bool _cameraStacking_k__BackingField;

  /// @brief Field <msaa>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__msaa_k__BackingField, put = __cordl_internal_set__msaa_k__BackingField)) bool _msaa_k__BackingField;

  __declspec(property(get = get_cameraStacking, put = set_cameraStacking)) bool cameraStacking;

  __declspec(property(get = get_msaa, put = set_msaa)) bool msaa;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* New_ctor();

  constexpr bool const& __cordl_internal_get__cameraStacking_k__BackingField() const;

  constexpr bool& __cordl_internal_get__cameraStacking_k__BackingField();

  constexpr bool const& __cordl_internal_get__msaa_k__BackingField() const;

  constexpr bool& __cordl_internal_get__msaa_k__BackingField();

  constexpr void __cordl_internal_set__cameraStacking_k__BackingField(bool value);

  constexpr void __cordl_internal_set__msaa_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x66bada4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cameraStacking, addr 0x66bad84, size 0x8, virtual false, abstract: false, final false
  inline bool get_cameraStacking();

  /// @brief Method get_msaa, addr 0x66bad94, size 0x8, virtual false, abstract: false, final false
  inline bool get_msaa();

  /// @brief Method set_cameraStacking, addr 0x66bad8c, size 0x8, virtual false, abstract: false, final false
  inline void set_cameraStacking(bool value);

  /// @brief Method set_msaa, addr 0x66bad9c, size 0x8, virtual false, abstract: false, final false
  inline void set_msaa(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_RenderingFeatures();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderingFeatures", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_RenderingFeatures(ScriptableRenderer_RenderingFeatures&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderingFeatures", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_RenderingFeatures(ScriptableRenderer_RenderingFeatures const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12697 };

  /// @brief Field <cameraStacking>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____cameraStacking_k__BackingField;

  /// @brief Field <msaa>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____msaa_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures, ____cameraStacking_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures, ____msaa_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderPassBlock
class CORDL_TYPE ScriptableRenderer_RenderPassBlock : public ::System::Object {
public:
  // Declarations
  /// @brief Field AfterRendering, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AfterRendering, put = setStaticF_AfterRendering)) int32_t AfterRendering;

  /// @brief Field BeforeRendering, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BeforeRendering, put = setStaticF_BeforeRendering)) int32_t BeforeRendering;

  /// @brief Field MainRenderingOpaque, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MainRenderingOpaque, put = setStaticF_MainRenderingOpaque)) int32_t MainRenderingOpaque;

  /// @brief Field MainRenderingTransparent, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MainRenderingTransparent, put = setStaticF_MainRenderingTransparent)) int32_t MainRenderingTransparent;

  static inline int32_t getStaticF_AfterRendering();

  static inline int32_t getStaticF_BeforeRendering();

  static inline int32_t getStaticF_MainRenderingOpaque();

  static inline int32_t getStaticF_MainRenderingTransparent();

  static inline void setStaticF_AfterRendering(int32_t value);

  static inline void setStaticF_BeforeRendering(int32_t value);

  static inline void setStaticF_MainRenderingOpaque(int32_t value);

  static inline void setStaticF_MainRenderingTransparent(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_RenderPassBlock();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderPassBlock", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_RenderPassBlock(ScriptableRenderer_RenderPassBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderPassBlock", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_RenderPassBlock(ScriptableRenderer_RenderPassBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12698 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.VFX.VFXCameraXRSettings
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/VFXProcessCameraPassData
class CORDL_TYPE ScriptableRenderer_VFXProcessCameraPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field camera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field cameraXRSettings, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_cameraXRSettings, put = __cordl_internal_set_cameraXRSettings)) ::UnityEngine::VFX::VFXCameraXRSettings cameraXRSettings;

  /// @brief Field renderingData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_renderingData, put = __cordl_internal_set_renderingData)) ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData;

  /// @brief Field xrPass, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_xrPass, put = __cordl_internal_set_xrPass)) ::UnityEngine::Experimental::Rendering::XRPass* xrPass;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityEngine::VFX::VFXCameraXRSettings const& __cordl_internal_get_cameraXRSettings() const;

  constexpr ::UnityEngine::VFX::VFXCameraXRSettings& __cordl_internal_get_cameraXRSettings();

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const& __cordl_internal_get_renderingData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& __cordl_internal_get_renderingData();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xrPass() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xrPass();

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_cameraXRSettings(::UnityEngine::VFX::VFXCameraXRSettings value);

  constexpr void __cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData* value);

  constexpr void __cordl_internal_set_xrPass(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x66bae04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_VFXProcessCameraPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_VFXProcessCameraPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_VFXProcessCameraPassData(ScriptableRenderer_VFXProcessCameraPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_VFXProcessCameraPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_VFXProcessCameraPassData(ScriptableRenderer_VFXProcessCameraPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12699 };

  /// @brief Field renderingData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderingData* ___renderingData;

  /// @brief Field camera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field cameraXRSettings, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::VFX::VFXCameraXRSettings ___cameraXRSettings;

  /// @brief Field xrPass, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xrPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, ___renderingData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, ___camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, ___cameraXRSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, ___xrPass) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/DrawGizmosPassData
class CORDL_TYPE ScriptableRenderer_DrawGizmosPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field gizmoRenderList, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_gizmoRenderList, put = __cordl_internal_set_gizmoRenderList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle gizmoRenderList;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_gizmoRenderList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_gizmoRenderList();

  constexpr void __cordl_internal_set_gizmoRenderList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x66bae08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_DrawGizmosPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawGizmosPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_DrawGizmosPassData(ScriptableRenderer_DrawGizmosPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawGizmosPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_DrawGizmosPassData(ScriptableRenderer_DrawGizmosPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12700 };

  /// @brief Field gizmoRenderList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___gizmoRenderList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData, ___gizmoRenderList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/DrawWireOverlayPassData
class CORDL_TYPE ScriptableRenderer_DrawWireOverlayPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field wireOverlayList, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_wireOverlayList, put = __cordl_internal_set_wireOverlayList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle wireOverlayList;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_wireOverlayList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_wireOverlayList();

  constexpr void __cordl_internal_set_wireOverlayList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x66bae0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_DrawWireOverlayPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawWireOverlayPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_DrawWireOverlayPassData(ScriptableRenderer_DrawWireOverlayPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawWireOverlayPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_DrawWireOverlayPassData(ScriptableRenderer_DrawWireOverlayPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12701 };

  /// @brief Field wireOverlayList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___wireOverlayList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData, ___wireOverlayList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/BeginXRPassData
class CORDL_TYPE ScriptableRenderer_BeginXRPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  /// @brief Method .ctor, addr 0x66bae10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_BeginXRPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_BeginXRPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_BeginXRPassData(ScriptableRenderer_BeginXRPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_BeginXRPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_BeginXRPassData(ScriptableRenderer_BeginXRPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12702 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/EndXRPassData
class CORDL_TYPE ScriptableRenderer_EndXRPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  /// @brief Method .ctor, addr 0x66bae14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_EndXRPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_EndXRPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_EndXRPassData(ScriptableRenderer_EndXRPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_EndXRPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_EndXRPassData(ScriptableRenderer_EndXRPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12703 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/DummyData
class CORDL_TYPE ScriptableRenderer_DummyData : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData* New_ctor();

  /// @brief Method .ctor, addr 0x66bae18, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_DummyData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DummyData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_DummyData(ScriptableRenderer_DummyData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DummyData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_DummyData(ScriptableRenderer_DummyData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12704 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/PassData
class CORDL_TYPE ScriptableRenderer_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field cameraTargetSizeCopy, offset 0x24, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraTargetSizeCopy, put = __cordl_internal_set_cameraTargetSizeCopy)) ::UnityEngine::Vector2Int cameraTargetSizeCopy;

  /// @brief Field isTargetBackbuffer, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isTargetBackbuffer, put = __cordl_internal_set_isTargetBackbuffer)) bool isTargetBackbuffer;

  /// @brief Field renderer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_renderer, put = __cordl_internal_set_renderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_cameraTargetSizeCopy() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_cameraTargetSizeCopy();

  constexpr bool const& __cordl_internal_get_isTargetBackbuffer() const;

  constexpr bool& __cordl_internal_get_isTargetBackbuffer();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& __cordl_internal_get_renderer() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& __cordl_internal_get_renderer();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_cameraTargetSizeCopy(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_isTargetBackbuffer(bool value);

  constexpr void __cordl_internal_set_renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer* value);

  /// @brief Method .ctor, addr 0x66bae1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_PassData(ScriptableRenderer_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_PassData(ScriptableRenderer_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12705 };

  /// @brief Field renderer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderer* ___renderer;

  /// @brief Field cameraData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field isTargetBackbuffer, offset: 0x20, size: 0x1, def value: None
  bool ___isTargetBackbuffer;

  /// @brief Field cameraTargetSizeCopy, offset: 0x24, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___cameraTargetSizeCopy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___cameraData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___isTargetBackbuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___cameraTargetSizeCopy) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks/BlockRange
struct CORDL_TYPE RenderBlocks_ScriptableRenderer_BlockRange {
public:
  // Declarations
  __declspec(property(get = get_Current)) int32_t Current;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x66bb1c4, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x66bb198, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange GetEnumerator();

  /// @brief Method MoveNext, addr 0x66bb1a0, size 0x1c, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x66bb17c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t begin, int32_t end);

  /// @brief Method get_Current, addr 0x66bb1bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Current();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderBlocks_ScriptableRenderer_BlockRange();

  // Ctor Parameters [CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderBlocks_ScriptableRenderer_BlockRange(int32_t m_Current, int32_t m_End) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12706 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Current, offset: 0x0, size: 0x4, def value: None
  int32_t m_Current;

  /// @brief Field m_End, offset: 0x4, size: 0x4, def value: None
  int32_t m_End;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange, m_Current) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange, m_End) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.Universal.RenderPassEvent
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/RenderBlocks
struct CORDL_TYPE ScriptableRenderer_RenderBlocks {
public:
  // Declarations
  using BlockRange = ::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x66bb0ec, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FillBlockRanges, addr 0x66bafd4, size 0x118, virtual false, abstract: false, final false
  inline void FillBlockRanges(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue);

  /// @brief Method GetLength, addr 0x66bb144, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetLength(int32_t index);

  /// @brief Method GetRange, addr 0x66bb150, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange GetRange(int32_t index);

  /// @brief Method .ctor, addr 0x66bae20, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_RenderBlocks();

  // Ctor Parameters [CppParam { name: "m_BlockEventLimits", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>", modifiers: "", def_value: None }, CppParam
  // { name: "m_BlockRanges", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_BlockRangeLengths", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr ScriptableRenderer_RenderBlocks(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent> m_BlockEventLimits,
                                            ::Unity::Collections::NativeArray_1<int32_t> m_BlockRanges, ::Unity::Collections::NativeArray_1<int32_t> m_BlockRangeLengths) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12707 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_BlockEventLimits, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent> m_BlockEventLimits;

  /// @brief Field m_BlockRanges, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_BlockRanges;

  /// @brief Field m_BlockRangeLengths, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> m_BlockRangeLengths;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks, m_BlockEventLimits) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks, m_BlockRanges) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks, m_BlockRangeLengths) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/<>c
class CORDL_TYPE ScriptableRenderer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* __9;

  /// @brief Field <>9__138_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__138_0,
                      put = setStaticF___9__138_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__138_0;

  /// @brief Field <>9__140_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__140_0,
                      put = setStaticF___9__140_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__140_0;

  /// @brief Field <>9__141_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__141_0,
                      put = setStaticF___9__141_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__141_0;

  /// @brief Field <>9__147_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__147_0,
                      put = setStaticF___9__147_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__147_0;

  /// @brief Field <>9__149_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__149_0,
                      put = setStaticF___9__149_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__149_0;

  /// @brief Field <>9__151_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__151_0,
                      put = setStaticF___9__151_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__151_0;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* New_ctor();

  /// @brief Method <BeginRenderGraphXRRendering>b__147_0, addr 0x66bb5e8, size 0x19c, virtual false, abstract: false, final false
  inline void _BeginRenderGraphXRRendering_b__147_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData* data,
                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <EndRenderGraphXRRendering>b__149_0, addr 0x66bb804, size 0x198, virtual false, abstract: false, final false
  inline void _EndRenderGraphXRRendering_b__149_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <InitRenderGraphFrame>b__138_0, addr 0x66bb220, size 0xfc, virtual false, abstract: false, final false
  inline void _InitRenderGraphFrame_b__138_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext);

  /// @brief Method <ProcessVFXCameraCommand>b__140_0, addr 0x66bb31c, size 0xfc, virtual false, abstract: false, final false
  inline void _ProcessVFXCameraCommand_b__140_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData* data,
                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <SetEditorTarget>b__151_0, addr 0x66bb99c, size 0x60, virtual false, abstract: false, final false
  inline void _SetEditorTarget_b__151_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <SetupRenderGraphCameraProperties>b__141_0, addr 0x66bb418, size 0x1d0, virtual false, abstract: false, final false
  inline void _SetupRenderGraphCameraProperties_b__141_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData* data,
                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66bb21c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__138_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__140_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__141_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__147_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__149_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__151_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::ScriptableRenderer___c* value);

  static inline void setStaticF___9__138_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__140_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__141_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__147_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__149_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__151_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer___c(ScriptableRenderer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer___c(ScriptableRenderer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12708 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.AttachmentDescriptor, UnityEngine.Rendering.RenderBufferStoreAction, UnityEngine.Rendering.Universal.StoreActionsOptimization
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer
class CORDL_TYPE ScriptableRenderer : public ::System::Object {
public:
  // Declarations
  using BeginXRPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData;

  using DrawGizmosPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData;

  using DrawWireOverlayPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData;

  using DummyData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData;

  using EndXRPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData;

  using PassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData;

  using Profiling = ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling;

  using RenderBlocks = ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks;

  using RenderPassBlock = ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock;

  using RenderPassDescriptor = ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor;

  using RenderingFeatures = ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures;

  using VFXProcessCameraPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData;

  using __c = ::UnityEngine::Rendering::Universal::ScriptableRenderer___c;

  __declspec(property(get = get_DebugHandler)) ::UnityEngine::Rendering::Universal::DebugHandler* DebugHandler;

  /// @brief Field <DebugHandler>k__BackingField, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__DebugHandler_k__BackingField,
                      put = __cordl_internal_set__DebugHandler_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugHandler* _DebugHandler_k__BackingField;

  /// @brief Field <profilingExecute>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__profilingExecute_k__BackingField,
                      put = __cordl_internal_set__profilingExecute_k__BackingField)) ::UnityEngine::Rendering::ProfilingSampler* _profilingExecute_k__BackingField;

  /// @brief Field <stripAdditionalLightOffVariants>k__BackingField, offset 0x142, size 0x1
  __declspec(property(get = __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField,
                      put = __cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField)) bool _stripAdditionalLightOffVariants_k__BackingField;

  /// @brief Field <stripShadowsOffVariants>k__BackingField, offset 0x141, size 0x1
  __declspec(property(get = __cordl_internal_get__stripShadowsOffVariants_k__BackingField,
                      put = __cordl_internal_set__stripShadowsOffVariants_k__BackingField)) bool _stripShadowsOffVariants_k__BackingField;

  /// @brief Field <supportedRenderingFeatures>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__supportedRenderingFeatures_k__BackingField,
      put = __cordl_internal_set__supportedRenderingFeatures_k__BackingField)) ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* _supportedRenderingFeatures_k__BackingField;

  /// @brief Field <unsupportedGraphicsDeviceTypes>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField,
      put = __cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>
      _unsupportedGraphicsDeviceTypes_k__BackingField;

  /// @brief Field <useDepthPriming>k__BackingField, offset 0x140, size 0x1
  __declspec(property(get = __cordl_internal_get__useDepthPriming_k__BackingField, put = __cordl_internal_set__useDepthPriming_k__BackingField)) bool _useDepthPriming_k__BackingField;

  __declspec(property(get = get_activeRenderPassQueue)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue;

  __declspec(property(get = get_cameraColorTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier cameraColorTarget;

  __declspec(property(get = get_cameraColorTargetHandle)) ::UnityEngine::Rendering::RTHandle* cameraColorTargetHandle;

  __declspec(property(get = get_cameraDepth)) ::UnityEngine::Rendering::RenderTargetIdentifier cameraDepth;

  __declspec(property(get = get_cameraDepthTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier cameraDepthTarget;

  __declspec(property(get = get_cameraDepthTargetHandle)) ::UnityEngine::Rendering::RTHandle* cameraDepthTargetHandle;

  /// @brief Field current, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_current, put = setStaticF_current)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* current;

  /// @brief Field disableNativeRenderPassInFeatures, offset 0x133, size 0x1
  __declspec(property(get = __cordl_internal_get_disableNativeRenderPassInFeatures, put = __cordl_internal_set_disableNativeRenderPassInFeatures)) bool disableNativeRenderPassInFeatures;

  __declspec(property(get = get_frameData)) ::UnityEngine::Rendering::ContextContainer* frameData;

  /// @brief Field hasReleasedRTs, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_hasReleasedRTs, put = __cordl_internal_set_hasReleasedRTs)) bool hasReleasedRTs;

  /// @brief Field k_CameraTarget, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CameraTarget, put = setStaticF_k_CameraTarget)) ::UnityEngine::Rendering::RTHandle* k_CameraTarget;

  /// @brief Field m_ActiveColorAttachmentDescriptors, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveColorAttachmentDescriptors,
                      put = __cordl_internal_set_m_ActiveColorAttachmentDescriptors)) ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>
      m_ActiveColorAttachmentDescriptors;

  /// @brief Field m_ActiveColorAttachmentIDs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveColorAttachmentIDs,
                      put = setStaticF_m_ActiveColorAttachmentIDs)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>
      m_ActiveColorAttachmentIDs;

  /// @brief Field m_ActiveColorAttachments, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveColorAttachments,
                      put = setStaticF_m_ActiveColorAttachments)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_ActiveColorAttachments;

  /// @brief Field m_ActiveColorStoreActions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveColorStoreActions,
                      put = setStaticF_m_ActiveColorStoreActions)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>
      m_ActiveColorStoreActions;

  /// @brief Field m_ActiveDepthAttachment, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveDepthAttachment, put = setStaticF_m_ActiveDepthAttachment)) ::UnityEngine::Rendering::RTHandle* m_ActiveDepthAttachment;

  /// @brief Field m_ActiveDepthAttachmentDescriptor, offset 0x48, size 0x78
  __declspec(property(get = __cordl_internal_get_m_ActiveDepthAttachmentDescriptor,
                      put = __cordl_internal_set_m_ActiveDepthAttachmentDescriptor)) ::UnityEngine::Rendering::AttachmentDescriptor m_ActiveDepthAttachmentDescriptor;

  /// @brief Field m_ActiveDepthStoreAction, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_ActiveDepthStoreAction, put = setStaticF_m_ActiveDepthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction m_ActiveDepthStoreAction;

  /// @brief Field m_ActiveRenderPassQueue, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveRenderPassQueue,
                      put = __cordl_internal_set_m_ActiveRenderPassQueue)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* m_ActiveRenderPassQueue;

  /// @brief Field m_CameraColorTarget, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraColorTarget, put = __cordl_internal_set_m_CameraColorTarget)) ::UnityEngine::Rendering::RTHandle* m_CameraColorTarget;

  /// @brief Field m_CameraDepthTarget, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraDepthTarget, put = __cordl_internal_set_m_CameraDepthTarget)) ::UnityEngine::Rendering::RTHandle* m_CameraDepthTarget;

  /// @brief Field m_CameraResolveTarget, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraResolveTarget, put = __cordl_internal_set_m_CameraResolveTarget)) ::UnityEngine::Rendering::RTHandle* m_CameraResolveTarget;

  /// @brief Field m_FinalColorStoreAction, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinalColorStoreAction,
                      put = __cordl_internal_set_m_FinalColorStoreAction)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>
      m_FinalColorStoreAction;

  /// @brief Field m_FinalDepthStoreAction, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FinalDepthStoreAction,
                      put = __cordl_internal_set_m_FinalDepthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction m_FinalDepthStoreAction;

  /// @brief Field m_FirstTimeCameraColorTargetIsBound, offset 0x130, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound, put = __cordl_internal_set_m_FirstTimeCameraColorTargetIsBound)) bool m_FirstTimeCameraColorTargetIsBound;

  /// @brief Field m_FirstTimeCameraDepthTargetIsBound, offset 0x131, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound, put = __cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound)) bool m_FirstTimeCameraDepthTargetIsBound;

  /// @brief Field m_IsActiveColorAttachmentTransient, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsActiveColorAttachmentTransient, put = __cordl_internal_set_m_IsActiveColorAttachmentTransient)) ::ArrayW<bool, ::Array<bool>*>
      m_IsActiveColorAttachmentTransient;

  /// @brief Field m_IsPipelineExecuting, offset 0x132, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPipelineExecuting, put = __cordl_internal_set_m_IsPipelineExecuting)) bool m_IsPipelineExecuting;

  /// @brief Field m_LastBeginSubpassPassIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastBeginSubpassPassIndex, put = __cordl_internal_set_m_LastBeginSubpassPassIndex)) int32_t m_LastBeginSubpassPassIndex;

  /// @brief Field m_MergeableRenderPassesMap, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_MergeableRenderPassesMap,
      put = __cordl_internal_set_m_MergeableRenderPassesMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>* m_MergeableRenderPassesMap;

  /// @brief Field m_MergeableRenderPassesMapArrays, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MergeableRenderPassesMapArrays,
                      put = __cordl_internal_set_m_MergeableRenderPassesMapArrays)) ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>
      m_MergeableRenderPassesMapArrays;

  /// @brief Field m_PassIndexToPassHash, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassIndexToPassHash, put = __cordl_internal_set_m_PassIndexToPassHash)) ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*>
      m_PassIndexToPassHash;

  /// @brief Field m_RenderPassesAttachmentCount, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderPassesAttachmentCount,
                      put = __cordl_internal_set_m_RenderPassesAttachmentCount)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>* m_RenderPassesAttachmentCount;

  /// @brief Field m_RendererFeatures, offset 0x110, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RendererFeatures,
      put = __cordl_internal_set_m_RendererFeatures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* m_RendererFeatures;

  /// @brief Field m_StoreActionsOptimizationSetting, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StoreActionsOptimizationSetting,
                      put = __cordl_internal_set_m_StoreActionsOptimizationSetting)) ::UnityEngine::Rendering::Universal::StoreActionsOptimization m_StoreActionsOptimizationSetting;

  /// @brief Field m_TrimmedColorAttachmentCopies, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_TrimmedColorAttachmentCopies,
                      put = setStaticF_m_TrimmedColorAttachmentCopies)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>,
                                                                                 ::Array<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>*>
      m_TrimmedColorAttachmentCopies;

  /// @brief Field m_TrimmedColorAttachmentCopyIDs, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_m_TrimmedColorAttachmentCopyIDs,
      put = setStaticF_m_TrimmedColorAttachmentCopyIDs)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                                                                  ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
      m_TrimmedColorAttachmentCopyIDs;

  /// @brief Field m_UseOptimizedStoreActions, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_UseOptimizedStoreActions, put = setStaticF_m_UseOptimizedStoreActions)) bool m_UseOptimizedStoreActions;

  /// @brief Field m_firstPassIndexOfLastMergeableGroup, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_firstPassIndexOfLastMergeableGroup, put = __cordl_internal_set_m_firstPassIndexOfLastMergeableGroup)) int32_t m_firstPassIndexOfLastMergeableGroup;

  /// @brief Field m_frameData, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_frameData, put = __cordl_internal_set_m_frameData)) ::UnityEngine::Rendering::ContextContainer* m_frameData;

  __declspec(property(get = get_profilingExecute, put = set_profilingExecute)) ::UnityEngine::Rendering::ProfilingSampler* profilingExecute;

  __declspec(property(get = get_rendererFeatures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures;

  /// @brief Field s_Planes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Planes, put = setStaticF_s_Planes)) ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> s_Planes;

  /// @brief Field s_VectorPlanes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VectorPlanes, put = setStaticF_s_VectorPlanes)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> s_VectorPlanes;

  __declspec(property(get = get_stripAdditionalLightOffVariants, put = set_stripAdditionalLightOffVariants)) bool stripAdditionalLightOffVariants;

  __declspec(property(get = get_stripShadowsOffVariants, put = set_stripShadowsOffVariants)) bool stripShadowsOffVariants;

  __declspec(property(get = get_supportedRenderingFeatures,
                      put = set_supportedRenderingFeatures)) ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* supportedRenderingFeatures;

  __declspec(property(get = get_supportsGPUOcclusion)) bool supportsGPUOcclusion;

  __declspec(property(get = get_supportsNativeRenderPassRendergraphCompiler)) bool supportsNativeRenderPassRendergraphCompiler;

  __declspec(property(get = get_unsupportedGraphicsDeviceTypes,
                      put = set_unsupportedGraphicsDeviceTypes)) ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>
      unsupportedGraphicsDeviceTypes;

  __declspec(property(get = get_useDepthPriming, put = set_useDepthPriming)) bool useDepthPriming;

  /// @brief Field useRenderPassEnabled, offset 0x134, size 0x1
  __declspec(property(get = __cordl_internal_get_useRenderPassEnabled, put = __cordl_internal_set_useRenderPassEnabled)) bool useRenderPassEnabled;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddRenderPasses, addr 0x66b78b4, size 0x298, virtual false, abstract: false, final false
  inline void AddRenderPasses(::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method AdjustAndGetScreenMSAASamples, addr 0x66b9d20, size 0x244, virtual false, abstract: false, final false
  inline int32_t AdjustAndGetScreenMSAASamples(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useIntermediateColorTarget);

  /// @brief Method AreAttachmentIndicesCompatible, addr 0x66b0464, size 0xf4, virtual false, abstract: false, final false
  static inline bool AreAttachmentIndicesCompatible(::UnityEngine::Rendering::Universal::ScriptableRenderPass* lastSubPass, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* currentSubPass);

  /// @brief Method BeginRenderGraphXRRendering, addr 0x66b3ee0, size 0x530, virtual false, abstract: false, final false
  inline void BeginRenderGraphXRRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method BeginXRRendering, addr 0x66b70dc, size 0x1d4, virtual false, abstract: false, final false
  inline void BeginXRRendering(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context,
                               ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method CalculateBillboardProperties, addr 0x66b190c, size 0x3d8, virtual false, abstract: false, final false
  static inline void CalculateBillboardProperties(::ByRef<::UnityEngine::Matrix4x4> worldToCameraMatrix, ::ByRef<::UnityEngine::Vector3> billboardTangent,
                                                  ::ByRef<::UnityEngine::Vector3> billboardNormal, ::ByRef<float_t> cameraXZAngle);

  /// @brief Method CalculateSplitEventRange, addr 0x66b52b8, size 0x130, virtual false, abstract: false, final false
  inline void CalculateSplitEventRange(::UnityEngine::Rendering::Universal::RenderPassEvent startInjectionPoint, ::UnityEngine::Rendering::Universal::RenderPassEvent targetEvent,
                                       ::ByRef<::UnityEngine::Rendering::Universal::RenderPassEvent> startEvent, ::ByRef<::UnityEngine::Rendering::Universal::RenderPassEvent> splitEvent,
                                       ::ByRef<::UnityEngine::Rendering::Universal::RenderPassEvent> endEvent);

  /// @brief Method Clear, addr 0x66b2dd8, size 0x28c, virtual false, abstract: false, final false
  inline void Clear(::UnityEngine::Rendering::Universal::CameraRenderType cameraType);

  /// @brief Method ClearRenderingState, addr 0x66b6634, size 0x930, virtual false, abstract: false, final false
  static inline void ClearRenderingState(::UnityEngine::Rendering::IBaseCommandBuffer* cmd);

  /// @brief Method ConfigureCameraColorTarget, addr 0x66b3220, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureCameraColorTarget(::UnityEngine::Rendering::RTHandle* colorTarget);

  /// @brief Method ConfigureCameraTarget, addr 0x66b320c, size 0x8, virtual false, abstract: false, final false
  inline void ConfigureCameraTarget(::UnityEngine::Rendering::RTHandle* colorTarget, ::UnityEngine::Rendering::RTHandle* depthTarget);

  /// @brief Method ConfigureCameraTarget, addr 0x66b3214, size 0xc, virtual false, abstract: false, final false
  inline void ConfigureCameraTarget(::UnityEngine::Rendering::RTHandle* colorTarget, ::UnityEngine::Rendering::RTHandle* depthTarget, ::UnityEngine::Rendering::RTHandle* resolveTarget);

  /// @brief Method ConfigureCameraTarget, addr 0x66b31c0, size 0x4c, virtual false, abstract: false, final false
  inline void ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget);

  /// @brief Method CreateRenderPassHash, addr 0x66ad674, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 CreateRenderPassHash(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor desc, uint32_t hashIndex);

  /// @brief Method CreateRenderPassHash, addr 0x66b06e4, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 CreateRenderPassHash(int32_t width, int32_t height, int32_t depthID, int32_t sample, uint32_t hashIndex);

  /// @brief Method Dispose, addr 0x66b3064, size 0x144, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x66b31a8, size 0x14, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawGizmos, addr 0x66b9cac, size 0x4, virtual false, abstract: false, final false
  inline void DrawGizmos(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::GizmoSubset gizmoSubset,
                         ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method DrawRenderGraphGizmos, addr 0x66b3ed8, size 0x4, virtual false, abstract: false, final false
  inline void DrawRenderGraphGizmos(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depth,
                                    ::UnityEngine::Rendering::GizmoSubset gizmoSubset);

  /// @brief Method DrawRenderGraphWireOverlay, addr 0x66b3edc, size 0x4, virtual false, abstract: false, final false
  inline void DrawRenderGraphWireOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                         ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color);

  /// @brief Method DrawWireOverlay, addr 0x66b9cb0, size 0x70, virtual false, abstract: false, final false
  inline void DrawWireOverlay(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method EnableSwapBufferMSAA, addr 0x66b9ca8, size 0x4, virtual true, abstract: false, final false
  inline void EnableSwapBufferMSAA(bool enable);

  /// @brief Method EndRenderGraphXRRendering, addr 0x66b4410, size 0x458, virtual false, abstract: false, final false
  inline void EndRenderGraphXRRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method EndXRRendering, addr 0x66b72b0, size 0x1d0, virtual false, abstract: false, final false
  inline void EndXRRendering(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ScriptableRenderContext context,
                             ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method EnqueuePass, addr 0x66b752c, size 0xbc, virtual false, abstract: false, final false
  inline void EnqueuePass(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);

  /// @brief Method Execute, addr 0x66b5798, size 0xba0, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecuteBlock, addr 0x66b6f64, size 0x178, virtual false, abstract: false, final false
  inline void ExecuteBlock(int32_t blockIndex, ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks> renderBlocks, ::UnityEngine::Rendering::ScriptableRenderContext context,
                           ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, bool submit);

  /// @brief Method ExecuteNativeRenderPass, addr 0x66af800, size 0xb2c, virtual false, abstract: false, final false
  inline void ExecuteNativeRenderPass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                      ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecuteRenderPass, addr 0x66b7b4c, size 0x3f0, virtual false, abstract: false, final false
  inline void ExecuteRenderPass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method FindAttachmentDescriptorIndexInList, addr 0x66af738, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t FindAttachmentDescriptorIndexInList(int32_t attachmentIdx, ::UnityEngine::Rendering::AttachmentDescriptor attachmentDescriptor,
                                                            ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> attachmentDescriptors);

  /// @brief Method FindAttachmentDescriptorIndexInList, addr 0x66ae514, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t FindAttachmentDescriptorIndexInList(::UnityEngine::Rendering::RenderTargetIdentifier target,
                                                            ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> attachmentDescriptors);

  /// @brief Method FinishRenderGraphRendering, addr 0x66b4ef8, size 0x90, virtual false, abstract: false, final false
  inline void FinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method FinishRendering, addr 0x66b3230, size 0x4, virtual true, abstract: false, final false
  inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetCameraClearFlag, addr 0x66b75e8, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ClearFlag GetCameraClearFlag(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method GetCameraClearFlag, addr 0x66b7654, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ClearFlag GetCameraClearFlag(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method GetCameraColorBackBuffer, addr 0x66b23dc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetCameraColorBackBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetCameraColorFrontBuffer, addr 0x66b23d4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetFirstAllocatedRTHandle, addr 0x66ada3c, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* GetFirstAllocatedRTHandle(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);

  /// @brief Method GetRenderTextureDescriptor, addr 0x66b06f8, size 0x1ec, virtual false, abstract: false, final false
  static inline void GetRenderTextureDescriptor(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                                ::ByRef<::UnityEngine::RenderTextureDescriptor> targetRT);

  /// @brief Method GetSubPassAttachmentIndicesCount, addr 0x66b032c, size 0x138, virtual false, abstract: false, final false
  static inline uint32_t GetSubPassAttachmentIndicesCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);

  /// @brief Method GetValidColorAttachmentCount, addr 0x66b059c, size 0x148, virtual false, abstract: false, final false
  static inline uint32_t GetValidColorAttachmentCount(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> colorAttachments);

  /// @brief Method GetValidInputAttachmentCount, addr 0x66b0558, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetValidInputAttachmentCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass);

  /// @brief Method GetValidPassIndexCount, addr 0x66ad6f0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetValidPassIndexCount(::ArrayW<int32_t, ::Array<int32_t>*> array);

  /// @brief Method InitRenderGraphFrame, addr 0x66b3240, size 0x390, virtual false, abstract: false, final false
  inline void InitRenderGraphFrame(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method InitializeRenderPassDescriptor, addr 0x66ad58c, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor InitializeRenderPassDescriptor(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                                     ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass);

  /// @brief Method InternalFinishRenderingCommon, addr 0x66b4f88, size 0x1e0, virtual false, abstract: false, final false
  inline void InternalFinishRenderingCommon(::UnityEngine::Rendering::CommandBuffer* cmd, bool resolveFinalTarget);

  /// @brief Method InternalFinishRenderingExecute, addr 0x66b7480, size 0xac, virtual false, abstract: false, final false
  inline void InternalFinishRenderingExecute(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, bool resolveFinalTarget);

  /// @brief Method InternalStartRendering, addr 0x66b6488, size 0x1ac, virtual false, abstract: false, final false
  inline void InternalStartRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method InterruptFramebufferFetch, addr 0x66b547c, size 0x178, virtual false, abstract: false, final false
  inline bool InterruptFramebufferFetch(::UnityEngine::Rendering::Universal::FramebufferFetchEvent fetchEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent startInjectionPoint,
                                        ::UnityEngine::Rendering::Universal::RenderPassEvent endInjectionPoint);

  /// @brief Method IsDepthOnlyRenderTexture, addr 0x66ae898, size 0x28, virtual false, abstract: false, final false
  inline bool IsDepthOnlyRenderTexture(::UnityEngine::RenderTexture* t);

  /// @brief Method IsRenderPassEnabled, addr 0x66ad560, size 0x2c, virtual false, abstract: false, final false
  inline bool IsRenderPassEnabled(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass);

  /// @brief Method IsSceneFilteringEnabled, addr 0x66b916c, size 0x8, virtual false, abstract: false, final false
  inline bool IsSceneFilteringEnabled(::UnityEngine::Camera* camera);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* New_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data);

  /// @brief Method OnBeginRenderGraphFrame, addr 0x66b3234, size 0x4, virtual true, abstract: false, final false
  inline void OnBeginRenderGraphFrame();

  /// @brief Method OnEndRenderGraphFrame, addr 0x66b323c, size 0x4, virtual true, abstract: false, final false
  inline void OnEndRenderGraphFrame();

  /// @brief Method OnFinishRenderGraphRendering, addr 0x66b5168, size 0x4, virtual true, abstract: false, final false
  inline void OnFinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnPreCullRenderPasses, addr 0x66b77e4, size 0xd0, virtual false, abstract: false, final false
  inline void OnPreCullRenderPasses(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method OnRecordRenderGraph, addr 0x66b3238, size 0x4, virtual true, abstract: false, final false
  inline void OnRecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context);

  /// @brief Method PassHasInputAttachments, addr 0x66ae5bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool PassHasInputAttachments(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass);

  /// @brief Method ProcessVFXCameraCommand, addr 0x66b35d0, size 0x4a0, virtual false, abstract: false, final false
  inline void ProcessVFXCameraCommand(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method RecordCustomRenderGraphPasses, addr 0x66b5474, size 0x8, virtual false, abstract: false, final false
  inline void RecordCustomRenderGraphPasses(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent injectionPoint);

  /// @brief Method RecordCustomRenderGraphPasses, addr 0x66b53e8, size 0x8c, virtual false, abstract: false, final false
  inline void RecordCustomRenderGraphPasses(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent startInjectionPoint,
                                            ::UnityEngine::Rendering::Universal::RenderPassEvent endInjectionPoint);

  /// @brief Method RecordCustomRenderGraphPassesInEventRange, addr 0x66b516c, size 0x14c, virtual false, abstract: false, final false
  inline void RecordCustomRenderGraphPassesInEventRange(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent eventStart,
                                                        ::UnityEngine::Rendering::Universal::RenderPassEvent eventEnd);

  /// @brief Method RecordRenderGraph, addr 0x66b4bf4, size 0x19c, virtual false, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context);

  /// @brief Method ReleaseRenderTargets, addr 0x66b31bc, size 0x4, virtual true, abstract: false, final false
  inline void ReleaseRenderTargets();

  /// @brief Method ResetNativeRenderPassFrameData, addr 0x66acc4c, size 0x128, virtual false, abstract: false, final false
  inline void ResetNativeRenderPassFrameData();

  /// @brief Method SetCameraMatrices, addr 0x66b09c0, size 0xd0, virtual false, abstract: false, final false
  static inline void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, bool setInverseMatrices);

  /// @brief Method SetCameraMatrices, addr 0x66b0ef4, size 0xc8, virtual false, abstract: false, final false
  static inline void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool setInverseMatrices);

  /// @brief Method SetCameraMatrices, addr 0x66b0a90, size 0x464, virtual false, abstract: false, final false
  static inline void SetCameraMatrices(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool setInverseMatrices,
                                       bool isTargetFlipped);

  /// @brief Method SetEditorTarget, addr 0x66b4868, size 0x38c, virtual false, abstract: false, final false
  inline void SetEditorTarget(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method SetNativeRenderPassAttachmentList, addr 0x66ae8c0, size 0xe78, virtual false, abstract: false, final false
  inline void SetNativeRenderPassAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                ::UnityEngine::Rendering::RTHandle* passColorAttachment, ::UnityEngine::Rendering::RTHandle* passDepthAttachment,
                                                ::UnityEngine::Rendering::ClearFlag finalClearFlag, ::UnityEngine::Color finalClearColor);

  /// @brief Method SetNativeRenderPassMRTAttachmentList, addr 0x66adb1c, size 0x9f8, virtual false, abstract: false, final false
  inline void SetNativeRenderPassMRTAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                   bool needCustomCameraColorClear, ::UnityEngine::Rendering::ClearFlag cameraClearFlag);

  /// @brief Method SetPerCameraBillboardProperties, addr 0x66b173c, size 0x1d0, virtual false, abstract: false, final false
  inline void SetPerCameraBillboardProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetPerCameraClippingPlaneProperties, addr 0x66b1d24, size 0x1c4, virtual false, abstract: false, final false
  inline void SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData,
                                                  bool isTargetFlipped);

  /// @brief Method SetPerCameraClippingPlaneProperties, addr 0x66b1ce4, size 0x40, virtual false, abstract: false, final false
  inline void SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetPerCameraProperties, addr 0x66b55f4, size 0x1a4, virtual false, abstract: false, final false
  inline void SetPerCameraProperties(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Camera* camera,
                                     ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method SetPerCameraShaderVariables, addr 0x66b0fbc, size 0x58, virtual false, abstract: false, final false
  inline void SetPerCameraShaderVariables(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetPerCameraShaderVariables, addr 0x66b1014, size 0x728, virtual false, abstract: false, final false
  inline void SetPerCameraShaderVariables(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                          ::UnityEngine::Vector2Int cameraTargetSizeCopy, bool isTargetFlipped);

  /// @brief Method SetRenderPassAttachments, addr 0x66b7f3c, size 0x1230, virtual false, abstract: false, final false
  inline void SetRenderPassAttachments(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::ScriptableRenderPass* renderPass,
                                       ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetRenderTarget, addr 0x66b9b1c, size 0x188, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorAttachment,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RTHandle* depthAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlags, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x66b9174, size 0x4fc, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorAttachment, ::UnityEngine::Rendering::RTHandle* depthAttachment,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x66b9760, size 0x3bc, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorAttachment, ::UnityEngine::Rendering::RTHandle* depthAttachment,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x66b9670, size 0xf0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> colorAttachments,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorAttachmentIDs,
                                     ::UnityEngine::Rendering::RTHandle* depthAttachment, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetShaderTimeValues, addr 0x66b1ee8, size 0x4a0, virtual false, abstract: false, final false
  static inline void SetShaderTimeValues(::UnityEngine::Rendering::IBaseCommandBuffer* cmd, float_t time, float_t deltaTime, float_t smoothDeltaTime);

  /// @brief Method Setup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupCullingParameters, addr 0x66b322c, size 0x4, virtual true, abstract: false, final false
  inline void SetupCullingParameters(::ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupInputAttachmentIndices, addr 0x66ae5f8, size 0x208, virtual false, abstract: false, final false
  inline void SetupInputAttachmentIndices(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);

  /// @brief Method SetupLights, addr 0x66b3228, size 0x4, virtual true, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupNativeRenderPassFrameData, addr 0x66acd74, size 0x7ec, virtual false, abstract: false, final false
  inline void SetupNativeRenderPassFrameData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isRenderPassEnabled);

  /// @brief Method SetupRenderGraphCameraProperties, addr 0x66b3a70, size 0x468, virtual false, abstract: false, final false
  inline void SetupRenderGraphCameraProperties(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool isTargetBackbuffer);

  /// @brief Method SetupRenderPasses, addr 0x66b6338, size 0x150, virtual false, abstract: false, final false
  inline void SetupRenderPasses(::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupTransientInputAttachments, addr 0x66ae800, size 0x98, virtual false, abstract: false, final false
  inline void SetupTransientInputAttachments(int32_t attachmentCount);

  /// @brief Method SortStable, addr 0x66b4d90, size 0x168, virtual false, abstract: false, final false
  static inline void SortStable(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* list);

  /// @brief Method SupportedCameraStackingTypes, addr 0x66b0970, size 0x8, virtual true, abstract: false, final false
  inline int32_t SupportedCameraStackingTypes();

  /// @brief Method SupportsCameraStackingType, addr 0x66b0978, size 0x28, virtual false, abstract: false, final false
  inline bool SupportsCameraStackingType(::UnityEngine::Rendering::Universal::CameraRenderType cameraRenderType);

  /// @brief Method SupportsMotionVectors, addr 0x66b09a0, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsMotionVectors();

  /// @brief Method SwapColorBuffer, addr 0x66b9ca4, size 0x4, virtual true, abstract: false, final false
  inline void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateFinalStoreActions, addr 0x66ad734, size 0x308, virtual false, abstract: false, final false
  inline void UpdateFinalStoreActions(::ArrayW<int32_t, ::Array<int32_t>*> currentMergeablePasses, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isLastMergeableGroup);

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& __cordl_internal_get__DebugHandler_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& __cordl_internal_get__DebugHandler_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get__profilingExecute_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get__profilingExecute_k__BackingField();

  constexpr bool const& __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField() const;

  constexpr bool& __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField();

  constexpr bool const& __cordl_internal_get__stripShadowsOffVariants_k__BackingField() const;

  constexpr bool& __cordl_internal_get__stripShadowsOffVariants_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* const& __cordl_internal_get__supportedRenderingFeatures_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*& __cordl_internal_get__supportedRenderingFeatures_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> const&
  __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>& __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField();

  constexpr bool const& __cordl_internal_get__useDepthPriming_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useDepthPriming_k__BackingField();

  constexpr bool const& __cordl_internal_get_disableNativeRenderPassInFeatures() const;

  constexpr bool& __cordl_internal_get_disableNativeRenderPassInFeatures();

  constexpr bool const& __cordl_internal_get_hasReleasedRTs() const;

  constexpr bool& __cordl_internal_get_hasReleasedRTs();

  constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> const& __cordl_internal_get_m_ActiveColorAttachmentDescriptors() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*>& __cordl_internal_get_m_ActiveColorAttachmentDescriptors();

  constexpr ::UnityEngine::Rendering::AttachmentDescriptor const& __cordl_internal_get_m_ActiveDepthAttachmentDescriptor() const;

  constexpr ::UnityEngine::Rendering::AttachmentDescriptor& __cordl_internal_get_m_ActiveDepthAttachmentDescriptor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* const& __cordl_internal_get_m_ActiveRenderPassQueue() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*& __cordl_internal_get_m_ActiveRenderPassQueue();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraColorTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraColorTarget();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraDepthTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraDepthTarget();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraResolveTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraResolveTarget();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> const& __cordl_internal_get_m_FinalColorStoreAction() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*>& __cordl_internal_get_m_FinalColorStoreAction();

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& __cordl_internal_get_m_FinalDepthStoreAction() const;

  constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& __cordl_internal_get_m_FinalDepthStoreAction();

  constexpr bool const& __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound() const;

  constexpr bool& __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound();

  constexpr bool const& __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound() const;

  constexpr bool& __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_IsActiveColorAttachmentTransient() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_IsActiveColorAttachmentTransient();

  constexpr bool const& __cordl_internal_get_m_IsPipelineExecuting() const;

  constexpr bool& __cordl_internal_get_m_IsPipelineExecuting();

  constexpr int32_t const& __cordl_internal_get_m_LastBeginSubpassPassIndex() const;

  constexpr int32_t& __cordl_internal_get_m_LastBeginSubpassPassIndex();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>* const& __cordl_internal_get_m_MergeableRenderPassesMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>*& __cordl_internal_get_m_MergeableRenderPassesMap();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get_m_MergeableRenderPassesMapArrays() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get_m_MergeableRenderPassesMapArrays();

  constexpr ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> const& __cordl_internal_get_m_PassIndexToPassHash() const;

  constexpr ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*>& __cordl_internal_get_m_PassIndexToPassHash();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>* const& __cordl_internal_get_m_RenderPassesAttachmentCount() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>*& __cordl_internal_get_m_RenderPassesAttachmentCount();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* const& __cordl_internal_get_m_RendererFeatures() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*& __cordl_internal_get_m_RendererFeatures();

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const& __cordl_internal_get_m_StoreActionsOptimizationSetting() const;

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& __cordl_internal_get_m_StoreActionsOptimizationSetting();

  constexpr int32_t const& __cordl_internal_get_m_firstPassIndexOfLastMergeableGroup() const;

  constexpr int32_t& __cordl_internal_get_m_firstPassIndexOfLastMergeableGroup();

  constexpr ::UnityEngine::Rendering::ContextContainer* const& __cordl_internal_get_m_frameData() const;

  constexpr ::UnityEngine::Rendering::ContextContainer*& __cordl_internal_get_m_frameData();

  constexpr bool const& __cordl_internal_get_useRenderPassEnabled() const;

  constexpr bool& __cordl_internal_get_useRenderPassEnabled();

  constexpr void __cordl_internal_set__DebugHandler_k__BackingField(::UnityEngine::Rendering::Universal::DebugHandler* value);

  constexpr void __cordl_internal_set__profilingExecute_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField(bool value);

  constexpr void __cordl_internal_set__stripShadowsOffVariants_k__BackingField(bool value);

  constexpr void __cordl_internal_set__supportedRenderingFeatures_k__BackingField(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* value);

  constexpr void
  __cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> value);

  constexpr void __cordl_internal_set__useDepthPriming_k__BackingField(bool value);

  constexpr void __cordl_internal_set_disableNativeRenderPassInFeatures(bool value);

  constexpr void __cordl_internal_set_hasReleasedRTs(bool value);

  constexpr void __cordl_internal_set_m_ActiveColorAttachmentDescriptors(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> value);

  constexpr void __cordl_internal_set_m_ActiveDepthAttachmentDescriptor(::UnityEngine::Rendering::AttachmentDescriptor value);

  constexpr void __cordl_internal_set_m_ActiveRenderPassQueue(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

  constexpr void __cordl_internal_set_m_CameraColorTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CameraDepthTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CameraResolveTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_FinalColorStoreAction(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> value);

  constexpr void __cordl_internal_set_m_FinalDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  constexpr void __cordl_internal_set_m_FirstTimeCameraColorTargetIsBound(bool value);

  constexpr void __cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound(bool value);

  constexpr void __cordl_internal_set_m_IsActiveColorAttachmentTransient(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_IsPipelineExecuting(bool value);

  constexpr void __cordl_internal_set_m_LastBeginSubpassPassIndex(int32_t value);

  constexpr void __cordl_internal_set_m_MergeableRenderPassesMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>* value);

  constexpr void __cordl_internal_set_m_MergeableRenderPassesMapArrays(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr void __cordl_internal_set_m_PassIndexToPassHash(::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> value);

  constexpr void __cordl_internal_set_m_RenderPassesAttachmentCount(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>* value);

  constexpr void __cordl_internal_set_m_RendererFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* value);

  constexpr void __cordl_internal_set_m_StoreActionsOptimizationSetting(::UnityEngine::Rendering::Universal::StoreActionsOptimization value);

  constexpr void __cordl_internal_set_m_firstPassIndexOfLastMergeableGroup(int32_t value);

  constexpr void __cordl_internal_set_m_frameData(::UnityEngine::Rendering::ContextContainer* value);

  constexpr void __cordl_internal_set_useRenderPassEnabled(bool value);

  /// @brief Method .ctor, addr 0x66b2498, size 0x940, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* getStaticF_current();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_k_CameraTarget();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> getStaticF_m_ActiveColorAttachmentIDs();

  static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> getStaticF_m_ActiveColorAttachments();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> getStaticF_m_ActiveColorStoreActions();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_ActiveDepthAttachment();

  static inline ::UnityEngine::Rendering::RenderBufferStoreAction getStaticF_m_ActiveDepthStoreAction();

  static inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>,
                         ::Array<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>*>
  getStaticF_m_TrimmedColorAttachmentCopies();

  static inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                         ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
  getStaticF_m_TrimmedColorAttachmentCopyIDs();

  static inline bool getStaticF_m_UseOptimizedStoreActions();

  static inline ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> getStaticF_s_Planes();

  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> getStaticF_s_VectorPlanes();

  /// @brief Method get_DebugHandler, addr 0x66b09b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugHandler* get_DebugHandler();

  /// @brief Method get_activeRenderPassQueue, addr 0x66b2438, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* get_activeRenderPassQueue();

  /// @brief Method get_cameraColorTarget, addr 0x66b2388, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraColorTarget();

  /// @brief Method get_cameraColorTargetHandle, addr 0x66ac43c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_cameraColorTargetHandle();

  /// @brief Method get_cameraDepth, addr 0x66acc24, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepth();

  /// @brief Method get_cameraDepthTarget, addr 0x66b23e4, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepthTarget();

  /// @brief Method get_cameraDepthTargetHandle, addr 0x66b08e4, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_cameraDepthTargetHandle();

  /// @brief Method get_frameData, addr 0x66b2460, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ContextContainer* get_frameData();

  /// @brief Method get_profilingExecute, addr 0x66b09a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* get_profilingExecute();

  /// @brief Method get_rendererFeatures, addr 0x66b2430, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* get_rendererFeatures();

  /// @brief Method get_stripAdditionalLightOffVariants, addr 0x66b2488, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripAdditionalLightOffVariants();

  /// @brief Method get_stripShadowsOffVariants, addr 0x66b2478, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripShadowsOffVariants();

  /// @brief Method get_supportedRenderingFeatures, addr 0x66b2440, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* get_supportedRenderingFeatures();

  /// @brief Method get_supportsGPUOcclusion, addr 0x66b9f6c, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsGPUOcclusion();

  /// @brief Method get_supportsNativeRenderPassRendergraphCompiler, addr 0x66b9f64, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsNativeRenderPassRendergraphCompiler();

  /// @brief Method get_unsupportedGraphicsDeviceTypes, addr 0x66b2450, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> get_unsupportedGraphicsDeviceTypes();

  /// @brief Method get_useDepthPriming, addr 0x66b2468, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDepthPriming();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_current(::UnityEngine::Rendering::Universal::ScriptableRenderer* value);

  static inline void setStaticF_k_CameraTarget(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_ActiveColorAttachmentIDs(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  static inline void setStaticF_m_ActiveColorAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  static inline void setStaticF_m_ActiveColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> value);

  static inline void setStaticF_m_ActiveDepthAttachment(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_ActiveDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  static inline void setStaticF_m_TrimmedColorAttachmentCopies(::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>,
                                                                        ::Array<::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>>*>
                                                                   value);

  static inline void
  setStaticF_m_TrimmedColorAttachmentCopyIDs(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>,
                                                      ::Array<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>>*>
                                                 value);

  static inline void setStaticF_m_UseOptimizedStoreActions(bool value);

  static inline void setStaticF_s_Planes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value);

  static inline void setStaticF_s_VectorPlanes(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  /// @brief Method set_profilingExecute, addr 0x66b09b0, size 0x8, virtual false, abstract: false, final false
  inline void set_profilingExecute(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method set_stripAdditionalLightOffVariants, addr 0x66b2490, size 0x8, virtual false, abstract: false, final false
  inline void set_stripAdditionalLightOffVariants(bool value);

  /// @brief Method set_stripShadowsOffVariants, addr 0x66b2480, size 0x8, virtual false, abstract: false, final false
  inline void set_stripShadowsOffVariants(bool value);

  /// @brief Method set_supportedRenderingFeatures, addr 0x66b2448, size 0x8, virtual false, abstract: false, final false
  inline void set_supportedRenderingFeatures(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* value);

  /// @brief Method set_unsupportedGraphicsDeviceTypes, addr 0x66b2458, size 0x8, virtual false, abstract: false, final false
  inline void set_unsupportedGraphicsDeviceTypes(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> value);

  /// @brief Method set_useDepthPriming, addr 0x66b2470, size 0x8, virtual false, abstract: false, final false
  inline void set_useDepthPriming(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer(ScriptableRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer(ScriptableRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12709 };

  /// @brief Field kRenderPassMapSize offset 0xffffffff size 0x4
  static constexpr int32_t kRenderPassMapSize{ static_cast<int32_t>(0xa) };

  /// @brief Field kRenderPassMaxCount offset 0xffffffff size 0x4
  static constexpr int32_t kRenderPassMaxCount{ static_cast<int32_t>(0x14) };

  /// @brief Field k_RenderPassBlockCount offset 0xffffffff size 0x4
  static constexpr int32_t k_RenderPassBlockCount{ static_cast<int32_t>(0x4) };

  /// @brief Field m_LastBeginSubpassPassIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_LastBeginSubpassPassIndex;

  /// @brief Field m_MergeableRenderPassesMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, ::ArrayW<int32_t, ::Array<int32_t>*>>* ___m_MergeableRenderPassesMap;

  /// @brief Field m_MergeableRenderPassesMapArrays, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ___m_MergeableRenderPassesMapArrays;

  /// @brief Field m_PassIndexToPassHash, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Hash128, ::Array<::UnityEngine::Hash128>*> ___m_PassIndexToPassHash;

  /// @brief Field m_RenderPassesAttachmentCount, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128, int32_t>* ___m_RenderPassesAttachmentCount;

  /// @brief Field m_firstPassIndexOfLastMergeableGroup, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_firstPassIndexOfLastMergeableGroup;

  /// @brief Field m_ActiveColorAttachmentDescriptors, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor, ::Array<::UnityEngine::Rendering::AttachmentDescriptor>*> ___m_ActiveColorAttachmentDescriptors;

  /// @brief Field m_ActiveDepthAttachmentDescriptor, offset: 0x48, size: 0x78, def value: None
  ::UnityEngine::Rendering::AttachmentDescriptor ___m_ActiveDepthAttachmentDescriptor;

  /// @brief Field m_IsActiveColorAttachmentTransient, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_IsActiveColorAttachmentTransient;

  /// @brief Field m_FinalColorStoreAction, offset: 0xc8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> ___m_FinalColorStoreAction;

  /// @brief Field m_FinalDepthStoreAction, offset: 0xd0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderBufferStoreAction ___m_FinalDepthStoreAction;

  /// @brief Field <profilingExecute>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ____profilingExecute_k__BackingField;

  /// @brief Field hasReleasedRTs, offset: 0xe0, size: 0x1, def value: None
  bool ___hasReleasedRTs;

  /// @brief Field <DebugHandler>k__BackingField, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler* ____DebugHandler_k__BackingField;

  /// @brief Field <supportedRenderingFeatures>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* ____supportedRenderingFeatures_k__BackingField;

  /// @brief Field <unsupportedGraphicsDeviceTypes>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType, ::Array<::UnityEngine::Rendering::GraphicsDeviceType>*> ____unsupportedGraphicsDeviceTypes_k__BackingField;

  /// @brief Field m_StoreActionsOptimizationSetting, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::StoreActionsOptimization ___m_StoreActionsOptimizationSetting;

  /// @brief Field m_ActiveRenderPassQueue, offset: 0x108, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* ___m_ActiveRenderPassQueue;

  /// @brief Field m_RendererFeatures, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* ___m_RendererFeatures;

  /// @brief Field m_CameraColorTarget, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraColorTarget;

  /// @brief Field m_CameraDepthTarget, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraDepthTarget;

  /// @brief Field m_CameraResolveTarget, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraResolveTarget;

  /// @brief Field m_FirstTimeCameraColorTargetIsBound, offset: 0x130, size: 0x1, def value: None
  bool ___m_FirstTimeCameraColorTargetIsBound;

  /// @brief Field m_FirstTimeCameraDepthTargetIsBound, offset: 0x131, size: 0x1, def value: None
  bool ___m_FirstTimeCameraDepthTargetIsBound;

  /// @brief Field m_IsPipelineExecuting, offset: 0x132, size: 0x1, def value: None
  bool ___m_IsPipelineExecuting;

  /// @brief Field disableNativeRenderPassInFeatures, offset: 0x133, size: 0x1, def value: None
  bool ___disableNativeRenderPassInFeatures;

  /// @brief Field useRenderPassEnabled, offset: 0x134, size: 0x1, def value: None
  bool ___useRenderPassEnabled;

  /// @brief Field m_frameData, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextContainer* ___m_frameData;

  /// @brief Field <useDepthPriming>k__BackingField, offset: 0x140, size: 0x1, def value: None
  bool ____useDepthPriming_k__BackingField;

  /// @brief Field <stripShadowsOffVariants>k__BackingField, offset: 0x141, size: 0x1, def value: None
  bool ____stripShadowsOffVariants_k__BackingField;

  /// @brief Field <stripAdditionalLightOffVariants>k__BackingField, offset: 0x142, size: 0x1, def value: None
  bool ____stripAdditionalLightOffVariants_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_LastBeginSubpassPassIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_MergeableRenderPassesMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_MergeableRenderPassesMapArrays) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_PassIndexToPassHash) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_RenderPassesAttachmentCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_firstPassIndexOfLastMergeableGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveColorAttachmentDescriptors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveDepthAttachmentDescriptor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_IsActiveColorAttachmentTransient) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FinalColorStoreAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FinalDepthStoreAction) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____profilingExecute_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___hasReleasedRTs) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____DebugHandler_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____supportedRenderingFeatures_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____unsupportedGraphicsDeviceTypes_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_StoreActionsOptimizationSetting) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveRenderPassQueue) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_RendererFeatures) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraColorTarget) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraDepthTarget) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraResolveTarget) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FirstTimeCameraColorTargetIsBound) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FirstTimeCameraDepthTargetIsBound) == 0x131, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_IsPipelineExecuting) == 0x132, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___disableNativeRenderPassInFeatures) == 0x133, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___useRenderPassEnabled) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_frameData) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____useDepthPriming_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____stripShadowsOffVariants_k__BackingField) == 0x141, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____stripAdditionalLightOffVariants_k__BackingField) == 0x142, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRenderer, 0x148>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling/RenderBlock");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling/RenderPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer*, "UnityEngine.Rendering.Universal", "ScriptableRenderer");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/BeginXRPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DrawGizmosPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DrawWireOverlayPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DummyData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/EndXRPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderPassBlock");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderingFeatures");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/VFXProcessCameraPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRenderer___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer___c*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderBlocks/BlockRange");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderBlocks");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassDescriptor, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderPassDescriptor");
