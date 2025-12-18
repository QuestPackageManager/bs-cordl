#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorGradingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRColorBufferPrecision_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LODCrossFadeDitheringType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieResolution_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightProbeSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightRenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MsaaQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PipelineDebugLevel_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RendererType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShEvalMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowCascadesOption_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShadowResolution_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SoftShadowQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UpscalingFilterSelection_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__GPUResidentDrawerMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBlendingTextureMemoryBudget_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineAsset)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRenderGraphEnabledRenderPipeline;
}
namespace UnityEngine::Rendering::Universal {
struct ColorGradingMode;
}
namespace UnityEngine::Rendering::Universal {
struct DefaultMaterialType;
}
namespace UnityEngine::Rendering::Universal {
struct Downsampling;
}
namespace UnityEngine::Rendering::Universal {
struct HDRColorBufferPrecision;
}
namespace UnityEngine::Rendering::Universal {
struct LODCrossFadeDitheringType;
}
namespace UnityEngine::Rendering::Universal {
struct LightProbeSystem;
}
namespace UnityEngine::Rendering::Universal {
struct LightRenderingMode;
}
namespace UnityEngine::Rendering::Universal {
struct PipelineDebugLevel;
}
namespace UnityEngine::Rendering::Universal {
struct RendererType;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
struct ShEvalMode;
}
namespace UnityEngine::Rendering::Universal {
struct ShaderVariantLogLevel;
}
namespace UnityEngine::Rendering::Universal {
struct ShadowCascadesOption;
}
namespace UnityEngine::Rendering::Universal {
struct SoftShadowQuality;
}
namespace UnityEngine::Rendering::Universal {
struct StoreActionsOptimization;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset_Strings;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset_TextureResources;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipeline;
}
namespace UnityEngine::Rendering::Universal {
struct UpscalingFilterSelection;
}
namespace UnityEngine::Rendering::Universal {
struct VolumeFrameworkUpdateMode;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawerMode;
}
namespace UnityEngine::Rendering {
struct GPUResidentDrawerSettings;
}
namespace UnityEngine::Rendering {
class IProbeVolumeEnabledRenderPipeline;
}
namespace UnityEngine::Rendering {
class ISTPEnabledRenderPipeline;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBlendingTextureMemoryBudget;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Rendering {
class ProbeVolumeSceneData;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine::Rendering {
class RenderPipeline;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset_Strings;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset_TextureResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset/Strings
class CORDL_TYPE UniversalRenderPipelineAsset_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field forwardPlusMissing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_forwardPlusMissing, put = setStaticF_forwardPlusMissing)) ::StringW forwardPlusMissing;

  /// @brief Field notURPRenderer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_notURPRenderer, put = setStaticF_notURPRenderer)) ::StringW notURPRenderer;

  static inline ::StringW getStaticF_forwardPlusMissing();

  static inline ::StringW getStaticF_notURPRenderer();

  static inline void setStaticF_forwardPlusMissing(::StringW value);

