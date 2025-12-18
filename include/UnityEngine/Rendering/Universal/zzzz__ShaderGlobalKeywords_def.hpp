#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderGlobalKeywords.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
CORDL_MODULE_EXPORT(ShaderGlobalKeywords)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderGlobalKeywords;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShaderGlobalKeywords);
// Dependencies System.Object, UnityEngine.Rendering.GlobalKeyword
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderGlobalKeywords
class CORDL_TYPE ShaderGlobalKeywords : public ::System::Object {
public:
  // Declarations
  /// @brief Field AdditionalLightShadows, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AdditionalLightShadows, put = setStaticF_AdditionalLightShadows)) ::UnityEngine::Rendering::GlobalKeyword AdditionalLightShadows;

  /// @brief Field AdditionalLightsPixel, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AdditionalLightsPixel, put = setStaticF_AdditionalLightsPixel)) ::UnityEngine::Rendering::GlobalKeyword AdditionalLightsPixel;

  /// @brief Field AdditionalLightsVertex, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AdditionalLightsVertex, put = setStaticF_AdditionalLightsVertex)) ::UnityEngine::Rendering::GlobalKeyword AdditionalLightsVertex;

  /// @brief Field BillboardFaceCameraPos, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_BillboardFaceCameraPos, put = setStaticF_BillboardFaceCameraPos)) ::UnityEngine::Rendering::GlobalKeyword BillboardFaceCameraPos;

  /// @brief Field BlitSingleSlice, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_BlitSingleSlice, put = setStaticF_BlitSingleSlice)) ::UnityEngine::Rendering::GlobalKeyword BlitSingleSlice;

  /// @brief Field CastingPunctualLightShadow, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_CastingPunctualLightShadow, put = setStaticF_CastingPunctualLightShadow)) ::UnityEngine::Rendering::GlobalKeyword CastingPunctualLightShadow;

  /// @brief Field DBufferMRT1, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DBufferMRT1, put = setStaticF_DBufferMRT1)) ::UnityEngine::Rendering::GlobalKeyword DBufferMRT1;

  /// @brief Field DBufferMRT2, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DBufferMRT2, put = setStaticF_DBufferMRT2)) ::UnityEngine::Rendering::GlobalKeyword DBufferMRT2;

  /// @brief Field DBufferMRT3, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DBufferMRT3, put = setStaticF_DBufferMRT3)) ::UnityEngine::Rendering::GlobalKeyword DBufferMRT3;

  /// @brief Field DEBUG_DISPLAY, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DEBUG_DISPLAY, put = setStaticF_DEBUG_DISPLAY)) ::UnityEngine::Rendering::GlobalKeyword DEBUG_DISPLAY;

  /// @brief Field DIRLIGHTMAP_COMBINED, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DIRLIGHTMAP_COMBINED, put = setStaticF_DIRLIGHTMAP_COMBINED)) ::UnityEngine::Rendering::GlobalKeyword DIRLIGHTMAP_COMBINED;

  /// @brief Field DOWNSAMPLING_SIZE_16, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DOWNSAMPLING_SIZE_16, put = setStaticF_DOWNSAMPLING_SIZE_16)) ::UnityEngine::Rendering::GlobalKeyword DOWNSAMPLING_SIZE_16;

  /// @brief Field DOWNSAMPLING_SIZE_2, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DOWNSAMPLING_SIZE_2, put = setStaticF_DOWNSAMPLING_SIZE_2)) ::UnityEngine::Rendering::GlobalKeyword DOWNSAMPLING_SIZE_2;

  /// @brief Field DOWNSAMPLING_SIZE_4, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DOWNSAMPLING_SIZE_4, put = setStaticF_DOWNSAMPLING_SIZE_4)) ::UnityEngine::Rendering::GlobalKeyword DOWNSAMPLING_SIZE_4;

  /// @brief Field DOWNSAMPLING_SIZE_8, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DOWNSAMPLING_SIZE_8, put = setStaticF_DOWNSAMPLING_SIZE_8)) ::UnityEngine::Rendering::GlobalKeyword DOWNSAMPLING_SIZE_8;

