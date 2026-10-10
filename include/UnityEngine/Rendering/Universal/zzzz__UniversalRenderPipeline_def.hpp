#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderTextureUVOriginStrategy_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipeline)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightDataGI;
}
namespace UnityEngine::Experimental::GlobalIllumination {
class Lightmapping_RequestLightsDelegate;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderTextureUVOriginStrategy;
}
namespace UnityEngine::Rendering::Universal {
struct AdditionalLightsShadowAtlasLayout;
}
namespace UnityEngine::Rendering::Universal {
class CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry;
}
namespace UnityEngine::Rendering::Universal {
class CullContextData;
}
namespace UnityEngine::Rendering::Universal {
struct HDRColorBufferPrecision;
}
namespace UnityEngine::Rendering::Universal {
struct ImageUpscalingFilter;
}
namespace UnityEngine::Rendering::Universal {
class Pipeline_Profiling_UniversalRenderPipeline_Context;
}
namespace UnityEngine::Rendering::Universal {
class Pipeline_Profiling_UniversalRenderPipeline_Renderer;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_UniversalRenderPipeline_Pipeline;
}
namespace UnityEngine::Rendering::Universal {
class RTHandleResourcePool;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
struct TemporalAA_Settings;
}
namespace UnityEngine::Rendering::Universal {
class Tonemapping;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalPostProcessingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineGlobalSettings;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineRuntimeTextures;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_CameraMetadataCache;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderPipeline_CameraRenderingScope;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderPipeline_ContextRenderingScope;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_SingleCameraRequest;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering::Universal {
struct UpscalingFilterSelection;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsUI;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_HDRDisplayInformation;
}
namespace UnityEngine::Rendering {
struct PerObjectData;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RenderPipelineGlobalSettings;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry;
}
namespace UnityEngine::Rendering::Universal {
class Pipeline_Profiling_UniversalRenderPipeline_Context;
}
namespace UnityEngine::Rendering::Universal {
class Pipeline_Profiling_UniversalRenderPipeline_Renderer;
}
namespace UnityEngine::Rendering::Universal {
class Profiling_UniversalRenderPipeline_Pipeline;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_CameraMetadataCache;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline_SingleCameraRequest;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline___c;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderPipeline_CameraRenderingScope;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderPipeline_ContextRenderingScope;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*, "UnityEngine.Rendering.Universal",
                    "UniversalRenderPipeline/CameraMetadataCache/CameraMetadataCacheEntry");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline/Context");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer*, "UnityEngine.Rendering.Universal",
                    "UniversalRenderPipeline/Profiling/Pipeline/Renderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling/Pipeline");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/CameraMetadataCache");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/Profiling");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/SingleCameraRequest");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/CameraRenderingScope");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope, "UnityEngine.Rendering.Universal", "UniversalRenderPipeline/ContextRenderingScope");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/CameraMetadataCache/CameraMetadataCacheEntry
