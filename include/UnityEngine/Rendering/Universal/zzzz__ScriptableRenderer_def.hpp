#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScriptableRenderer)
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
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
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
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ScriptableRenderer___c*);
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange);
MARK_VAL_T(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer*, "UnityEngine.Rendering.Universal", "ScriptableRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/BeginXRPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DrawGizmosPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DrawWireOverlayPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/DummyData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/EndXRPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/Profiling");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderPassBlock");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderingFeatures");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/VFXProcessCameraPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer___c*, "UnityEngine.Rendering.Universal", "ScriptableRenderer/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderBlocks/BlockRange");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks, "UnityEngine.Rendering.Universal", "ScriptableRenderer/RenderBlocks");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/Profiling
class CORDL_TYPE ScriptableRenderer_Profiling : public ::System::Object {
public:
  // Declarations
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

  /// @brief Field initRenderGraphFrame, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initRenderGraphFrame, put = setStaticF_initRenderGraphFrame)) ::UnityEngine::Rendering::ProfilingSampler* initRenderGraphFrame;

  /// @brief Field internalFinishRenderingCommon, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_internalFinishRenderingCommon, put = setStaticF_internalFinishRenderingCommon)) ::UnityEngine::Rendering::ProfilingSampler* internalFinishRenderingCommon;

  /// @brief Field recordRenderGraph, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_recordRenderGraph, put = setStaticF_recordRenderGraph)) ::UnityEngine::Rendering::ProfilingSampler* recordRenderGraph;

  /// @brief Field setEditorTarget, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setEditorTarget, put = setStaticF_setEditorTarget)) ::UnityEngine::Rendering::ProfilingSampler* setEditorTarget;

  /// @brief Field setPerCameraShaderVariables, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setPerCameraShaderVariables, put = setStaticF_setPerCameraShaderVariables)) ::UnityEngine::Rendering::ProfilingSampler* setPerCameraShaderVariables;

  /// @brief Field setupCamera, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setupCamera, put = setStaticF_setupCamera)) ::UnityEngine::Rendering::ProfilingSampler* setupCamera;

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

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initRenderGraphFrame();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_internalFinishRenderingCommon();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_recordRenderGraph();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setEditorTarget();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setPerCameraShaderVariables();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupCamera();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_sortRenderPasses();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_vfxProcessCamera();