  /// @brief Field DYNAMICLIGHTMAP_ON, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DYNAMICLIGHTMAP_ON, put = setStaticF_DYNAMICLIGHTMAP_ON)) ::UnityEngine::Rendering::GlobalKeyword DYNAMICLIGHTMAP_ON;

  /// @brief Field DecalLayers, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DecalLayers, put = setStaticF_DecalLayers)) ::UnityEngine::Rendering::GlobalKeyword DecalLayers;

  /// @brief Field DecalNormalBlendHigh, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DecalNormalBlendHigh, put = setStaticF_DecalNormalBlendHigh)) ::UnityEngine::Rendering::GlobalKeyword DecalNormalBlendHigh;

  /// @brief Field DecalNormalBlendLow, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DecalNormalBlendLow, put = setStaticF_DecalNormalBlendLow)) ::UnityEngine::Rendering::GlobalKeyword DecalNormalBlendLow;

  /// @brief Field DecalNormalBlendMedium, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DecalNormalBlendMedium, put = setStaticF_DecalNormalBlendMedium)) ::UnityEngine::Rendering::GlobalKeyword DecalNormalBlendMedium;

  /// @brief Field DepthMsaa2, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DepthMsaa2, put = setStaticF_DepthMsaa2)) ::UnityEngine::Rendering::GlobalKeyword DepthMsaa2;

  /// @brief Field DepthMsaa4, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DepthMsaa4, put = setStaticF_DepthMsaa4)) ::UnityEngine::Rendering::GlobalKeyword DepthMsaa4;

  /// @brief Field DepthMsaa8, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DepthMsaa8, put = setStaticF_DepthMsaa8)) ::UnityEngine::Rendering::GlobalKeyword DepthMsaa8;

  /// @brief Field DepthNoMsaa, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DepthNoMsaa, put = setStaticF_DepthNoMsaa)) ::UnityEngine::Rendering::GlobalKeyword DepthNoMsaa;

  /// @brief Field DisableTexture2DXArray, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_DisableTexture2DXArray, put = setStaticF_DisableTexture2DXArray)) ::UnityEngine::Rendering::GlobalKeyword DisableTexture2DXArray;

  /// @brief Field EDITOR_VISUALIZATION, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_EDITOR_VISUALIZATION, put = setStaticF_EDITOR_VISUALIZATION)) ::UnityEngine::Rendering::GlobalKeyword EDITOR_VISUALIZATION;

  /// @brief Field EVALUATE_SH_MIXED, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_EVALUATE_SH_MIXED, put = setStaticF_EVALUATE_SH_MIXED)) ::UnityEngine::Rendering::GlobalKeyword EVALUATE_SH_MIXED;

  /// @brief Field EVALUATE_SH_VERTEX, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_EVALUATE_SH_VERTEX, put = setStaticF_EVALUATE_SH_VERTEX)) ::UnityEngine::Rendering::GlobalKeyword EVALUATE_SH_VERTEX;

  /// @brief Field ForwardPlus, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ForwardPlus, put = setStaticF_ForwardPlus)) ::UnityEngine::Rendering::GlobalKeyword ForwardPlus;

