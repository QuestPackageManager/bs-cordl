#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderKeywordStrings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShaderKeywordStrings)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderKeywordStrings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShaderKeywordStrings);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderKeywordStrings
class CORDL_TYPE ShaderKeywordStrings : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderKeywordStrings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderKeywordStrings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderKeywordStrings(ShaderKeywordStrings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderKeywordStrings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderKeywordStrings(ShaderKeywordStrings const&) = delete;

  /// @brief Field AdditionalLightShadows offset 0xffffffff size 0x8
  static constexpr ::ConstString AdditionalLightShadows{ u"_ADDITIONAL_LIGHT_SHADOWS" };

  /// @brief Field AdditionalLightsPixel offset 0xffffffff size 0x8
  static constexpr ::ConstString AdditionalLightsPixel{ u"_ADDITIONAL_LIGHTS" };

  /// @brief Field AdditionalLightsVertex offset 0xffffffff size 0x8
  static constexpr ::ConstString AdditionalLightsVertex{ u"_ADDITIONAL_LIGHTS_VERTEX" };

  /// @brief Field BillboardFaceCameraPos offset 0xffffffff size 0x8
  static constexpr ::ConstString BillboardFaceCameraPos{ u"BILLBOARD_FACE_CAMERA_POS" };

  /// @brief Field BlitSingleSlice offset 0xffffffff size 0x8
  static constexpr ::ConstString BlitSingleSlice{ u"BLIT_SINGLE_SLICE" };

  /// @brief Field BloomHQ offset 0xffffffff size 0x8
  static constexpr ::ConstString BloomHQ{ u"_BLOOM_HQ" };

  /// @brief Field BloomHQDirt offset 0xffffffff size 0x8
  static constexpr ::ConstString BloomHQDirt{ u"_BLOOM_HQ_DIRT" };

  /// @brief Field BloomLQ offset 0xffffffff size 0x8
  static constexpr ::ConstString BloomLQ{ u"_BLOOM_LQ" };

  /// @brief Field BloomLQDirt offset 0xffffffff size 0x8
  static constexpr ::ConstString BloomLQDirt{ u"_BLOOM_LQ_DIRT" };

  /// @brief Field CastingPunctualLightShadow offset 0xffffffff size 0x8
  static constexpr ::ConstString CastingPunctualLightShadow{ u"_CASTING_PUNCTUAL_LIGHT_SHADOW" };

  /// @brief Field ChromaticAberration offset 0xffffffff size 0x8
  static constexpr ::ConstString ChromaticAberration{ u"_CHROMATIC_ABERRATION" };

  /// @brief Field DBufferMRT1 offset 0xffffffff size 0x8
  static constexpr ::ConstString DBufferMRT1{ u"_DBUFFER_MRT1" };

  /// @brief Field DBufferMRT2 offset 0xffffffff size 0x8
  static constexpr ::ConstString DBufferMRT2{ u"_DBUFFER_MRT2" };

  /// @brief Field DBufferMRT3 offset 0xffffffff size 0x8
  static constexpr ::ConstString DBufferMRT3{ u"_DBUFFER_MRT3" };

  /// @brief Field DEBUG_DISPLAY offset 0xffffffff size 0x8
  static constexpr ::ConstString DEBUG_DISPLAY{ u"DEBUG_DISPLAY" };

  /// @brief Field DIRLIGHTMAP_COMBINED offset 0xffffffff size 0x8
  static constexpr ::ConstString DIRLIGHTMAP_COMBINED{ u"DIRLIGHTMAP_COMBINED" };

  /// @brief Field DOWNSAMPLING_SIZE_16 offset 0xffffffff size 0x8
  static constexpr ::ConstString DOWNSAMPLING_SIZE_16{ u"DOWNSAMPLING_SIZE_16" };

  /// @brief Field DOWNSAMPLING_SIZE_2 offset 0xffffffff size 0x8
  static constexpr ::ConstString DOWNSAMPLING_SIZE_2{ u"DOWNSAMPLING_SIZE_2" };

  /// @brief Field DOWNSAMPLING_SIZE_4 offset 0xffffffff size 0x8
  static constexpr ::ConstString DOWNSAMPLING_SIZE_4{ u"DOWNSAMPLING_SIZE_4" };

  /// @brief Field DOWNSAMPLING_SIZE_8 offset 0xffffffff size 0x8
  static constexpr ::ConstString DOWNSAMPLING_SIZE_8{ u"DOWNSAMPLING_SIZE_8" };

  /// @brief Field DYNAMICLIGHTMAP_ON offset 0xffffffff size 0x8
  static constexpr ::ConstString DYNAMICLIGHTMAP_ON{ u"DYNAMICLIGHTMAP_ON" };

  /// @brief Field DecalLayers offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalLayers{ u"_DECAL_LAYERS" };

  /// @brief Field DecalNormalBlendHigh offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalNormalBlendHigh{ u"_DECAL_NORMAL_BLEND_HIGH" };

  /// @brief Field DecalNormalBlendLow offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalNormalBlendLow{ u"_DECAL_NORMAL_BLEND_LOW" };

  /// @brief Field DecalNormalBlendMedium offset 0xffffffff size 0x8
  static constexpr ::ConstString DecalNormalBlendMedium{ u"_DECAL_NORMAL_BLEND_MEDIUM" };

  /// @brief Field DepthMsaa2 offset 0xffffffff size 0x8
  static constexpr ::ConstString DepthMsaa2{ u"_DEPTH_MSAA_2" };

  /// @brief Field DepthMsaa4 offset 0xffffffff size 0x8
  static constexpr ::ConstString DepthMsaa4{ u"_DEPTH_MSAA_4" };

  /// @brief Field DepthMsaa8 offset 0xffffffff size 0x8
  static constexpr ::ConstString DepthMsaa8{ u"_DEPTH_MSAA_8" };

  /// @brief Field DepthNoMsaa offset 0xffffffff size 0x8
  static constexpr ::ConstString DepthNoMsaa{ u"_DEPTH_NO_MSAA" };

  /// @brief Field DisableTexture2DXArray offset 0xffffffff size 0x8
  static constexpr ::ConstString DisableTexture2DXArray{ u"DISABLE_TEXTURE2D_X_ARRAY" };

  /// @brief Field Distortion offset 0xffffffff size 0x8
  static constexpr ::ConstString Distortion{ u"_DISTORTION" };

  /// @brief Field Dithering offset 0xffffffff size 0x8
  static constexpr ::ConstString Dithering{ u"_DITHERING" };

  /// @brief Field EDITOR_VISUALIZATION offset 0xffffffff size 0x8
  static constexpr ::ConstString EDITOR_VISUALIZATION{ u"EDITOR_VISUALIZATION" };

  /// @brief Field EVALUATE_SH_MIXED offset 0xffffffff size 0x8
  static constexpr ::ConstString EVALUATE_SH_MIXED{ u"EVALUATE_SH_MIXED" };

  /// @brief Field EVALUATE_SH_VERTEX offset 0xffffffff size 0x8
  static constexpr ::ConstString EVALUATE_SH_VERTEX{ u"EVALUATE_SH_VERTEX" };

  /// @brief Field EasuRcasAndHDRInput offset 0xffffffff size 0x8
  static constexpr ::ConstString EasuRcasAndHDRInput{ u"_EASU_RCAS_AND_HDR_INPUT" };

  /// @brief Field FilmGrain offset 0xffffffff size 0x8
  static constexpr ::ConstString FilmGrain{ u"_FILM_GRAIN" };

  /// @brief Field ForwardPlus offset 0xffffffff size 0x8
  static constexpr ::ConstString ForwardPlus{ u"_FORWARD_PLUS" };

  /// @brief Field FoveatedRenderingNonUniformRaster offset 0xffffffff size 0x8
  static constexpr ::ConstString FoveatedRenderingNonUniformRaster{ u"_FOVEATED_RENDERING_NON_UNIFORM_RASTER" };

  /// @brief Field Fxaa offset 0xffffffff size 0x8
  static constexpr ::ConstString Fxaa{ u"_FXAA" };

  /// @brief Field Gamma20 offset 0xffffffff size 0x8
  static constexpr ::ConstString Gamma20{ u"_GAMMA_20" };

  /// @brief Field Gamma20AndHDRInput offset 0xffffffff size 0x8
  static constexpr ::ConstString Gamma20AndHDRInput{ u"_GAMMA_20_AND_HDR_INPUT" };

  /// @brief Field HDRGrading offset 0xffffffff size 0x8
  static constexpr ::ConstString HDRGrading{ u"_HDR_GRADING" };

  /// @brief Field HDROverlay offset 0xffffffff size 0x8
  static constexpr ::ConstString HDROverlay{ u"_HDR_OVERLAY" };

  /// @brief Field HighQualitySampling offset 0xffffffff size 0x8
  static constexpr ::ConstString HighQualitySampling{ u"_HIGH_QUALITY_SAMPLING" };

  /// @brief Field LIGHTMAP_ON offset 0xffffffff size 0x8
  static constexpr ::ConstString LIGHTMAP_ON{ u"LIGHTMAP_ON" };

  /// @brief Field LOD_FADE_CROSSFADE offset 0xffffffff size 0x8
  static constexpr ::ConstString LOD_FADE_CROSSFADE{ u"LOD_FADE_CROSSFADE" };

  /// @brief Field LightCookies offset 0xffffffff size 0x8
  static constexpr ::ConstString LightCookies{ u"_LIGHT_COOKIES" };

  /// @brief Field LightLayers offset 0xffffffff size 0x8
  static constexpr ::ConstString LightLayers{ u"_LIGHT_LAYERS" };

  /// @brief Field LightmapShadowMixing offset 0xffffffff size 0x8
  static constexpr ::ConstString LightmapShadowMixing{ u"LIGHTMAP_SHADOW_MIXING" };

  /// @brief Field LinearToSRGBConversion offset 0xffffffff size 0x8
  static constexpr ::ConstString LinearToSRGBConversion{ u"_LINEAR_TO_SRGB_CONVERSION" };

  /// @brief Field MainLightShadowCascades offset 0xffffffff size 0x8
  static constexpr ::ConstString MainLightShadowCascades{ u"_MAIN_LIGHT_SHADOWS_CASCADE" };

  /// @brief Field MainLightShadowScreen offset 0xffffffff size 0x8
  static constexpr ::ConstString MainLightShadowScreen{ u"_MAIN_LIGHT_SHADOWS_SCREEN" };

  /// @brief Field MainLightShadows offset 0xffffffff size 0x8
  static constexpr ::ConstString MainLightShadows{ u"_MAIN_LIGHT_SHADOWS" };

  /// @brief Field MixedLightingSubtractive offset 0xffffffff size 0x8
  static constexpr ::ConstString MixedLightingSubtractive{ u"_MIXED_LIGHTING_SUBTRACTIVE" };

  /// @brief Field PaniniGeneric offset 0xffffffff size 0x8
  static constexpr ::ConstString PaniniGeneric{ u"_GENERIC" };

  /// @brief Field PaniniUnitDistance offset 0xffffffff size 0x8
  static constexpr ::ConstString PaniniUnitDistance{ u"_UNIT_DISTANCE" };

  /// @brief Field PointSampling offset 0xffffffff size 0x8
  static constexpr ::ConstString PointSampling{ u"_POINT_SAMPLING" };

  /// @brief Field ProbeVolumeL1 offset 0xffffffff size 0x8
  static constexpr ::ConstString ProbeVolumeL1{ u"PROBE_VOLUMES_L1" };

  /// @brief Field ProbeVolumeL2 offset 0xffffffff size 0x8
  static constexpr ::ConstString ProbeVolumeL2{ u"PROBE_VOLUMES_L2" };

  /// @brief Field Rcas offset 0xffffffff size 0x8
  static constexpr ::ConstString Rcas{ u"_RCAS" };

  /// @brief Field ReflectionProbeBlending offset 0xffffffff size 0x8
  static constexpr ::ConstString ReflectionProbeBlending{ u"_REFLECTION_PROBE_BLENDING" };

  /// @brief Field ReflectionProbeBoxProjection offset 0xffffffff size 0x8
  static constexpr ::ConstString ReflectionProbeBoxProjection{ u"_REFLECTION_PROBE_BOX_PROJECTION" };

  /// @brief Field RenderPassEnabled offset 0xffffffff size 0x8
  static constexpr ::ConstString RenderPassEnabled{ u"_RENDER_PASS_ENABLED" };

  /// @brief Field SCREEN_COORD_OVERRIDE offset 0xffffffff size 0x8
  static constexpr ::ConstString SCREEN_COORD_OVERRIDE{ u"SCREEN_COORD_OVERRIDE" };

  /// @brief Field ScreenSpaceOcclusion offset 0xffffffff size 0x8
  static constexpr ::ConstString ScreenSpaceOcclusion{ u"_SCREEN_SPACE_OCCLUSION" };

  /// @brief Field ShadowsShadowMask offset 0xffffffff size 0x8
  static constexpr ::ConstString ShadowsShadowMask{ u"SHADOWS_SHADOWMASK" };

  /// @brief Field SmaaHigh offset 0xffffffff size 0x8
  static constexpr ::ConstString SmaaHigh{ u"_SMAA_PRESET_HIGH" };

  /// @brief Field SmaaLow offset 0xffffffff size 0x8
  static constexpr ::ConstString SmaaLow{ u"_SMAA_PRESET_LOW" };

  /// @brief Field SmaaMedium offset 0xffffffff size 0x8
  static constexpr ::ConstString SmaaMedium{ u"_SMAA_PRESET_MEDIUM" };

  /// @brief Field SoftShadows offset 0xffffffff size 0x8
  static constexpr ::ConstString SoftShadows{ u"_SHADOWS_SOFT" };

  /// @brief Field SoftShadowsHigh offset 0xffffffff size 0x8
  static constexpr ::ConstString SoftShadowsHigh{ u"_SHADOWS_SOFT_HIGH" };

  /// @brief Field SoftShadowsLow offset 0xffffffff size 0x8
  static constexpr ::ConstString SoftShadowsLow{ u"_SHADOWS_SOFT_LOW" };

  /// @brief Field SoftShadowsMedium offset 0xffffffff size 0x8
  static constexpr ::ConstString SoftShadowsMedium{ u"_SHADOWS_SOFT_MEDIUM" };

  /// @brief Field TonemapACES offset 0xffffffff size 0x8
  static constexpr ::ConstString TonemapACES{ u"_TONEMAP_ACES" };

  /// @brief Field TonemapNeutral offset 0xffffffff size 0x8
  static constexpr ::ConstString TonemapNeutral{ u"_TONEMAP_NEUTRAL" };

  /// @brief Field USE_LEGACY_LIGHTMAPS offset 0xffffffff size 0x8
  static constexpr ::ConstString USE_LEGACY_LIGHTMAPS{ u"USE_LEGACY_LIGHTMAPS" };

  /// @brief Field USE_UNITY_CROSSFADE offset 0xffffffff size 0x8
  static constexpr ::ConstString USE_UNITY_CROSSFADE{ u"USE_UNITY_CROSSFADE" };

  /// @brief Field UseFastSRGBLinearConversion offset 0xffffffff size 0x8
  static constexpr ::ConstString UseFastSRGBLinearConversion{ u"_USE_FAST_SRGB_LINEAR_CONVERSION" };

  /// @brief Field WriteRenderingLayers offset 0xffffffff size 0x8
  static constexpr ::ConstString WriteRenderingLayers{ u"_WRITE_RENDERING_LAYERS" };

  /// @brief Field XROcclusionMeshCombined offset 0xffffffff size 0x8
  static constexpr ::ConstString XROcclusionMeshCombined{ u"XR_OCCLUSION_MESH_COMBINED" };

  /// @brief Field _ADD_PRECOMPUTED_VELOCITY offset 0xffffffff size 0x8
  static constexpr ::ConstString _ADD_PRECOMPUTED_VELOCITY{ u"_ADD_PRECOMPUTED_VELOCITY" };

  /// @brief Field _ALPHAMODULATE_ON offset 0xffffffff size 0x8
  static constexpr ::ConstString _ALPHAMODULATE_ON{ u"_ALPHAMODULATE_ON" };

  /// @brief Field _ALPHAPREMULTIPLY_ON offset 0xffffffff size 0x8
  static constexpr ::ConstString _ALPHAPREMULTIPLY_ON{ u"_ALPHAPREMULTIPLY_ON" };

  /// @brief Field _ALPHATEST_ON offset 0xffffffff size 0x8
  static constexpr ::ConstString _ALPHATEST_ON{ u"_ALPHATEST_ON" };

  /// @brief Field _CLEARCOAT offset 0xffffffff size 0x8
  static constexpr ::ConstString _CLEARCOAT{ u"_CLEARCOAT" };

  /// @brief Field _CLEARCOATMAP offset 0xffffffff size 0x8
  static constexpr ::ConstString _CLEARCOATMAP{ u"_CLEARCOATMAP" };

  /// @brief Field _DEFERRED_FIRST_LIGHT offset 0xffffffff size 0x8
  static constexpr ::ConstString _DEFERRED_FIRST_LIGHT{ u"_DEFERRED_FIRST_LIGHT" };

  /// @brief Field _DEFERRED_MAIN_LIGHT offset 0xffffffff size 0x8
  static constexpr ::ConstString _DEFERRED_MAIN_LIGHT{ u"_DEFERRED_MAIN_LIGHT" };

  /// @brief Field _DEFERRED_MIXED_LIGHTING offset 0xffffffff size 0x8
  static constexpr ::ConstString _DEFERRED_MIXED_LIGHTING{ u"_DEFERRED_MIXED_LIGHTING" };

  /// @brief Field _DEFERRED_STENCIL offset 0xffffffff size 0x8
  static constexpr ::ConstString _DEFERRED_STENCIL{ u"_DEFERRED_STENCIL" };

  /// @brief Field _DETAIL_MULX2 offset 0xffffffff size 0x8
  static constexpr ::ConstString _DETAIL_MULX2{ u"_DETAIL_MULX2" };

  /// @brief Field _DETAIL_SCALED offset 0xffffffff size 0x8
  static constexpr ::ConstString _DETAIL_SCALED{ u"_DETAIL_SCALED" };

  /// @brief Field _DIRECTIONAL offset 0xffffffff size 0x8
  static constexpr ::ConstString _DIRECTIONAL{ u"_DIRECTIONAL" };

  /// @brief Field _EMISSION offset 0xffffffff size 0x8
  static constexpr ::ConstString _EMISSION{ u"_EMISSION" };

  /// @brief Field _ENABLE_ALPHA_OUTPUT offset 0xffffffff size 0x8
  static constexpr ::ConstString _ENABLE_ALPHA_OUTPUT{ u"_ENABLE_ALPHA_OUTPUT" };

  /// @brief Field _GBUFFER_NORMALS_OCT offset 0xffffffff size 0x8
  static constexpr ::ConstString _GBUFFER_NORMALS_OCT{ u"_GBUFFER_NORMALS_OCT" };

  /// @brief Field _NORMALMAP offset 0xffffffff size 0x8
  static constexpr ::ConstString _NORMALMAP{ u"_NORMALMAP" };

  /// @brief Field _OUTPUT_DEPTH offset 0xffffffff size 0x8
  static constexpr ::ConstString _OUTPUT_DEPTH{ u"_OUTPUT_DEPTH" };

  /// @brief Field _POINT offset 0xffffffff size 0x8
  static constexpr ::ConstString _POINT{ u"_POINT" };

  /// @brief Field _RECEIVE_SHADOWS_OFF offset 0xffffffff size 0x8
  static constexpr ::ConstString _RECEIVE_SHADOWS_OFF{ u"_RECEIVE_SHADOWS_OFF" };

  /// @brief Field _SPOT offset 0xffffffff size 0x8
  static constexpr ::ConstString _SPOT{ u"_SPOT" };

  /// @brief Field _SURFACE_TYPE_TRANSPARENT offset 0xffffffff size 0x8
  static constexpr ::ConstString _SURFACE_TYPE_TRANSPARENT{ u"_SURFACE_TYPE_TRANSPARENT" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderKeywordStrings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderKeywordStrings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderKeywordStrings*, "UnityEngine.Rendering.Universal", "ShaderKeywordStrings");