  static inline void setStaticF_addRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_beginXRRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_clearRenderingState(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_drawGizmos(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_drawWireOverlay(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_endXRRendering(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initRenderGraphFrame(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_internalFinishRenderingCommon(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_recordRenderGraph(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setEditorTarget(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setPerCameraShaderVariables(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupCamera(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_sortRenderPasses(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_vfxProcessCamera(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_Profiling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_Profiling", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_Profiling(ScriptableRenderer_Profiling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_Profiling", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_Profiling(ScriptableRenderer_Profiling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12937 };

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling) == 0x10, "Size mismatch!");

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

  /// @brief [Obsolete("cameraStacking has been deprecated use SupportedCameraRenderTypes() in ScriptableRenderer instead. #from(2022.2) #breakingFrom(2023.1)", true)]
  __declspec(property(get = get_cameraStacking, put = set_cameraStacking)) bool cameraStacking;

  __declspec(property(get = get_msaa, put = set_msaa)) bool msaa;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* New_ctor();

  constexpr bool const& __cordl_internal_get__cameraStacking_k__BackingField() const;

  constexpr bool& __cordl_internal_get__cameraStacking_k__BackingField();

  constexpr bool const& __cordl_internal_get__msaa_k__BackingField() const;

  constexpr bool& __cordl_internal_get__msaa_k__BackingField();

  constexpr void __cordl_internal_set__cameraStacking_k__BackingField(bool value);

  constexpr void __cordl_internal_set__msaa_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x6c9d1cc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_cameraStacking, addr 0x6ca1364, size 0x8, virtual false, abstract: false, final false
  inline bool get_cameraStacking();

  /// [CompilerGenerated]
  /// @brief Method get_msaa, addr 0x6ca1374, size 0x8, virtual false, abstract: false, final false
  inline bool get_msaa();

  /// [CompilerGenerated]
  /// @brief Method set_cameraStacking, addr 0x6ca136c, size 0x8, virtual false, abstract: false, final false
  inline void set_cameraStacking(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_msaa, addr 0x6ca137c, size 0x8, virtual false, abstract: false, final false
  inline void set_msaa(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_RenderingFeatures();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderingFeatures", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_RenderingFeatures(ScriptableRenderer_RenderingFeatures&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderingFeatures", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_RenderingFeatures(ScriptableRenderer_RenderingFeatures const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12938 };

  /// [CompilerGenerated]
  /// @brief Field <cameraStacking>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____cameraStacking_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <msaa>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____msaa_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures, ____cameraStacking_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures, ____msaa_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures) == 0x18, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderPassBlock", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_RenderPassBlock(ScriptableRenderer_RenderPassBlock&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_RenderPassBlock", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_RenderPassBlock(ScriptableRenderer_RenderPassBlock const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock) == 0x10, "Size mismatch!");

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

  /// @brief Method .ctor, addr 0x6ca13d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_VFXProcessCameraPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_VFXProcessCameraPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_VFXProcessCameraPassData(ScriptableRenderer_VFXProcessCameraPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_VFXProcessCameraPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_VFXProcessCameraPassData(ScriptableRenderer_VFXProcessCameraPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12940 };

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

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/DrawGizmosPassData
class CORDL_TYPE ScriptableRenderer_DrawGizmosPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field color, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color;

  /// @brief Field depth, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depth;

  /// @brief Field gizmoRenderList, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_gizmoRenderList, put = __cordl_internal_set_gizmoRenderList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle gizmoRenderList;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_color();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depth();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_gizmoRenderList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_gizmoRenderList();

  constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_depth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_gizmoRenderList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x6ca13dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_DrawGizmosPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawGizmosPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_DrawGizmosPassData(ScriptableRenderer_DrawGizmosPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawGizmosPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_DrawGizmosPassData(ScriptableRenderer_DrawGizmosPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12941 };

  /// @brief Field gizmoRenderList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___gizmoRenderList;

  /// @brief Field color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___color;

  /// @brief Field depth, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData, ___gizmoRenderList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData, ___color) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData, ___depth) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData) == 0x40, "Size mismatch!");

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

  /// @brief Method .ctor, addr 0x6ca13e0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_DrawWireOverlayPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawWireOverlayPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_DrawWireOverlayPassData(ScriptableRenderer_DrawWireOverlayPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DrawWireOverlayPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_DrawWireOverlayPassData(ScriptableRenderer_DrawWireOverlayPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12942 };

  /// @brief Field wireOverlayList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___wireOverlayList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData, ___wireOverlayList) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData) == 0x20, "Size mismatch!");

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

  /// @brief Method .ctor, addr 0x6ca13e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_BeginXRPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_BeginXRPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_BeginXRPassData(ScriptableRenderer_BeginXRPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_BeginXRPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_BeginXRPassData(ScriptableRenderer_BeginXRPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12943 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData) == 0x18, "Size mismatch!");

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

  /// @brief Method .ctor, addr 0x6ca13e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_EndXRPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_EndXRPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_EndXRPassData(ScriptableRenderer_EndXRPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_EndXRPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_EndXRPassData(ScriptableRenderer_EndXRPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12944 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/DummyData
class CORDL_TYPE ScriptableRenderer_DummyData : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData* New_ctor();

  /// @brief Method .ctor, addr 0x6ca13ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_DummyData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DummyData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_DummyData(ScriptableRenderer_DummyData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_DummyData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_DummyData(ScriptableRenderer_DummyData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12945 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/PassData
class CORDL_TYPE ScriptableRenderer_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field cameraTargetSizeCopy, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraTargetSizeCopy, put = __cordl_internal_set_cameraTargetSizeCopy)) ::UnityEngine::Vector2Int cameraTargetSizeCopy;

  /// @brief Field renderer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_renderer, put = __cordl_internal_set_renderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer;

  /// @brief Field target, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle target;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_cameraTargetSizeCopy() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_cameraTargetSizeCopy();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& __cordl_internal_get_renderer() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& __cordl_internal_get_renderer();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_target() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_cameraTargetSizeCopy(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer* value);

  constexpr void __cordl_internal_set_target(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6ca13f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_PassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer_PassData(ScriptableRenderer_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer_PassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer_PassData(ScriptableRenderer_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12946 };

  /// @brief Field renderer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderer* ___renderer;

  /// @brief Field cameraData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field target, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___target;

  /// @brief Field cameraTargetSizeCopy, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___cameraTargetSizeCopy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___renderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___cameraData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData, ___cameraTargetSizeCopy) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData) == 0x38, "Size mismatch!");

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

  /// @brief Method Dispose, addr 0x6ca1798, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetEnumerator, addr 0x6ca176c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange GetEnumerator();

  /// @brief Method MoveNext, addr 0x6ca1774, size 0x1c, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x6ca1750, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t begin, int32_t end);

  /// @brief Method get_Current, addr 0x6ca1790, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Current();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderBlocks_ScriptableRenderer_BlockRange();

  // Ctor Parameters [CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: None, comment:
  // None }]
  constexpr RenderBlocks_ScriptableRenderer_BlockRange(int32_t m_Current, int32_t m_End) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12947 };

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

static_assert(sizeof(::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange) == 0x8, "Size mismatch!");

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

  /// @brief Method Dispose, addr 0x6ca16c0, size 0x58, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FillBlockRanges, addr 0x6ca15a8, size 0x118, virtual false, abstract: false, final false
  inline void FillBlockRanges(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue);

  /// @brief Method GetLength, addr 0x6ca1718, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetLength(int32_t index);

  /// @brief Method GetRange, addr 0x6ca1724, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderBlocks_ScriptableRenderer_BlockRange GetRange(int32_t index);

  /// @brief Method .ctor, addr 0x6ca13f4, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer_RenderBlocks();

  // Ctor Parameters [CppParam { name: "m_BlockEventLimits", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent>", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "m_BlockRanges", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BlockRangeLengths", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
  constexpr ScriptableRenderer_RenderBlocks(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::RenderPassEvent> m_BlockEventLimits,
                                            ::Unity::Collections::NativeArray_1<int32_t> m_BlockRanges, ::Unity::Collections::NativeArray_1<int32_t> m_BlockRangeLengths) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12948 };

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

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderBlocks) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScriptableRenderer/<>c
class CORDL_TYPE ScriptableRenderer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* __9;

  /// @brief Field <>9__100_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__100_0,
                      put = setStaticF___9__100_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__100_0;

  /// @brief Field <>9__101_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__101_0,
                      put = setStaticF___9__101_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__101_0;

  /// @brief Field <>9__107_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__107_0,
                      put = setStaticF___9__107_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__107_0;

  /// @brief Field <>9__109_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__109_0,
                      put = setStaticF___9__109_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__109_0;

  /// @brief Field <>9__111_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__111_0,
                      put = setStaticF___9__111_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__111_0;

  /// @brief Field <>9__98_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__98_0,
                      put = setStaticF___9__98_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__98_0;

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* New_ctor();

  /// @brief Method <BeginRenderGraphXRRendering>b__107_0, addr 0x6ca1bd8, size 0x1a4, virtual false, abstract: false, final false
  inline void _BeginRenderGraphXRRendering_b__107_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData* data,
                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <EndRenderGraphXRRendering>b__109_0, addr 0x6ca1d7c, size 0x198, virtual false, abstract: false, final false
  inline void _EndRenderGraphXRRendering_b__109_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <InitRenderGraphFrame>b__98_0, addr 0x6ca17f4, size 0xf4, virtual false, abstract: false, final false
  inline void _InitRenderGraphFrame_b__98_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext);

  /// @brief Method <ProcessVFXCameraCommand>b__100_0, addr 0x6ca18e8, size 0xfc, virtual false, abstract: false, final false
  inline void _ProcessVFXCameraCommand_b__100_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData* data,
                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <SetEditorTarget>b__111_0, addr 0x6ca1f14, size 0xac, virtual false, abstract: false, final false
  inline void _SetEditorTarget_b__111_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <SetupRenderGraphCameraProperties>b__101_0, addr 0x6ca19e4, size 0x1f4, virtual false, abstract: false, final false
  inline void _SetupRenderGraphCameraProperties_b__101_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData* data,
                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6ca17f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__100_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__101_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__107_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__109_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__111_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__98_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::ScriptableRenderer___c* value);

  static inline void setStaticF___9__100_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__101_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__107_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__109_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__111_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__98_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer___c(ScriptableRenderer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer___c(ScriptableRenderer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12949 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Plane, UnityEngine.Rendering.GraphicsDeviceType, UnityEngine.Rendering.RTHandle, UnityEngine.Rendering.RenderBufferStoreAction,
// UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Rendering.Universal.StoreActionsOptimization, UnityEngine.Vector4
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

  using RenderingFeatures = ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures;

  using VFXProcessCameraPassData = ::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData;

  using __c = ::UnityEngine::Rendering::Universal::ScriptableRenderer___c;

  __declspec(property(get = get_DebugHandler)) ::UnityEngine::Rendering::Universal::DebugHandler* DebugHandler;

  /// @brief Field <DebugHandler>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__DebugHandler_k__BackingField,
                      put = __cordl_internal_set__DebugHandler_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugHandler* _DebugHandler_k__BackingField;

  /// @brief Field <profilingExecute>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__profilingExecute_k__BackingField,
                      put = __cordl_internal_set__profilingExecute_k__BackingField)) ::UnityEngine::Rendering::ProfilingSampler* _profilingExecute_k__BackingField;

  /// @brief Field <stripAdditionalLightOffVariants>k__BackingField, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField,
                      put = __cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField)) bool _stripAdditionalLightOffVariants_k__BackingField;

  /// @brief Field <stripShadowsOffVariants>k__BackingField, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__stripShadowsOffVariants_k__BackingField,
                      put = __cordl_internal_set__stripShadowsOffVariants_k__BackingField)) bool _stripShadowsOffVariants_k__BackingField;

  /// @brief Field <supportedRenderingFeatures>k__BackingField, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__supportedRenderingFeatures_k__BackingField,
      put = __cordl_internal_set__supportedRenderingFeatures_k__BackingField)) ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* _supportedRenderingFeatures_k__BackingField;

  /// @brief Field <unsupportedGraphicsDeviceTypes>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField,
                      put = __cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField)) ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>
      _unsupportedGraphicsDeviceTypes_k__BackingField;