  /// @brief Field FoveatedRenderingNonUniformRaster, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_FoveatedRenderingNonUniformRaster,
                      put = setStaticF_FoveatedRenderingNonUniformRaster)) ::UnityEngine::Rendering::GlobalKeyword FoveatedRenderingNonUniformRaster;

  /// @brief Field LIGHTMAP_ON, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LIGHTMAP_ON, put = setStaticF_LIGHTMAP_ON)) ::UnityEngine::Rendering::GlobalKeyword LIGHTMAP_ON;

  /// @brief Field LOD_FADE_CROSSFADE, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LOD_FADE_CROSSFADE, put = setStaticF_LOD_FADE_CROSSFADE)) ::UnityEngine::Rendering::GlobalKeyword LOD_FADE_CROSSFADE;

  /// @brief Field LightCookies, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LightCookies, put = setStaticF_LightCookies)) ::UnityEngine::Rendering::GlobalKeyword LightCookies;

  /// @brief Field LightLayers, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LightLayers, put = setStaticF_LightLayers)) ::UnityEngine::Rendering::GlobalKeyword LightLayers;

  /// @brief Field LightmapShadowMixing, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LightmapShadowMixing, put = setStaticF_LightmapShadowMixing)) ::UnityEngine::Rendering::GlobalKeyword LightmapShadowMixing;

  /// @brief Field LinearToSRGBConversion, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_LinearToSRGBConversion, put = setStaticF_LinearToSRGBConversion)) ::UnityEngine::Rendering::GlobalKeyword LinearToSRGBConversion;

  /// @brief Field MainLightShadowCascades, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MainLightShadowCascades, put = setStaticF_MainLightShadowCascades)) ::UnityEngine::Rendering::GlobalKeyword MainLightShadowCascades;

  /// @brief Field MainLightShadowScreen, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MainLightShadowScreen, put = setStaticF_MainLightShadowScreen)) ::UnityEngine::Rendering::GlobalKeyword MainLightShadowScreen;

  /// @brief Field MainLightShadows, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MainLightShadows, put = setStaticF_MainLightShadows)) ::UnityEngine::Rendering::GlobalKeyword MainLightShadows;

  /// @brief Field MixedLightingSubtractive, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MixedLightingSubtractive, put = setStaticF_MixedLightingSubtractive)) ::UnityEngine::Rendering::GlobalKeyword MixedLightingSubtractive;

  /// @brief Field ProbeVolumeL1, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ProbeVolumeL1, put = setStaticF_ProbeVolumeL1)) ::UnityEngine::Rendering::GlobalKeyword ProbeVolumeL1;

  /// @brief Field ProbeVolumeL2, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ProbeVolumeL2, put = setStaticF_ProbeVolumeL2)) ::UnityEngine::Rendering::GlobalKeyword ProbeVolumeL2;

  /// @brief Field ReflectionProbeBlending, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ReflectionProbeBlending, put = setStaticF_ReflectionProbeBlending)) ::UnityEngine::Rendering::GlobalKeyword ReflectionProbeBlending;

  /// @brief Field ReflectionProbeBoxProjection, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ReflectionProbeBoxProjection, put = setStaticF_ReflectionProbeBoxProjection)) ::UnityEngine::Rendering::GlobalKeyword ReflectionProbeBoxProjection;

  /// @brief Field RenderPassEnabled, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_RenderPassEnabled, put = setStaticF_RenderPassEnabled)) ::UnityEngine::Rendering::GlobalKeyword RenderPassEnabled;

  /// @brief Field SCREEN_COORD_OVERRIDE, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SCREEN_COORD_OVERRIDE, put = setStaticF_SCREEN_COORD_OVERRIDE)) ::UnityEngine::Rendering::GlobalKeyword SCREEN_COORD_OVERRIDE;

  /// @brief Field ScreenSpaceOcclusion, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ScreenSpaceOcclusion, put = setStaticF_ScreenSpaceOcclusion)) ::UnityEngine::Rendering::GlobalKeyword ScreenSpaceOcclusion;

  /// @brief Field ShadowsShadowMask, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ShadowsShadowMask, put = setStaticF_ShadowsShadowMask)) ::UnityEngine::Rendering::GlobalKeyword ShadowsShadowMask;

  /// @brief Field SoftShadows, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SoftShadows, put = setStaticF_SoftShadows)) ::UnityEngine::Rendering::GlobalKeyword SoftShadows;

  /// @brief Field SoftShadowsHigh, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SoftShadowsHigh, put = setStaticF_SoftShadowsHigh)) ::UnityEngine::Rendering::GlobalKeyword SoftShadowsHigh;

  /// @brief Field SoftShadowsLow, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SoftShadowsLow, put = setStaticF_SoftShadowsLow)) ::UnityEngine::Rendering::GlobalKeyword SoftShadowsLow;

  /// @brief Field SoftShadowsMedium, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SoftShadowsMedium, put = setStaticF_SoftShadowsMedium)) ::UnityEngine::Rendering::GlobalKeyword SoftShadowsMedium;

  /// @brief Field USE_UNITY_CROSSFADE, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_USE_UNITY_CROSSFADE, put = setStaticF_USE_UNITY_CROSSFADE)) ::UnityEngine::Rendering::GlobalKeyword USE_UNITY_CROSSFADE;

  /// @brief Field WriteRenderingLayers, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_WriteRenderingLayers, put = setStaticF_WriteRenderingLayers)) ::UnityEngine::Rendering::GlobalKeyword WriteRenderingLayers;

  /// @brief Field XROcclusionMeshCombined, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_XROcclusionMeshCombined, put = setStaticF_XROcclusionMeshCombined)) ::UnityEngine::Rendering::GlobalKeyword XROcclusionMeshCombined;

  /// @brief Field _ADD_PRECOMPUTED_VELOCITY, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__ADD_PRECOMPUTED_VELOCITY, put = setStaticF__ADD_PRECOMPUTED_VELOCITY)) ::UnityEngine::Rendering::GlobalKeyword _ADD_PRECOMPUTED_VELOCITY;

  /// @brief Field _ALPHAMODULATE_ON, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__ALPHAMODULATE_ON, put = setStaticF__ALPHAMODULATE_ON)) ::UnityEngine::Rendering::GlobalKeyword _ALPHAMODULATE_ON;

  /// @brief Field _ALPHAPREMULTIPLY_ON, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__ALPHAPREMULTIPLY_ON, put = setStaticF__ALPHAPREMULTIPLY_ON)) ::UnityEngine::Rendering::GlobalKeyword _ALPHAPREMULTIPLY_ON;

  /// @brief Field _ALPHATEST_ON, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__ALPHATEST_ON, put = setStaticF__ALPHATEST_ON)) ::UnityEngine::Rendering::GlobalKeyword _ALPHATEST_ON;

  /// @brief Field _CLEARCOAT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__CLEARCOAT, put = setStaticF__CLEARCOAT)) ::UnityEngine::Rendering::GlobalKeyword _CLEARCOAT;

  /// @brief Field _CLEARCOATMAP, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__CLEARCOATMAP, put = setStaticF__CLEARCOATMAP)) ::UnityEngine::Rendering::GlobalKeyword _CLEARCOATMAP;

  /// @brief Field _DEFERRED_FIRST_LIGHT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__DEFERRED_FIRST_LIGHT, put = setStaticF__DEFERRED_FIRST_LIGHT)) ::UnityEngine::Rendering::GlobalKeyword _DEFERRED_FIRST_LIGHT;

  /// @brief Field _DEFERRED_MAIN_LIGHT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__DEFERRED_MAIN_LIGHT, put = setStaticF__DEFERRED_MAIN_LIGHT)) ::UnityEngine::Rendering::GlobalKeyword _DEFERRED_MAIN_LIGHT;

  /// @brief Field _DEFERRED_MIXED_LIGHTING, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__DEFERRED_MIXED_LIGHTING, put = setStaticF__DEFERRED_MIXED_LIGHTING)) ::UnityEngine::Rendering::GlobalKeyword _DEFERRED_MIXED_LIGHTING;

  /// @brief Field _DEFERRED_STENCIL, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__DEFERRED_STENCIL, put = setStaticF__DEFERRED_STENCIL)) ::UnityEngine::Rendering::GlobalKeyword _DEFERRED_STENCIL;

  /// @brief Field _DETAIL_MULX2, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__DETAIL_MULX2, put = setStaticF__DETAIL_MULX2)) ::UnityEngine::Rendering::GlobalKeyword _DETAIL_MULX2;

  /// @brief Field _DETAIL_SCALED, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__DETAIL_SCALED, put = setStaticF__DETAIL_SCALED)) ::UnityEngine::Rendering::GlobalKeyword _DETAIL_SCALED;

  /// @brief Field _DIRECTIONAL, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__DIRECTIONAL, put = setStaticF__DIRECTIONAL)) ::UnityEngine::Rendering::GlobalKeyword _DIRECTIONAL;

  /// @brief Field _EMISSION, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__EMISSION, put = setStaticF__EMISSION)) ::UnityEngine::Rendering::GlobalKeyword _EMISSION;

  /// @brief Field _ENABLE_ALPHA_OUTPUT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__ENABLE_ALPHA_OUTPUT, put = setStaticF__ENABLE_ALPHA_OUTPUT)) ::UnityEngine::Rendering::GlobalKeyword _ENABLE_ALPHA_OUTPUT;

  /// @brief Field _GBUFFER_NORMALS_OCT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__GBUFFER_NORMALS_OCT, put = setStaticF__GBUFFER_NORMALS_OCT)) ::UnityEngine::Rendering::GlobalKeyword _GBUFFER_NORMALS_OCT;

  /// @brief Field _NORMALMAP, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__NORMALMAP, put = setStaticF__NORMALMAP)) ::UnityEngine::Rendering::GlobalKeyword _NORMALMAP;

  /// @brief Field _OUTPUT_DEPTH, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__OUTPUT_DEPTH, put = setStaticF__OUTPUT_DEPTH)) ::UnityEngine::Rendering::GlobalKeyword _OUTPUT_DEPTH;

  /// @brief Field _POINT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__POINT, put = setStaticF__POINT)) ::UnityEngine::Rendering::GlobalKeyword _POINT;

  /// @brief Field _RECEIVE_SHADOWS_OFF, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__RECEIVE_SHADOWS_OFF, put = setStaticF__RECEIVE_SHADOWS_OFF)) ::UnityEngine::Rendering::GlobalKeyword _RECEIVE_SHADOWS_OFF;

  /// @brief Field _SPOT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__SPOT, put = setStaticF__SPOT)) ::UnityEngine::Rendering::GlobalKeyword _SPOT;

  /// @brief Field _SURFACE_TYPE_TRANSPARENT, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF__SURFACE_TYPE_TRANSPARENT, put = setStaticF__SURFACE_TYPE_TRANSPARENT)) ::UnityEngine::Rendering::GlobalKeyword _SURFACE_TYPE_TRANSPARENT;

  /// @brief Method InitializeShaderGlobalKeywords, addr 0x672ecf0, size 0x1090, virtual false, abstract: false, final false
  static inline void InitializeShaderGlobalKeywords();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_AdditionalLightShadows();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_AdditionalLightsPixel();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_AdditionalLightsVertex();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_BillboardFaceCameraPos();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_BlitSingleSlice();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_CastingPunctualLightShadow();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DBufferMRT1();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DBufferMRT2();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DBufferMRT3();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DEBUG_DISPLAY();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DIRLIGHTMAP_COMBINED();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DOWNSAMPLING_SIZE_16();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DOWNSAMPLING_SIZE_2();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DOWNSAMPLING_SIZE_4();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DOWNSAMPLING_SIZE_8();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DYNAMICLIGHTMAP_ON();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DecalLayers();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DecalNormalBlendHigh();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DecalNormalBlendLow();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DecalNormalBlendMedium();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DepthMsaa2();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DepthMsaa4();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DepthMsaa8();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DepthNoMsaa();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DisableTexture2DXArray();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_EDITOR_VISUALIZATION();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_EVALUATE_SH_MIXED();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_EVALUATE_SH_VERTEX();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_ForwardPlus();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_FoveatedRenderingNonUniformRaster();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_LIGHTMAP_ON();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_LOD_FADE_CROSSFADE();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_LightCookies();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_LightLayers();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_LightmapShadowMixing();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_LinearToSRGBConversion();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_MainLightShadowCascades();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_MainLightShadowScreen();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_MainLightShadows();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_MixedLightingSubtractive();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_ProbeVolumeL1();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_ProbeVolumeL2();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_ReflectionProbeBlending();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_ReflectionProbeBoxProjection();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_RenderPassEnabled();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_SCREEN_COORD_OVERRIDE();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_ScreenSpaceOcclusion();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_ShadowsShadowMask();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_SoftShadows();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_SoftShadowsHigh();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_SoftShadowsLow();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_SoftShadowsMedium();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_USE_UNITY_CROSSFADE();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_WriteRenderingLayers();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_XROcclusionMeshCombined();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__ADD_PRECOMPUTED_VELOCITY();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__ALPHAMODULATE_ON();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__ALPHAPREMULTIPLY_ON();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__ALPHATEST_ON();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__CLEARCOAT();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__CLEARCOATMAP();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__DEFERRED_FIRST_LIGHT();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__DEFERRED_MAIN_LIGHT();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__DEFERRED_MIXED_LIGHTING();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__DEFERRED_STENCIL();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__DETAIL_MULX2();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__DETAIL_SCALED();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__DIRECTIONAL();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__EMISSION();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__ENABLE_ALPHA_OUTPUT();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__GBUFFER_NORMALS_OCT();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__NORMALMAP();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__OUTPUT_DEPTH();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__POINT();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__RECEIVE_SHADOWS_OFF();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__SPOT();

  static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF__SURFACE_TYPE_TRANSPARENT();

  static inline void setStaticF_AdditionalLightShadows(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_AdditionalLightsPixel(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_AdditionalLightsVertex(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_BillboardFaceCameraPos(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_BlitSingleSlice(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_CastingPunctualLightShadow(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DBufferMRT1(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DBufferMRT2(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DBufferMRT3(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DEBUG_DISPLAY(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DIRLIGHTMAP_COMBINED(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DOWNSAMPLING_SIZE_16(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DOWNSAMPLING_SIZE_2(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DOWNSAMPLING_SIZE_4(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DOWNSAMPLING_SIZE_8(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DYNAMICLIGHTMAP_ON(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DecalLayers(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DecalNormalBlendHigh(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DecalNormalBlendLow(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DecalNormalBlendMedium(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DepthMsaa2(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DepthMsaa4(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DepthMsaa8(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DepthNoMsaa(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_DisableTexture2DXArray(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_EDITOR_VISUALIZATION(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_EVALUATE_SH_MIXED(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_EVALUATE_SH_VERTEX(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_ForwardPlus(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_FoveatedRenderingNonUniformRaster(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_LIGHTMAP_ON(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_LOD_FADE_CROSSFADE(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_LightCookies(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_LightLayers(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_LightmapShadowMixing(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_LinearToSRGBConversion(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_MainLightShadowCascades(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_MainLightShadowScreen(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_MainLightShadows(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_MixedLightingSubtractive(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_ProbeVolumeL1(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_ProbeVolumeL2(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_ReflectionProbeBlending(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_ReflectionProbeBoxProjection(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_RenderPassEnabled(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_SCREEN_COORD_OVERRIDE(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_ScreenSpaceOcclusion(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_ShadowsShadowMask(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_SoftShadows(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_SoftShadowsHigh(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_SoftShadowsLow(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_SoftShadowsMedium(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_USE_UNITY_CROSSFADE(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_WriteRenderingLayers(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF_XROcclusionMeshCombined(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__ADD_PRECOMPUTED_VELOCITY(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__ALPHAMODULATE_ON(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__ALPHAPREMULTIPLY_ON(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__ALPHATEST_ON(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__CLEARCOAT(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__CLEARCOATMAP(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__DEFERRED_FIRST_LIGHT(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__DEFERRED_MAIN_LIGHT(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__DEFERRED_MIXED_LIGHTING(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__DEFERRED_STENCIL(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__DETAIL_MULX2(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__DETAIL_SCALED(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__DIRECTIONAL(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__EMISSION(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__ENABLE_ALPHA_OUTPUT(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__GBUFFER_NORMALS_OCT(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__NORMALMAP(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__OUTPUT_DEPTH(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__POINT(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__RECEIVE_SHADOWS_OFF(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__SPOT(::UnityEngine::Rendering::GlobalKeyword value);

  static inline void setStaticF__SURFACE_TYPE_TRANSPARENT(::UnityEngine::Rendering::GlobalKeyword value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderGlobalKeywords();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderGlobalKeywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderGlobalKeywords(ShaderGlobalKeywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderGlobalKeywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderGlobalKeywords(ShaderGlobalKeywords const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13018 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShaderGlobalKeywords, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShaderGlobalKeywords);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShaderGlobalKeywords*, "UnityEngine.Rendering.Universal", "ShaderGlobalKeywords");