  static inline void setStaticF_notURPRenderer(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineAsset_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineAsset_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineAsset_Strings(UniversalRenderPipelineAsset_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineAsset_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineAsset_Strings(UniversalRenderPipelineAsset_Strings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12571 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset/TextureResources
class CORDL_TYPE UniversalRenderPipelineAsset_TextureResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field bayerMatrixTex, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bayerMatrixTex, put = __cordl_internal_set_bayerMatrixTex)) ::UnityW<::UnityEngine::Texture2D> bayerMatrixTex;

  /// @brief Field blueNoise64LTex, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_blueNoise64LTex, put = __cordl_internal_set_blueNoise64LTex)) ::UnityW<::UnityEngine::Texture2D> blueNoise64LTex;

  /// @brief Method NeedsReload, addr 0x668727c, size 0x9c, virtual false, abstract: false, final false
  inline bool NeedsReload();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_bayerMatrixTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_bayerMatrixTex();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_blueNoise64LTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_blueNoise64LTex();

  constexpr void __cordl_internal_set_bayerMatrixTex(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_blueNoise64LTex(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x6686e5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineAsset_TextureResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineAsset_TextureResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineAsset_TextureResources(UniversalRenderPipelineAsset_TextureResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineAsset_TextureResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineAsset_TextureResources(UniversalRenderPipelineAsset_TextureResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12572 };

  /// @brief Field blueNoise64LTex, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___blueNoise64LTex;

  /// @brief Field bayerMatrixTex, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___bayerMatrixTex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources, ___blueNoise64LTex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources, ___bayerMatrixTex) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.GPUResidentDrawerMode, UnityEngine.Rendering.ProbeVolumeBlendingTextureMemoryBudget, UnityEngine.Rendering.ProbeVolumeSHBands,
// UnityEngine.Rendering.ProbeVolumeTextureMemoryBudget, UnityEngine.Rendering.RenderPipelineAsset`1<TRenderPipeline>, UnityEngine.Rendering.Universal.ColorGradingMode,
// UnityEngine.Rendering.Universal.Downsampling, UnityEngine.Rendering.Universal.HDRColorBufferPrecision, UnityEngine.Rendering.Universal.LODCrossFadeDitheringType,
// UnityEngine.Rendering.Universal.LightCookieFormat, UnityEngine.Rendering.Universal.LightCookieResolution, UnityEngine.Rendering.Universal.LightProbeSystem,
// UnityEngine.Rendering.Universal.LightRenderingMode, UnityEngine.Rendering.Universal.MsaaQuality, UnityEngine.Rendering.Universal.PipelineDebugLevel, UnityEngine.Rendering.Universal.RendererType,
// UnityEngine.Rendering.Universal.ShEvalMode, UnityEngine.Rendering.Universal.ShadowCascadesOption, UnityEngine.Rendering.Universal.ShadowQuality, UnityEngine.Rendering.Universal.ShadowResolution,
// UnityEngine.Rendering.Universal.SoftShadowQuality, UnityEngine.Rendering.Universal.StoreActionsOptimization, UnityEngine.Rendering.Universal.UpscalingFilterSelection,
// UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset
class CORDL_TYPE UniversalRenderPipelineAsset : public ::UnityEngine::Rendering::RenderPipelineAsset_1<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*> {
public:
  // Declarations
  using Strings = ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_Strings;

  using TextureResources = ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources;

  /// @brief Field AdditionalLightsDefaultShadowResolutionTierHigh, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsDefaultShadowResolutionTierHigh,
                      put = setStaticF_AdditionalLightsDefaultShadowResolutionTierHigh)) int32_t AdditionalLightsDefaultShadowResolutionTierHigh;

  /// @brief Field AdditionalLightsDefaultShadowResolutionTierLow, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsDefaultShadowResolutionTierLow,
                      put = setStaticF_AdditionalLightsDefaultShadowResolutionTierLow)) int32_t AdditionalLightsDefaultShadowResolutionTierLow;

  /// @brief Field AdditionalLightsDefaultShadowResolutionTierMedium, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AdditionalLightsDefaultShadowResolutionTierMedium,
                      put = setStaticF_AdditionalLightsDefaultShadowResolutionTierMedium)) int32_t AdditionalLightsDefaultShadowResolutionTierMedium;

  __declspec(property(get = UnityEngine_Rendering_IGPUResidentRenderPipeline_get_gpuResidentDrawerSettings)) ::UnityEngine::Rendering::GPUResidentDrawerSettings
      UnityEngine_Rendering_IGPUResidentRenderPipeline_gpuResidentDrawerSettings;

  __declspec(property(get = get_additionalLightsCookieFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat additionalLightsCookieFormat;

  __declspec(property(get = get_additionalLightsCookieResolution)) ::UnityEngine::Vector2Int additionalLightsCookieResolution;

  __declspec(property(get = get_additionalLightsRenderingMode, put = set_additionalLightsRenderingMode)) ::UnityEngine::Rendering::Universal::LightRenderingMode additionalLightsRenderingMode;

  __declspec(property(get = get_additionalLightsShadowResolutionTierHigh, put = set_additionalLightsShadowResolutionTierHigh)) int32_t additionalLightsShadowResolutionTierHigh;

  __declspec(property(get = get_additionalLightsShadowResolutionTierLow, put = set_additionalLightsShadowResolutionTierLow)) int32_t additionalLightsShadowResolutionTierLow;

  __declspec(property(get = get_additionalLightsShadowResolutionTierMedium, put = set_additionalLightsShadowResolutionTierMedium)) int32_t additionalLightsShadowResolutionTierMedium;

  __declspec(property(get = get_additionalLightsShadowmapResolution, put = set_additionalLightsShadowmapResolution)) int32_t additionalLightsShadowmapResolution;

  __declspec(property(get = get_allowPostProcessAlphaOutput)) bool allowPostProcessAlphaOutput;

  /// @brief Field apvScenesData, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_apvScenesData, put = __cordl_internal_set_apvScenesData)) ::UnityEngine::Rendering::ProbeVolumeSceneData* apvScenesData;

  __declspec(property(get = get_cascade2Split, put = set_cascade2Split)) float_t cascade2Split;

  __declspec(property(get = get_cascade3Split, put = set_cascade3Split)) ::UnityEngine::Vector2 cascade3Split;

  __declspec(property(get = get_cascade4Split, put = set_cascade4Split)) ::UnityEngine::Vector3 cascade4Split;

  __declspec(property(get = get_cascadeBorder, put = set_cascadeBorder)) float_t cascadeBorder;

  __declspec(property(get = get_colorGradingLutSize, put = set_colorGradingLutSize)) int32_t colorGradingLutSize;

  __declspec(property(get = get_colorGradingMode, put = set_colorGradingMode)) ::UnityEngine::Rendering::Universal::ColorGradingMode colorGradingMode;

  __declspec(property(get = get_conservativeEnclosingSphere, put = set_conservativeEnclosingSphere)) bool conservativeEnclosingSphere;

  __declspec(property(get = get_debugLevel)) ::UnityEngine::Rendering::Universal::PipelineDebugLevel debugLevel;

  __declspec(property(get = get_decalMaterial)) ::UnityW<::UnityEngine::Material> decalMaterial;

  __declspec(property(get = get_default2DMaskMaterial)) ::UnityW<::UnityEngine::Material> default2DMaskMaterial;

  __declspec(property(get = get_default2DMaterial)) ::UnityW<::UnityEngine::Material> default2DMaterial;

  __declspec(property(get = get_defaultLineMaterial)) ::UnityW<::UnityEngine::Material> defaultLineMaterial;

  __declspec(property(get = get_defaultMaterial)) ::UnityW<::UnityEngine::Material> defaultMaterial;

  __declspec(property(get = get_defaultParticleMaterial)) ::UnityW<::UnityEngine::Material> defaultParticleMaterial;

  __declspec(property(get = get_defaultShader)) ::UnityW<::UnityEngine::Shader> defaultShader;

  __declspec(property(get = get_defaultTerrainMaterial)) ::UnityW<::UnityEngine::Material> defaultTerrainMaterial;

  __declspec(property(get = get_enableLODCrossFade)) bool enableLODCrossFade;

  __declspec(property(get = get_enableRenderGraph)) bool enableRenderGraph;

  __declspec(property(get = get_fsrOverrideSharpness, put = set_fsrOverrideSharpness)) bool fsrOverrideSharpness;

  __declspec(property(get = get_fsrSharpness, put = set_fsrSharpness)) float_t fsrSharpness;

  __declspec(property(get = get_gpuResidentDrawerEnableOcclusionCullingInCameras, put = set_gpuResidentDrawerEnableOcclusionCullingInCameras)) bool gpuResidentDrawerEnableOcclusionCullingInCameras;

  __declspec(property(get = get_gpuResidentDrawerMode, put = set_gpuResidentDrawerMode)) ::UnityEngine::Rendering::GPUResidentDrawerMode gpuResidentDrawerMode;

  __declspec(property(get = get_hdrColorBufferPrecision, put = set_hdrColorBufferPrecision)) ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision hdrColorBufferPrecision;

  __declspec(property(get = get_isImmediateModeSupported)) bool isImmediateModeSupported;

  __declspec(property(get = get_isStpUsed)) bool isStpUsed;

  /// @brief Field k_AssetPreviousVersion, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_k_AssetPreviousVersion, put = __cordl_internal_set_k_AssetPreviousVersion)) int32_t k_AssetPreviousVersion;

  /// @brief Field k_AssetVersion, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_k_AssetVersion, put = __cordl_internal_set_k_AssetVersion)) int32_t k_AssetVersion;

  __declspec(property(get = get_lightLayerMaskNames)) ::ArrayW<::StringW, ::Array<::StringW>*> lightLayerMaskNames;

  __declspec(property(get = get_lightProbeSystem, put = set_lightProbeSystem)) ::UnityEngine::Rendering::Universal::LightProbeSystem lightProbeSystem;

  __declspec(property(get = get_lodCrossFadeDitheringType)) ::UnityEngine::Rendering::Universal::LODCrossFadeDitheringType lodCrossFadeDitheringType;

  /// @brief Field m_AdditionalLightShadowsSupported, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightShadowsSupported, put = __cordl_internal_set_m_AdditionalLightShadowsSupported)) bool m_AdditionalLightShadowsSupported;

  /// @brief Field m_AdditionalLightsCookieFormat, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsCookieFormat,
                      put = __cordl_internal_set_m_AdditionalLightsCookieFormat)) ::UnityEngine::Rendering::Universal::LightCookieFormat m_AdditionalLightsCookieFormat;

  /// @brief Field m_AdditionalLightsCookieResolution, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsCookieResolution,
                      put = __cordl_internal_set_m_AdditionalLightsCookieResolution)) ::UnityEngine::Rendering::Universal::LightCookieResolution m_AdditionalLightsCookieResolution;

  /// @brief Field m_AdditionalLightsPerObjectLimit, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsPerObjectLimit, put = __cordl_internal_set_m_AdditionalLightsPerObjectLimit)) int32_t m_AdditionalLightsPerObjectLimit;

  /// @brief Field m_AdditionalLightsRenderingMode, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsRenderingMode,
                      put = __cordl_internal_set_m_AdditionalLightsRenderingMode)) ::UnityEngine::Rendering::Universal::LightRenderingMode m_AdditionalLightsRenderingMode;

  /// @brief Field m_AdditionalLightsShadowResolutionTierHigh, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowResolutionTierHigh,
                      put = __cordl_internal_set_m_AdditionalLightsShadowResolutionTierHigh)) int32_t m_AdditionalLightsShadowResolutionTierHigh;

  /// @brief Field m_AdditionalLightsShadowResolutionTierLow, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowResolutionTierLow,
                      put = __cordl_internal_set_m_AdditionalLightsShadowResolutionTierLow)) int32_t m_AdditionalLightsShadowResolutionTierLow;

  /// @brief Field m_AdditionalLightsShadowResolutionTierMedium, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowResolutionTierMedium,
                      put = __cordl_internal_set_m_AdditionalLightsShadowResolutionTierMedium)) int32_t m_AdditionalLightsShadowResolutionTierMedium;

  /// @brief Field m_AdditionalLightsShadowmapResolution, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowmapResolution,
                      put = __cordl_internal_set_m_AdditionalLightsShadowmapResolution)) ::UnityEngine::Rendering::Universal::ShadowResolution m_AdditionalLightsShadowmapResolution;

  /// @brief Field m_AllowPostProcessAlphaOutput, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowPostProcessAlphaOutput, put = __cordl_internal_set_m_AllowPostProcessAlphaOutput)) bool m_AllowPostProcessAlphaOutput;

  /// @brief Field m_Cascade2Split, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Cascade2Split, put = __cordl_internal_set_m_Cascade2Split)) float_t m_Cascade2Split;

  /// @brief Field m_Cascade3Split, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cascade3Split, put = __cordl_internal_set_m_Cascade3Split)) ::UnityEngine::Vector2 m_Cascade3Split;

  /// @brief Field m_Cascade4Split, offset 0xc8, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Cascade4Split, put = __cordl_internal_set_m_Cascade4Split)) ::UnityEngine::Vector3 m_Cascade4Split;

  /// @brief Field m_CascadeBorder, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CascadeBorder, put = __cordl_internal_set_m_CascadeBorder)) float_t m_CascadeBorder;

  /// @brief Field m_ColorGradingLutSize, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColorGradingLutSize, put = __cordl_internal_set_m_ColorGradingLutSize)) int32_t m_ColorGradingLutSize;

  /// @brief Field m_ColorGradingMode, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColorGradingMode, put = __cordl_internal_set_m_ColorGradingMode)) ::UnityEngine::Rendering::Universal::ColorGradingMode m_ColorGradingMode;

  /// @brief Field m_ConservativeEnclosingSphere, offset 0xe1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ConservativeEnclosingSphere, put = __cordl_internal_set_m_ConservativeEnclosingSphere)) bool m_ConservativeEnclosingSphere;

  /// @brief Field m_DebugLevel, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DebugLevel, put = __cordl_internal_set_m_DebugLevel)) ::UnityEngine::Rendering::Universal::PipelineDebugLevel m_DebugLevel;

  /// @brief Field m_DefaultRendererIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultRendererIndex, put = __cordl_internal_set_m_DefaultRendererIndex)) int32_t m_DefaultRendererIndex;

  /// @brief Field m_DefaultShader, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultShader, put = __cordl_internal_set_m_DefaultShader)) ::UnityW<::UnityEngine::Shader> m_DefaultShader;

  /// @brief Field m_EnableLODCrossFade, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableLODCrossFade, put = __cordl_internal_set_m_EnableLODCrossFade)) bool m_EnableLODCrossFade;

  /// @brief Field m_FsrOverrideSharpness, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FsrOverrideSharpness, put = __cordl_internal_set_m_FsrOverrideSharpness)) bool m_FsrOverrideSharpness;

  /// @brief Field m_FsrSharpness, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FsrSharpness, put = __cordl_internal_set_m_FsrSharpness)) float_t m_FsrSharpness;

  /// @brief Field m_GPUResidentDrawerEnableOcclusionCullingInCameras, offset 0x11c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GPUResidentDrawerEnableOcclusionCullingInCameras,
                      put = __cordl_internal_set_m_GPUResidentDrawerEnableOcclusionCullingInCameras)) bool m_GPUResidentDrawerEnableOcclusionCullingInCameras;

  /// @brief Field m_GPUResidentDrawerMode, offset 0x114, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GPUResidentDrawerMode, put = __cordl_internal_set_m_GPUResidentDrawerMode)) ::UnityEngine::Rendering::GPUResidentDrawerMode m_GPUResidentDrawerMode;

  /// @brief Field m_HDRColorBufferPrecision, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HDRColorBufferPrecision,
                      put = __cordl_internal_set_m_HDRColorBufferPrecision)) ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision m_HDRColorBufferPrecision;

  /// @brief Field m_LODCrossFadeDitheringType, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LODCrossFadeDitheringType,
                      put = __cordl_internal_set_m_LODCrossFadeDitheringType)) ::UnityEngine::Rendering::Universal::LODCrossFadeDitheringType m_LODCrossFadeDitheringType;

  /// @brief Field m_LightProbeSystem, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LightProbeSystem, put = __cordl_internal_set_m_LightProbeSystem)) ::UnityEngine::Rendering::Universal::LightProbeSystem m_LightProbeSystem;

  /// @brief Field m_LocalShadowsAtlasResolution, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LocalShadowsAtlasResolution,
                      put = __cordl_internal_set_m_LocalShadowsAtlasResolution)) ::UnityEngine::Rendering::Universal::ShadowResolution m_LocalShadowsAtlasResolution;

  /// @brief Field m_LocalShadowsSupported, offset 0x124, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LocalShadowsSupported, put = __cordl_internal_set_m_LocalShadowsSupported)) bool m_LocalShadowsSupported;

  /// @brief Field m_MSAA, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MSAA, put = __cordl_internal_set_m_MSAA)) ::UnityEngine::Rendering::Universal::MsaaQuality m_MSAA;

  /// @brief Field m_MainLightRenderingMode, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MainLightRenderingMode,
                      put = __cordl_internal_set_m_MainLightRenderingMode)) ::UnityEngine::Rendering::Universal::LightRenderingMode m_MainLightRenderingMode;

  /// @brief Field m_MainLightShadowmapResolution, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowmapResolution,
                      put = __cordl_internal_set_m_MainLightShadowmapResolution)) ::UnityEngine::Rendering::Universal::ShadowResolution m_MainLightShadowmapResolution;

  /// @brief Field m_MainLightShadowsSupported, offset 0x8c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowsSupported, put = __cordl_internal_set_m_MainLightShadowsSupported)) bool m_MainLightShadowsSupported;

  /// @brief Field m_MaxPixelLights, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxPixelLights, put = __cordl_internal_set_m_MaxPixelLights)) int32_t m_MaxPixelLights;

  /// @brief Field m_MixedLightingSupported, offset 0xf6, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MixedLightingSupported, put = __cordl_internal_set_m_MixedLightingSupported)) bool m_MixedLightingSupported;

  /// @brief Field m_NumIterationsEnclosingSphere, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumIterationsEnclosingSphere, put = __cordl_internal_set_m_NumIterationsEnclosingSphere)) int32_t m_NumIterationsEnclosingSphere;

  /// @brief Field m_OpaqueDownsampling, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OpaqueDownsampling, put = __cordl_internal_set_m_OpaqueDownsampling)) ::UnityEngine::Rendering::Universal::Downsampling m_OpaqueDownsampling;

  /// @brief Field m_ProbeVolumeBlendingMemoryBudget, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ProbeVolumeBlendingMemoryBudget,
                      put = __cordl_internal_set_m_ProbeVolumeBlendingMemoryBudget)) ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget m_ProbeVolumeBlendingMemoryBudget;

  /// @brief Field m_ProbeVolumeMemoryBudget, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ProbeVolumeMemoryBudget,
                      put = __cordl_internal_set_m_ProbeVolumeMemoryBudget)) ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget m_ProbeVolumeMemoryBudget;

  /// @brief Field m_ProbeVolumeSHBands, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ProbeVolumeSHBands, put = __cordl_internal_set_m_ProbeVolumeSHBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands m_ProbeVolumeSHBands;

  /// @brief Field m_ReflectionProbeBlending, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReflectionProbeBlending, put = __cordl_internal_set_m_ReflectionProbeBlending)) bool m_ReflectionProbeBlending;

  /// @brief Field m_ReflectionProbeBoxProjection, offset 0xb1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReflectionProbeBoxProjection, put = __cordl_internal_set_m_ReflectionProbeBoxProjection)) bool m_ReflectionProbeBoxProjection;

  /// @brief Field m_RenderScale, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderScale, put = __cordl_internal_set_m_RenderScale)) float_t m_RenderScale;

  /// @brief Field m_RendererData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererData, put = __cordl_internal_set_m_RendererData)) ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> m_RendererData;

  /// @brief Field m_RendererDataList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererDataList,
                      put = __cordl_internal_set_m_RendererDataList)) ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>,
                                                                               ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*>
      m_RendererDataList;

  /// @brief Field m_RendererType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RendererType, put = __cordl_internal_set_m_RendererType)) ::UnityEngine::Rendering::Universal::RendererType m_RendererType;

  /// @brief Field m_Renderers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Renderers,
                      put = __cordl_internal_set_m_Renderers)) ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*>
      m_Renderers;

  /// @brief Field m_RequireDepthTexture, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequireDepthTexture, put = __cordl_internal_set_m_RequireDepthTexture)) bool m_RequireDepthTexture;

  /// @brief Field m_RequireOpaqueTexture, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequireOpaqueTexture, put = __cordl_internal_set_m_RequireOpaqueTexture)) bool m_RequireOpaqueTexture;

  /// @brief Field m_ShEvalMode, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShEvalMode, put = __cordl_internal_set_m_ShEvalMode)) ::UnityEngine::Rendering::Universal::ShEvalMode m_ShEvalMode;

  /// @brief Field m_ShaderVariantLogLevel, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShaderVariantLogLevel, put = __cordl_internal_set_m_ShaderVariantLogLevel)) int32_t m_ShaderVariantLogLevel;

  /// @brief Field m_ShadowAtlasResolution, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowAtlasResolution,
                      put = __cordl_internal_set_m_ShadowAtlasResolution)) ::UnityEngine::Rendering::Universal::ShadowResolution m_ShadowAtlasResolution;

  /// @brief Field m_ShadowCascadeCount, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowCascadeCount, put = __cordl_internal_set_m_ShadowCascadeCount)) int32_t m_ShadowCascadeCount;

  /// @brief Field m_ShadowCascades, offset 0x154, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowCascades, put = __cordl_internal_set_m_ShadowCascades)) ::UnityEngine::Rendering::Universal::ShadowCascadesOption m_ShadowCascades;

  /// @brief Field m_ShadowDepthBias, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowDepthBias, put = __cordl_internal_set_m_ShadowDepthBias)) float_t m_ShadowDepthBias;

  /// @brief Field m_ShadowDistance, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowDistance, put = __cordl_internal_set_m_ShadowDistance)) float_t m_ShadowDistance;

  /// @brief Field m_ShadowNormalBias, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowNormalBias, put = __cordl_internal_set_m_ShadowNormalBias)) float_t m_ShadowNormalBias;

  /// @brief Field m_ShadowType, offset 0x120, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShadowType, put = __cordl_internal_set_m_ShadowType)) ::UnityEngine::Rendering::Universal::ShadowQuality m_ShadowType;

  /// @brief Field m_SmallMeshScreenPercentage, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SmallMeshScreenPercentage, put = __cordl_internal_set_m_SmallMeshScreenPercentage)) float_t m_SmallMeshScreenPercentage;

  /// @brief Field m_SoftShadowQuality, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SoftShadowQuality, put = __cordl_internal_set_m_SoftShadowQuality)) ::UnityEngine::Rendering::Universal::SoftShadowQuality m_SoftShadowQuality;

  /// @brief Field m_SoftShadowsSupported, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SoftShadowsSupported, put = __cordl_internal_set_m_SoftShadowsSupported)) bool m_SoftShadowsSupported;

  /// @brief Field m_StoreActionsOptimization, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StoreActionsOptimization,
                      put = __cordl_internal_set_m_StoreActionsOptimization)) ::UnityEngine::Rendering::Universal::StoreActionsOptimization m_StoreActionsOptimization;

  /// @brief Field m_SupportDataDrivenLensFlare, offset 0x112, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportDataDrivenLensFlare, put = __cordl_internal_set_m_SupportDataDrivenLensFlare)) bool m_SupportDataDrivenLensFlare;

  /// @brief Field m_SupportProbeVolumeDiskStreaming, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportProbeVolumeDiskStreaming, put = __cordl_internal_set_m_SupportProbeVolumeDiskStreaming)) bool m_SupportProbeVolumeDiskStreaming;

  /// @brief Field m_SupportProbeVolumeGPUStreaming, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportProbeVolumeGPUStreaming, put = __cordl_internal_set_m_SupportProbeVolumeGPUStreaming)) bool m_SupportProbeVolumeGPUStreaming;

  /// @brief Field m_SupportProbeVolumeScenarioBlending, offset 0x83, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportProbeVolumeScenarioBlending, put = __cordl_internal_set_m_SupportProbeVolumeScenarioBlending)) bool m_SupportProbeVolumeScenarioBlending;

  /// @brief Field m_SupportProbeVolumeScenarios, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportProbeVolumeScenarios, put = __cordl_internal_set_m_SupportProbeVolumeScenarios)) bool m_SupportProbeVolumeScenarios;

  /// @brief Field m_SupportScreenSpaceLensFlare, offset 0x113, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportScreenSpaceLensFlare, put = __cordl_internal_set_m_SupportScreenSpaceLensFlare)) bool m_SupportScreenSpaceLensFlare;

  /// @brief Field m_SupportsDynamicBatching, offset 0xf5, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsDynamicBatching, put = __cordl_internal_set_m_SupportsDynamicBatching)) bool m_SupportsDynamicBatching;

  /// @brief Field m_SupportsHDR, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsHDR, put = __cordl_internal_set_m_SupportsHDR)) bool m_SupportsHDR;

  /// @brief Field m_SupportsLightCookies, offset 0xf7, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsLightCookies, put = __cordl_internal_set_m_SupportsLightCookies)) bool m_SupportsLightCookies;

  /// @brief Field m_SupportsLightLayers, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsLightLayers, put = __cordl_internal_set_m_SupportsLightLayers)) bool m_SupportsLightLayers;

  /// @brief Field m_SupportsTerrainHoles, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportsTerrainHoles, put = __cordl_internal_set_m_SupportsTerrainHoles)) bool m_SupportsTerrainHoles;

  /// @brief Field m_Textures, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Textures, put = __cordl_internal_set_m_Textures)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources* m_Textures;

  /// @brief Field m_UpscalingFilter, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpscalingFilter, put = __cordl_internal_set_m_UpscalingFilter)) ::UnityEngine::Rendering::Universal::UpscalingFilterSelection m_UpscalingFilter;

  /// @brief Field m_UseAdaptivePerformance, offset 0x104, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseAdaptivePerformance, put = __cordl_internal_set_m_UseAdaptivePerformance)) bool m_UseAdaptivePerformance;

  /// @brief Field m_UseFastSRGBLinearConversion, offset 0x111, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseFastSRGBLinearConversion, put = __cordl_internal_set_m_UseFastSRGBLinearConversion)) bool m_UseFastSRGBLinearConversion;

  /// @brief Field m_UseSRPBatcher, offset 0xf4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseSRPBatcher, put = __cordl_internal_set_m_UseSRPBatcher)) bool m_UseSRPBatcher;

  /// @brief Field m_VolumeFrameworkUpdateMode, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VolumeFrameworkUpdateMode,
                      put = __cordl_internal_set_m_VolumeFrameworkUpdateMode)) ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode m_VolumeFrameworkUpdateMode;

  /// @brief Field m_VolumeProfile, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumeProfile, put = __cordl_internal_set_m_VolumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> m_VolumeProfile;

  __declspec(property(get = get_mainLightRenderingMode, put = set_mainLightRenderingMode)) ::UnityEngine::Rendering::Universal::LightRenderingMode mainLightRenderingMode;

  __declspec(property(get = get_mainLightShadowmapResolution, put = set_mainLightShadowmapResolution)) int32_t mainLightShadowmapResolution;

  __declspec(property(get = get_maxAdditionalLightsCount, put = set_maxAdditionalLightsCount)) int32_t maxAdditionalLightsCount;

  __declspec(property(get = get_maxSHBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands maxSHBands;

  __declspec(property(get = get_msaaSampleCount, put = set_msaaSampleCount)) int32_t msaaSampleCount;

  __declspec(property(get = get_numIterationsEnclosingSphere, put = set_numIterationsEnclosingSphere)) int32_t numIterationsEnclosingSphere;

  __declspec(property(get = get_opaqueDownsampling)) ::UnityEngine::Rendering::Universal::Downsampling opaqueDownsampling;

  __declspec(property(get = get_prefixedRenderingLayerMaskNames)) ::ArrayW<::StringW, ::Array<::StringW>*> prefixedRenderingLayerMaskNames;

  __declspec(property(get = get_probeVolumeBlendingMemoryBudget,
                      put = set_probeVolumeBlendingMemoryBudget)) ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget probeVolumeBlendingMemoryBudget;

  __declspec(property(get = get_probeVolumeMemoryBudget, put = set_probeVolumeMemoryBudget)) ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget probeVolumeMemoryBudget;

  __declspec(property(get = get_probeVolumeSHBands, put = set_probeVolumeSHBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands probeVolumeSHBands;

  __declspec(property(get = get_probeVolumeSceneData)) ::UnityEngine::Rendering::ProbeVolumeSceneData* probeVolumeSceneData;

  __declspec(property(get = get_reflectionProbeBlending, put = set_reflectionProbeBlending)) bool reflectionProbeBlending;

  __declspec(property(get = get_reflectionProbeBoxProjection, put = set_reflectionProbeBoxProjection)) bool reflectionProbeBoxProjection;

  __declspec(property(get = get_renderPipelineShaderTag)) ::StringW renderPipelineShaderTag;

  __declspec(property(get = get_renderScale, put = set_renderScale)) float_t renderScale;

  __declspec(property(get = get_rendererDataList)) ::System::ReadOnlySpan_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>> rendererDataList;

  __declspec(property(get = get_rendererIndexList)) ::ArrayW<int32_t, ::Array<int32_t>*> rendererIndexList;

  __declspec(property(get = get_renderers)) ::System::ReadOnlySpan_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderers;

  __declspec(property(get = get_renderingLayerMaskNames)) ::ArrayW<::StringW, ::Array<::StringW>*> renderingLayerMaskNames;

  /// @brief Field s_LightCookieFormatList, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_LightCookieFormatList,
      put = setStaticF_s_LightCookieFormatList)) ::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                                                          ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>
      s_LightCookieFormatList;

  /// @brief Field s_Names, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Names, put = setStaticF_s_Names)) ::ArrayW<::StringW, ::Array<::StringW>*> s_Names;

  /// @brief Field s_Values, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Values, put = setStaticF_s_Values)) ::ArrayW<int32_t, ::Array<int32_t>*> s_Values;

  __declspec(property(get = get_scriptableRenderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* scriptableRenderer;

  __declspec(property(get = get_scriptableRendererData)) ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> scriptableRendererData;

  __declspec(property(get = get_shEvalMode, put = set_shEvalMode)) ::UnityEngine::Rendering::Universal::ShEvalMode shEvalMode;

  __declspec(property(get = get_shaderVariantLogLevel, put = set_shaderVariantLogLevel)) ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel shaderVariantLogLevel;

  __declspec(property(get = get_shadowCascadeCount, put = set_shadowCascadeCount)) int32_t shadowCascadeCount;

  __declspec(property(get = get_shadowCascadeOption, put = set_shadowCascadeOption)) ::UnityEngine::Rendering::Universal::ShadowCascadesOption shadowCascadeOption;

  __declspec(property(get = get_shadowDepthBias, put = set_shadowDepthBias)) float_t shadowDepthBias;

  __declspec(property(get = get_shadowDistance, put = set_shadowDistance)) float_t shadowDistance;

  __declspec(property(get = get_shadowNormalBias, put = set_shadowNormalBias)) float_t shadowNormalBias;

  __declspec(property(get = get_smallMeshScreenPercentage, put = set_smallMeshScreenPercentage)) float_t smallMeshScreenPercentage;

  __declspec(property(get = get_softShadowQuality, put = set_softShadowQuality)) ::UnityEngine::Rendering::Universal::SoftShadowQuality softShadowQuality;

  __declspec(property(get = get_storeActionsOptimization, put = set_storeActionsOptimization)) ::UnityEngine::Rendering::Universal::StoreActionsOptimization storeActionsOptimization;

  __declspec(property(get = get_supportDataDrivenLensFlare)) bool supportDataDrivenLensFlare;

  __declspec(property(get = get_supportProbeVolume)) bool supportProbeVolume;

  __declspec(property(get = get_supportProbeVolumeDiskStreaming, put = set_supportProbeVolumeDiskStreaming)) bool supportProbeVolumeDiskStreaming;

  __declspec(property(get = get_supportProbeVolumeGPUStreaming, put = set_supportProbeVolumeGPUStreaming)) bool supportProbeVolumeGPUStreaming;

  __declspec(property(get = get_supportProbeVolumeScenarioBlending, put = set_supportProbeVolumeScenarioBlending)) bool supportProbeVolumeScenarioBlending;

  __declspec(property(get = get_supportProbeVolumeScenarios, put = set_supportProbeVolumeScenarios)) bool supportProbeVolumeScenarios;

  __declspec(property(get = get_supportProbeVolumeStreaming, put = set_supportProbeVolumeStreaming)) bool supportProbeVolumeStreaming;

  __declspec(property(get = get_supportScreenSpaceLensFlare)) bool supportScreenSpaceLensFlare;

  __declspec(property(get = get_supportsAdditionalLightShadows, put = set_supportsAdditionalLightShadows)) bool supportsAdditionalLightShadows;

  __declspec(property(get = get_supportsCameraDepthTexture, put = set_supportsCameraDepthTexture)) bool supportsCameraDepthTexture;

  __declspec(property(get = get_supportsCameraOpaqueTexture, put = set_supportsCameraOpaqueTexture)) bool supportsCameraOpaqueTexture;

  __declspec(property(get = get_supportsDynamicBatching, put = set_supportsDynamicBatching)) bool supportsDynamicBatching;

  __declspec(property(get = get_supportsHDR, put = set_supportsHDR)) bool supportsHDR;

  __declspec(property(get = get_supportsLightCookies)) bool supportsLightCookies;

  __declspec(property(get = get_supportsLightLayers)) bool supportsLightLayers;

  __declspec(property(get = get_supportsMainLightShadows, put = set_supportsMainLightShadows)) bool supportsMainLightShadows;

  __declspec(property(get = get_supportsMixedLighting)) bool supportsMixedLighting;

  __declspec(property(get = get_supportsSoftShadows, put = set_supportsSoftShadows)) bool supportsSoftShadows;

  __declspec(property(get = get_supportsTerrainHoles)) bool supportsTerrainHoles;

  __declspec(property(get = get_terrainDetailGrassBillboardShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassBillboardShader;

  __declspec(property(get = get_terrainDetailGrassShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassShader;

  __declspec(property(get = get_terrainDetailLitShader)) ::UnityW<::UnityEngine::Shader> terrainDetailLitShader;

  __declspec(property(get = get_textures)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources* textures;

  __declspec(property(get = get_upscalingFilter, put = set_upscalingFilter)) ::UnityEngine::Rendering::Universal::UpscalingFilterSelection upscalingFilter;

  __declspec(property(get = get_useAdaptivePerformance, put = set_useAdaptivePerformance)) bool useAdaptivePerformance;

  __declspec(property(get = get_useFastSRGBLinearConversion)) bool useFastSRGBLinearConversion;

  __declspec(property(get = get_useRenderingLayers)) bool useRenderingLayers;

  __declspec(property(get = get_useSRPBatcher, put = set_useSRPBatcher)) bool useSRPBatcher;

  __declspec(property(get = get_volumeFrameworkUpdateMode)) ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode volumeFrameworkUpdateMode;

  __declspec(property(get = get_volumeProfile, put = set_volumeProfile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile> volumeProfile;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline"
  constexpr operator ::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::ISTPEnabledRenderPipeline"
  constexpr operator ::UnityEngine::Rendering::ISTPEnabledRenderPipeline*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::RenderGraphModule::IRenderGraphEnabledRenderPipeline"
  constexpr operator ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphEnabledRenderPipeline*() noexcept;

  /// @brief Convert operator to "::cordl_internals::InterfaceW"
  constexpr operator ::cordl_internals::InterfaceW*() noexcept;

  /// @brief Method CreatePipeline, addr 0x6684b78, size 0x1c8, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderPipeline* CreatePipeline();

  /// @brief Method CreateRenderers, addr 0x6684da4, size 0x248, virtual false, abstract: false, final false
  inline void CreateRenderers();

  /// @brief Method DestroyRenderer, addr 0x6684fec, size 0x24, virtual false, abstract: false, final false
  inline void DestroyRenderer(::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer);

  /// @brief Method DestroyRenderers, addr 0x6684d40, size 0x64, virtual false, abstract: false, final false
  inline void DestroyRenderers();

  /// @brief Method EnsureGlobalSettings, addr 0x6684b74, size 0x4, virtual true, abstract: false, final false
  inline void EnsureGlobalSettings();

  /// @brief Method GetAdditionalLightsShadowResolution, addr 0x6685cb4, size 0xcc, virtual false, abstract: false, final false
  inline int32_t GetAdditionalLightsShadowResolution(int32_t additionalLightsShadowResolutionTier);

  /// @brief Method GetMaterial, addr 0x668696c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Rendering::Universal::DefaultMaterialType materialType);

  /// @brief Method GetRenderer, addr 0x668533c, size 0x2e4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* GetRenderer(int32_t index);

  /// @brief Method IsAtLastVersion, addr 0x66849cc, size 0x10, virtual false, abstract: false, final false
  inline bool IsAtLastVersion();

  /// @brief Method IsGPUResidentDrawerSupportedBySRP, addr 0x66863a8, size 0x160, virtual true, abstract: false, final true
  inline bool IsGPUResidentDrawerSupportedBySRP(::ByRef<::StringW> message, ::ByRef<::UnityEngine::LogType> severty);

  /// @brief Method LoadBuiltinRendererData, addr 0x6684b38, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> LoadBuiltinRendererData(::UnityEngine::Rendering::Universal::RendererType type);

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x66865c8, size 0x22c, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x66865c4, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDisable, addr 0x6685010, size 0x1c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnableRenderGraphChanged, addr 0x6686120, size 0x10, virtual false, abstract: false, final false
  inline void OnEnableRenderGraphChanged();

  /// @brief Method UnityEngine.Rendering.IGPUResidentRenderPipeline.get_gpuResidentDrawerSettings, addr 0x66849dc, size 0xbc, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::GPUResidentDrawerSettings UnityEngine_Rendering_IGPUResidentRenderPipeline_get_gpuResidentDrawerSettings();

  /// @brief Method ValidatePerObjectLights, addr 0x6685bd8, size 0x8c, virtual false, abstract: false, final false
  inline int32_t ValidatePerObjectLights(int32_t value);

  /// @brief Method ValidateRenderScale, addr 0x6685a24, size 0x74, virtual false, abstract: false, final false
  inline float_t ValidateRenderScale(float_t value);

  /// @brief Method ValidateRendererData, addr 0x6686874, size 0xb4, virtual false, abstract: false, final false
  inline bool ValidateRendererData(int32_t index);

  /// @brief Method ValidateRendererDataList, addr 0x66867f4, size 0x80, virtual false, abstract: false, final false
  inline bool ValidateRendererDataList(bool partial);

  /// @brief Method ValidateShadowBias, addr 0x6685ef0, size 0x70, virtual false, abstract: false, final false
  inline float_t ValidateShadowBias(float_t value);

  constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData* const& __cordl_internal_get_apvScenesData() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData*& __cordl_internal_get_apvScenesData();

  constexpr int32_t const& __cordl_internal_get_k_AssetPreviousVersion() const;

  constexpr int32_t& __cordl_internal_get_k_AssetPreviousVersion();

  constexpr int32_t const& __cordl_internal_get_k_AssetVersion() const;

  constexpr int32_t& __cordl_internal_get_k_AssetVersion();

  constexpr bool const& __cordl_internal_get_m_AdditionalLightShadowsSupported() const;

  constexpr bool& __cordl_internal_get_m_AdditionalLightShadowsSupported();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat const& __cordl_internal_get_m_AdditionalLightsCookieFormat() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieFormat& __cordl_internal_get_m_AdditionalLightsCookieFormat();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieResolution const& __cordl_internal_get_m_AdditionalLightsCookieResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieResolution& __cordl_internal_get_m_AdditionalLightsCookieResolution();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsPerObjectLimit() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsPerObjectLimit();

  constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode const& __cordl_internal_get_m_AdditionalLightsRenderingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode& __cordl_internal_get_m_AdditionalLightsRenderingMode();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierHigh() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierHigh();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierLow() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierLow();

  constexpr int32_t const& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierMedium() const;

  constexpr int32_t& __cordl_internal_get_m_AdditionalLightsShadowResolutionTierMedium();

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& __cordl_internal_get_m_AdditionalLightsShadowmapResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& __cordl_internal_get_m_AdditionalLightsShadowmapResolution();

  constexpr bool const& __cordl_internal_get_m_AllowPostProcessAlphaOutput() const;

  constexpr bool& __cordl_internal_get_m_AllowPostProcessAlphaOutput();

  constexpr float_t const& __cordl_internal_get_m_Cascade2Split() const;

  constexpr float_t& __cordl_internal_get_m_Cascade2Split();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Cascade3Split() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Cascade3Split();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Cascade4Split() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Cascade4Split();

  constexpr float_t const& __cordl_internal_get_m_CascadeBorder() const;

  constexpr float_t& __cordl_internal_get_m_CascadeBorder();

  constexpr int32_t const& __cordl_internal_get_m_ColorGradingLutSize() const;

  constexpr int32_t& __cordl_internal_get_m_ColorGradingLutSize();

  constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode const& __cordl_internal_get_m_ColorGradingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::ColorGradingMode& __cordl_internal_get_m_ColorGradingMode();

  constexpr bool const& __cordl_internal_get_m_ConservativeEnclosingSphere() const;

  constexpr bool& __cordl_internal_get_m_ConservativeEnclosingSphere();

  constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel const& __cordl_internal_get_m_DebugLevel() const;

  constexpr ::UnityEngine::Rendering::Universal::PipelineDebugLevel& __cordl_internal_get_m_DebugLevel();

  constexpr int32_t const& __cordl_internal_get_m_DefaultRendererIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DefaultRendererIndex();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DefaultShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DefaultShader();

  constexpr bool const& __cordl_internal_get_m_EnableLODCrossFade() const;

  constexpr bool& __cordl_internal_get_m_EnableLODCrossFade();

  constexpr bool const& __cordl_internal_get_m_FsrOverrideSharpness() const;

  constexpr bool& __cordl_internal_get_m_FsrOverrideSharpness();

  constexpr float_t const& __cordl_internal_get_m_FsrSharpness() const;

  constexpr float_t& __cordl_internal_get_m_FsrSharpness();

  constexpr bool const& __cordl_internal_get_m_GPUResidentDrawerEnableOcclusionCullingInCameras() const;

  constexpr bool& __cordl_internal_get_m_GPUResidentDrawerEnableOcclusionCullingInCameras();

  constexpr ::UnityEngine::Rendering::GPUResidentDrawerMode const& __cordl_internal_get_m_GPUResidentDrawerMode() const;

  constexpr ::UnityEngine::Rendering::GPUResidentDrawerMode& __cordl_internal_get_m_GPUResidentDrawerMode();

  constexpr ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision const& __cordl_internal_get_m_HDRColorBufferPrecision() const;

  constexpr ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision& __cordl_internal_get_m_HDRColorBufferPrecision();

  constexpr ::UnityEngine::Rendering::Universal::LODCrossFadeDitheringType const& __cordl_internal_get_m_LODCrossFadeDitheringType() const;

  constexpr ::UnityEngine::Rendering::Universal::LODCrossFadeDitheringType& __cordl_internal_get_m_LODCrossFadeDitheringType();

  constexpr ::UnityEngine::Rendering::Universal::LightProbeSystem const& __cordl_internal_get_m_LightProbeSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::LightProbeSystem& __cordl_internal_get_m_LightProbeSystem();

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& __cordl_internal_get_m_LocalShadowsAtlasResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& __cordl_internal_get_m_LocalShadowsAtlasResolution();

  constexpr bool const& __cordl_internal_get_m_LocalShadowsSupported() const;

  constexpr bool& __cordl_internal_get_m_LocalShadowsSupported();

  constexpr ::UnityEngine::Rendering::Universal::MsaaQuality const& __cordl_internal_get_m_MSAA() const;

  constexpr ::UnityEngine::Rendering::Universal::MsaaQuality& __cordl_internal_get_m_MSAA();

  constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode const& __cordl_internal_get_m_MainLightRenderingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::LightRenderingMode& __cordl_internal_get_m_MainLightRenderingMode();

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& __cordl_internal_get_m_MainLightShadowmapResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& __cordl_internal_get_m_MainLightShadowmapResolution();

  constexpr bool const& __cordl_internal_get_m_MainLightShadowsSupported() const;

  constexpr bool& __cordl_internal_get_m_MainLightShadowsSupported();

  constexpr int32_t const& __cordl_internal_get_m_MaxPixelLights() const;

  constexpr int32_t& __cordl_internal_get_m_MaxPixelLights();

  constexpr bool const& __cordl_internal_get_m_MixedLightingSupported() const;

  constexpr bool& __cordl_internal_get_m_MixedLightingSupported();

  constexpr int32_t const& __cordl_internal_get_m_NumIterationsEnclosingSphere() const;

  constexpr int32_t& __cordl_internal_get_m_NumIterationsEnclosingSphere();

  constexpr ::UnityEngine::Rendering::Universal::Downsampling const& __cordl_internal_get_m_OpaqueDownsampling() const;

  constexpr ::UnityEngine::Rendering::Universal::Downsampling& __cordl_internal_get_m_OpaqueDownsampling();

  constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget const& __cordl_internal_get_m_ProbeVolumeBlendingMemoryBudget() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget& __cordl_internal_get_m_ProbeVolumeBlendingMemoryBudget();

  constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget const& __cordl_internal_get_m_ProbeVolumeMemoryBudget() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget& __cordl_internal_get_m_ProbeVolumeMemoryBudget();

  constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands const& __cordl_internal_get_m_ProbeVolumeSHBands() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands& __cordl_internal_get_m_ProbeVolumeSHBands();

  constexpr bool const& __cordl_internal_get_m_ReflectionProbeBlending() const;

  constexpr bool& __cordl_internal_get_m_ReflectionProbeBlending();

  constexpr bool const& __cordl_internal_get_m_ReflectionProbeBoxProjection() const;

  constexpr bool& __cordl_internal_get_m_ReflectionProbeBoxProjection();

  constexpr float_t const& __cordl_internal_get_m_RenderScale() const;

  constexpr float_t& __cordl_internal_get_m_RenderScale();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> const& __cordl_internal_get_m_RendererData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>& __cordl_internal_get_m_RendererData();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> const&
  __cordl_internal_get_m_RendererDataList() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*>&
  __cordl_internal_get_m_RendererDataList();

  constexpr ::UnityEngine::Rendering::Universal::RendererType const& __cordl_internal_get_m_RendererType() const;

  constexpr ::UnityEngine::Rendering::Universal::RendererType& __cordl_internal_get_m_RendererType();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> const& __cordl_internal_get_m_Renderers() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*>& __cordl_internal_get_m_Renderers();

  constexpr bool const& __cordl_internal_get_m_RequireDepthTexture() const;

  constexpr bool& __cordl_internal_get_m_RequireDepthTexture();

  constexpr bool const& __cordl_internal_get_m_RequireOpaqueTexture() const;

  constexpr bool& __cordl_internal_get_m_RequireOpaqueTexture();

  constexpr ::UnityEngine::Rendering::Universal::ShEvalMode const& __cordl_internal_get_m_ShEvalMode() const;

  constexpr ::UnityEngine::Rendering::Universal::ShEvalMode& __cordl_internal_get_m_ShEvalMode();

  constexpr int32_t const& __cordl_internal_get_m_ShaderVariantLogLevel() const;

  constexpr int32_t& __cordl_internal_get_m_ShaderVariantLogLevel();

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution const& __cordl_internal_get_m_ShadowAtlasResolution() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowResolution& __cordl_internal_get_m_ShadowAtlasResolution();

  constexpr int32_t const& __cordl_internal_get_m_ShadowCascadeCount() const;

  constexpr int32_t& __cordl_internal_get_m_ShadowCascadeCount();

  constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption const& __cordl_internal_get_m_ShadowCascades() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowCascadesOption& __cordl_internal_get_m_ShadowCascades();

  constexpr float_t const& __cordl_internal_get_m_ShadowDepthBias() const;

  constexpr float_t& __cordl_internal_get_m_ShadowDepthBias();

  constexpr float_t const& __cordl_internal_get_m_ShadowDistance() const;

  constexpr float_t& __cordl_internal_get_m_ShadowDistance();

  constexpr float_t const& __cordl_internal_get_m_ShadowNormalBias() const;

  constexpr float_t& __cordl_internal_get_m_ShadowNormalBias();

  constexpr ::UnityEngine::Rendering::Universal::ShadowQuality const& __cordl_internal_get_m_ShadowType() const;

  constexpr ::UnityEngine::Rendering::Universal::ShadowQuality& __cordl_internal_get_m_ShadowType();

  constexpr float_t const& __cordl_internal_get_m_SmallMeshScreenPercentage() const;

  constexpr float_t& __cordl_internal_get_m_SmallMeshScreenPercentage();

  constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality const& __cordl_internal_get_m_SoftShadowQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::SoftShadowQuality& __cordl_internal_get_m_SoftShadowQuality();

  constexpr bool const& __cordl_internal_get_m_SoftShadowsSupported() const;

  constexpr bool& __cordl_internal_get_m_SoftShadowsSupported();

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const& __cordl_internal_get_m_StoreActionsOptimization() const;

  constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& __cordl_internal_get_m_StoreActionsOptimization();

  constexpr bool const& __cordl_internal_get_m_SupportDataDrivenLensFlare() const;

  constexpr bool& __cordl_internal_get_m_SupportDataDrivenLensFlare();

  constexpr bool const& __cordl_internal_get_m_SupportProbeVolumeDiskStreaming() const;

  constexpr bool& __cordl_internal_get_m_SupportProbeVolumeDiskStreaming();

  constexpr bool const& __cordl_internal_get_m_SupportProbeVolumeGPUStreaming() const;

  constexpr bool& __cordl_internal_get_m_SupportProbeVolumeGPUStreaming();

  constexpr bool const& __cordl_internal_get_m_SupportProbeVolumeScenarioBlending() const;

  constexpr bool& __cordl_internal_get_m_SupportProbeVolumeScenarioBlending();

  constexpr bool const& __cordl_internal_get_m_SupportProbeVolumeScenarios() const;

  constexpr bool& __cordl_internal_get_m_SupportProbeVolumeScenarios();

  constexpr bool const& __cordl_internal_get_m_SupportScreenSpaceLensFlare() const;

  constexpr bool& __cordl_internal_get_m_SupportScreenSpaceLensFlare();

  constexpr bool const& __cordl_internal_get_m_SupportsDynamicBatching() const;

  constexpr bool& __cordl_internal_get_m_SupportsDynamicBatching();

  constexpr bool const& __cordl_internal_get_m_SupportsHDR() const;

  constexpr bool& __cordl_internal_get_m_SupportsHDR();

  constexpr bool const& __cordl_internal_get_m_SupportsLightCookies() const;

  constexpr bool& __cordl_internal_get_m_SupportsLightCookies();

  constexpr bool const& __cordl_internal_get_m_SupportsLightLayers() const;

  constexpr bool& __cordl_internal_get_m_SupportsLightLayers();

  constexpr bool const& __cordl_internal_get_m_SupportsTerrainHoles() const;

  constexpr bool& __cordl_internal_get_m_SupportsTerrainHoles();

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources* const& __cordl_internal_get_m_Textures() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources*& __cordl_internal_get_m_Textures();

  constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection const& __cordl_internal_get_m_UpscalingFilter() const;

  constexpr ::UnityEngine::Rendering::Universal::UpscalingFilterSelection& __cordl_internal_get_m_UpscalingFilter();

  constexpr bool const& __cordl_internal_get_m_UseAdaptivePerformance() const;

  constexpr bool& __cordl_internal_get_m_UseAdaptivePerformance();

  constexpr bool const& __cordl_internal_get_m_UseFastSRGBLinearConversion() const;

  constexpr bool& __cordl_internal_get_m_UseFastSRGBLinearConversion();

  constexpr bool const& __cordl_internal_get_m_UseSRPBatcher() const;

  constexpr bool& __cordl_internal_get_m_UseSRPBatcher();

  constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode const& __cordl_internal_get_m_VolumeFrameworkUpdateMode() const;

  constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode& __cordl_internal_get_m_VolumeFrameworkUpdateMode();

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_m_VolumeProfile() const;

  constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_m_VolumeProfile();

  constexpr void __cordl_internal_set_apvScenesData(::UnityEngine::Rendering::ProbeVolumeSceneData* value);

  constexpr void __cordl_internal_set_k_AssetPreviousVersion(int32_t value);

  constexpr void __cordl_internal_set_k_AssetVersion(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightShadowsSupported(bool value);

  constexpr void __cordl_internal_set_m_AdditionalLightsCookieFormat(::UnityEngine::Rendering::Universal::LightCookieFormat value);

  constexpr void __cordl_internal_set_m_AdditionalLightsCookieResolution(::UnityEngine::Rendering::Universal::LightCookieResolution value);

  constexpr void __cordl_internal_set_m_AdditionalLightsPerObjectLimit(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowResolutionTierHigh(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowResolutionTierLow(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowResolutionTierMedium(int32_t value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowmapResolution(::UnityEngine::Rendering::Universal::ShadowResolution value);

  constexpr void __cordl_internal_set_m_AllowPostProcessAlphaOutput(bool value);

  constexpr void __cordl_internal_set_m_Cascade2Split(float_t value);

  constexpr void __cordl_internal_set_m_Cascade3Split(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_Cascade4Split(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_CascadeBorder(float_t value);

  constexpr void __cordl_internal_set_m_ColorGradingLutSize(int32_t value);

  constexpr void __cordl_internal_set_m_ColorGradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value);

  constexpr void __cordl_internal_set_m_ConservativeEnclosingSphere(bool value);

  constexpr void __cordl_internal_set_m_DebugLevel(::UnityEngine::Rendering::Universal::PipelineDebugLevel value);

  constexpr void __cordl_internal_set_m_DefaultRendererIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DefaultShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_EnableLODCrossFade(bool value);

  constexpr void __cordl_internal_set_m_FsrOverrideSharpness(bool value);

  constexpr void __cordl_internal_set_m_FsrSharpness(float_t value);

  constexpr void __cordl_internal_set_m_GPUResidentDrawerEnableOcclusionCullingInCameras(bool value);

  constexpr void __cordl_internal_set_m_GPUResidentDrawerMode(::UnityEngine::Rendering::GPUResidentDrawerMode value);

  constexpr void __cordl_internal_set_m_HDRColorBufferPrecision(::UnityEngine::Rendering::Universal::HDRColorBufferPrecision value);

  constexpr void __cordl_internal_set_m_LODCrossFadeDitheringType(::UnityEngine::Rendering::Universal::LODCrossFadeDitheringType value);

  constexpr void __cordl_internal_set_m_LightProbeSystem(::UnityEngine::Rendering::Universal::LightProbeSystem value);

  constexpr void __cordl_internal_set_m_LocalShadowsAtlasResolution(::UnityEngine::Rendering::Universal::ShadowResolution value);

  constexpr void __cordl_internal_set_m_LocalShadowsSupported(bool value);

  constexpr void __cordl_internal_set_m_MSAA(::UnityEngine::Rendering::Universal::MsaaQuality value);

  constexpr void __cordl_internal_set_m_MainLightRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value);

  constexpr void __cordl_internal_set_m_MainLightShadowmapResolution(::UnityEngine::Rendering::Universal::ShadowResolution value);

  constexpr void __cordl_internal_set_m_MainLightShadowsSupported(bool value);

  constexpr void __cordl_internal_set_m_MaxPixelLights(int32_t value);

  constexpr void __cordl_internal_set_m_MixedLightingSupported(bool value);

  constexpr void __cordl_internal_set_m_NumIterationsEnclosingSphere(int32_t value);

  constexpr void __cordl_internal_set_m_OpaqueDownsampling(::UnityEngine::Rendering::Universal::Downsampling value);

  constexpr void __cordl_internal_set_m_ProbeVolumeBlendingMemoryBudget(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget value);

  constexpr void __cordl_internal_set_m_ProbeVolumeMemoryBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget value);

  constexpr void __cordl_internal_set_m_ProbeVolumeSHBands(::UnityEngine::Rendering::ProbeVolumeSHBands value);

  constexpr void __cordl_internal_set_m_ReflectionProbeBlending(bool value);

  constexpr void __cordl_internal_set_m_ReflectionProbeBoxProjection(bool value);

  constexpr void __cordl_internal_set_m_RenderScale(float_t value);

  constexpr void __cordl_internal_set_m_RendererData(::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> value);

  constexpr void __cordl_internal_set_m_RendererDataList(
      ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> value);

  constexpr void __cordl_internal_set_m_RendererType(::UnityEngine::Rendering::Universal::RendererType value);

  constexpr void __cordl_internal_set_m_Renderers(::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> value);

  constexpr void __cordl_internal_set_m_RequireDepthTexture(bool value);

  constexpr void __cordl_internal_set_m_RequireOpaqueTexture(bool value);

  constexpr void __cordl_internal_set_m_ShEvalMode(::UnityEngine::Rendering::Universal::ShEvalMode value);

  constexpr void __cordl_internal_set_m_ShaderVariantLogLevel(int32_t value);

  constexpr void __cordl_internal_set_m_ShadowAtlasResolution(::UnityEngine::Rendering::Universal::ShadowResolution value);

  constexpr void __cordl_internal_set_m_ShadowCascadeCount(int32_t value);

  constexpr void __cordl_internal_set_m_ShadowCascades(::UnityEngine::Rendering::Universal::ShadowCascadesOption value);

  constexpr void __cordl_internal_set_m_ShadowDepthBias(float_t value);

  constexpr void __cordl_internal_set_m_ShadowDistance(float_t value);

  constexpr void __cordl_internal_set_m_ShadowNormalBias(float_t value);

  constexpr void __cordl_internal_set_m_ShadowType(::UnityEngine::Rendering::Universal::ShadowQuality value);

  constexpr void __cordl_internal_set_m_SmallMeshScreenPercentage(float_t value);

  constexpr void __cordl_internal_set_m_SoftShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value);

  constexpr void __cordl_internal_set_m_SoftShadowsSupported(bool value);

  constexpr void __cordl_internal_set_m_StoreActionsOptimization(::UnityEngine::Rendering::Universal::StoreActionsOptimization value);

  constexpr void __cordl_internal_set_m_SupportDataDrivenLensFlare(bool value);

  constexpr void __cordl_internal_set_m_SupportProbeVolumeDiskStreaming(bool value);

  constexpr void __cordl_internal_set_m_SupportProbeVolumeGPUStreaming(bool value);

  constexpr void __cordl_internal_set_m_SupportProbeVolumeScenarioBlending(bool value);

  constexpr void __cordl_internal_set_m_SupportProbeVolumeScenarios(bool value);

  constexpr void __cordl_internal_set_m_SupportScreenSpaceLensFlare(bool value);

  constexpr void __cordl_internal_set_m_SupportsDynamicBatching(bool value);

  constexpr void __cordl_internal_set_m_SupportsHDR(bool value);

  constexpr void __cordl_internal_set_m_SupportsLightCookies(bool value);

  constexpr void __cordl_internal_set_m_SupportsLightLayers(bool value);

  constexpr void __cordl_internal_set_m_SupportsTerrainHoles(bool value);

  constexpr void __cordl_internal_set_m_Textures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources* value);

  constexpr void __cordl_internal_set_m_UpscalingFilter(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value);

  constexpr void __cordl_internal_set_m_UseAdaptivePerformance(bool value);

  constexpr void __cordl_internal_set_m_UseFastSRGBLinearConversion(bool value);

  constexpr void __cordl_internal_set_m_UseSRPBatcher(bool value);

  constexpr void __cordl_internal_set_m_VolumeFrameworkUpdateMode(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value);

  constexpr void __cordl_internal_set_m_VolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile> value);

  /// @brief Method .ctor, addr 0x6686e60, size 0x1b8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_AdditionalLightsDefaultShadowResolutionTierHigh();

  static inline int32_t getStaticF_AdditionalLightsDefaultShadowResolutionTierLow();

  static inline int32_t getStaticF_AdditionalLightsDefaultShadowResolutionTierMedium();

  static inline ::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                         ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>
  getStaticF_s_LightCookieFormatList();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_Names();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_Values();

  /// @brief Method get_additionalLightsCookieFormat, addr 0x6685620, size 0x2cc, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_additionalLightsCookieFormat();

  /// @brief Method get_additionalLightsCookieResolution, addr 0x66858ec, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_additionalLightsCookieResolution();

  /// @brief Method get_additionalLightsRenderingMode, addr 0x6685ba8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightRenderingMode get_additionalLightsRenderingMode();

  /// @brief Method get_additionalLightsShadowResolutionTierHigh, addr 0x6685ca4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowResolutionTierHigh();

  /// @brief Method get_additionalLightsShadowResolutionTierLow, addr 0x6685c84, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowResolutionTierLow();

  /// @brief Method get_additionalLightsShadowResolutionTierMedium, addr 0x6685c94, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowResolutionTierMedium();

  /// @brief Method get_additionalLightsShadowmapResolution, addr 0x6685c74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_additionalLightsShadowmapResolution();

  /// @brief Method get_allowPostProcessAlphaOutput, addr 0x6686168, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowPostProcessAlphaOutput();

  /// @brief Method get_cascade2Split, addr 0x6685e88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cascade2Split();

  /// @brief Method get_cascade3Split, addr 0x6685e98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_cascade3Split();

  /// @brief Method get_cascade4Split, addr 0x6685ea8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_cascade4Split();

  /// @brief Method get_cascadeBorder, addr 0x6685ec0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cascadeBorder();

  /// @brief Method get_colorGradingLutSize, addr 0x6686140, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_colorGradingLutSize();

  /// @brief Method get_colorGradingMode, addr 0x6686130, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ColorGradingMode get_colorGradingMode();

  /// @brief Method get_conservativeEnclosingSphere, addr 0x6686198, size 0x8, virtual false, abstract: false, final false
  inline bool get_conservativeEnclosingSphere();

  /// @brief Method get_debugLevel, addr 0x6685fe8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PipelineDebugLevel get_debugLevel();

  /// @brief Method get_decalMaterial, addr 0x66869a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_decalMaterial();

  /// @brief Method get_default2DMaskMaterial, addr 0x668699c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_default2DMaskMaterial();

  /// @brief Method get_default2DMaterial, addr 0x6686994, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_default2DMaterial();

  /// @brief Method get_defaultLineMaterial, addr 0x6686984, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultLineMaterial();

  /// @brief Method get_defaultMaterial, addr 0x6686974, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_defaultParticleMaterial, addr 0x668697c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultParticleMaterial();

  /// @brief Method get_defaultShader, addr 0x66869ac, size 0xb4, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultShader();

  /// @brief Method get_defaultTerrainMaterial, addr 0x668698c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultTerrainMaterial();

  /// @brief Method get_enableLODCrossFade, addr 0x6685a98, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableLODCrossFade();

  /// @brief Method get_enableRenderGraph, addr 0x6686000, size 0x120, virtual false, abstract: false, final false
  inline bool get_enableRenderGraph();

  /// @brief Method get_fsrOverrideSharpness, addr 0x6685ab8, size 0x8, virtual false, abstract: false, final false
  inline bool get_fsrOverrideSharpness();

  /// @brief Method get_fsrSharpness, addr 0x6685ac8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fsrSharpness();

  /// @brief Method get_gpuResidentDrawerEnableOcclusionCullingInCameras, addr 0x6686378, size 0x8, virtual false, abstract: false, final false
  inline bool get_gpuResidentDrawerEnableOcclusionCullingInCameras();

  /// @brief Method get_gpuResidentDrawerMode, addr 0x6686348, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::GPUResidentDrawerMode get_gpuResidentDrawerMode();

  /// @brief Method get_hdrColorBufferPrecision, addr 0x66859e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision get_hdrColorBufferPrecision();

  /// @brief Method get_isImmediateModeSupported, addr 0x6684b30, size 0x8, virtual true, abstract: false, final true
  inline bool get_isImmediateModeSupported();

  /// @brief Method get_isStpUsed, addr 0x668695c, size 0x10, virtual true, abstract: false, final true
  inline bool get_isStpUsed();

  /// @brief Method get_lightLayerMaskNames, addr 0x6686300, size 0x48, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_lightLayerMaskNames();

  /// @brief Method get_lightProbeSystem, addr 0x6685ae8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightProbeSystem get_lightProbeSystem();

  /// @brief Method get_lodCrossFadeDitheringType, addr 0x6685aa0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LODCrossFadeDitheringType get_lodCrossFadeDitheringType();

  /// @brief Method get_mainLightRenderingMode, addr 0x6685b78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LightRenderingMode get_mainLightRenderingMode();

  /// @brief Method get_mainLightShadowmapResolution, addr 0x6685b98, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mainLightShadowmapResolution();

  /// @brief Method get_maxAdditionalLightsCount, addr 0x6685bb8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxAdditionalLightsCount();

  /// @brief Method get_maxSHBands, addr 0x6686938, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::ProbeVolumeSHBands get_maxSHBands();

  /// @brief Method get_msaaSampleCount, addr 0x66859f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_msaaSampleCount();

  /// @brief Method get_numIterationsEnclosingSphere, addr 0x66861a8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numIterationsEnclosingSphere();

  /// @brief Method get_opaqueDownsampling, addr 0x66859b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Downsampling get_opaqueDownsampling();

  /// @brief Method get_prefixedRenderingLayerMaskNames, addr 0x6686268, size 0x98, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_prefixedRenderingLayerMaskNames();

  /// @brief Method get_probeVolumeBlendingMemoryBudget, addr 0x6685b08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget get_probeVolumeBlendingMemoryBudget();

  /// @brief Method get_probeVolumeMemoryBudget, addr 0x6685af8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget get_probeVolumeMemoryBudget();

  /// @brief Method get_probeVolumeSHBands, addr 0x6685b68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeSHBands get_probeVolumeSHBands();

  /// @brief Method get_probeVolumeSceneData, addr 0x6686954, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::ProbeVolumeSceneData* get_probeVolumeSceneData();

  /// @brief Method get_reflectionProbeBlending, addr 0x6685d80, size 0x8, virtual false, abstract: false, final false
  inline bool get_reflectionProbeBlending();

  /// @brief Method get_reflectionProbeBoxProjection, addr 0x6685d90, size 0x8, virtual false, abstract: false, final false
  inline bool get_reflectionProbeBoxProjection();

  /// @brief Method get_renderPipelineShaderTag, addr 0x66861b8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_renderPipelineShaderTag();

  /// @brief Method get_renderScale, addr 0x6685a04, size 0x8, virtual false, abstract: false, final false
  inline float_t get_renderScale();

  /// @brief Method get_rendererDataList, addr 0x6684a98, size 0x4c, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>> get_rendererDataList();

  /// @brief Method get_rendererIndexList, addr 0x66858f8, size 0x9c, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_rendererIndexList();

  /// @brief Method get_renderers, addr 0x6684ae4, size 0x4c, virtual false, abstract: false, final false
  inline ::System::ReadOnlySpan_1<::UnityEngine::Rendering::Universal::ScriptableRenderer*> get_renderers();

  /// @brief Method get_renderingLayerMaskNames, addr 0x66861fc, size 0x6c, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_renderingLayerMaskNames();

  /// @brief Method get_scriptableRenderer, addr 0x668502c, size 0x24c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* get_scriptableRenderer();

  /// @brief Method get_scriptableRendererData, addr 0x6685278, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> get_scriptableRendererData();

  /// @brief Method get_shEvalMode, addr 0x6685ad8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ShEvalMode get_shEvalMode();

  /// @brief Method get_shaderVariantLogLevel, addr 0x6686c1c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ShaderVariantLogLevel get_shaderVariantLogLevel();

  /// @brief Method get_shadowCascadeCount, addr 0x6685dbc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_shadowCascadeCount();

  /// @brief Method get_shadowCascadeOption, addr 0x6686d1c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ShadowCascadesOption get_shadowCascadeOption();

  /// @brief Method get_shadowDepthBias, addr 0x6685ed0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shadowDepthBias();

  /// @brief Method get_shadowDistance, addr 0x6685da0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shadowDistance();

  /// @brief Method get_shadowNormalBias, addr 0x6685f60, size 0x8, virtual false, abstract: false, final false
  inline float_t get_shadowNormalBias();

  /// @brief Method get_smallMeshScreenPercentage, addr 0x6686508, size 0x8, virtual false, abstract: false, final false
  inline float_t get_smallMeshScreenPercentage();

  /// @brief Method get_softShadowQuality, addr 0x6685f90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::SoftShadowQuality get_softShadowQuality();

  /// @brief Method get_storeActionsOptimization, addr 0x66859c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::StoreActionsOptimization get_storeActionsOptimization();

  /// @brief Method get_supportDataDrivenLensFlare, addr 0x6686180, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportDataDrivenLensFlare();

  /// @brief Method get_supportProbeVolume, addr 0x6686928, size 0x10, virtual true, abstract: false, final true
  inline bool get_supportProbeVolume();

  /// @brief Method get_supportProbeVolumeDiskStreaming, addr 0x6685b38, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportProbeVolumeDiskStreaming();

  /// @brief Method get_supportProbeVolumeGPUStreaming, addr 0x6685b28, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportProbeVolumeGPUStreaming();

  /// @brief Method get_supportProbeVolumeScenarioBlending, addr 0x6685b58, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportProbeVolumeScenarioBlending();

  /// @brief Method get_supportProbeVolumeScenarios, addr 0x6685b48, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportProbeVolumeScenarios();

  /// @brief Method get_supportProbeVolumeStreaming, addr 0x6685b18, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportProbeVolumeStreaming();

  /// @brief Method get_supportScreenSpaceLensFlare, addr 0x6686178, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportScreenSpaceLensFlare();

  /// @brief Method get_supportsAdditionalLightShadows, addr 0x6685c64, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsAdditionalLightShadows();

  /// @brief Method get_supportsCameraDepthTexture, addr 0x6685994, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsCameraDepthTexture();

  /// @brief Method get_supportsCameraOpaqueTexture, addr 0x66859a4, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsCameraOpaqueTexture();

  /// @brief Method get_supportsDynamicBatching, addr 0x6685fa0, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsDynamicBatching();

  /// @brief Method get_supportsHDR, addr 0x66859d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsHDR();

  /// @brief Method get_supportsLightCookies, addr 0x6685fb8, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsLightCookies();

  /// @brief Method get_supportsLightLayers, addr 0x6685fc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsLightLayers();

  /// @brief Method get_supportsMainLightShadows, addr 0x6685b88, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsMainLightShadows();

  /// @brief Method get_supportsMixedLighting, addr 0x6685fb0, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsMixedLighting();

  /// @brief Method get_supportsSoftShadows, addr 0x6685f80, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsSoftShadows();

  /// @brief Method get_supportsTerrainHoles, addr 0x66859bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportsTerrainHoles();

  /// @brief Method get_terrainDetailGrassBillboardShader, addr 0x6686b88, size 0x94, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassBillboardShader();

  /// @brief Method get_terrainDetailGrassShader, addr 0x6686af4, size 0x94, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassShader();

  /// @brief Method get_terrainDetailLitShader, addr 0x6686a60, size 0x94, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailLitShader();

  /// @brief Method get_textures, addr 0x6686e04, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources* get_textures();

  /// @brief Method get_upscalingFilter, addr 0x6685aa8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UpscalingFilterSelection get_upscalingFilter();

  /// @brief Method get_useAdaptivePerformance, addr 0x6686188, size 0x8, virtual false, abstract: false, final false
  inline bool get_useAdaptivePerformance();

  /// @brief Method get_useFastSRGBLinearConversion, addr 0x6686170, size 0x8, virtual false, abstract: false, final false
  inline bool get_useFastSRGBLinearConversion();

  /// @brief Method get_useRenderingLayers, addr 0x6685fc8, size 0x8, virtual false, abstract: false, final false
  inline bool get_useRenderingLayers();

  /// @brief Method get_useSRPBatcher, addr 0x6685ff0, size 0x8, virtual false, abstract: false, final false
  inline bool get_useSRPBatcher();

  /// @brief Method get_volumeFrameworkUpdateMode, addr 0x6685fd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode get_volumeFrameworkUpdateMode();

  /// @brief Method get_volumeProfile, addr 0x6685fd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::VolumeProfile> get_volumeProfile();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline"
  constexpr ::UnityEngine::Rendering::IProbeVolumeEnabledRenderPipeline* i___UnityEngine__Rendering__IProbeVolumeEnabledRenderPipeline() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::ISTPEnabledRenderPipeline"
  constexpr ::UnityEngine::Rendering::ISTPEnabledRenderPipeline* i___UnityEngine__Rendering__ISTPEnabledRenderPipeline() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::RenderGraphModule::IRenderGraphEnabledRenderPipeline"
  constexpr ::UnityEngine::Rendering::RenderGraphModule::IRenderGraphEnabledRenderPipeline* i___UnityEngine__Rendering__RenderGraphModule__IRenderGraphEnabledRenderPipeline() noexcept;

  /// @brief Convert to "::cordl_internals::InterfaceW"
  constexpr ::cordl_internals::InterfaceW* i___cordl_internals__InterfaceW() noexcept;

  static inline void setStaticF_AdditionalLightsDefaultShadowResolutionTierHigh(int32_t value);

  static inline void setStaticF_AdditionalLightsDefaultShadowResolutionTierLow(int32_t value);

  static inline void setStaticF_AdditionalLightsDefaultShadowResolutionTierMedium(int32_t value);

  static inline void
  setStaticF_s_LightCookieFormatList(::ArrayW<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>,
                                              ::Array<::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>>*>
                                         value);

  static inline void setStaticF_s_Names(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_s_Values(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method set_additionalLightsRenderingMode, addr 0x6685bb0, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value);

  /// @brief Method set_additionalLightsShadowResolutionTierHigh, addr 0x6685cac, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsShadowResolutionTierHigh(int32_t value);

  /// @brief Method set_additionalLightsShadowResolutionTierLow, addr 0x6685c8c, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsShadowResolutionTierLow(int32_t value);

  /// @brief Method set_additionalLightsShadowResolutionTierMedium, addr 0x6685c9c, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsShadowResolutionTierMedium(int32_t value);

  /// @brief Method set_additionalLightsShadowmapResolution, addr 0x6685c7c, size 0x8, virtual false, abstract: false, final false
  inline void set_additionalLightsShadowmapResolution(int32_t value);

  /// @brief Method set_cascade2Split, addr 0x6685e90, size 0x8, virtual false, abstract: false, final false
  inline void set_cascade2Split(float_t value);

  /// @brief Method set_cascade3Split, addr 0x6685ea0, size 0x8, virtual false, abstract: false, final false
  inline void set_cascade3Split(::UnityEngine::Vector2 value);

  /// @brief Method set_cascade4Split, addr 0x6685eb4, size 0xc, virtual false, abstract: false, final false
  inline void set_cascade4Split(::UnityEngine::Vector3 value);

  /// @brief Method set_cascadeBorder, addr 0x6685ec8, size 0x8, virtual false, abstract: false, final false
  inline void set_cascadeBorder(float_t value);

  /// @brief Method set_colorGradingLutSize, addr 0x6686148, size 0x20, virtual false, abstract: false, final false
  inline void set_colorGradingLutSize(int32_t value);

  /// @brief Method set_colorGradingMode, addr 0x6686138, size 0x8, virtual false, abstract: false, final false
  inline void set_colorGradingMode(::UnityEngine::Rendering::Universal::ColorGradingMode value);

  /// @brief Method set_conservativeEnclosingSphere, addr 0x66861a0, size 0x8, virtual false, abstract: false, final false
  inline void set_conservativeEnclosingSphere(bool value);

  /// @brief Method set_fsrOverrideSharpness, addr 0x6685ac0, size 0x8, virtual false, abstract: false, final false
  inline void set_fsrOverrideSharpness(bool value);

  /// @brief Method set_fsrSharpness, addr 0x6685ad0, size 0x8, virtual false, abstract: false, final false
  inline void set_fsrSharpness(float_t value);

  /// @brief Method set_gpuResidentDrawerEnableOcclusionCullingInCameras, addr 0x6686380, size 0x28, virtual false, abstract: false, final false
  inline void set_gpuResidentDrawerEnableOcclusionCullingInCameras(bool value);

  /// @brief Method set_gpuResidentDrawerMode, addr 0x6686350, size 0x28, virtual true, abstract: false, final true
  inline void set_gpuResidentDrawerMode(::UnityEngine::Rendering::GPUResidentDrawerMode value);

  /// @brief Method set_hdrColorBufferPrecision, addr 0x66859ec, size 0x8, virtual false, abstract: false, final false
  inline void set_hdrColorBufferPrecision(::UnityEngine::Rendering::Universal::HDRColorBufferPrecision value);

  /// @brief Method set_lightProbeSystem, addr 0x6685af0, size 0x8, virtual false, abstract: false, final false
  inline void set_lightProbeSystem(::UnityEngine::Rendering::Universal::LightProbeSystem value);

  /// @brief Method set_mainLightRenderingMode, addr 0x6685b80, size 0x8, virtual false, abstract: false, final false
  inline void set_mainLightRenderingMode(::UnityEngine::Rendering::Universal::LightRenderingMode value);

  /// @brief Method set_mainLightShadowmapResolution, addr 0x6685ba0, size 0x8, virtual false, abstract: false, final false
  inline void set_mainLightShadowmapResolution(int32_t value);

  /// @brief Method set_maxAdditionalLightsCount, addr 0x6685bc0, size 0x18, virtual false, abstract: false, final false
  inline void set_maxAdditionalLightsCount(int32_t value);

  /// @brief Method set_msaaSampleCount, addr 0x66859fc, size 0x8, virtual false, abstract: false, final false
  inline void set_msaaSampleCount(int32_t value);

  /// @brief Method set_numIterationsEnclosingSphere, addr 0x66861b0, size 0x8, virtual false, abstract: false, final false
  inline void set_numIterationsEnclosingSphere(int32_t value);

  /// @brief Method set_probeVolumeBlendingMemoryBudget, addr 0x6685b10, size 0x8, virtual false, abstract: false, final false
  inline void set_probeVolumeBlendingMemoryBudget(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget value);

  /// @brief Method set_probeVolumeMemoryBudget, addr 0x6685b00, size 0x8, virtual false, abstract: false, final false
  inline void set_probeVolumeMemoryBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget value);

  /// @brief Method set_probeVolumeSHBands, addr 0x6685b70, size 0x8, virtual false, abstract: false, final false
  inline void set_probeVolumeSHBands(::UnityEngine::Rendering::ProbeVolumeSHBands value);

  /// @brief Method set_reflectionProbeBlending, addr 0x6685d88, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeBlending(bool value);

  /// @brief Method set_reflectionProbeBoxProjection, addr 0x6685d98, size 0x8, virtual false, abstract: false, final false
  inline void set_reflectionProbeBoxProjection(bool value);

  /// @brief Method set_renderScale, addr 0x6685a0c, size 0x18, virtual false, abstract: false, final false
  inline void set_renderScale(float_t value);

  /// @brief Method set_shEvalMode, addr 0x6685ae0, size 0x8, virtual false, abstract: false, final false
  inline void set_shEvalMode(::UnityEngine::Rendering::Universal::ShEvalMode value);

  /// @brief Method set_shaderVariantLogLevel, addr 0x6686c98, size 0x84, virtual false, abstract: false, final false
  inline void set_shaderVariantLogLevel(::UnityEngine::Rendering::Universal::ShaderVariantLogLevel value);

  /// @brief Method set_shadowCascadeCount, addr 0x6685dc4, size 0xc4, virtual false, abstract: false, final false
  inline void set_shadowCascadeCount(int32_t value);

  /// @brief Method set_shadowCascadeOption, addr 0x6686d9c, size 0x68, virtual false, abstract: false, final false
  inline void set_shadowCascadeOption(::UnityEngine::Rendering::Universal::ShadowCascadesOption value);

  /// @brief Method set_shadowDepthBias, addr 0x6685ed8, size 0x18, virtual false, abstract: false, final false
  inline void set_shadowDepthBias(float_t value);

  /// @brief Method set_shadowDistance, addr 0x6685da8, size 0x14, virtual false, abstract: false, final false
  inline void set_shadowDistance(float_t value);

  /// @brief Method set_shadowNormalBias, addr 0x6685f68, size 0x18, virtual false, abstract: false, final false
  inline void set_shadowNormalBias(float_t value);

  /// @brief Method set_smallMeshScreenPercentage, addr 0x6686510, size 0xb4, virtual false, abstract: false, final false
  inline void set_smallMeshScreenPercentage(float_t value);

  /// @brief Method set_softShadowQuality, addr 0x6685f98, size 0x8, virtual false, abstract: false, final false
  inline void set_softShadowQuality(::UnityEngine::Rendering::Universal::SoftShadowQuality value);

  /// @brief Method set_storeActionsOptimization, addr 0x66859cc, size 0x8, virtual false, abstract: false, final false
  inline void set_storeActionsOptimization(::UnityEngine::Rendering::Universal::StoreActionsOptimization value);

  /// @brief Method set_supportProbeVolumeDiskStreaming, addr 0x6685b40, size 0x8, virtual false, abstract: false, final false
  inline void set_supportProbeVolumeDiskStreaming(bool value);

  /// @brief Method set_supportProbeVolumeGPUStreaming, addr 0x6685b30, size 0x8, virtual false, abstract: false, final false
  inline void set_supportProbeVolumeGPUStreaming(bool value);

  /// @brief Method set_supportProbeVolumeScenarioBlending, addr 0x6685b60, size 0x8, virtual false, abstract: false, final false
  inline void set_supportProbeVolumeScenarioBlending(bool value);

  /// @brief Method set_supportProbeVolumeScenarios, addr 0x6685b50, size 0x8, virtual false, abstract: false, final false
  inline void set_supportProbeVolumeScenarios(bool value);

  /// @brief Method set_supportProbeVolumeStreaming, addr 0x6685b20, size 0x8, virtual false, abstract: false, final false
  inline void set_supportProbeVolumeStreaming(bool value);

  /// @brief Method set_supportsAdditionalLightShadows, addr 0x6685c6c, size 0x8, virtual false, abstract: false, final false
  inline void set_supportsAdditionalLightShadows(bool value);

  /// @brief Method set_supportsCameraDepthTexture, addr 0x668599c, size 0x8, virtual false, abstract: false, final false
  inline void set_supportsCameraDepthTexture(bool value);

  /// @brief Method set_supportsCameraOpaqueTexture, addr 0x66859ac, size 0x8, virtual false, abstract: false, final false
  inline void set_supportsCameraOpaqueTexture(bool value);

  /// @brief Method set_supportsDynamicBatching, addr 0x6685fa8, size 0x8, virtual false, abstract: false, final false
  inline void set_supportsDynamicBatching(bool value);

  /// @brief Method set_supportsHDR, addr 0x66859dc, size 0x8, virtual false, abstract: false, final false
  inline void set_supportsHDR(bool value);

  /// @brief Method set_supportsMainLightShadows, addr 0x6685b90, size 0x8, virtual false, abstract: false, final false
  inline void set_supportsMainLightShadows(bool value);

  /// @brief Method set_supportsSoftShadows, addr 0x6685f88, size 0x8, virtual false, abstract: false, final false
  inline void set_supportsSoftShadows(bool value);

  /// @brief Method set_upscalingFilter, addr 0x6685ab0, size 0x8, virtual false, abstract: false, final false
  inline void set_upscalingFilter(::UnityEngine::Rendering::Universal::UpscalingFilterSelection value);

  /// @brief Method set_useAdaptivePerformance, addr 0x6686190, size 0x8, virtual false, abstract: false, final false
  inline void set_useAdaptivePerformance(bool value);

  /// @brief Method set_useSRPBatcher, addr 0x6685ff8, size 0x8, virtual false, abstract: false, final false
  inline void set_useSRPBatcher(bool value);

  /// @brief Method set_volumeProfile, addr 0x6685fe0, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeProfile(::UnityEngine::Rendering::VolumeProfile* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineAsset(UniversalRenderPipelineAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineAsset(UniversalRenderPipelineAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12573 };

  /// @brief Field k_LastVersion offset 0xffffffff size 0x4
  static constexpr int32_t k_LastVersion{ static_cast<int32_t>(0xc) };

  /// @brief Field k_MaxLutSize offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxLutSize{ static_cast<int32_t>(0x41) };

  /// @brief Field k_MinLutSize offset 0xffffffff size 0x4
  static constexpr int32_t k_MinLutSize{ static_cast<int32_t>(0x10) };

  /// @brief Field k_ShadowCascadeMaxCount offset 0xffffffff size 0x4
  static constexpr int32_t k_ShadowCascadeMaxCount{ static_cast<int32_t>(0x4) };

  /// @brief Field k_ShadowCascadeMinCount offset 0xffffffff size 0x4
  static constexpr int32_t k_ShadowCascadeMinCount{ static_cast<int32_t>(0x1) };

  /// @brief Field m_Renderers, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::Array<::UnityEngine::Rendering::Universal::ScriptableRenderer*>*> ___m_Renderers;

  /// @brief Field k_AssetVersion, offset: 0x20, size: 0x4, def value: None
  int32_t ___k_AssetVersion;

  /// @brief Field k_AssetPreviousVersion, offset: 0x24, size: 0x4, def value: None
  int32_t ___k_AssetPreviousVersion;

  /// @brief Field m_RendererType, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RendererType ___m_RendererType;

  /// @brief Field m_RendererData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData> ___m_RendererData;

  /// @brief Field m_RendererDataList, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererData>>*> ___m_RendererDataList;

  /// @brief Field m_DefaultRendererIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_DefaultRendererIndex;

  /// @brief Field m_RequireDepthTexture, offset: 0x44, size: 0x1, def value: None
  bool ___m_RequireDepthTexture;

  /// @brief Field m_RequireOpaqueTexture, offset: 0x45, size: 0x1, def value: None
  bool ___m_RequireOpaqueTexture;

  /// @brief Field m_OpaqueDownsampling, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::Downsampling ___m_OpaqueDownsampling;

  /// @brief Field m_SupportsTerrainHoles, offset: 0x4c, size: 0x1, def value: None
  bool ___m_SupportsTerrainHoles;

  /// @brief Field m_SupportsHDR, offset: 0x4d, size: 0x1, def value: None
  bool ___m_SupportsHDR;

  /// @brief Field m_HDRColorBufferPrecision, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision ___m_HDRColorBufferPrecision;

  /// @brief Field m_MSAA, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::MsaaQuality ___m_MSAA;

  /// @brief Field m_RenderScale, offset: 0x58, size: 0x4, def value: None
  float_t ___m_RenderScale;

  /// @brief Field m_UpscalingFilter, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::UpscalingFilterSelection ___m_UpscalingFilter;

  /// @brief Field m_FsrOverrideSharpness, offset: 0x60, size: 0x1, def value: None
  bool ___m_FsrOverrideSharpness;

  /// @brief Field m_FsrSharpness, offset: 0x64, size: 0x4, def value: None
  float_t ___m_FsrSharpness;

  /// @brief Field m_EnableLODCrossFade, offset: 0x68, size: 0x1, def value: None
  bool ___m_EnableLODCrossFade;

  /// @brief Field m_LODCrossFadeDitheringType, offset: 0x6c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LODCrossFadeDitheringType ___m_LODCrossFadeDitheringType;

  /// @brief Field m_ShEvalMode, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShEvalMode ___m_ShEvalMode;

  /// @brief Field m_LightProbeSystem, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightProbeSystem ___m_LightProbeSystem;

  /// @brief Field m_ProbeVolumeMemoryBudget, offset: 0x78, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget ___m_ProbeVolumeMemoryBudget;

  /// @brief Field m_ProbeVolumeBlendingMemoryBudget, offset: 0x7c, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget ___m_ProbeVolumeBlendingMemoryBudget;

  /// @brief Field m_SupportProbeVolumeGPUStreaming, offset: 0x80, size: 0x1, def value: None
  bool ___m_SupportProbeVolumeGPUStreaming;

  /// @brief Field m_SupportProbeVolumeDiskStreaming, offset: 0x81, size: 0x1, def value: None
  bool ___m_SupportProbeVolumeDiskStreaming;

  /// @brief Field m_SupportProbeVolumeScenarios, offset: 0x82, size: 0x1, def value: None
  bool ___m_SupportProbeVolumeScenarios;

  /// @brief Field m_SupportProbeVolumeScenarioBlending, offset: 0x83, size: 0x1, def value: None
  bool ___m_SupportProbeVolumeScenarioBlending;

  /// @brief Field m_ProbeVolumeSHBands, offset: 0x84, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSHBands ___m_ProbeVolumeSHBands;

  /// @brief Field m_MainLightRenderingMode, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightRenderingMode ___m_MainLightRenderingMode;

  /// @brief Field m_MainLightShadowsSupported, offset: 0x8c, size: 0x1, def value: None
  bool ___m_MainLightShadowsSupported;

  /// @brief Field m_MainLightShadowmapResolution, offset: 0x90, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolution ___m_MainLightShadowmapResolution;

  /// @brief Field m_AdditionalLightsRenderingMode, offset: 0x94, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightRenderingMode ___m_AdditionalLightsRenderingMode;

  /// @brief Field m_AdditionalLightsPerObjectLimit, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsPerObjectLimit;

  /// @brief Field m_AdditionalLightShadowsSupported, offset: 0x9c, size: 0x1, def value: None
  bool ___m_AdditionalLightShadowsSupported;

  /// @brief Field m_AdditionalLightsShadowmapResolution, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolution ___m_AdditionalLightsShadowmapResolution;

  /// @brief Field m_AdditionalLightsShadowResolutionTierLow, offset: 0xa4, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsShadowResolutionTierLow;

  /// @brief Field m_AdditionalLightsShadowResolutionTierMedium, offset: 0xa8, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsShadowResolutionTierMedium;

  /// @brief Field m_AdditionalLightsShadowResolutionTierHigh, offset: 0xac, size: 0x4, def value: None
  int32_t ___m_AdditionalLightsShadowResolutionTierHigh;

  /// @brief Field m_ReflectionProbeBlending, offset: 0xb0, size: 0x1, def value: None
  bool ___m_ReflectionProbeBlending;

  /// @brief Field m_ReflectionProbeBoxProjection, offset: 0xb1, size: 0x1, def value: None
  bool ___m_ReflectionProbeBoxProjection;

  /// @brief Field m_ShadowDistance, offset: 0xb4, size: 0x4, def value: None
  float_t ___m_ShadowDistance;

  /// @brief Field m_ShadowCascadeCount, offset: 0xb8, size: 0x4, def value: None
  int32_t ___m_ShadowCascadeCount;

  /// @brief Field m_Cascade2Split, offset: 0xbc, size: 0x4, def value: None
  float_t ___m_Cascade2Split;

  /// @brief Field m_Cascade3Split, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_Cascade3Split;

  /// @brief Field m_Cascade4Split, offset: 0xc8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Cascade4Split;

  /// @brief Field m_CascadeBorder, offset: 0xd4, size: 0x4, def value: None
  float_t ___m_CascadeBorder;

  /// @brief Field m_ShadowDepthBias, offset: 0xd8, size: 0x4, def value: None
  float_t ___m_ShadowDepthBias;

  /// @brief Field m_ShadowNormalBias, offset: 0xdc, size: 0x4, def value: None
  float_t ___m_ShadowNormalBias;

  /// @brief Field m_SoftShadowsSupported, offset: 0xe0, size: 0x1, def value: None
  bool ___m_SoftShadowsSupported;

  /// @brief Field m_ConservativeEnclosingSphere, offset: 0xe1, size: 0x1, def value: None
  bool ___m_ConservativeEnclosingSphere;

  /// @brief Field m_NumIterationsEnclosingSphere, offset: 0xe4, size: 0x4, def value: None
  int32_t ___m_NumIterationsEnclosingSphere;

  /// @brief Field m_SoftShadowQuality, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::SoftShadowQuality ___m_SoftShadowQuality;

  /// @brief Field m_AdditionalLightsCookieResolution, offset: 0xec, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieResolution ___m_AdditionalLightsCookieResolution;

  /// @brief Field m_AdditionalLightsCookieFormat, offset: 0xf0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieFormat ___m_AdditionalLightsCookieFormat;

  /// @brief Field m_UseSRPBatcher, offset: 0xf4, size: 0x1, def value: None
  bool ___m_UseSRPBatcher;

  /// @brief Field m_SupportsDynamicBatching, offset: 0xf5, size: 0x1, def value: None
  bool ___m_SupportsDynamicBatching;

  /// @brief Field m_MixedLightingSupported, offset: 0xf6, size: 0x1, def value: None
  bool ___m_MixedLightingSupported;

  /// @brief Field m_SupportsLightCookies, offset: 0xf7, size: 0x1, def value: None
  bool ___m_SupportsLightCookies;

  /// @brief Field m_SupportsLightLayers, offset: 0xf8, size: 0x1, def value: None
  bool ___m_SupportsLightLayers;

  /// @brief Field m_DebugLevel, offset: 0xfc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::PipelineDebugLevel ___m_DebugLevel;

  /// @brief Field m_StoreActionsOptimization, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::StoreActionsOptimization ___m_StoreActionsOptimization;

  /// @brief Field m_UseAdaptivePerformance, offset: 0x104, size: 0x1, def value: None
  bool ___m_UseAdaptivePerformance;

  /// @brief Field m_ColorGradingMode, offset: 0x108, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ColorGradingMode ___m_ColorGradingMode;

  /// @brief Field m_ColorGradingLutSize, offset: 0x10c, size: 0x4, def value: None
  int32_t ___m_ColorGradingLutSize;

  /// @brief Field m_AllowPostProcessAlphaOutput, offset: 0x110, size: 0x1, def value: None
  bool ___m_AllowPostProcessAlphaOutput;

  /// @brief Field m_UseFastSRGBLinearConversion, offset: 0x111, size: 0x1, def value: None
  bool ___m_UseFastSRGBLinearConversion;

  /// @brief Field m_SupportDataDrivenLensFlare, offset: 0x112, size: 0x1, def value: None
  bool ___m_SupportDataDrivenLensFlare;

  /// @brief Field m_SupportScreenSpaceLensFlare, offset: 0x113, size: 0x1, def value: None
  bool ___m_SupportScreenSpaceLensFlare;

  /// @brief Field m_GPUResidentDrawerMode, offset: 0x114, size: 0x1, def value: None
  ::UnityEngine::Rendering::GPUResidentDrawerMode ___m_GPUResidentDrawerMode;

  /// @brief Field m_SmallMeshScreenPercentage, offset: 0x118, size: 0x4, def value: None
  float_t ___m_SmallMeshScreenPercentage;

  /// @brief Field m_GPUResidentDrawerEnableOcclusionCullingInCameras, offset: 0x11c, size: 0x1, def value: None
  bool ___m_GPUResidentDrawerEnableOcclusionCullingInCameras;

  /// @brief Field m_ShadowType, offset: 0x120, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowQuality ___m_ShadowType;

  /// @brief Field m_LocalShadowsSupported, offset: 0x124, size: 0x1, def value: None
  bool ___m_LocalShadowsSupported;

  /// @brief Field m_LocalShadowsAtlasResolution, offset: 0x128, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolution ___m_LocalShadowsAtlasResolution;

  /// @brief Field m_MaxPixelLights, offset: 0x12c, size: 0x4, def value: None
  int32_t ___m_MaxPixelLights;

  /// @brief Field m_ShadowAtlasResolution, offset: 0x130, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowResolution ___m_ShadowAtlasResolution;

  /// @brief Field m_VolumeFrameworkUpdateMode, offset: 0x134, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode ___m_VolumeFrameworkUpdateMode;

  /// @brief Field m_VolumeProfile, offset: 0x138, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::VolumeProfile> ___m_VolumeProfile;

  /// @brief Field apvScenesData, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSceneData* ___apvScenesData;

  /// @brief Field m_DefaultShader, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DefaultShader;

  /// @brief Field m_ShaderVariantLogLevel, offset: 0x150, size: 0x4, def value: None
  int32_t ___m_ShaderVariantLogLevel;

  /// @brief Field m_ShadowCascades, offset: 0x154, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ShadowCascadesOption ___m_ShadowCascades;

  /// @brief Field m_Textures, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources* ___m_Textures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Renderers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___k_AssetVersion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___k_AssetPreviousVersion) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RendererType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RendererData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RendererDataList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_DefaultRendererIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RequireDepthTexture) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RequireOpaqueTexture) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_OpaqueDownsampling) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsTerrainHoles) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsHDR) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_HDRColorBufferPrecision) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MSAA) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_RenderScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_UpscalingFilter) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_FsrOverrideSharpness) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_FsrSharpness) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_EnableLODCrossFade) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_LODCrossFadeDitheringType) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShEvalMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_LightProbeSystem) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ProbeVolumeMemoryBudget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ProbeVolumeBlendingMemoryBudget) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportProbeVolumeGPUStreaming) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportProbeVolumeDiskStreaming) == 0x81, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportProbeVolumeScenarios) == 0x82, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportProbeVolumeScenarioBlending) == 0x83, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ProbeVolumeSHBands) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MainLightRenderingMode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MainLightShadowsSupported) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MainLightShadowmapResolution) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsRenderingMode) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsPerObjectLimit) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightShadowsSupported) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsShadowmapResolution) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsShadowResolutionTierLow) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsShadowResolutionTierMedium) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsShadowResolutionTierHigh) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ReflectionProbeBlending) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ReflectionProbeBoxProjection) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowDistance) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowCascadeCount) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Cascade2Split) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Cascade3Split) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Cascade4Split) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_CascadeBorder) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowDepthBias) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowNormalBias) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SoftShadowsSupported) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ConservativeEnclosingSphere) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_NumIterationsEnclosingSphere) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SoftShadowQuality) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsCookieResolution) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AdditionalLightsCookieFormat) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_UseSRPBatcher) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsDynamicBatching) == 0xf5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MixedLightingSupported) == 0xf6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsLightCookies) == 0xf7, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportsLightLayers) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_DebugLevel) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_StoreActionsOptimization) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_UseAdaptivePerformance) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ColorGradingMode) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ColorGradingLutSize) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_AllowPostProcessAlphaOutput) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_UseFastSRGBLinearConversion) == 0x111, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportDataDrivenLensFlare) == 0x112, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SupportScreenSpaceLensFlare) == 0x113, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_GPUResidentDrawerMode) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_SmallMeshScreenPercentage) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_GPUResidentDrawerEnableOcclusionCullingInCameras) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowType) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_LocalShadowsSupported) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_LocalShadowsAtlasResolution) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_MaxPixelLights) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowAtlasResolution) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_VolumeFrameworkUpdateMode) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_VolumeProfile) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___apvScenesData) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_DefaultShader) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShaderVariantLogLevel) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_ShadowCascades) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, ___m_Textures) == 0x158, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset, 0x160>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineAsset");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_Strings*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineAsset/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset_TextureResources*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineAsset/TextureResources");