  /// @brief Field <useDepthPriming>k__BackingField, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__useDepthPriming_k__BackingField, put = __cordl_internal_set__useDepthPriming_k__BackingField)) bool _useDepthPriming_k__BackingField;

  __declspec(property(get = get_activeRenderPassQueue)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue;

  /// @brief [Obsolete("Use cameraColorTargetHandle. #from(2022.1) #breakingFrom(2023.2)", true)]
  __declspec(property(get = get_cameraColorTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier cameraColorTarget;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_cameraColorTargetHandle, put = set_cameraColorTargetHandle)) ::UnityEngine::Rendering::RTHandle* cameraColorTargetHandle;

  /// [Obsolete("cameraDepth has been renamed to cameraDepthTarget. #from(2021.1) #breakingFrom(2023.1) (UnityUpgradable) -> cameraDepthTarget", true)]
  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_cameraDepth)) ::UnityEngine::Rendering::RenderTargetIdentifier cameraDepth;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_cameraDepthTargetHandle, put = set_cameraDepthTargetHandle)) ::UnityEngine::Rendering::RTHandle* cameraDepthTargetHandle;

  /// @brief Field current, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_current, put = setStaticF_current)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* current;

  __declspec(property(get = get_frameData)) ::UnityEngine::Rendering::ContextContainer* frameData;

  /// @brief Field hasReleasedRTs, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_hasReleasedRTs, put = __cordl_internal_set_hasReleasedRTs)) bool hasReleasedRTs;

  /// @brief Field k_CameraTarget, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CameraTarget, put = setStaticF_k_CameraTarget)) ::UnityEngine::Rendering::RTHandle* k_CameraTarget;

  /// @brief Field m_ActiveColorAttachmentIDs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveColorAttachmentIDs, put = setStaticF_m_ActiveColorAttachmentIDs)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> m_ActiveColorAttachmentIDs;

  /// @brief Field m_ActiveColorAttachments, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveColorAttachments, put = setStaticF_m_ActiveColorAttachments)) ::ArrayW<::UnityEngine::Rendering::RTHandle*> m_ActiveColorAttachments;

  /// @brief Field m_ActiveColorStoreActions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveColorStoreActions, put = setStaticF_m_ActiveColorStoreActions)) ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> m_ActiveColorStoreActions;

  /// @brief Field m_ActiveDepthAttachment, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ActiveDepthAttachment, put = setStaticF_m_ActiveDepthAttachment)) ::UnityEngine::Rendering::RTHandle* m_ActiveDepthAttachment;

  /// @brief Field m_ActiveDepthStoreAction, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_ActiveDepthStoreAction, put = setStaticF_m_ActiveDepthStoreAction)) ::UnityEngine::Rendering::RenderBufferStoreAction m_ActiveDepthStoreAction;

  /// @brief Field m_ActiveRenderPassQueue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveRenderPassQueue,
                      put = __cordl_internal_set_m_ActiveRenderPassQueue)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* m_ActiveRenderPassQueue;

  /// @brief Field m_CameraColorTarget, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraColorTarget, put = __cordl_internal_set_m_CameraColorTarget)) ::UnityEngine::Rendering::RTHandle* m_CameraColorTarget;

  /// @brief Field m_CameraDepthTarget, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraDepthTarget, put = __cordl_internal_set_m_CameraDepthTarget)) ::UnityEngine::Rendering::RTHandle* m_CameraDepthTarget;

  /// @brief Field m_CameraResolveTarget, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraResolveTarget, put = __cordl_internal_set_m_CameraResolveTarget)) ::UnityEngine::Rendering::RTHandle* m_CameraResolveTarget;

  /// @brief Field m_FirstTimeCameraColorTargetIsBound, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound, put = __cordl_internal_set_m_FirstTimeCameraColorTargetIsBound)) bool m_FirstTimeCameraColorTargetIsBound;

  /// @brief Field m_FirstTimeCameraDepthTargetIsBound, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound, put = __cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound)) bool m_FirstTimeCameraDepthTargetIsBound;

  /// @brief Field m_IsPipelineExecuting, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPipelineExecuting, put = __cordl_internal_set_m_IsPipelineExecuting)) bool m_IsPipelineExecuting;

  /// @brief Field m_RendererFeatures, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_RendererFeatures,
      put = __cordl_internal_set_m_RendererFeatures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* m_RendererFeatures;

  /// @brief Field m_StoreActionsOptimizationSetting, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StoreActionsOptimizationSetting,
                      put = __cordl_internal_set_m_StoreActionsOptimizationSetting)) ::UnityEngine::Rendering::Universal::StoreActionsOptimization m_StoreActionsOptimizationSetting;

  /// @brief Field m_TrimmedColorAttachmentCopies, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_TrimmedColorAttachmentCopies, put = setStaticF_m_TrimmedColorAttachmentCopies)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>>
      m_TrimmedColorAttachmentCopies;

  /// @brief Field m_TrimmedColorAttachmentCopyIDs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_TrimmedColorAttachmentCopyIDs, put = setStaticF_m_TrimmedColorAttachmentCopyIDs)) ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>
      m_TrimmedColorAttachmentCopyIDs;

  /// @brief Field m_UseOptimizedStoreActions, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_UseOptimizedStoreActions, put = setStaticF_m_UseOptimizedStoreActions)) bool m_UseOptimizedStoreActions;

  /// @brief Field m_frameData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_frameData, put = __cordl_internal_set_m_frameData)) ::UnityEngine::Rendering::ContextContainer* m_frameData;

  /// @brief [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  __declspec(property(get = get_profilingExecute, put = set_profilingExecute)) ::UnityEngine::Rendering::ProfilingSampler* profilingExecute;

  __declspec(property(get = get_rendererFeatures)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures;

  /// @brief Field s_Planes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Planes, put = setStaticF_s_Planes)) ::ArrayW<::UnityEngine::Plane> s_Planes;

  /// @brief Field s_VectorPlanes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VectorPlanes, put = setStaticF_s_VectorPlanes)) ::ArrayW<::UnityEngine::Vector4> s_VectorPlanes;

  __declspec(property(get = get_stripAdditionalLightOffVariants, put = set_stripAdditionalLightOffVariants)) bool stripAdditionalLightOffVariants;

  __declspec(property(get = get_stripShadowsOffVariants, put = set_stripShadowsOffVariants)) bool stripShadowsOffVariants;

  __declspec(property(get = get_supportedRenderingFeatures,
                      put = set_supportedRenderingFeatures)) ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* supportedRenderingFeatures;

  __declspec(property(get = get_supportsGPUOcclusion)) bool supportsGPUOcclusion;

  __declspec(property(get = get_supportsNativeRenderPassRendergraphCompiler)) bool supportsNativeRenderPassRendergraphCompiler;

  __declspec(property(get = get_unsupportedGraphicsDeviceTypes, put = set_unsupportedGraphicsDeviceTypes)) ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> unsupportedGraphicsDeviceTypes;

  __declspec(property(get = get_useDepthPriming, put = set_useDepthPriming)) bool useDepthPriming;

  /// @brief Field useRenderPassEnabled, offset 0x6b, size 0x1
  __declspec(property(get = __cordl_internal_get_useRenderPassEnabled, put = __cordl_internal_set_useRenderPassEnabled)) bool useRenderPassEnabled;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddRenderPasses, addr 0x6c9fad8, size 0x24c, virtual false, abstract: false, final false
  inline void AddRenderPasses(::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method AdjustAndGetScreenMSAASamples, addr 0x6ca0744, size 0x244, virtual false, abstract: false, final false
  inline int32_t AdjustAndGetScreenMSAASamples(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool useIntermediateColorTarget);

  /// @brief Method BeginRenderGraphXRRendering, addr 0x6c9e314, size 0x484, virtual false, abstract: false, final false
  inline void BeginRenderGraphXRRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method CalculateBillboardProperties, addr 0x6c9c208, size 0x410, virtual false, abstract: false, final false
  static inline void CalculateBillboardProperties(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4 const> worldToCameraMatrix, ::by_ref<::UnityEngine::Vector3> billboardTangent,
                                                  ::by_ref<::UnityEngine::Vector3> billboardNormal, ::by_ref<float_t> cameraXZAngle);

  /// @brief Method CalculateSplitEventRange, addr 0x6c9f5cc, size 0x108, virtual false, abstract: false, final false
  inline void CalculateSplitEventRange(::UnityEngine::Rendering::Universal::RenderPassEvent startInjectionPoint, ::UnityEngine::Rendering::Universal::RenderPassEvent targetEvent,
                                       ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent> startEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent> splitEvent,
                                       ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent> endEvent);

  /// @brief Method Clear, addr 0x6c9d1d8, size 0x2c4, virtual false, abstract: false, final false
  inline void Clear(::UnityEngine::Rendering::Universal::CameraRenderType cameraType);

  /// @brief Method ClearRenderingState, addr 0x6c9fd24, size 0xa10, virtual false, abstract: false, final false
  static inline void ClearRenderingState(::UnityEngine::Rendering::IBaseCommandBuffer* cmd);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method ConfigureCameraTarget, addr 0x6c9b340, size 0x4, virtual false, abstract: false, final false
  inline void ConfigureCameraTarget(::UnityEngine::Rendering::RTHandle* colorTarget, ::UnityEngine::Rendering::RTHandle* depthTarget);

  /// @brief Method Dispose, addr 0x6c9d49c, size 0x210, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6c9d6ac, size 0x14, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawRenderGraphGizmos, addr 0x6c9e30c, size 0x4, virtual false, abstract: false, final false
  inline void DrawRenderGraphGizmos(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depth,
                                    ::UnityEngine::Rendering::GizmoSubset gizmoSubset);

  /// @brief Method DrawRenderGraphWireOverlay, addr 0x6c9e310, size 0x4, virtual false, abstract: false, final false
  inline void DrawRenderGraphWireOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                         ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color);

  /// @brief Method EnableSwapBufferMSAA, addr 0x6ca0740, size 0x4, virtual true, abstract: false, final false
  inline void EnableSwapBufferMSAA(bool enable);

  /// @brief Method EndRenderGraphXRRendering, addr 0x6c9e798, size 0x470, virtual false, abstract: false, final false
  inline void EndRenderGraphXRRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method EnqueuePass, addr 0x6c9f758, size 0xb4, virtual false, abstract: false, final false
  inline void EnqueuePass(::UnityEngine::Rendering::Universal::ScriptableRenderPass* pass);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Execute, addr 0x6c9b34c, size 0x4, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method FinishRenderGraphRendering, addr 0x6c9f260, size 0x90, virtual false, abstract: false, final false
  inline void FinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method FinishRendering, addr 0x6c9d6c8, size 0x4, virtual true, abstract: false, final false
  inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetCameraClearFlag, addr 0x6c9f878, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ClearFlag GetCameraClearFlag(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method GetCameraClearFlag, addr 0x6c9f80c, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ClearFlag GetCameraClearFlag(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method InitRenderGraphFrame, addr 0x6c9d6d8, size 0x390, virtual false, abstract: false, final false
  inline void InitRenderGraphFrame(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method InternalFinishRenderingCommon, addr 0x6c9f2f0, size 0x18c, virtual false, abstract: false, final false
  inline void InternalFinishRenderingCommon(::UnityEngine::Rendering::CommandBuffer* cmd, bool resolveFinalTarget);

  /// @brief Method IsSceneFilteringEnabled, addr 0x6ca0734, size 0x8, virtual false, abstract: false, final false
  inline bool IsSceneFilteringEnabled(::UnityEngine::Camera* camera);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* New_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data);

  /// @brief Method OnBeginRenderGraphFrame, addr 0x6c9d6cc, size 0x4, virtual true, abstract: false, final false
  inline void OnBeginRenderGraphFrame();

  /// @brief Method OnEndRenderGraphFrame, addr 0x6c9d6d4, size 0x4, virtual true, abstract: false, final false
  inline void OnEndRenderGraphFrame();

  /// @brief Method OnFinishRenderGraphRendering, addr 0x6c9f47c, size 0x4, virtual true, abstract: false, final false
  inline void OnFinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnPreCullRenderPasses, addr 0x6c9fa08, size 0xd0, virtual false, abstract: false, final false
  inline void OnPreCullRenderPasses(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::CameraData const> cameraData);

  /// @brief Method OnRecordRenderGraph, addr 0x6c9d6d0, size 0x4, virtual true, abstract: false, final false
  inline void OnRecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context);

  /// @brief Method ProcessVFXCameraCommand, addr 0x6c9da68, size 0x4a0, virtual false, abstract: false, final false
  inline void ProcessVFXCameraCommand(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method RecordCustomRenderGraphPasses, addr 0x6c9f71c, size 0x3c, virtual false, abstract: false, final false
  inline void RecordCustomRenderGraphPasses(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent injectionPoint);

  /// @brief Method RecordCustomRenderGraphPasses, addr 0x6c9f6d4, size 0x48, virtual false, abstract: false, final false
  inline void RecordCustomRenderGraphPasses(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent startInjectionPoint,
                                            ::UnityEngine::Rendering::Universal::RenderPassEvent endInjectionPoint);

  /// @brief Method RecordCustomRenderGraphPassesInEventRange, addr 0x6c9f480, size 0x14c, virtual false, abstract: false, final false
  inline void RecordCustomRenderGraphPassesInEventRange(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent eventStart,
                                                        ::UnityEngine::Rendering::Universal::RenderPassEvent eventEnd);

  /// @brief Method RecordRenderGraph, addr 0x6c9ef94, size 0x19c, virtual false, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context);

  /// @brief Method ReleaseRenderTargets, addr 0x6c9d6c0, size 0x4, virtual true, abstract: false, final false
  inline void ReleaseRenderTargets();

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method SetCameraMatrices, addr 0x6c9b324, size 0x4, virtual false, abstract: false, final false
  static inline void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool setInverseMatrices);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method SetCameraMatrices, addr 0x6c9b320, size 0x4, virtual false, abstract: false, final false
  static inline void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData, bool setInverseMatrices);

  /// @brief Method SetCameraMatrices, addr 0x6c9b3a4, size 0x4a0, virtual false, abstract: false, final false
  static inline void SetCameraMatrices(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool setInverseMatrices,
                                       bool isTargetFlipped);

  /// @brief Method SetEditorTarget, addr 0x6c9ec08, size 0x38c, virtual false, abstract: false, final false
  inline void SetEditorTarget(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method SetPerCameraBillboardProperties, addr 0x6c9c038, size 0x1d0, virtual false, abstract: false, final false
  inline void SetPerCameraBillboardProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetPerCameraClippingPlaneProperties, addr 0x6c9c618, size 0x22c, virtual false, abstract: false, final false
  inline void SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData* const> cameraData, bool isTargetFlipped);

  /// @brief Method SetPerCameraShaderVariables, addr 0x6c9b844, size 0x7f4, virtual false, abstract: false, final false
  inline void SetPerCameraShaderVariables(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                          ::UnityEngine::Vector2Int cameraTargetSizeCopy, bool isTargetFlipped);

  /// @brief Method SetShaderTimeValues, addr 0x6c9c844, size 0x4a0, virtual false, abstract: false, final false
  static inline void SetShaderTimeValues(::UnityEngine::Rendering::IBaseCommandBuffer* cmd, float_t time, float_t deltaTime, float_t smoothDeltaTime);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Setup, addr 0x6c9b344, size 0x4, virtual true, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupCullingParameters, addr 0x6c9d6c4, size 0x4, virtual true, abstract: false, final false
  inline void SetupCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method SetupLights, addr 0x6c9b348, size 0x4, virtual true, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupRenderGraphCameraProperties, addr 0x6c9df08, size 0x404, virtual false, abstract: false, final false
  inline void SetupRenderGraphCameraProperties(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle target);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method SetupRenderPasses, addr 0x6c9b350, size 0x4, virtual false, abstract: false, final false
  inline void SetupRenderPasses(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::RenderingData const> renderingData);

  /// @brief Method SortStable, addr 0x6c9f130, size 0x130, virtual false, abstract: false, final false
  static inline void SortStable(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* list);

  /// @brief Method SupportedCameraStackingTypes, addr 0x6c9b354, size 0x8, virtual true, abstract: false, final false
  inline int32_t SupportedCameraStackingTypes();

  /// @brief Method SupportsCameraNormals, addr 0x6c9b394, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsCameraNormals();

  /// @brief Method SupportsCameraOpaque, addr 0x6c9b38c, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsCameraOpaque();

  /// @brief Method SupportsCameraStackingType, addr 0x6c9b35c, size 0x28, virtual false, abstract: false, final false
  inline bool SupportsCameraStackingType(::UnityEngine::Rendering::Universal::CameraRenderType cameraRenderType);

  /// @brief Method SupportsMotionVectors, addr 0x6c9b384, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsMotionVectors();

  /// @brief Method SwapColorBuffer, addr 0x6ca073c, size 0x4, virtual true, abstract: false, final false
  inline void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

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

  constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> const& __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>& __cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField();

  constexpr bool const& __cordl_internal_get__useDepthPriming_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useDepthPriming_k__BackingField();

  constexpr bool const& __cordl_internal_get_hasReleasedRTs() const;

  constexpr bool& __cordl_internal_get_hasReleasedRTs();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* const& __cordl_internal_get_m_ActiveRenderPassQueue() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*& __cordl_internal_get_m_ActiveRenderPassQueue();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraColorTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraColorTarget();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraDepthTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraDepthTarget();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraResolveTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraResolveTarget();

  constexpr bool const& __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound() const;

  constexpr bool& __cordl_internal_get_m_FirstTimeCameraColorTargetIsBound();

  constexpr bool const& __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound() const;

  constexpr bool& __cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound();

  constexpr bool const& __cordl_internal_get_m_IsPipelineExecuting() const;

  constexpr bool& __cordl_internal_get_m_IsPipelineExecuting();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* const& __cordl_internal_get_m_RendererFeatures() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*& __cordl_internal_get_m_RendererFeatures();

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const& __cordl_internal_get_m_StoreActionsOptimizationSetting() const;

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& __cordl_internal_get_m_StoreActionsOptimizationSetting();

  constexpr ::UnityEngine::Rendering::ContextContainer* const& __cordl_internal_get_m_frameData() const;

  constexpr ::UnityEngine::Rendering::ContextContainer*& __cordl_internal_get_m_frameData();

  constexpr bool const& __cordl_internal_get_useRenderPassEnabled() const;

  constexpr bool& __cordl_internal_get_useRenderPassEnabled();

  constexpr void __cordl_internal_set__DebugHandler_k__BackingField(::UnityEngine::Rendering::Universal::DebugHandler* value);

  constexpr void __cordl_internal_set__profilingExecute_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField(bool value);

  constexpr void __cordl_internal_set__stripShadowsOffVariants_k__BackingField(bool value);

  constexpr void __cordl_internal_set__supportedRenderingFeatures_k__BackingField(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* value);

  constexpr void __cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> value);

  constexpr void __cordl_internal_set__useDepthPriming_k__BackingField(bool value);

  constexpr void __cordl_internal_set_hasReleasedRTs(bool value);

  constexpr void __cordl_internal_set_m_ActiveRenderPassQueue(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

  constexpr void __cordl_internal_set_m_CameraColorTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CameraDepthTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CameraResolveTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_FirstTimeCameraColorTargetIsBound(bool value);

  constexpr void __cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound(bool value);

  constexpr void __cordl_internal_set_m_IsPipelineExecuting(bool value);

  constexpr void __cordl_internal_set_m_RendererFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* value);

  constexpr void __cordl_internal_set_m_StoreActionsOptimizationSetting(::UnityEngine::Rendering::Universal::StoreActionsOptimization value);

  constexpr void __cordl_internal_set_m_frameData(::UnityEngine::Rendering::ContextContainer* value);

  constexpr void __cordl_internal_set_useRenderPassEnabled(bool value);

  /// @brief Method .ctor, addr 0x6c9cd98, size 0x434, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* getStaticF_current();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_k_CameraTarget();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> getStaticF_m_ActiveColorAttachmentIDs();

  static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> getStaticF_m_ActiveColorAttachments();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> getStaticF_m_ActiveColorStoreActions();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_ActiveDepthAttachment();

  static inline ::UnityEngine::Rendering::RenderBufferStoreAction getStaticF_m_ActiveDepthStoreAction();

  static inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>> getStaticF_m_TrimmedColorAttachmentCopies();

  static inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> getStaticF_m_TrimmedColorAttachmentCopyIDs();

  static inline bool getStaticF_m_UseOptimizedStoreActions();

  static inline ::ArrayW<::UnityEngine::Plane> getStaticF_s_Planes();

  static inline ::ArrayW<::UnityEngine::Vector4> getStaticF_s_VectorPlanes();

  /// [CompilerGenerated]
  /// @brief Method get_DebugHandler, addr 0x6c9b39c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugHandler* get_DebugHandler();

  /// @brief Method get_activeRenderPassQueue, addr 0x6c9cd38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* get_activeRenderPassQueue();

  /// @brief Method get_cameraColorTarget, addr 0x6c9cce4, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraColorTarget();

  /// @brief Method get_cameraColorTargetHandle, addr 0x6c9b328, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_cameraColorTargetHandle();

  /// @brief Method get_cameraDepth, addr 0x6c9b2e8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepth();

  /// @brief Method get_cameraDepthTargetHandle, addr 0x6c9b334, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_cameraDepthTargetHandle();

  /// @brief Method get_frameData, addr 0x6c9cd60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ContextContainer* get_frameData();

  /// [CompilerGenerated]
  /// @brief Method get_profilingExecute, addr 0x6c9b310, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* get_profilingExecute();

  /// @brief Method get_rendererFeatures, addr 0x6c9cd30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* get_rendererFeatures();

  /// [CompilerGenerated]
  /// @brief Method get_stripAdditionalLightOffVariants, addr 0x6c9cd88, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripAdditionalLightOffVariants();

  /// [CompilerGenerated]
  /// @brief Method get_stripShadowsOffVariants, addr 0x6c9cd78, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripShadowsOffVariants();

  /// [CompilerGenerated]
  /// @brief Method get_supportedRenderingFeatures, addr 0x6c9cd40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* get_supportedRenderingFeatures();

  /// @brief Method get_supportsGPUOcclusion, addr 0x6ca0990, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsGPUOcclusion();

  /// @brief Method get_supportsNativeRenderPassRendergraphCompiler, addr 0x6ca0988, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsNativeRenderPassRendergraphCompiler();

  /// [CompilerGenerated]
  /// @brief Method get_unsupportedGraphicsDeviceTypes, addr 0x6c9cd50, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> get_unsupportedGraphicsDeviceTypes();

  /// [CompilerGenerated]
  /// @brief Method get_useDepthPriming, addr 0x6c9cd68, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDepthPriming();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_current(::UnityEngine::Rendering::Universal::ScriptableRenderer* value);

  static inline void setStaticF_k_CameraTarget(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_ActiveColorAttachmentIDs(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> value);

  static inline void setStaticF_m_ActiveColorAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*> value);

  static inline void setStaticF_m_ActiveColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> value);

  static inline void setStaticF_m_ActiveDepthAttachment(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_ActiveDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction value);

  static inline void setStaticF_m_TrimmedColorAttachmentCopies(::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>> value);

  static inline void setStaticF_m_TrimmedColorAttachmentCopyIDs(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> value);

  static inline void setStaticF_m_UseOptimizedStoreActions(bool value);

  static inline void setStaticF_s_Planes(::ArrayW<::UnityEngine::Plane> value);

  static inline void setStaticF_s_VectorPlanes(::ArrayW<::UnityEngine::Vector4> value);

  /// @brief Method set_cameraColorTargetHandle, addr 0x6c9b330, size 0x4, virtual false, abstract: false, final false
  inline void set_cameraColorTargetHandle(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_cameraDepthTargetHandle, addr 0x6c9b33c, size 0x4, virtual false, abstract: false, final false
  inline void set_cameraDepthTargetHandle(::UnityEngine::Rendering::RTHandle* value);

  /// [CompilerGenerated]
  /// @brief Method set_profilingExecute, addr 0x6c9b318, size 0x8, virtual false, abstract: false, final false
  inline void set_profilingExecute(::UnityEngine::Rendering::ProfilingSampler* value);

  /// [CompilerGenerated]
  /// @brief Method set_stripAdditionalLightOffVariants, addr 0x6c9cd90, size 0x8, virtual false, abstract: false, final false
  inline void set_stripAdditionalLightOffVariants(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_stripShadowsOffVariants, addr 0x6c9cd80, size 0x8, virtual false, abstract: false, final false
  inline void set_stripShadowsOffVariants(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_supportedRenderingFeatures, addr 0x6c9cd48, size 0x8, virtual false, abstract: false, final false
  inline void set_supportedRenderingFeatures(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* value);

  /// [CompilerGenerated]
  /// @brief Method set_unsupportedGraphicsDeviceTypes, addr 0x6c9cd58, size 0x8, virtual false, abstract: false, final false
  inline void set_unsupportedGraphicsDeviceTypes(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> value);

  /// [CompilerGenerated]
  /// @brief Method set_useDepthPriming, addr 0x6c9cd70, size 0x8, virtual false, abstract: false, final false
  inline void set_useDepthPriming(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRenderer(ScriptableRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRenderer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRenderer(ScriptableRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12950 };

  /// @brief Field k_RenderPassBlockCount offset 0xffffffff size 0x4
  static constexpr int32_t k_RenderPassBlockCount{ static_cast<int32_t>(0x4) };

  /// [CompilerGenerated]
  /// @brief Field <profilingExecute>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ____profilingExecute_k__BackingField;

  /// @brief Field hasReleasedRTs, offset: 0x18, size: 0x1, def value: None
  bool ___hasReleasedRTs;

  /// [CompilerGenerated]
  /// @brief Field <DebugHandler>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler* ____DebugHandler_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <supportedRenderingFeatures>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* ____supportedRenderingFeatures_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <unsupportedGraphicsDeviceTypes>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> ____unsupportedGraphicsDeviceTypes_k__BackingField;

  /// @brief Field m_StoreActionsOptimizationSetting, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::StoreActionsOptimization ___m_StoreActionsOptimizationSetting;

  /// @brief Field m_ActiveRenderPassQueue, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* ___m_ActiveRenderPassQueue;

  /// @brief Field m_RendererFeatures, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* ___m_RendererFeatures;

  /// @brief Field m_CameraColorTarget, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraColorTarget;

  /// @brief Field m_CameraDepthTarget, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraDepthTarget;

  /// @brief Field m_CameraResolveTarget, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraResolveTarget;

  /// @brief Field m_FirstTimeCameraColorTargetIsBound, offset: 0x68, size: 0x1, def value: None
  bool ___m_FirstTimeCameraColorTargetIsBound;

  /// @brief Field m_FirstTimeCameraDepthTargetIsBound, offset: 0x69, size: 0x1, def value: None
  bool ___m_FirstTimeCameraDepthTargetIsBound;

  /// @brief Field m_IsPipelineExecuting, offset: 0x6a, size: 0x1, def value: None
  bool ___m_IsPipelineExecuting;

  /// @brief Field useRenderPassEnabled, offset: 0x6b, size: 0x1, def value: None
  bool ___useRenderPassEnabled;

  /// @brief Field m_frameData, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextContainer* ___m_frameData;

  /// [CompilerGenerated]
  /// @brief Field <useDepthPriming>k__BackingField, offset: 0x78, size: 0x1, def value: None
  bool ____useDepthPriming_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <stripShadowsOffVariants>k__BackingField, offset: 0x79, size: 0x1, def value: None
  bool ____stripShadowsOffVariants_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <stripAdditionalLightOffVariants>k__BackingField, offset: 0x7a, size: 0x1, def value: None
  bool ____stripAdditionalLightOffVariants_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____profilingExecute_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___hasReleasedRTs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____DebugHandler_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____supportedRenderingFeatures_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____unsupportedGraphicsDeviceTypes_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_StoreActionsOptimizationSetting) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_ActiveRenderPassQueue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_RendererFeatures) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraColorTarget) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraDepthTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_CameraResolveTarget) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FirstTimeCameraColorTargetIsBound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_FirstTimeCameraDepthTargetIsBound) == 0x69, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_IsPipelineExecuting) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___useRenderPassEnabled) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ___m_frameData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____useDepthPriming_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____stripShadowsOffVariants_k__BackingField) == 0x79, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRenderer, ____stripAdditionalLightOffVariants_k__BackingField) == 0x7a, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScriptableRenderer) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