class CORDL_TYPE CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field sampler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sampler, put = __cordl_internal_set_sampler)) ::UnityEngine::Rendering::ProfilingSampler* sampler;

  static inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* New_ctor();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_sampler();

  constexpr void __cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x6d0c3c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry(CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry(CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13244 };

  /// @brief Field sampler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___sampler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry, ___sampler) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/CameraMetadataCache
class CORDL_TYPE UniversalRenderPipeline_CameraMetadataCache : public ::System::Object {
public:
  // Declarations
  using CameraMetadataCacheEntry = ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry;

  /// @brief Field k_NoAllocEntry, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_NoAllocEntry,
                      put = setStaticF_k_NoAllocEntry)) ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* k_NoAllocEntry;

  /// @brief Field s_MetadataCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MetadataCache, put = setStaticF_s_MetadataCache)) ::System::Collections::Generic::Dictionary_2<
      int32_t, ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>* s_MetadataCache;

  /// @brief Method GetCached, addr 0x6d0c1f8, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* GetCached(::UnityEngine::Camera* camera);

  static inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* getStaticF_k_NoAllocEntry();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>*
  getStaticF_s_MetadataCache();

  static inline void setStaticF_k_NoAllocEntry(::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* value);

  static inline void
  setStaticF_s_MetadataCache(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipeline_CameraMetadataCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_CameraMetadataCache", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipeline_CameraMetadataCache(UniversalRenderPipeline_CameraMetadataCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_CameraMetadataCache", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipeline_CameraMetadataCache(UniversalRenderPipeline_CameraMetadataCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13245 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Renderer
class CORDL_TYPE Pipeline_Profiling_UniversalRenderPipeline_Renderer : public ::System::Object {
public:
  // Declarations
  /// @brief Field setupCullingParameters, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setupCullingParameters, put = setStaticF_setupCullingParameters)) ::UnityEngine::Rendering::ProfilingSampler* setupCullingParameters;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupCullingParameters();

  static inline void setStaticF_setupCullingParameters(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pipeline_Profiling_UniversalRenderPipeline_Renderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pipeline_Profiling_UniversalRenderPipeline_Renderer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pipeline_Profiling_UniversalRenderPipeline_Renderer(Pipeline_Profiling_UniversalRenderPipeline_Renderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pipeline_Profiling_UniversalRenderPipeline_Renderer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pipeline_Profiling_UniversalRenderPipeline_Renderer(Pipeline_Profiling_UniversalRenderPipeline_Renderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13246 };

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline/Context
class CORDL_TYPE Pipeline_Profiling_UniversalRenderPipeline_Context : public ::System::Object {
public:
  // Declarations
  /// @brief Field submit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_submit, put = setStaticF_submit)) ::UnityEngine::Rendering::ProfilingSampler* submit;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_submit();

  static inline void setStaticF_submit(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pipeline_Profiling_UniversalRenderPipeline_Context();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pipeline_Profiling_UniversalRenderPipeline_Context", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pipeline_Profiling_UniversalRenderPipeline_Context(Pipeline_Profiling_UniversalRenderPipeline_Context&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pipeline_Profiling_UniversalRenderPipeline_Context", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pipeline_Profiling_UniversalRenderPipeline_Context(Pipeline_Profiling_UniversalRenderPipeline_Context const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13247 };

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"ScriptableRenderContext" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling/Pipeline
class CORDL_TYPE Profiling_UniversalRenderPipeline_Pipeline : public ::System::Object {
public:
  // Declarations
  using Context = ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context;

  using Renderer = ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer;

  /// @brief Field buildAdditionalLightsShadowAtlasLayout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_buildAdditionalLightsShadowAtlasLayout,
                      put = setStaticF_buildAdditionalLightsShadowAtlasLayout)) ::UnityEngine::Rendering::ProfilingSampler* buildAdditionalLightsShadowAtlasLayout;

  /// @brief Field getMainLightIndex, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_getMainLightIndex, put = setStaticF_getMainLightIndex)) ::UnityEngine::Rendering::ProfilingSampler* getMainLightIndex;

  /// @brief Field getPerObjectLightFlags, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_getPerObjectLightFlags, put = setStaticF_getPerObjectLightFlags)) ::UnityEngine::Rendering::ProfilingSampler* getPerObjectLightFlags;

  /// @brief Field initializeAdditionalCameraData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initializeAdditionalCameraData, put = setStaticF_initializeAdditionalCameraData)) ::UnityEngine::Rendering::ProfilingSampler* initializeAdditionalCameraData;

  /// @brief Field initializeCameraData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initializeCameraData, put = setStaticF_initializeCameraData)) ::UnityEngine::Rendering::ProfilingSampler* initializeCameraData;

  /// @brief Field initializeLightData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initializeLightData, put = setStaticF_initializeLightData)) ::UnityEngine::Rendering::ProfilingSampler* initializeLightData;

  /// @brief Field initializeRenderingData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initializeRenderingData, put = setStaticF_initializeRenderingData)) ::UnityEngine::Rendering::ProfilingSampler* initializeRenderingData;

  /// @brief Field initializeShadowData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initializeShadowData, put = setStaticF_initializeShadowData)) ::UnityEngine::Rendering::ProfilingSampler* initializeShadowData;

  /// @brief Field initializeStackedCameraData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_initializeStackedCameraData, put = setStaticF_initializeStackedCameraData)) ::UnityEngine::Rendering::ProfilingSampler* initializeStackedCameraData;

  /// @brief Field setupPerCameraShaderConstants, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setupPerCameraShaderConstants, put = setStaticF_setupPerCameraShaderConstants)) ::UnityEngine::Rendering::ProfilingSampler* setupPerCameraShaderConstants;

  /// @brief Field setupPerFrameShaderConstants, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_setupPerFrameShaderConstants, put = setStaticF_setupPerFrameShaderConstants)) ::UnityEngine::Rendering::ProfilingSampler* setupPerFrameShaderConstants;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_buildAdditionalLightsShadowAtlasLayout();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_getMainLightIndex();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_getPerObjectLightFlags();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeAdditionalCameraData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeCameraData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeLightData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeRenderingData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeShadowData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_initializeStackedCameraData();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupPerCameraShaderConstants();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_setupPerFrameShaderConstants();

  static inline void setStaticF_buildAdditionalLightsShadowAtlasLayout(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_getMainLightIndex(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_getPerObjectLightFlags(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeAdditionalCameraData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeCameraData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeLightData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeRenderingData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeShadowData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_initializeStackedCameraData(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupPerCameraShaderConstants(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_setupPerFrameShaderConstants(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Profiling_UniversalRenderPipeline_Pipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Profiling_UniversalRenderPipeline_Pipeline", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Profiling_UniversalRenderPipeline_Pipeline(Profiling_UniversalRenderPipeline_Pipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Profiling_UniversalRenderPipeline_Pipeline", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Profiling_UniversalRenderPipeline_Pipeline(Profiling_UniversalRenderPipeline_Pipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13248 };

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"UniversalRenderPipeline" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/Profiling
class CORDL_TYPE UniversalRenderPipeline_Profiling : public ::System::Object {
public:
  // Declarations
  using Pipeline = ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipeline_Profiling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_Profiling", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipeline_Profiling(UniversalRenderPipeline_Profiling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_Profiling", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipeline_Profiling(UniversalRenderPipeline_Profiling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13249 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [IsReadOnly]
// Dependencies UnityEngine.Rendering.ScriptableRenderContext
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/CameraRenderingScope
struct CORDL_TYPE UniversalRenderPipeline_CameraRenderingScope {
public:
  // Declarations
  /// @brief Field beginCameraRenderingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beginCameraRenderingSampler, put = setStaticF_beginCameraRenderingSampler)) ::UnityEngine::Rendering::ProfilingSampler* beginCameraRenderingSampler;

  /// @brief Field endCameraRenderingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endCameraRenderingSampler, put = setStaticF_endCameraRenderingSampler)) ::UnityEngine::Rendering::ProfilingSampler* endCameraRenderingSampler;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6d0c9bc, size 0x90, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x6d0c914, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beginCameraRenderingSampler();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_endCameraRenderingSampler();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  static inline void setStaticF_beginCameraRenderingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_endCameraRenderingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipeline_CameraRenderingScope();

  // Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Camera", ty:
  // "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRenderPipeline_CameraRenderingScope(::UnityEngine::Rendering::ScriptableRenderContext m_Context, ::UnityW<::UnityEngine::Camera> m_Camera) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13250 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Context, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext m_Context;

  /// @brief Field m_Camera, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> m_Camera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope, m_Context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope, m_Camera) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [IsReadOnly]
// Dependencies UnityEngine.Rendering.ScriptableRenderContext
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/ContextRenderingScope
struct CORDL_TYPE UniversalRenderPipeline_ContextRenderingScope {
public:
  // Declarations
  /// @brief Field beginContextRenderingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beginContextRenderingSampler, put = setStaticF_beginContextRenderingSampler)) ::UnityEngine::Rendering::ProfilingSampler* beginContextRenderingSampler;

  /// @brief Field endContextRenderingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endContextRenderingSampler, put = setStaticF_endContextRenderingSampler)) ::UnityEngine::Rendering::ProfilingSampler* endContextRenderingSampler;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6d0cbcc, size 0x90, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x6d0cb1c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_beginContextRenderingSampler();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_endContextRenderingSampler();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  static inline void setStaticF_beginContextRenderingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_endContextRenderingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipeline_ContextRenderingScope();

  // Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Cameras", ty:
  // "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRenderPipeline_ContextRenderingScope(::UnityEngine::Rendering::ScriptableRenderContext m_Context,
                                                          ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* m_Cameras) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13251 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Context, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext m_Context;

  /// @brief Field m_Cameras, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* m_Cameras;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope, m_Context) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope, m_Cameras) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.CubemapFace
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/SingleCameraRequest
class CORDL_TYPE UniversalRenderPipeline_SingleCameraRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field destination, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityW<::UnityEngine::RenderTexture> destination;

  /// @brief Field face, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_face, put = __cordl_internal_set_face)) ::UnityEngine::CubemapFace face;

  /// @brief Field mipLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mipLevel, put = __cordl_internal_set_mipLevel)) int32_t mipLevel;

  /// @brief Field slice, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_slice, put = __cordl_internal_set_slice)) int32_t slice;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest* New_ctor();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_destination() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_destination();

  constexpr ::UnityEngine::CubemapFace const& __cordl_internal_get_face() const;

  constexpr ::UnityEngine::CubemapFace& __cordl_internal_get_face();

  constexpr int32_t const& __cordl_internal_get_mipLevel() const;

  constexpr int32_t& __cordl_internal_get_mipLevel();

  constexpr int32_t const& __cordl_internal_get_slice() const;

  constexpr int32_t& __cordl_internal_get_slice();

  constexpr void __cordl_internal_set_destination(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_face(::UnityEngine::CubemapFace value);

  constexpr void __cordl_internal_set_mipLevel(int32_t value);

  constexpr void __cordl_internal_set_slice(int32_t value);

  /// @brief Method .ctor, addr 0x6d0cd2c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipeline_SingleCameraRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_SingleCameraRequest", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipeline_SingleCameraRequest(UniversalRenderPipeline_SingleCameraRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline_SingleCameraRequest", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipeline_SingleCameraRequest(UniversalRenderPipeline_SingleCameraRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13252 };

  /// @brief Field destination, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___destination;

  /// @brief Field mipLevel, offset: 0x18, size: 0x4, def value: None
  int32_t ___mipLevel;

  /// @brief Field face, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::CubemapFace ___face;

  /// @brief Field slice, offset: 0x20, size: 0x4, def value: None
  int32_t ___slice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest, ___destination) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest, ___mipLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest, ___face) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest, ___slice) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline/<>c
class CORDL_TYPE UniversalRenderPipeline___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* __9;

  /// @brief Field <>9__52_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__52_0, put = setStaticF___9__52_0)) ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* __9__52_0;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* New_ctor();

  /// @brief Method <.cctor>b__132_0, addr 0x6d0cdf8, size 0x408, virtual false, abstract: false, final false
  inline void __cctor_b__132_0(::ArrayW<::UnityEngine::Light*> requests, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);

  /// @brief Method <.ctor>b__52_0, addr 0x6d0cd90, size 0x68, virtual false, abstract: false, final false
  inline int32_t __ctor_b__52_0(::UnityEngine::Camera* camera1, ::UnityEngine::Camera* camera2);

  /// @brief Method .ctor, addr 0x6d0cd8c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* getStaticF___9();

  static inline ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* getStaticF___9__52_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* value);

  static inline void setStaticF___9__52_0(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipeline___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipeline___c(UniversalRenderPipeline___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipeline___c(UniversalRenderPipeline___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13253 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderTextureUVOriginStrategy, UnityEngine.Rendering.RenderPipeline, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipeline
class CORDL_TYPE UniversalRenderPipeline : public ::UnityEngine::Rendering::RenderPipeline {
public:
  // Declarations
  using CameraMetadataCache = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache;

  using CameraRenderingScope = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope;

  using ContextRenderingScope = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope;

  using Profiling = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling;

  using SingleCameraRequest = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest;

  using __c = ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c;

  /// @brief Field <canOptimizeScreenMSAASamples>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__canOptimizeScreenMSAASamples_k__BackingField,
                      put = setStaticF__canOptimizeScreenMSAASamples_k__BackingField)) bool _canOptimizeScreenMSAASamples_k__BackingField;

  /// @brief Field <renderTextureUVOriginStrategy>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(
      get = getStaticF__renderTextureUVOriginStrategy_k__BackingField,
      put = setStaticF__renderTextureUVOriginStrategy_k__BackingField)) ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy _renderTextureUVOriginStrategy_k__BackingField;

  /// @brief Field <runtimeTextures>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__runtimeTextures_k__BackingField,
                      put = __cordl_internal_set__runtimeTextures_k__BackingField)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* _runtimeTextures_k__BackingField;

  /// @brief Field <startFrameScreenMSAASamples>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__startFrameScreenMSAASamples_k__BackingField,
                      put = setStaticF__startFrameScreenMSAASamples_k__BackingField)) int32_t _startFrameScreenMSAASamples_k__BackingField;

  /// @brief Field apvIsEnabled, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_apvIsEnabled, put = __cordl_internal_set_apvIsEnabled)) bool apvIsEnabled;

  /// @brief Field cameraComparison, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraComparison, put = __cordl_internal_set_cameraComparison)) ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* cameraComparison;

  __declspec(property(get = get_defaultSettings)) ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> defaultSettings;

  /// @brief Field enableHDROutputOnce, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_enableHDROutputOnce, put = __cordl_internal_set_enableHDROutputOnce)) bool enableHDROutputOnce;

  /// @brief Field k_DefaultLightAttenuation, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_DefaultLightAttenuation, put = setStaticF_k_DefaultLightAttenuation)) ::UnityEngine::Vector4 k_DefaultLightAttenuation;

  /// @brief Field k_DefaultLightColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_DefaultLightColor, put = setStaticF_k_DefaultLightColor)) ::UnityEngine::Vector4 k_DefaultLightColor;

  /// @brief Field k_DefaultLightPosition, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_DefaultLightPosition, put = setStaticF_k_DefaultLightPosition)) ::UnityEngine::Vector4 k_DefaultLightPosition;

  /// @brief Field k_DefaultLightSpotDirection, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_DefaultLightSpotDirection, put = setStaticF_k_DefaultLightSpotDirection)) ::UnityEngine::Vector4 k_DefaultLightSpotDirection;

  /// @brief Field k_DefaultLightsProbeChannel, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_DefaultLightsProbeChannel, put = setStaticF_k_DefaultLightsProbeChannel)) ::UnityEngine::Vector4 k_DefaultLightsProbeChannel;

  /// @brief Field lightsDelegate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lightsDelegate, put = setStaticF_lightsDelegate)) ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* lightsDelegate;

  /// @brief Field m_DebugDisplaySettingsUI, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugDisplaySettingsUI,
                      put = __cordl_internal_set_m_DebugDisplaySettingsUI)) ::UnityEngine::Rendering::DebugDisplaySettingsUI* m_DebugDisplaySettingsUI;

  /// @brief Field m_GlobalSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlobalSettings, put = __cordl_internal_set_m_GlobalSettings)) ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>
      m_GlobalSettings;

  /// @brief Field m_ShadowBiasData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ShadowBiasData, put = setStaticF_m_ShadowBiasData)) ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* m_ShadowBiasData;

  /// @brief Field m_ShadowResolutionData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ShadowResolutionData, put = setStaticF_m_ShadowResolutionData)) ::System::Collections::Generic::List_1<int32_t>* m_ShadowResolutionData;

  /// @brief Field offscreenUIRenderedInCurrentFrame, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_offscreenUIRenderedInCurrentFrame, put = setStaticF_offscreenUIRenderedInCurrentFrame)) bool offscreenUIRenderedInCurrentFrame;

  /// @brief Field pipelineAsset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_pipelineAsset, put = __cordl_internal_set_pipelineAsset)) ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> pipelineAsset;

  /// @brief Field requireOffscreenUICoverPrepass, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_requireOffscreenUICoverPrepass, put = setStaticF_requireOffscreenUICoverPrepass)) bool requireOffscreenUICoverPrepass;

  __declspec(property(get = get_runtimeTextures, put = set_runtimeTextures)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* runtimeTextures;

  /// @brief Field s_RTHandlePool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RTHandlePool, put = setStaticF_s_RTHandlePool)) ::UnityEngine::Rendering::Universal::RTHandleResourcePool* s_RTHandlePool;

  /// @brief Field s_RenderGraph, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RenderGraph, put = setStaticF_s_RenderGraph)) ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* s_RenderGraph;

  /// @brief Field stackedOverlayCamerasRequireDepthForPostProcessing, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_stackedOverlayCamerasRequireDepthForPostProcessing,
                      put = setStaticF_stackedOverlayCamerasRequireDepthForPostProcessing)) bool stackedOverlayCamerasRequireDepthForPostProcessing;

  /// @brief Field warnedRuntimeSwitchHDROutputToSDROutput, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_warnedRuntimeSwitchHDROutputToSDROutput,
                      put = __cordl_internal_set_warnedRuntimeSwitchHDROutputToSDROutput)) bool warnedRuntimeSwitchHDROutputToSDROutput;

  /// @brief Method AdjustUIOverlayOwnership, addr 0x6d03184, size 0xc8, virtual false, abstract: false, final false
  static inline void AdjustUIOverlayOwnership(int32_t cameraCount);

  /// @brief Method ApplyAdaptivePerformance, addr 0x6d06668, size 0x1b0, virtual false, abstract: false, final false
  static inline void ApplyAdaptivePerformance(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method ApplyAdaptivePerformance, addr 0x6d09494, size 0x2dc, virtual false, abstract: false, final false
  static inline void ApplyAdaptivePerformance(::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method ApplyTaaRenderingDebugOverrides, addr 0x6d0aff0, size 0xc0, virtual false, abstract: false, final false
  static inline void ApplyTaaRenderingDebugOverrides(::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings> taaSettings);

  /// @brief Method BuildAdditionalLightsShadowAtlasLayout, addr 0x6d09af8, size 0x114, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout BuildAdditionalLightsShadowAtlasLayout(::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                                              ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                                              ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method CheckAndApplyDebugSettings, addr 0x6d09264, size 0x230, virtual false, abstract: false, final false
  static inline void CheckAndApplyDebugSettings(::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method CheckPostProcessForDepth, addr 0x6d09c0c, size 0xec, virtual false, abstract: false, final false
  static inline bool CheckPostProcessForDepth();

  /// @brief Method CheckPostProcessForDepth, addr 0x6d0a254, size 0x94, virtual false, abstract: false, final false
  static inline bool CheckPostProcessForDepth(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method CreateCameraData, addr 0x6d058b8, size 0x558, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::UniversalCameraData* CreateCameraData(::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Camera* camera,
                                                                                           ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData);

  /// @brief Method CreateCullContextData, addr 0x6d091b8, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::CullContextData* CreateCullContextData(::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                            ::UnityEngine::Rendering::ScriptableRenderContext context);

  /// @brief Method CreateLightData, addr 0x6d07ed4, size 0x2bc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::UniversalLightData* CreateLightData(::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                         ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                                                                         ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights,
                                                                                         ::System::Nullable_1<::UnityEngine::Rendering::Universal::RenderingMode> renderingMode);

  /// @brief Method CreatePostProcessingData, addr 0x6d08f7c, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* CreatePostProcessingData(::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                                           ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings);

  /// @brief Method CreateRenderTextureDescriptor, addr 0x6d0a9e8, size 0x304, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor CreateRenderTextureDescriptor(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                     bool isHdrEnabled, ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision requestHDRColorBufferPrecision,
                                                                                     int32_t msaaSamples, bool needsAlpha, bool requiresOpaqueTexture);

  /// @brief Method CreateRenderingData, addr 0x6d0905c, size 0x15c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::UniversalRenderingData*
  CreateRenderingData(::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::UnityEngine::Rendering::CommandBuffer* cmd,
                      ::System::Nullable_1<::UnityEngine::Rendering::Universal::RenderingMode> renderingMode, ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer);

  /// @brief Method CreateShadowAtlasAndCullShadowCasters, addr 0x6d09770, size 0x12c, virtual false, abstract: false, final false
  static inline void CreateShadowAtlasAndCullShadowCasters(::UnityEngine::Rendering::Universal::UniversalLightData* lightData, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                           ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                           ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> context);

  /// @brief Method CreateShadowData, addr 0x6d08190, size 0xdec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::UniversalShadowData* CreateShadowData(::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                           ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* urpAsset,
                                                                                           ::System::Nullable_1<::UnityEngine::Rendering::Universal::RenderingMode> renderingMode);

  /// @brief Method CreateUniversalResourceData, addr 0x6d07e80, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::UniversalResourceData* CreateUniversalResourceData(::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Dispose, addr 0x6d024ec, size 0x328, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DisposeAdditionalCameraData, addr 0x6d02814, size 0xbc, virtual false, abstract: false, final false
  inline void DisposeAdditionalCameraData();

  /// @brief Method GetBrightestDirectionalLightIndex, addr 0x6d0b374, size 0x170, virtual false, abstract: false, final false
  static inline int32_t GetBrightestDirectionalLightIndex(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights);

  /// @brief Method GetHDROutputGradingParameters, addr 0x6d0b74c, size 0xc8, virtual false, abstract: false, final false
  static inline void GetHDROutputGradingParameters(::UnityEngine::Rendering::Universal::Tonemapping* tonemapping, ::by_ref<::UnityEngine::Vector4> hdrOutputParameters);

  /// @brief Method GetHDROutputLuminanceParameters, addr 0x6d0b65c, size 0xf0, virtual false, abstract: false, final false
  static inline void GetHDROutputLuminanceParameters(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayInformation, ::UnityEngine::ColorGamut hdrDisplayColorGamut,
                                                     ::UnityEngine::Rendering::Universal::Tonemapping* tonemapping, ::by_ref<::UnityEngine::Vector4> hdrOutputParameters);

  /// @brief Method GetLastBaseCameraIndex, addr 0x6d03824, size 0x138, virtual false, abstract: false, final false
  inline int32_t GetLastBaseCameraIndex(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method GetLightAttenuationAndSpotDirection, addr 0x6d0b85c, size 0x140, virtual false, abstract: false, final false
  static inline void GetLightAttenuationAndSpotDirection(::UnityEngine::LightType lightType, float_t lightRange, ::UnityEngine::Matrix4x4 lightLocalToWorldMatrix, float_t spotAngle,
                                                         ::System::Nullable_1<float_t> innerSpotAngle, ::by_ref<::UnityEngine::Vector4> lightAttenuation,
                                                         ::by_ref<::UnityEngine::Vector4> lightSpotDir);

  /// @brief Method GetMainLightCascadeSplit, addr 0x6d0b210, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetMainLightCascadeSplit(int32_t mainLightShadowCascadesCount, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* urpAsset);

  /// @brief Method GetMainLightIndex, addr 0x6d0b270, size 0x104, virtual false, abstract: false, final false
  static inline int32_t GetMainLightIndex(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                          ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights);

  /// @brief Method GetPerObjectLightFlags, addr 0x6d0b0b0, size 0x160, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::PerObjectData GetPerObjectLightFlags(::UnityEngine::Rendering::Universal::UniversalLightData* universalLightData,
                                                                               ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                                                               ::System::Nullable_1<::UnityEngine::Rendering::Universal::RenderingMode> renderingMode);

  /// @brief Method GetPunctualLightDistanceAttenuation, addr 0x6d0b99c, size 0x3c, virtual false, abstract: false, final false
  static inline void GetPunctualLightDistanceAttenuation(float_t lightRange, ::by_ref<::UnityEngine::Vector4> lightAttenuation);

  /// @brief Method GetRenderer, addr 0x6d057cc, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* GetRenderer(::UnityEngine::Camera* camera,
                                                                                     ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData);

  /// @brief Method GetSpotAngleAttenuation, addr 0x6d0b9f8, size 0x158, virtual false, abstract: false, final false
  static inline void GetSpotAngleAttenuation(float_t spotAngle, ::System::Nullable_1<float_t> innerSpotAngle, ::by_ref<::UnityEngine::Vector4> lightAttenuation);

  /// @brief Method GetSpotDirection, addr 0x6d0b9d8, size 0x20, virtual false, abstract: false, final false
  static inline void GetSpotDirection(::by_ref<::UnityEngine::Matrix4x4> lightLocalToWorldMatrix, ::by_ref<::UnityEngine::Vector4> lightSpotDir);

  /// @brief Method HDROutputForAnyDisplayIsActive, addr 0x6d0b5ac, size 0xb0, virtual false, abstract: false, final false
  static inline bool HDROutputForAnyDisplayIsActive();

  /// @brief Method HDROutputForMainDisplayIsActive, addr 0x6d0324c, size 0x100, virtual false, abstract: false, final false
  static inline bool HDROutputForMainDisplayIsActive();

  /// @brief Method InitializeAdditionalCameraData, addr 0x6d05e10, size 0x858, virtual false, abstract: false, final false
  static inline void InitializeAdditionalCameraData(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, bool resolveFinalTarget,
                                                    bool isLastBaseCamera, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method InitializeLightConstants_Common, addr 0x6d0bb50, size 0x34c, virtual false, abstract: false, final false
  static inline void InitializeLightConstants_Common(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights, int32_t lightIndex, ::by_ref<::UnityEngine::Vector4> lightPos,
                                                     ::by_ref<::UnityEngine::Vector4> lightColor, ::by_ref<::UnityEngine::Vector4> lightAttenuation, ::by_ref<::UnityEngine::Vector4> lightSpotDir,
                                                     ::by_ref<::UnityEngine::Vector4> lightOcclusionProbeChannel);

  /// @brief Method InitializeMainLightShadowResolution, addr 0x6d09a4c, size 0xac, virtual false, abstract: false, final false
  static inline void InitializeMainLightShadowResolution(::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  /// @brief Method InitializeScaledDimensions, addr 0x6d0a2e8, size 0x94, virtual false, abstract: false, final false
  static inline void InitializeScaledDimensions(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method InitializeStackedCameraData, addr 0x6d0a37c, size 0x66c, virtual false, abstract: false, final false
  static inline void InitializeStackedCameraData(::UnityEngine::Camera* baseCamera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* baseAdditionalCameraData,
                                                 ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method IsGameCamera, addr 0x6d0395c, size 0xe0, virtual false, abstract: false, final false
  static inline bool IsGameCamera(::UnityEngine::Camera* camera);

  /// @brief Method IsRenderRequestSupported, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename RequestData> inline bool IsRenderRequestSupported(::UnityEngine::Camera* camera, RequestData data);

  /// @brief Method MakeRenderTextureGraphicsFormat, addr 0x6d0b4e4, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat
  MakeRenderTextureGraphicsFormat(bool isHdrEnabled, ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision requestHDRColorBufferPrecision, bool needsAlpha);

  /// @brief Method MakeUnormRenderTextureGraphicsFormat, addr 0x6d0b814, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat MakeUnormRenderTextureGraphicsFormat();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline* New_ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset);

  /// @brief Method ProcessRenderRequests, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename RequestData> inline void ProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, RequestData renderRequest);

  /// @brief Method RecordAndExecuteRenderGraph, addr 0x6d0989c, size 0x1b0, virtual false, abstract: false, final false
  static inline void RecordAndExecuteRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                 ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera,
                                                 ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy uvOriginStrategy);

  /// @brief Method Render, addr 0x6d028d0, size 0x640, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method RenderCameraStack, addr 0x6d03a3c, size 0x1598, virtual false, abstract: false, final false
  static inline void RenderCameraStack(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* baseCamera, bool isLastBaseCamera);

  /// [Obsolete("RenderSingleCamera is obsolete, please use RenderPipeline.SubmitRenderRequest with UniversalRenderer.SingleCameraRequest as RequestData type. #from(2023.1)")]
  /// @brief Method RenderSingleCamera, addr 0x6d05344, size 0x6c, virtual false, abstract: false, final false
  static inline void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method RenderSingleCamera, addr 0x6d06818, size 0x1044, virtual false, abstract: false, final false
  static inline void RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method RenderSingleCameraInternal, addr 0x6d053b0, size 0x41c, virtual false, abstract: false, final false
  static inline void RenderSingleCameraInternal(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera,
                                                ::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*> additionalCameraData, bool isLastBaseCamera);

  /// @brief Method RenderSingleCameraInternal, addr 0x6d05268, size 0xdc, virtual false, abstract: false, final false
  static inline void RenderSingleCameraInternal(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, bool isLastBaseCamera);

  /// @brief Method ResolveUpscalingFilterSelection, addr 0x6d0acec, size 0x1cc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::ImageUpscalingFilter
  ResolveUpscalingFilterSelection(::UnityEngine::Vector2 imageSize, float_t renderScale, ::UnityEngine::Rendering::Universal::UpscalingFilterSelection selection, bool enableRenderGraph);

  /// @brief Method SetHDRState, addr 0x6d02f10, size 0x274, virtual false, abstract: false, final false
  inline void SetHDRState(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method SetSupportedRenderingFeatures, addr 0x6d023e0, size 0x10c, virtual false, abstract: false, final false
  static inline void SetSupportedRenderingFeatures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* pipelineAsset);

  /// @brief Method SetupPerCameraShaderConstants, addr 0x6d079d0, size 0x390, virtual false, abstract: false, final false
  static inline void SetupPerCameraShaderConstants(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method SetupPerFrameShaderConstants, addr 0x6d0345c, size 0x334, virtual false, abstract: false, final false
  inline void SetupPerFrameShaderConstants();

  /// @brief Method SetupScreenMSAASamplesState, addr 0x6d0334c, size 0x110, virtual false, abstract: false, final false
  static inline void SetupScreenMSAASamplesState(int32_t cameraCount);

  /// @brief Method SortCameras, addr 0x6d03790, size 0x94, virtual false, abstract: false, final false
  inline void SortCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method ToString, addr 0x6d01b3c, size 0x18, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetCullingParameters, addr 0x6d0785c, size 0x174, virtual false, abstract: false, final false
  static inline bool TryGetCullingParameters(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParams);

  /// @brief Method UpdateCameraData, addr 0x6d09e6c, size 0x3e8, virtual false, abstract: false, final false
  static inline void UpdateCameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* baseCameraData, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Experimental::Rendering::XRPass* const> xr);

  /// @brief Method UpdateCameraStereoMatrices, addr 0x6d09cf8, size 0x174, virtual false, abstract: false, final false
  static inline void UpdateCameraStereoMatrices(::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRPass* xr);

  /// @brief Method UpdateTemporalAAData, addr 0x6d0aeb8, size 0x138, virtual false, abstract: false, final false
  static inline void UpdateTemporalAAData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                          ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData);

  /// @brief Method UpdateTemporalAATargets, addr 0x6d07d60, size 0x120, virtual false, abstract: false, final false
  static inline void UpdateTemporalAATargets(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method UpdateVolumeFramework, addr 0x6d04fd4, size 0x294, virtual false, abstract: false, final false
  static inline void UpdateVolumeFramework(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData);

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* const& __cordl_internal_get__runtimeTextures_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*& __cordl_internal_get__runtimeTextures_k__BackingField();

  constexpr bool const& __cordl_internal_get_apvIsEnabled() const;

  constexpr bool& __cordl_internal_get_apvIsEnabled();

  constexpr ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* const& __cordl_internal_get_cameraComparison() const;

  constexpr ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get_cameraComparison();

  constexpr bool const& __cordl_internal_get_enableHDROutputOnce() const;

  constexpr bool& __cordl_internal_get_enableHDROutputOnce();

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsUI* const& __cordl_internal_get_m_DebugDisplaySettingsUI() const;

  constexpr ::UnityEngine::Rendering::DebugDisplaySettingsUI*& __cordl_internal_get_m_DebugDisplaySettingsUI();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> const& __cordl_internal_get_m_GlobalSettings() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>& __cordl_internal_get_m_GlobalSettings();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> const& __cordl_internal_get_pipelineAsset() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>& __cordl_internal_get_pipelineAsset();

  constexpr bool const& __cordl_internal_get_warnedRuntimeSwitchHDROutputToSDROutput() const;

  constexpr bool& __cordl_internal_get_warnedRuntimeSwitchHDROutputToSDROutput();

  constexpr void __cordl_internal_set__runtimeTextures_k__BackingField(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* value);

  constexpr void __cordl_internal_set_apvIsEnabled(bool value);

  constexpr void __cordl_internal_set_cameraComparison(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value);

  constexpr void __cordl_internal_set_enableHDROutputOnce(bool value);

  constexpr void __cordl_internal_set_m_DebugDisplaySettingsUI(::UnityEngine::Rendering::DebugDisplaySettingsUI* value);

  constexpr void __cordl_internal_set_m_GlobalSettings(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> value);

  constexpr void __cordl_internal_set_pipelineAsset(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> value);

  constexpr void __cordl_internal_set_warnedRuntimeSwitchHDROutputToSDROutput(bool value);

  /// @brief Method .ctor, addr 0x6d01b54, size 0x88c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset);

  static inline bool getStaticF__canOptimizeScreenMSAASamples_k__BackingField();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy getStaticF__renderTextureUVOriginStrategy_k__BackingField();

  static inline int32_t getStaticF__startFrameScreenMSAASamples_k__BackingField();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightAttenuation();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightColor();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightPosition();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightSpotDirection();

  static inline ::UnityEngine::Vector4 getStaticF_k_DefaultLightsProbeChannel();

  static inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* getStaticF_lightsDelegate();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* getStaticF_m_ShadowBiasData();

  static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_m_ShadowResolutionData();

  static inline bool getStaticF_offscreenUIRenderedInCurrentFrame();

  static inline bool getStaticF_requireOffscreenUICoverPrepass();

  static inline ::UnityEngine::Rendering::Universal::RTHandleResourcePool* getStaticF_s_RTHandlePool();

  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* getStaticF_s_RenderGraph();

  static inline bool getStaticF_stackedOverlayCamerasRequireDepthForPostProcessing();

  /// @brief Method get_asset, addr 0x6cf4e74, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> get_asset();

  /// [CompilerGenerated]
  /// @brief Method get_canOptimizeScreenMSAASamples, addr 0x6d019c0, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_canOptimizeScreenMSAASamples();

  /// @brief Method get_defaultSettings, addr 0x6d019b8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> get_defaultSettings();

  /// @brief Method get_lightsPerTile, addr 0x6d017b4, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_lightsPerTile();

  /// @brief Method get_maxNumIterationsEnclosingSphere, addr 0x6d01698, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_maxNumIterationsEnclosingSphere();

  /// @brief Method get_maxPerObjectLights, addr 0x6d016a0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_maxPerObjectLights();

  /// @brief Method get_maxRenderScale, addr 0x6d01690, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_maxRenderScale();

  /// @brief Method get_maxShadowBias, addr 0x6d0167c, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_maxShadowBias();

  /// @brief Method get_maxTileWords, addr 0x6d01814, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_maxTileWords();

  /// @brief Method get_maxVisibleAdditionalLights, addr 0x6d016a8, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t get_maxVisibleAdditionalLights();

  /// @brief Method get_maxVisibleReflectionProbes, addr 0x6d0186c, size 0x80, virtual false, abstract: false, final false
  static inline int32_t get_maxVisibleReflectionProbes();

  /// @brief Method get_maxZBinWords, addr 0x6d0180c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_maxZBinWords();

  /// @brief Method get_minRenderScale, addr 0x6d01684, size 0xc, virtual false, abstract: false, final false
  static inline float_t get_minRenderScale();

  /// [CompilerGenerated]
  /// @brief Method get_renderTextureUVOriginStrategy, addr 0x6d018fc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy get_renderTextureUVOriginStrategy();

  /// [CompilerGenerated]
  /// @brief Method get_runtimeTextures, addr 0x6d018ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* get_runtimeTextures();

  /// [CompilerGenerated]
  /// @brief Method get_startFrameScreenMSAASamples, addr 0x6d01a80, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t get_startFrameScreenMSAASamples();

  static inline void setStaticF__canOptimizeScreenMSAASamples_k__BackingField(bool value);

  static inline void setStaticF__renderTextureUVOriginStrategy_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy value);

  static inline void setStaticF__startFrameScreenMSAASamples_k__BackingField(int32_t value);

  static inline void setStaticF_k_DefaultLightAttenuation(::UnityEngine::Vector4 value);

  static inline void setStaticF_k_DefaultLightColor(::UnityEngine::Vector4 value);

  static inline void setStaticF_k_DefaultLightPosition(::UnityEngine::Vector4 value);

  static inline void setStaticF_k_DefaultLightSpotDirection(::UnityEngine::Vector4 value);

  static inline void setStaticF_k_DefaultLightsProbeChannel(::UnityEngine::Vector4 value);

  static inline void setStaticF_lightsDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* value);

  static inline void setStaticF_m_ShadowBiasData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value);

  static inline void setStaticF_m_ShadowResolutionData(::System::Collections::Generic::List_1<int32_t>* value);

  static inline void setStaticF_offscreenUIRenderedInCurrentFrame(bool value);

  static inline void setStaticF_requireOffscreenUICoverPrepass(bool value);

  static inline void setStaticF_s_RTHandlePool(::UnityEngine::Rendering::Universal::RTHandleResourcePool* value);

  static inline void setStaticF_s_RenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* value);

  static inline void setStaticF_stackedOverlayCamerasRequireDepthForPostProcessing(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_canOptimizeScreenMSAASamples, addr 0x6d01a1c, size 0x64, virtual false, abstract: false, final false
  static inline void set_canOptimizeScreenMSAASamples(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_renderTextureUVOriginStrategy, addr 0x6d01958, size 0x60, virtual false, abstract: false, final false
  static inline void set_renderTextureUVOriginStrategy(::UnityEngine::Rendering::RenderGraphModule::RenderTextureUVOriginStrategy value);

  /// [CompilerGenerated]
  /// @brief Method set_runtimeTextures, addr 0x6d018f4, size 0x8, virtual false, abstract: false, final false
  inline void set_runtimeTextures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* value);

  /// [CompilerGenerated]
  /// @brief Method set_startFrameScreenMSAASamples, addr 0x6d01adc, size 0x60, virtual false, abstract: false, final false
  static inline void set_startFrameScreenMSAASamples(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipeline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipeline(UniversalRenderPipeline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipeline", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipeline(UniversalRenderPipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13254 };

  /// @brief Field k_DefaultRenderingLayerMask offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultRenderingLayerMask{ static_cast<int32_t>(0x1) };

  /// @brief Field k_ShaderTagName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ShaderTagName{ u"UniversalPipeline" };

  /// @brief Field m_DebugDisplaySettingsUI, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplaySettingsUI* ___m_DebugDisplaySettingsUI;

  /// @brief Field m_GlobalSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> ___m_GlobalSettings;

  /// [CompilerGenerated]
  /// @brief Field <runtimeTextures>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* ____runtimeTextures_k__BackingField;

  /// @brief Field apvIsEnabled, offset: 0x30, size: 0x1, def value: None
  bool ___apvIsEnabled;

  /// @brief Field pipelineAsset, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> ___pipelineAsset;

  /// @brief Field enableHDROutputOnce, offset: 0x40, size: 0x1, def value: None
  bool ___enableHDROutputOnce;

  /// @brief Field warnedRuntimeSwitchHDROutputToSDROutput, offset: 0x41, size: 0x1, def value: None
  bool ___warnedRuntimeSwitchHDROutputToSDROutput;

  /// @brief Field cameraComparison, offset: 0x48, size: 0x8, def value: None
  ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* ___cameraComparison;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___m_DebugDisplaySettingsUI) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___m_GlobalSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ____runtimeTextures_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___apvIsEnabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___pipelineAsset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___enableHDROutputOnce) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___warnedRuntimeSwitchHDROutputToSDROutput) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline, ___cameraComparison) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipeline) == 0x50, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
