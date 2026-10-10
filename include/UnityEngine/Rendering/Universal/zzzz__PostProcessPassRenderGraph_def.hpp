#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPassRenderGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomFilterMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessPassRenderGraph)
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct AntialiasingQuality;
}
namespace UnityEngine::Rendering::Universal {
class Bloom;
}
namespace UnityEngine::Rendering::Universal {
class ChromaticAberration;
}
namespace UnityEngine::Rendering::Universal {
class ColorAdjustments;
}
namespace UnityEngine::Rendering::Universal {
class ColorLookup;
}
namespace UnityEngine::Rendering::Universal {
class DepthOfField;
}
namespace UnityEngine::Rendering::Universal {
class FilmGrain;
}
namespace UnityEngine::Rendering::Universal {
class LensDistortion;
}
namespace UnityEngine::Rendering::Universal {
class MotionBlur;
}
namespace UnityEngine::Rendering::Universal {
class PaniniProjection;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessMaterialLibrary;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPassRenderGraph_BloomMaterialParams;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_BloomPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_Constants;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_DoFBokehPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_DoFGaussianPassData;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPassRenderGraph_FinalBlitSettings;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_LensFlarePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_LensFlareScreenSpacePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_MotionBlurPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PaniniProjectionPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PostFXSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PostProcessingFinalBlitPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PostProcessingFinalSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_SMAAPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_SMAASetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_StopNaNsPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_UberPostPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_UberSetupBloomPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_UpdateCameraResolutionPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph___c;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceLensFlare;
}
namespace UnityEngine::Rendering::Universal {
class Tonemapping;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalPostProcessingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering::Universal {
class Vignette;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_HDRDisplayInformation;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_Operation;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
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
class PostProcessPassRenderGraph;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_BloomPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_Constants;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_DoFBokehPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_DoFGaussianPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_LensFlarePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_LensFlareScreenSpacePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_MotionBlurPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PaniniProjectionPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PostFXSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PostProcessingFinalBlitPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_PostProcessingFinalSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_SMAAPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_SMAASetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_StopNaNsPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_UberPostPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_UberSetupBloomPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph_UpdateCameraResolutionPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph___c;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPassRenderGraph_BloomMaterialParams;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPassRenderGraph_FinalBlitSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_Constants*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*);
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams);
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/BloomPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_Constants*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/Constants");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/DoFBokehPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/DoFGaussianPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/LensFlarePassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*, "UnityEngine.Rendering.Universal",
                    "PostProcessPassRenderGraph/LensFlareScreenSpacePassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/MotionBlurPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*, "UnityEngine.Rendering.Universal",
                    "PostProcessPassRenderGraph/PaniniProjectionPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/PostFXSetupPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*, "UnityEngine.Rendering.Universal",
                    "PostProcessPassRenderGraph/PostProcessingFinalBlitPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*, "UnityEngine.Rendering.Universal",
                    "PostProcessPassRenderGraph/PostProcessingFinalFSRScalePassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*, "UnityEngine.Rendering.Universal",
                    "PostProcessPassRenderGraph/PostProcessingFinalSetupPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/SMAAPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/SMAASetupPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/ShaderConstants");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/StopNaNsPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/UberPostPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/UberSetupBloomPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*, "UnityEngine.Rendering.Universal",
                    "PostProcessPassRenderGraph/UpdateCameraResolutionPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/BloomMaterialParams");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings, "UnityEngine.Rendering.Universal", "PostProcessPassRenderGraph/FinalBlitSettings");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/ShaderConstants
class CORDL_TYPE PostProcessPassRenderGraph_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AreaTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AreaTexture, put = setStaticF__AreaTexture)) int32_t _AreaTexture;

  /// @brief Field _BlendTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlendTexture, put = setStaticF__BlendTexture)) int32_t _BlendTexture;

  /// @brief Field _Bloom_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Bloom_Params, put = setStaticF__Bloom_Params)) int32_t _Bloom_Params;

  /// @brief Field _Bloom_Texture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Bloom_Texture, put = setStaticF__Bloom_Texture)) int32_t _Bloom_Texture;

  /// @brief Field _BokehConstants, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BokehConstants, put = setStaticF__BokehConstants)) int32_t _BokehConstants;

  /// @brief Field _BokehKernel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BokehKernel, put = setStaticF__BokehKernel)) int32_t _BokehKernel;

  /// @brief Field _CameraDepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CameraDepthTextureID, put = setStaticF__CameraDepthTextureID)) int32_t _CameraDepthTextureID;

  /// @brief Field _Chroma_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Chroma_Params, put = setStaticF__Chroma_Params)) int32_t _Chroma_Params;

  /// @brief Field _CoCParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CoCParams, put = setStaticF__CoCParams)) int32_t _CoCParams;

  /// @brief Field _ColorTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ColorTexture, put = setStaticF__ColorTexture)) int32_t _ColorTexture;

  /// @brief Field _Distortion_Params1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Distortion_Params1, put = setStaticF__Distortion_Params1)) int32_t _Distortion_Params1;

  /// @brief Field _Distortion_Params2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Distortion_Params2, put = setStaticF__Distortion_Params2)) int32_t _Distortion_Params2;

  /// @brief Field _DofTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DofTexture, put = setStaticF__DofTexture)) int32_t _DofTexture;

  /// @brief Field _DownSampleScaleFactor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DownSampleScaleFactor, put = setStaticF__DownSampleScaleFactor)) int32_t _DownSampleScaleFactor;

  /// @brief Field _FullCoCTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FullCoCTexture, put = setStaticF__FullCoCTexture)) int32_t _FullCoCTexture;

  /// @brief Field _FullscreenProjMat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FullscreenProjMat, put = setStaticF__FullscreenProjMat)) int32_t _FullscreenProjMat;

  /// @brief Field _HalfCoCTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__HalfCoCTexture, put = setStaticF__HalfCoCTexture)) int32_t _HalfCoCTexture;

  /// @brief Field _InternalLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InternalLut, put = setStaticF__InternalLut)) int32_t _InternalLut;

  /// @brief Field _LensDirt_Intensity, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensDirt_Intensity, put = setStaticF__LensDirt_Intensity)) int32_t _LensDirt_Intensity;

  /// @brief Field _LensDirt_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensDirt_Params, put = setStaticF__LensDirt_Params)) int32_t _LensDirt_Params;

  /// @brief Field _LensDirt_Texture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensDirt_Texture, put = setStaticF__LensDirt_Texture)) int32_t _LensDirt_Texture;

  /// @brief Field _Lut_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Lut_Params, put = setStaticF__Lut_Params)) int32_t _Lut_Params;

  /// @brief Field _Metrics, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Metrics, put = setStaticF__Metrics)) int32_t _Metrics;

  /// @brief Field _Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Params, put = setStaticF__Params)) int32_t _Params;

  /// @brief Field _Params2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Params2, put = setStaticF__Params2)) int32_t _Params2;

  /// @brief Field _PrevViewProjM, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__PrevViewProjM, put = setStaticF__PrevViewProjM)) int32_t _PrevViewProjM;

  /// @brief Field _PrevViewProjMStereo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__PrevViewProjMStereo, put = setStaticF__PrevViewProjMStereo)) int32_t _PrevViewProjMStereo;

  /// @brief Field _SearchTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SearchTexture, put = setStaticF__SearchTexture)) int32_t _SearchTexture;

  /// @brief Field _SourceTexLowMip, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SourceTexLowMip, put = setStaticF__SourceTexLowMip)) int32_t _SourceTexLowMip;

  /// @brief Field _StencilMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StencilMask, put = setStaticF__StencilMask)) int32_t _StencilMask;

  /// @brief Field _StencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StencilRef, put = setStaticF__StencilRef)) int32_t _StencilRef;

  /// @brief Field _UserLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UserLut, put = setStaticF__UserLut)) int32_t _UserLut;

  /// @brief Field _UserLut_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UserLut_Params, put = setStaticF__UserLut_Params)) int32_t _UserLut_Params;

  /// @brief Field _ViewProjM, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ViewProjM, put = setStaticF__ViewProjM)) int32_t _ViewProjM;

  /// @brief Field _ViewProjMStereo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ViewProjMStereo, put = setStaticF__ViewProjMStereo)) int32_t _ViewProjMStereo;

  /// @brief Field _Vignette_Params1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_Params1, put = setStaticF__Vignette_Params1)) int32_t _Vignette_Params1;

  /// @brief Field _Vignette_Params2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_Params2, put = setStaticF__Vignette_Params2)) int32_t _Vignette_Params2;

  /// @brief Field _Vignette_ParamsXR, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_ParamsXR, put = setStaticF__Vignette_ParamsXR)) int32_t _Vignette_ParamsXR;

  static inline int32_t getStaticF__AreaTexture();

  static inline int32_t getStaticF__BlendTexture();

  static inline int32_t getStaticF__Bloom_Params();

  static inline int32_t getStaticF__Bloom_Texture();

  static inline int32_t getStaticF__BokehConstants();

  static inline int32_t getStaticF__BokehKernel();

  static inline int32_t getStaticF__CameraDepthTextureID();

  static inline int32_t getStaticF__Chroma_Params();

  static inline int32_t getStaticF__CoCParams();

  static inline int32_t getStaticF__ColorTexture();

  static inline int32_t getStaticF__Distortion_Params1();

  static inline int32_t getStaticF__Distortion_Params2();

  static inline int32_t getStaticF__DofTexture();

  static inline int32_t getStaticF__DownSampleScaleFactor();

  static inline int32_t getStaticF__FullCoCTexture();

  static inline int32_t getStaticF__FullscreenProjMat();

  static inline int32_t getStaticF__HalfCoCTexture();

  static inline int32_t getStaticF__InternalLut();

  static inline int32_t getStaticF__LensDirt_Intensity();

  static inline int32_t getStaticF__LensDirt_Params();

  static inline int32_t getStaticF__LensDirt_Texture();

  static inline int32_t getStaticF__Lut_Params();

  static inline int32_t getStaticF__Metrics();

  static inline int32_t getStaticF__Params();

  static inline int32_t getStaticF__Params2();

  static inline int32_t getStaticF__PrevViewProjM();

  static inline int32_t getStaticF__PrevViewProjMStereo();

  static inline int32_t getStaticF__SearchTexture();

  static inline int32_t getStaticF__SourceTexLowMip();

  static inline int32_t getStaticF__StencilMask();

  static inline int32_t getStaticF__StencilRef();

  static inline int32_t getStaticF__UserLut();

  static inline int32_t getStaticF__UserLut_Params();

  static inline int32_t getStaticF__ViewProjM();

  static inline int32_t getStaticF__ViewProjMStereo();

  static inline int32_t getStaticF__Vignette_Params1();

  static inline int32_t getStaticF__Vignette_Params2();

  static inline int32_t getStaticF__Vignette_ParamsXR();

  static inline void setStaticF__AreaTexture(int32_t value);

  static inline void setStaticF__BlendTexture(int32_t value);

  static inline void setStaticF__Bloom_Params(int32_t value);

  static inline void setStaticF__Bloom_Texture(int32_t value);

  static inline void setStaticF__BokehConstants(int32_t value);

  static inline void setStaticF__BokehKernel(int32_t value);

  static inline void setStaticF__CameraDepthTextureID(int32_t value);

  static inline void setStaticF__Chroma_Params(int32_t value);

  static inline void setStaticF__CoCParams(int32_t value);

  static inline void setStaticF__ColorTexture(int32_t value);

  static inline void setStaticF__Distortion_Params1(int32_t value);

  static inline void setStaticF__Distortion_Params2(int32_t value);

  static inline void setStaticF__DofTexture(int32_t value);

  static inline void setStaticF__DownSampleScaleFactor(int32_t value);

  static inline void setStaticF__FullCoCTexture(int32_t value);

  static inline void setStaticF__FullscreenProjMat(int32_t value);

  static inline void setStaticF__HalfCoCTexture(int32_t value);

  static inline void setStaticF__InternalLut(int32_t value);

  static inline void setStaticF__LensDirt_Intensity(int32_t value);

  static inline void setStaticF__LensDirt_Params(int32_t value);

  static inline void setStaticF__LensDirt_Texture(int32_t value);

  static inline void setStaticF__Lut_Params(int32_t value);

  static inline void setStaticF__Metrics(int32_t value);

  static inline void setStaticF__Params(int32_t value);

  static inline void setStaticF__Params2(int32_t value);

  static inline void setStaticF__PrevViewProjM(int32_t value);

  static inline void setStaticF__PrevViewProjMStereo(int32_t value);

  static inline void setStaticF__SearchTexture(int32_t value);

  static inline void setStaticF__SourceTexLowMip(int32_t value);

  static inline void setStaticF__StencilMask(int32_t value);

  static inline void setStaticF__StencilRef(int32_t value);

  static inline void setStaticF__UserLut(int32_t value);

  static inline void setStaticF__UserLut_Params(int32_t value);

  static inline void setStaticF__ViewProjM(int32_t value);

  static inline void setStaticF__ViewProjMStereo(int32_t value);

  static inline void setStaticF__Vignette_Params1(int32_t value);

  static inline void setStaticF__Vignette_Params2(int32_t value);

  static inline void setStaticF__Vignette_ParamsXR(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_ShaderConstants", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_ShaderConstants(PostProcessPassRenderGraph_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_ShaderConstants", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_ShaderConstants(PostProcessPassRenderGraph_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13084 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/Constants
class CORDL_TYPE PostProcessPassRenderGraph_Constants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_Constants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_Constants", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_Constants(PostProcessPassRenderGraph_Constants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_Constants", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_Constants(PostProcessPassRenderGraph_Constants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13085 };

  /// @brief Field k_BokehDoFPassBlur offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassBlur{ static_cast<int32_t>(0x2) };

  /// @brief Field k_BokehDoFPassComposite offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassComposite{ static_cast<int32_t>(0x4) };

  /// @brief Field k_BokehDoFPassComputeCoc offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassComputeCoc{ static_cast<int32_t>(0x0) };

  /// @brief Field k_BokehDoFPassDownscalePrefilter offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassDownscalePrefilter{ static_cast<int32_t>(0x1) };

  /// @brief Field k_BokehDoFPassPostFilter offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassPostFilter{ static_cast<int32_t>(0x3) };

  /// @brief Field k_GaussianDoFPassBlurH offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassBlurH{ static_cast<int32_t>(0x2) };

  /// @brief Field k_GaussianDoFPassBlurV offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassBlurV{ static_cast<int32_t>(0x3) };

  /// @brief Field k_GaussianDoFPassComposite offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassComposite{ static_cast<int32_t>(0x4) };

  /// @brief Field k_GaussianDoFPassComputeCoc offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassComputeCoc{ static_cast<int32_t>(0x0) };

  /// @brief Field k_GaussianDoFPassDownscalePrefilter offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassDownscalePrefilter{ static_cast<int32_t>(0x1) };

  /// @brief Field k_MaxPyramidSize offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxPyramidSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_Constants) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/UpdateCameraResolutionPassData
class CORDL_TYPE PostProcessPassRenderGraph_UpdateCameraResolutionPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field newCameraTargetSize, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_newCameraTargetSize, put = __cordl_internal_set_newCameraTargetSize)) ::UnityEngine::Vector2Int newCameraTargetSize;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData* New_ctor();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_newCameraTargetSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_newCameraTargetSize();

  constexpr void __cordl_internal_set_newCameraTargetSize(::UnityEngine::Vector2Int value);

  /// @brief Method .ctor, addr 0x6cd5b3c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_UpdateCameraResolutionPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_UpdateCameraResolutionPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_UpdateCameraResolutionPassData(PostProcessPassRenderGraph_UpdateCameraResolutionPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_UpdateCameraResolutionPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_UpdateCameraResolutionPassData(PostProcessPassRenderGraph_UpdateCameraResolutionPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13086 };

  /// @brief Field newCameraTargetSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___newCameraTargetSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData, ___newCameraTargetSize) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/StopNaNsPassData
class CORDL_TYPE PostProcessPassRenderGraph_StopNaNsPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field sourceTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field stopNaN, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stopNaN, put = __cordl_internal_set_stopNaN)) ::UnityW<::UnityEngine::Material> stopNaN;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stopNaN() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stopNaN();

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x6cd5b40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_StopNaNsPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_StopNaNsPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_StopNaNsPassData(PostProcessPassRenderGraph_StopNaNsPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_StopNaNsPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_StopNaNsPassData(PostProcessPassRenderGraph_StopNaNsPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13087 };

  /// @brief Field sourceTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field stopNaN, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stopNaN;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData, ___sourceTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData, ___stopNaN) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.AntialiasingQuality, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/SMAASetupPassData
class CORDL_TYPE PostProcessPassRenderGraph_SMAASetupPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field antialiasingQuality, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_antialiasingQuality, put = __cordl_internal_set_antialiasingQuality)) ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality;

  /// @brief Field areaTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_areaTexture, put = __cordl_internal_set_areaTexture)) ::UnityW<::UnityEngine::Texture2D> areaTexture;

  /// @brief Field material, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field metrics, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_metrics, put = __cordl_internal_set_metrics)) ::UnityEngine::Vector4 metrics;

  /// @brief Field searchTexture, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_searchTexture, put = __cordl_internal_set_searchTexture)) ::UnityW<::UnityEngine::Texture2D> searchTexture;

  /// @brief Field stencilMask, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilMask, put = __cordl_internal_set_stencilMask)) float_t stencilMask;

  /// @brief Field stencilRef, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilRef, put = __cordl_internal_set_stencilRef)) float_t stencilRef;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const& __cordl_internal_get_antialiasingQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& __cordl_internal_get_antialiasingQuality();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_areaTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_areaTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_metrics() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_metrics();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_searchTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_searchTexture();

  constexpr float_t const& __cordl_internal_get_stencilMask() const;

  constexpr float_t& __cordl_internal_get_stencilMask();

  constexpr float_t const& __cordl_internal_get_stencilRef() const;

  constexpr float_t& __cordl_internal_get_stencilRef();

  constexpr void __cordl_internal_set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value);

  constexpr void __cordl_internal_set_areaTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_metrics(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_searchTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_stencilMask(float_t value);

  constexpr void __cordl_internal_set_stencilRef(float_t value);

  /// @brief Method .ctor, addr 0x6cd5b44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_SMAASetupPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_SMAASetupPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_SMAASetupPassData(PostProcessPassRenderGraph_SMAASetupPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_SMAASetupPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_SMAASetupPassData(PostProcessPassRenderGraph_SMAASetupPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13088 };

  /// @brief Field metrics, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___metrics;

  /// @brief Field areaTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___areaTexture;

  /// @brief Field searchTexture, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___searchTexture;

  /// @brief Field stencilRef, offset: 0x30, size: 0x4, def value: None
  float_t ___stencilRef;

  /// @brief Field stencilMask, offset: 0x34, size: 0x4, def value: None
  float_t ___stencilMask;

  /// @brief Field antialiasingQuality, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::AntialiasingQuality ___antialiasingQuality;

  /// @brief Field material, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData, ___metrics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData, ___areaTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData, ___searchTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData, ___stencilRef) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData, ___stencilMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData, ___antialiasingQuality) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData, ___material) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData) == 0x48, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/SMAAPassData
class CORDL_TYPE PostProcessPassRenderGraph_SMAAPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field blendTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_blendTexture, put = __cordl_internal_set_blendTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle blendTexture;

  /// @brief Field material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field sourceTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_blendTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_blendTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_blendTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cd5b48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_SMAAPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_SMAAPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_SMAAPassData(PostProcessPassRenderGraph_SMAAPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_SMAAPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_SMAAPassData(PostProcessPassRenderGraph_SMAAPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13089 };

  /// @brief Field sourceTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field blendTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___blendTexture;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData, ___sourceTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData, ___blendTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData, ___material) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData) == 0x38, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/UberSetupBloomPassData
class CORDL_TYPE PostProcessPassRenderGraph_UberSetupBloomPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloomParams, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_bloomParams, put = __cordl_internal_set_bloomParams)) ::UnityEngine::Vector4 bloomParams;

  /// @brief Field bloomTexture, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_bloomTexture, put = __cordl_internal_set_bloomTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle bloomTexture;

  /// @brief Field dirtIntensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_dirtIntensity, put = __cordl_internal_set_dirtIntensity)) float_t dirtIntensity;

  /// @brief Field dirtScaleOffset, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_dirtScaleOffset, put = __cordl_internal_set_dirtScaleOffset)) ::UnityEngine::Vector4 dirtScaleOffset;

  /// @brief Field dirtTexture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dirtTexture, put = __cordl_internal_set_dirtTexture)) ::UnityW<::UnityEngine::Texture> dirtTexture;

  /// @brief Field highQualityFilteringValue, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_highQualityFilteringValue, put = __cordl_internal_set_highQualityFilteringValue)) bool highQualityFilteringValue;

  /// @brief Field uberMaterial, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_uberMaterial, put = __cordl_internal_set_uberMaterial)) ::UnityW<::UnityEngine::Material> uberMaterial;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData* New_ctor();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_bloomParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_bloomParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_bloomTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_bloomTexture();

  constexpr float_t const& __cordl_internal_get_dirtIntensity() const;

  constexpr float_t& __cordl_internal_get_dirtIntensity();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_dirtScaleOffset() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_dirtScaleOffset();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_dirtTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_dirtTexture();

  constexpr bool const& __cordl_internal_get_highQualityFilteringValue() const;

  constexpr bool& __cordl_internal_get_highQualityFilteringValue();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_uberMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_uberMaterial();

  constexpr void __cordl_internal_set_bloomParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_bloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_dirtIntensity(float_t value);

  constexpr void __cordl_internal_set_dirtScaleOffset(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_dirtTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_highQualityFilteringValue(bool value);

  constexpr void __cordl_internal_set_uberMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x6cd5b4c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_UberSetupBloomPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_UberSetupBloomPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_UberSetupBloomPassData(PostProcessPassRenderGraph_UberSetupBloomPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_UberSetupBloomPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_UberSetupBloomPassData(PostProcessPassRenderGraph_UberSetupBloomPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13090 };

  /// @brief Field bloomParams, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___bloomParams;

  /// @brief Field dirtScaleOffset, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___dirtScaleOffset;

  /// @brief Field dirtIntensity, offset: 0x30, size: 0x4, def value: None
  float_t ___dirtIntensity;

  /// @brief Field dirtTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___dirtTexture;

  /// @brief Field highQualityFilteringValue, offset: 0x40, size: 0x1, def value: None
  bool ___highQualityFilteringValue;

  /// @brief Field bloomTexture, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___bloomTexture;

  /// @brief Field uberMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___uberMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData, ___bloomParams) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData, ___dirtScaleOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData, ___dirtIntensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData, ___dirtTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData, ___highQualityFilteringValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData, ___bloomTexture) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData, ___uberMaterial) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Material, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/BloomPassData
class CORDL_TYPE PostProcessPassRenderGraph_BloomPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloomMipDown, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomMipDown, put = __cordl_internal_set_bloomMipDown)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> bloomMipDown;

  /// @brief Field bloomMipUp, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomMipUp, put = __cordl_internal_set_bloomMipUp)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> bloomMipUp;

  /// @brief Field material, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field mipCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mipCount, put = __cordl_internal_set_mipCount)) int32_t mipCount;

  /// @brief Field sourceTexture, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field upsampleMaterials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_upsampleMaterials, put = __cordl_internal_set_upsampleMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>> upsampleMaterials;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get_bloomMipDown() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get_bloomMipDown();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get_bloomMipUp() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get_bloomMipUp();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_mipCount() const;

  constexpr int32_t& __cordl_internal_get_mipCount();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_upsampleMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_upsampleMaterials();

  constexpr void __cordl_internal_set_bloomMipDown(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  constexpr void __cordl_internal_set_bloomMipUp(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_mipCount(int32_t value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_upsampleMaterials(::ArrayW<::UnityW<::UnityEngine::Material>> value);

  /// @brief Method .ctor, addr 0x6cd5b50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_BloomPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_BloomPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_BloomPassData(PostProcessPassRenderGraph_BloomPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_BloomPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_BloomPassData(PostProcessPassRenderGraph_BloomPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13091 };

  /// @brief Field mipCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___mipCount;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field upsampleMaterials, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>> ___upsampleMaterials;

  /// @brief Field sourceTexture, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field bloomMipUp, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ___bloomMipUp;

  /// @brief Field bloomMipDown, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ___bloomMipDown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData, ___mipCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData, ___material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData, ___upsampleMaterials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData, ___sourceTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData, ___bloomMipUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData, ___bloomMipDown) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData) == 0x48, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.BloomFilterMode, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/BloomMaterialParams
struct CORDL_TYPE PostProcessPassRenderGraph_BloomMaterialParams {
public:
  // Declarations
  /// @brief Method Equals, addr 0x6cd5b54, size 0xac, virtual false, abstract: false, final false
  inline bool Equals(::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams> other);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_BloomMaterialParams();

  // Ctor Parameters [CppParam { name: "parameters", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "parameters2", ty: "::UnityEngine::Vector4",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "bloomFilter", ty: "::UnityEngine::Rendering::Universal::BloomFilterMode", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "highQualityFiltering", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "enableAlphaOutput", ty: "bool", modifiers: "", def_value: None, comment:
  // None }]
  constexpr PostProcessPassRenderGraph_BloomMaterialParams(::UnityEngine::Vector4 parameters, ::UnityEngine::Vector4 parameters2, ::UnityEngine::Rendering::Universal::BloomFilterMode bloomFilter,
                                                           bool highQualityFiltering, bool enableAlphaOutput) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13092 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field parameters, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 parameters;

  /// @brief Field parameters2, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 parameters2;

  /// @brief Field bloomFilter, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::BloomFilterMode bloomFilter;

  /// @brief Field highQualityFiltering, offset: 0x24, size: 0x1, def value: None
  bool highQualityFiltering;

  /// @brief Field enableAlphaOutput, offset: 0x25, size: 0x1, def value: None
  bool enableAlphaOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams, parameters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams, parameters2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams, bloomFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams, highQualityFiltering) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams, enableAlphaOutput) == 0x25, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Rendering.Universal.RenderingData, UnityEngine.Vector3
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/DoFGaussianPassData
class CORDL_TYPE PostProcessPassRenderGraph_DoFGaussianPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cocParams, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_cocParams, put = __cordl_internal_set_cocParams)) ::UnityEngine::Vector3 cocParams;

  /// @brief Field depthTexture, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_depthTexture, put = __cordl_internal_set_depthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture;

  /// @brief Field destination, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field downsample, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_downsample, put = __cordl_internal_set_downsample)) int32_t downsample;

  /// @brief Field fullCoCTexture, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_fullCoCTexture, put = __cordl_internal_set_fullCoCTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle fullCoCTexture;

  /// @brief Field halfCoCTexture, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_halfCoCTexture, put = __cordl_internal_set_halfCoCTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle halfCoCTexture;

  /// @brief Field highQualitySamplingValue, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_highQualitySamplingValue, put = __cordl_internal_set_highQualitySamplingValue)) bool highQualitySamplingValue;

  /// @brief Field material, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialCoC, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_materialCoC, put = __cordl_internal_set_materialCoC)) ::UnityW<::UnityEngine::Material> materialCoC;

  /// @brief Field multipleRenderTargets, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_multipleRenderTargets, put = __cordl_internal_set_multipleRenderTargets)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>
      multipleRenderTargets;

  /// @brief Field pingTexture, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_pingTexture, put = __cordl_internal_set_pingTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle pingTexture;

  /// @brief Field pongTexture, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get_pongTexture, put = __cordl_internal_set_pongTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle pongTexture;

  /// @brief Field renderingData, offset 0x18, size 0x28
  __declspec(property(get = __cordl_internal_get_renderingData, put = __cordl_internal_set_renderingData)) ::UnityEngine::Rendering::Universal::RenderingData renderingData;

  /// @brief Field sourceTexture, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cocParams() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_cocParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr int32_t const& __cordl_internal_get_downsample() const;

  constexpr int32_t& __cordl_internal_get_downsample();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_fullCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_fullCoCTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_halfCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_halfCoCTexture();

  constexpr bool const& __cordl_internal_get_highQualitySamplingValue() const;

  constexpr bool& __cordl_internal_get_highQualitySamplingValue();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_materialCoC() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_materialCoC();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& __cordl_internal_get_multipleRenderTargets() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& __cordl_internal_get_multipleRenderTargets();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_pingTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_pingTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_pongTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_pongTexture();

  constexpr ::UnityEngine::Rendering::Universal::RenderingData const& __cordl_internal_get_renderingData() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingData& __cordl_internal_get_renderingData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_cocParams(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_depthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_downsample(int32_t value);

  constexpr void __cordl_internal_set_fullCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_halfCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_highQualitySamplingValue(bool value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_materialCoC(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_multipleRenderTargets(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> value);

  constexpr void __cordl_internal_set_pingTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_pongTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::RenderingData value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cd5c00, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_DoFGaussianPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_DoFGaussianPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_DoFGaussianPassData(PostProcessPassRenderGraph_DoFGaussianPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_DoFGaussianPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_DoFGaussianPassData(PostProcessPassRenderGraph_DoFGaussianPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13093 };

  /// @brief Field downsample, offset: 0x10, size: 0x4, def value: None
  int32_t ___downsample;

  /// @brief Field renderingData, offset: 0x18, size: 0x28, def value: None
  ::UnityEngine::Rendering::Universal::RenderingData ___renderingData;

  /// @brief Field cocParams, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___cocParams;

  /// @brief Field highQualitySamplingValue, offset: 0x4c, size: 0x1, def value: None
  bool ___highQualitySamplingValue;

  /// @brief Field sourceTexture, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field depthTexture, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthTexture;

  /// @brief Field material, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field materialCoC, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___materialCoC;

  /// @brief Field halfCoCTexture, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___halfCoCTexture;

  /// @brief Field fullCoCTexture, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___fullCoCTexture;

  /// @brief Field pingTexture, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___pingTexture;

  /// @brief Field pongTexture, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___pongTexture;

  /// @brief Field multipleRenderTargets, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> ___multipleRenderTargets;

  /// @brief Field destination, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___downsample) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___renderingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___cocParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___highQualitySamplingValue) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___sourceTexture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___depthTexture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___material) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___materialCoC) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___halfCoCTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___fullCoCTexture) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___pingTexture) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___pongTexture) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___multipleRenderTargets) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData, ___destination) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData) == 0xd8, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/DoFBokehPassData
class CORDL_TYPE PostProcessPassRenderGraph_DoFBokehPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bokehKernel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehKernel, put = __cordl_internal_set_bokehKernel)) ::ArrayW<::UnityEngine::Vector4> bokehKernel;

  /// @brief Field cocParams, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_cocParams, put = __cordl_internal_set_cocParams)) ::UnityEngine::Vector4 cocParams;

  /// @brief Field depthTexture, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_depthTexture, put = __cordl_internal_set_depthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture;

  /// @brief Field destination, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field downSample, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_downSample, put = __cordl_internal_set_downSample)) int32_t downSample;

  /// @brief Field fullCoCTexture, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_fullCoCTexture, put = __cordl_internal_set_fullCoCTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle fullCoCTexture;

  /// @brief Field halfCoCTexture, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_halfCoCTexture, put = __cordl_internal_set_halfCoCTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle halfCoCTexture;

  /// @brief Field material, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialCoC, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_materialCoC, put = __cordl_internal_set_materialCoC)) ::UnityW<::UnityEngine::Material> materialCoC;

  /// @brief Field pingTexture, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get_pingTexture, put = __cordl_internal_set_pingTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle pingTexture;

  /// @brief Field pongTexture, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get_pongTexture, put = __cordl_internal_set_pongTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle pongTexture;

  /// @brief Field sourceTexture, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field useFastSRGBLinearConversion, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_useFastSRGBLinearConversion, put = __cordl_internal_set_useFastSRGBLinearConversion)) bool useFastSRGBLinearConversion;

  /// @brief Field uvMargin, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_uvMargin, put = __cordl_internal_set_uvMargin)) float_t uvMargin;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_bokehKernel() const;

  constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_bokehKernel();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_cocParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_cocParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr int32_t const& __cordl_internal_get_downSample() const;

  constexpr int32_t& __cordl_internal_get_downSample();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_fullCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_fullCoCTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_halfCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_halfCoCTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_materialCoC() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_materialCoC();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_pingTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_pingTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_pongTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_pongTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr bool const& __cordl_internal_get_useFastSRGBLinearConversion() const;

  constexpr bool& __cordl_internal_get_useFastSRGBLinearConversion();

  constexpr float_t const& __cordl_internal_get_uvMargin() const;

  constexpr float_t& __cordl_internal_get_uvMargin();

  constexpr void __cordl_internal_set_bokehKernel(::ArrayW<::UnityEngine::Vector4> value);

  constexpr void __cordl_internal_set_cocParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_depthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_downSample(int32_t value);

  constexpr void __cordl_internal_set_fullCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_halfCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_materialCoC(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_pingTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_pongTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_useFastSRGBLinearConversion(bool value);

  constexpr void __cordl_internal_set_uvMargin(float_t value);

  /// @brief Method .ctor, addr 0x6cd5c54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_DoFBokehPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_DoFBokehPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_DoFBokehPassData(PostProcessPassRenderGraph_DoFBokehPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_DoFBokehPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_DoFBokehPassData(PostProcessPassRenderGraph_DoFBokehPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13094 };

  /// @brief Field bokehKernel, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4> ___bokehKernel;

  /// @brief Field downSample, offset: 0x18, size: 0x4, def value: None
  int32_t ___downSample;

  /// @brief Field uvMargin, offset: 0x1c, size: 0x4, def value: None
  float_t ___uvMargin;

  /// @brief Field cocParams, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___cocParams;

  /// @brief Field useFastSRGBLinearConversion, offset: 0x30, size: 0x1, def value: None
  bool ___useFastSRGBLinearConversion;

  /// @brief Field sourceTexture, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field depthTexture, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthTexture;

  /// @brief Field material, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field materialCoC, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___materialCoC;

  /// @brief Field halfCoCTexture, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___halfCoCTexture;

  /// @brief Field fullCoCTexture, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___fullCoCTexture;

  /// @brief Field pingTexture, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___pingTexture;

  /// @brief Field pongTexture, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___pongTexture;

  /// @brief Field destination, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___bokehKernel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___downSample) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___uvMargin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___cocParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___useFastSRGBLinearConversion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___sourceTexture) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___depthTexture) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___material) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___materialCoC) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___halfCoCTexture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___fullCoCTexture) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___pingTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___pongTexture) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData, ___destination) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData) == 0xb8, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/PaniniProjectionPassData
class CORDL_TYPE PostProcessPassRenderGraph_PaniniProjectionPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field isPaniniGeneric, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isPaniniGeneric, put = __cordl_internal_set_isPaniniGeneric)) bool isPaniniGeneric;

  /// @brief Field material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field paniniParams, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_paniniParams, put = __cordl_internal_set_paniniParams)) ::UnityEngine::Vector4 paniniParams;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr bool const& __cordl_internal_get_isPaniniGeneric() const;

  constexpr bool& __cordl_internal_get_isPaniniGeneric();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_paniniParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_paniniParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_isPaniniGeneric(bool value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_paniniParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cd5c58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_PaniniProjectionPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PaniniProjectionPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_PaniniProjectionPassData(PostProcessPassRenderGraph_PaniniProjectionPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PaniniProjectionPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_PaniniProjectionPassData(PostProcessPassRenderGraph_PaniniProjectionPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13095 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field paniniParams, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___paniniParams;

  /// @brief Field isPaniniGeneric, offset: 0x48, size: 0x1, def value: None
  bool ___isPaniniGeneric;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData, ___paniniParams) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData, ___isPaniniGeneric) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData) == 0x50, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/MotionBlurPassData
class CORDL_TYPE PostProcessPassRenderGraph_MotionBlurPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field camera, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field clamp, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_clamp, put = __cordl_internal_set_clamp)) float_t clamp;

  /// @brief Field enableAlphaOutput, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_enableAlphaOutput, put = __cordl_internal_set_enableAlphaOutput)) bool enableAlphaOutput;

  /// @brief Field intensity, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  /// @brief Field material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field motionVectors, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_motionVectors, put = __cordl_internal_set_motionVectors)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectors;

  /// @brief Field passIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndex, put = __cordl_internal_set_passIndex)) int32_t passIndex;

  /// @brief Field sourceTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field xr, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr float_t const& __cordl_internal_get_clamp() const;

  constexpr float_t& __cordl_internal_get_clamp();

  constexpr bool const& __cordl_internal_get_enableAlphaOutput() const;

  constexpr bool& __cordl_internal_get_enableAlphaOutput();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_motionVectors() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_motionVectors();

  constexpr int32_t const& __cordl_internal_get_passIndex() const;

  constexpr int32_t& __cordl_internal_get_passIndex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_clamp(float_t value);

  constexpr void __cordl_internal_set_enableAlphaOutput(bool value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_motionVectors(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_passIndex(int32_t value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x6cd5c5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_MotionBlurPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_MotionBlurPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_MotionBlurPassData(PostProcessPassRenderGraph_MotionBlurPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_MotionBlurPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_MotionBlurPassData(PostProcessPassRenderGraph_MotionBlurPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13096 };

  /// @brief Field sourceTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field motionVectors, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___motionVectors;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field passIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___passIndex;

  /// @brief Field camera, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field xr, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  /// @brief Field intensity, offset: 0x50, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field clamp, offset: 0x54, size: 0x4, def value: None
  float_t ___clamp;

  /// @brief Field enableAlphaOutput, offset: 0x58, size: 0x1, def value: None
  bool ___enableAlphaOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___sourceTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___motionVectors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___passIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___camera) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___xr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___intensity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___clamp) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData, ___enableAlphaOutput) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rect, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/LensFlarePassData
class CORDL_TYPE PostProcessPassRenderGraph_LensFlarePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field height, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) float_t height;

  /// @brief Field material, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field paniniCropToFit, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_paniniCropToFit, put = __cordl_internal_set_paniniCropToFit)) float_t paniniCropToFit;

  /// @brief Field paniniDistance, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_paniniDistance, put = __cordl_internal_set_paniniDistance)) float_t paniniDistance;

  /// @brief Field usePanini, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_usePanini, put = __cordl_internal_set_usePanini)) bool usePanini;

  /// @brief Field viewport, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_viewport, put = __cordl_internal_set_viewport)) ::UnityEngine::Rect viewport;

  /// @brief Field width, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) float_t width;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr float_t const& __cordl_internal_get_height() const;

  constexpr float_t& __cordl_internal_get_height();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr float_t const& __cordl_internal_get_paniniCropToFit() const;

  constexpr float_t& __cordl_internal_get_paniniCropToFit();

  constexpr float_t const& __cordl_internal_get_paniniDistance() const;

  constexpr float_t& __cordl_internal_get_paniniDistance();

  constexpr bool const& __cordl_internal_get_usePanini() const;

  constexpr bool& __cordl_internal_get_usePanini();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_viewport() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_viewport();

  constexpr float_t const& __cordl_internal_get_width() const;

  constexpr float_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_height(float_t value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_paniniCropToFit(float_t value);

  constexpr void __cordl_internal_set_paniniDistance(float_t value);

  constexpr void __cordl_internal_set_usePanini(bool value);

  constexpr void __cordl_internal_set_viewport(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_width(float_t value);

  /// @brief Method .ctor, addr 0x6cd5c60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_LensFlarePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_LensFlarePassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_LensFlarePassData(PostProcessPassRenderGraph_LensFlarePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_LensFlarePassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_LensFlarePassData(PostProcessPassRenderGraph_LensFlarePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13097 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field cameraData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field viewport, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rect ___viewport;

  /// @brief Field paniniDistance, offset: 0x40, size: 0x4, def value: None
  float_t ___paniniDistance;

  /// @brief Field paniniCropToFit, offset: 0x44, size: 0x4, def value: None
  float_t ___paniniCropToFit;

  /// @brief Field width, offset: 0x48, size: 0x4, def value: None
  float_t ___width;

  /// @brief Field height, offset: 0x4c, size: 0x4, def value: None
  float_t ___height;

  /// @brief Field usePanini, offset: 0x50, size: 0x1, def value: None
  bool ___usePanini;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___cameraData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___viewport) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___paniniDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___paniniCropToFit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___width) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___height) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData, ___usePanini) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData) == 0x58, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/LensFlareScreenSpacePassData
class CORDL_TYPE PostProcessPassRenderGraph_LensFlareScreenSpacePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field actualHeight, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_actualHeight, put = __cordl_internal_set_actualHeight)) int32_t actualHeight;

  /// @brief Field actualWidth, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_actualWidth, put = __cordl_internal_set_actualWidth)) int32_t actualWidth;

  /// @brief Field camera, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field downsample, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_downsample, put = __cordl_internal_set_downsample)) int32_t downsample;

  /// @brief Field lensFlareScreenSpace, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareScreenSpace, put = __cordl_internal_set_lensFlareScreenSpace)) ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>
      lensFlareScreenSpace;

  /// @brief Field material, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field originalBloomTexture, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_originalBloomTexture,
                      put = __cordl_internal_set_originalBloomTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle originalBloomTexture;

  /// @brief Field result, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle result;

  /// @brief Field screenSpaceLensFlareBloomMipTexture, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_screenSpaceLensFlareBloomMipTexture,
                      put = __cordl_internal_set_screenSpaceLensFlareBloomMipTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle screenSpaceLensFlareBloomMipTexture;

  /// @brief Field streakTmpTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_streakTmpTexture, put = __cordl_internal_set_streakTmpTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle streakTmpTexture;

  /// @brief Field streakTmpTexture2, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_streakTmpTexture2, put = __cordl_internal_set_streakTmpTexture2)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle streakTmpTexture2;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_actualHeight() const;

  constexpr int32_t& __cordl_internal_get_actualHeight();

  constexpr int32_t const& __cordl_internal_get_actualWidth() const;

  constexpr int32_t& __cordl_internal_get_actualWidth();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr int32_t const& __cordl_internal_get_downsample() const;

  constexpr int32_t& __cordl_internal_get_downsample();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> const& __cordl_internal_get_lensFlareScreenSpace() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>& __cordl_internal_get_lensFlareScreenSpace();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_originalBloomTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_originalBloomTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_result() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_result();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_screenSpaceLensFlareBloomMipTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_screenSpaceLensFlareBloomMipTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_streakTmpTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_streakTmpTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_streakTmpTexture2() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_streakTmpTexture2();

  constexpr void __cordl_internal_set_actualHeight(int32_t value);

  constexpr void __cordl_internal_set_actualWidth(int32_t value);

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_downsample(int32_t value);

  constexpr void __cordl_internal_set_lensFlareScreenSpace(::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_originalBloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_result(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_screenSpaceLensFlareBloomMipTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_streakTmpTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_streakTmpTexture2(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cd5c64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_LensFlareScreenSpacePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_LensFlareScreenSpacePassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_LensFlareScreenSpacePassData(PostProcessPassRenderGraph_LensFlareScreenSpacePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_LensFlareScreenSpacePassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_LensFlareScreenSpacePassData(PostProcessPassRenderGraph_LensFlareScreenSpacePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13098 };

  /// @brief Field streakTmpTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___streakTmpTexture;

  /// @brief Field streakTmpTexture2, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___streakTmpTexture2;

  /// @brief Field originalBloomTexture, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___originalBloomTexture;

  /// @brief Field screenSpaceLensFlareBloomMipTexture, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___screenSpaceLensFlareBloomMipTexture;

  /// @brief Field result, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___result;

  /// @brief Field actualWidth, offset: 0x60, size: 0x4, def value: None
  int32_t ___actualWidth;

  /// @brief Field actualHeight, offset: 0x64, size: 0x4, def value: None
  int32_t ___actualHeight;

  /// @brief Field camera, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field material, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field lensFlareScreenSpace, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> ___lensFlareScreenSpace;

  /// @brief Field downsample, offset: 0x80, size: 0x4, def value: None
  int32_t ___downsample;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___streakTmpTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___streakTmpTexture2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___originalBloomTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___screenSpaceLensFlareBloomMipTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___result) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___actualWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___actualHeight) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___camera) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___material) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___lensFlareScreenSpace) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData, ___downsample) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData) == 0x88, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/PostProcessingFinalSetupPassData
class CORDL_TYPE PostProcessPassRenderGraph_PostProcessingFinalSetupPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field isActiveTargetBackBuffer, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveTargetBackBuffer, put = __cordl_internal_set_isActiveTargetBackBuffer)) bool isActiveTargetBackBuffer;

  /// @brief Field material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr bool const& __cordl_internal_get_isActiveTargetBackBuffer() const;

  constexpr bool& __cordl_internal_get_isActiveTargetBackBuffer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_isActiveTargetBackBuffer(bool value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cd5c68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_PostProcessingFinalSetupPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PostProcessingFinalSetupPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_PostProcessingFinalSetupPassData(PostProcessPassRenderGraph_PostProcessingFinalSetupPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PostProcessingFinalSetupPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_PostProcessingFinalSetupPassData(PostProcessPassRenderGraph_PostProcessingFinalSetupPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13099 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field cameraData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field isActiveTargetBackBuffer, offset: 0x40, size: 0x1, def value: None
  bool ___isActiveTargetBackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData, ___cameraData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData, ___isActiveTargetBackBuffer) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData) == 0x48, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector2
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/PostProcessingFinalFSRScalePassData
class CORDL_TYPE PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field enableAlphaOutput, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_enableAlphaOutput, put = __cordl_internal_set_enableAlphaOutput)) bool enableAlphaOutput;

  /// @brief Field fsrInputSize, offset 0x2c, size 0x8
  __declspec(property(get = __cordl_internal_get_fsrInputSize, put = __cordl_internal_set_fsrInputSize)) ::UnityEngine::Vector2 fsrInputSize;

  /// @brief Field fsrOutputSize, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get_fsrOutputSize, put = __cordl_internal_set_fsrOutputSize)) ::UnityEngine::Vector2 fsrOutputSize;

  /// @brief Field material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field sourceTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData* New_ctor();

  constexpr bool const& __cordl_internal_get_enableAlphaOutput() const;

  constexpr bool& __cordl_internal_get_enableAlphaOutput();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_fsrInputSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_fsrInputSize();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_fsrOutputSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_fsrOutputSize();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_enableAlphaOutput(bool value);

  constexpr void __cordl_internal_set_fsrInputSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_fsrOutputSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cd5c6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData(PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData(PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13100 };

  /// @brief Field sourceTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field enableAlphaOutput, offset: 0x28, size: 0x1, def value: None
  bool ___enableAlphaOutput;

  /// @brief Field fsrInputSize, offset: 0x2c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___fsrInputSize;

  /// @brief Field fsrOutputSize, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___fsrOutputSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData, ___sourceTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData, ___material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData, ___enableAlphaOutput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData, ___fsrInputSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData, ___fsrOutputSize) == 0x34, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData) == 0x40, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.HDROutputUtils::Operation
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/FinalBlitSettings
struct CORDL_TYPE PostProcessPassRenderGraph_FinalBlitSettings {
public:
  // Declarations
  /// @brief Method Create, addr 0x6cd5c74, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings Create();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_FinalBlitSettings();

  // Ctor Parameters [CppParam { name: "isFxaaEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isFsrEnabled", ty: "bool", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "isTaaSharpeningEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requireHDROutput", ty: "bool", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "isAlphaOutputEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hdrOperations", ty:
  // "::UnityEngine::Rendering::HDROutputUtils_Operation", modifiers: "", def_value: None, comment: None }]
  constexpr PostProcessPassRenderGraph_FinalBlitSettings(bool isFxaaEnabled, bool isFsrEnabled, bool isTaaSharpeningEnabled, bool requireHDROutput, bool isAlphaOutputEnabled,
                                                         ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13102 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field isFxaaEnabled, offset: 0x0, size: 0x1, def value: None
  bool isFxaaEnabled;

  /// @brief Field isFsrEnabled, offset: 0x1, size: 0x1, def value: None
  bool isFsrEnabled;

  /// @brief Field isTaaSharpeningEnabled, offset: 0x2, size: 0x1, def value: None
  bool isTaaSharpeningEnabled;

  /// @brief Field requireHDROutput, offset: 0x3, size: 0x1, def value: None
  bool requireHDROutput;

  /// @brief Field isAlphaOutputEnabled, offset: 0x4, size: 0x1, def value: None
  bool isAlphaOutputEnabled;

  /// @brief Field hdrOperations, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings, isFxaaEnabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings, isFsrEnabled) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings, isTaaSharpeningEnabled) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings, requireHDROutput) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings, isAlphaOutputEnabled) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings, hdrOperations) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings) == 0xc, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.PostProcessPassRenderGraph::FinalBlitSettings
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/PostProcessingFinalBlitPassData
class CORDL_TYPE PostProcessPassRenderGraph_PostProcessingFinalBlitPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field settings, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings settings;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings& __cordl_internal_get_settings();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cd5c70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_PostProcessingFinalBlitPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PostProcessingFinalBlitPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_PostProcessingFinalBlitPassData(PostProcessPassRenderGraph_PostProcessingFinalBlitPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PostProcessingFinalBlitPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_PostProcessingFinalBlitPassData(PostProcessPassRenderGraph_PostProcessingFinalBlitPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13101 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field cameraData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field settings, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings ___settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData, ___cameraData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData, ___settings) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData) == 0x50, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.TonemappingMode, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/UberPostPassData
class CORDL_TYPE PostProcessPassRenderGraph_UberPostPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloomTexture, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_bloomTexture, put = __cordl_internal_set_bloomTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle bloomTexture;

  /// @brief Field cameraData, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field enableAlphaOutput, offset 0x96, size 0x1
  __declspec(property(get = __cordl_internal_get_enableAlphaOutput, put = __cordl_internal_set_enableAlphaOutput)) bool enableAlphaOutput;

  /// @brief Field isActiveTargetBackBuffer, offset 0x97, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveTargetBackBuffer, put = __cordl_internal_set_isActiveTargetBackBuffer)) bool isActiveTargetBackBuffer;

  /// @brief Field isBackbuffer, offset 0x95, size 0x1
  __declspec(property(get = __cordl_internal_get_isBackbuffer, put = __cordl_internal_set_isBackbuffer)) bool isBackbuffer;

  /// @brief Field isHdrGrading, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get_isHdrGrading, put = __cordl_internal_set_isHdrGrading)) bool isHdrGrading;

  /// @brief Field lutParams, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_lutParams, put = __cordl_internal_set_lutParams)) ::UnityEngine::Vector4 lutParams;

  /// @brief Field lutTexture, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_lutTexture, put = __cordl_internal_set_lutTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle lutTexture;

  /// @brief Field material, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field toneMappingMode, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_toneMappingMode, put = __cordl_internal_set_toneMappingMode)) ::UnityEngine::Rendering::Universal::TonemappingMode toneMappingMode;

  /// @brief Field userLutParams, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_userLutParams, put = __cordl_internal_set_userLutParams)) ::UnityEngine::Vector4 userLutParams;

  /// @brief Field userLutTexture, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_userLutTexture, put = __cordl_internal_set_userLutTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle userLutTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_bloomTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_bloomTexture();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr bool const& __cordl_internal_get_enableAlphaOutput() const;

  constexpr bool& __cordl_internal_get_enableAlphaOutput();

  constexpr bool const& __cordl_internal_get_isActiveTargetBackBuffer() const;

  constexpr bool& __cordl_internal_get_isActiveTargetBackBuffer();

  constexpr bool const& __cordl_internal_get_isBackbuffer() const;

  constexpr bool& __cordl_internal_get_isBackbuffer();

  constexpr bool const& __cordl_internal_get_isHdrGrading() const;

  constexpr bool& __cordl_internal_get_isHdrGrading();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_lutParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_lutParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_lutTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_lutTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::UnityEngine::Rendering::Universal::TonemappingMode const& __cordl_internal_get_toneMappingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::TonemappingMode& __cordl_internal_get_toneMappingMode();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_userLutParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_userLutParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_userLutTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_userLutTexture();

  constexpr void __cordl_internal_set_bloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_enableAlphaOutput(bool value);

  constexpr void __cordl_internal_set_isActiveTargetBackBuffer(bool value);

  constexpr void __cordl_internal_set_isBackbuffer(bool value);

  constexpr void __cordl_internal_set_isHdrGrading(bool value);

  constexpr void __cordl_internal_set_lutParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_lutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_toneMappingMode(::UnityEngine::Rendering::Universal::TonemappingMode value);

  constexpr void __cordl_internal_set_userLutParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_userLutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cd5c80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_UberPostPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_UberPostPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_UberPostPassData(PostProcessPassRenderGraph_UberPostPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_UberPostPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_UberPostPassData(PostProcessPassRenderGraph_UberPostPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13103 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field lutTexture, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___lutTexture;

  /// @brief Field bloomTexture, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___bloomTexture;

  /// @brief Field lutParams, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___lutParams;

  /// @brief Field userLutTexture, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___userLutTexture;

  /// @brief Field userLutParams, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___userLutParams;

  /// @brief Field material, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field cameraData, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field toneMappingMode, offset: 0x90, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::TonemappingMode ___toneMappingMode;

  /// @brief Field isHdrGrading, offset: 0x94, size: 0x1, def value: None
  bool ___isHdrGrading;

  /// @brief Field isBackbuffer, offset: 0x95, size: 0x1, def value: None
  bool ___isBackbuffer;

  /// @brief Field enableAlphaOutput, offset: 0x96, size: 0x1, def value: None
  bool ___enableAlphaOutput;

  /// @brief Field isActiveTargetBackBuffer, offset: 0x97, size: 0x1, def value: None
  bool ___isActiveTargetBackBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___lutTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___bloomTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___lutParams) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___userLutTexture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___userLutParams) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___material) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___cameraData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___toneMappingMode) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___isHdrGrading) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___isBackbuffer) == 0x95, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___enableAlphaOutput) == 0x96, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData, ___isActiveTargetBackBuffer) == 0x97, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData) == 0x98, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/PostFXSetupPassData
class CORDL_TYPE PostProcessPassRenderGraph_PostFXSetupPassData : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData* New_ctor();

  /// @brief Method .ctor, addr 0x6cd5c84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph_PostFXSetupPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PostFXSetupPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph_PostFXSetupPassData(PostProcessPassRenderGraph_PostFXSetupPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph_PostFXSetupPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph_PostFXSetupPassData(PostProcessPassRenderGraph_PostFXSetupPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13104 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph/<>c
class CORDL_TYPE PostProcessPassRenderGraph___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c* __9;

  /// @brief Field <>9__100_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__100_0, put = setStaticF___9__100_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__100_0;

  /// @brief Field <>9__104_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__104_0,
                      put = setStaticF___9__104_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__104_0;

  /// @brief Field <>9__106_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__106_0,
                      put = setStaticF___9__106_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__106_0;

  /// @brief Field <>9__45_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__45_0, put = setStaticF___9__45_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__45_0;

  /// @brief Field <>9__53_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__53_0,
                      put = setStaticF___9__53_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__53_0;

  /// @brief Field <>9__56_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__56_0,
                      put = setStaticF___9__56_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__56_0;

  /// @brief Field <>9__56_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__56_1,
                      put = setStaticF___9__56_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__56_1;

  /// @brief Field <>9__56_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__56_2,
                      put = setStaticF___9__56_2)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__56_2;

  /// @brief Field <>9__56_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__56_3,
                      put = setStaticF___9__56_3)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__56_3;

  /// @brief Field <>9__64_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__64_0,
                      put = setStaticF___9__64_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__64_0;

  /// @brief Field <>9__65_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__65_0,
                      put = setStaticF___9__65_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__65_0;

  /// @brief Field <>9__66_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__66_0,
                      put = setStaticF___9__66_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__66_0;

  /// @brief Field <>9__69_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__69_0,
                      put = setStaticF___9__69_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__69_0;

  /// @brief Field <>9__73_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__73_0,
                      put = setStaticF___9__73_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__73_0;

  /// @brief Field <>9__75_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__75_0, put = setStaticF___9__75_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__75_0;

  /// @brief Field <>9__83_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__83_0,
                      put = setStaticF___9__83_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__83_0;

  /// @brief Field <>9__86_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__86_0,
                      put = setStaticF___9__86_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__86_0;

  /// @brief Field <>9__87_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__87_0,
                      put = setStaticF___9__87_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__87_0;

  /// @brief Field <>9__87_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__87_1,
                      put = setStaticF___9__87_1)) ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* __9__87_1;

  /// @brief Field <>9__87_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__87_2,
                      put = setStaticF___9__87_2)) ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* __9__87_2;

  /// @brief Field <>9__90_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__90_0, put = setStaticF___9__90_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__90_0;

  /// @brief Field <>9__95_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__95_0, put = setStaticF___9__95_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__95_0;

  /// @brief Field <>9__97_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__97_0, put = setStaticF___9__97_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__97_0;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c* New_ctor();

  /// @brief Method <BloomDual>b__66_0, addr 0x6cd6da0, size 0x458, virtual false, abstract: false, final false
  inline void _BloomDual_b__66_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <BloomGaussian>b__64_0, addr 0x6cd64c0, size 0x5c8, virtual false, abstract: false, final false
  inline void _BloomGaussian_b__64_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <BloomKawase>b__65_0, addr 0x6cd6a88, size 0x318, virtual false, abstract: false, final false
  inline void _BloomKawase_b__65_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <LensFlareDataDrivenComputeOcclusion>b__86_0, addr 0x6cd8628, size 0x68c, virtual false, abstract: false, final false
  inline void _LensFlareDataDrivenComputeOcclusion_b__86_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData* data,
                                                           ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx);

  /// @brief Method <RenderDoFBokeh>b__73_0, addr 0x6cd7b30, size 0x644, virtual false, abstract: false, final false
  inline void _RenderDoFBokeh_b__73_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderDoFGaussian>b__69_0, addr 0x6cd71f8, size 0x884, virtual false, abstract: false, final false
  inline void _RenderDoFGaussian_b__69_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData* data,
                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderFinalBlit>b__100_0, addr 0x6cd9b40, size 0x514, virtual false, abstract: false, final false
  inline void _RenderFinalBlit_b__100_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData* data,
                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderFinalFSRScale>b__97_0, addr 0x6cd9970, size 0x1d0, virtual false, abstract: false, final false
  inline void _RenderFinalFSRScale_b__97_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData* data,
                                           ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderFinalSetup>b__95_0, addr 0x6cd98bc, size 0xb4, virtual false, abstract: false, final false
  inline void _RenderFinalSetup_b__95_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData* data,
                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderLensFlareDataDriven>b__87_0, addr 0x6cd8cb4, size 0x7d8, virtual false, abstract: false, final false
  inline void _RenderLensFlareDataDriven_b__87_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData* data,
                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx);

  /// @brief Method <RenderLensFlareDataDriven>b__87_1, addr 0x6cd948c, size 0x10, virtual false, abstract: false, final false
  inline float_t _RenderLensFlareDataDriven_b__87_1(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method <RenderLensFlareDataDriven>b__87_2, addr 0x6cd949c, size 0x10, virtual false, abstract: false, final false
  inline float_t _RenderLensFlareDataDriven_b__87_2(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method <RenderLensFlareScreenSpace>b__90_0, addr 0x6cd94ac, size 0x410, virtual false, abstract: false, final false
  inline void _RenderLensFlareScreenSpace_b__90_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData* data,
                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderMotionBlur>b__83_0, addr 0x6cd8370, size 0x254, virtual false, abstract: false, final false
  inline void _RenderMotionBlur_b__83_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData* data,
                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderPaniniProjection>b__75_0, addr 0x6cd8174, size 0x1fc, virtual false, abstract: false, final false
  inline void _RenderPaniniProjection_b__75_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData* data,
                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderPostProcessingRenderGraph>b__106_0, addr 0x6cda580, size 0x12c, virtual false, abstract: false, final false
  inline void _RenderPostProcessingRenderGraph_b__106_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData* data,
                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderSMAA>b__56_0, addr 0x6cd5ed8, size 0x1a0, virtual false, abstract: false, final false
  inline void _RenderSMAA_b__56_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderSMAA>b__56_1, addr 0x6cd6078, size 0x150, virtual false, abstract: false, final false
  inline void _RenderSMAA_b__56_1(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderSMAA>b__56_2, addr 0x6cd61c8, size 0x150, virtual false, abstract: false, final false
  inline void _RenderSMAA_b__56_2(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderSMAA>b__56_3, addr 0x6cd6318, size 0x1a8, virtual false, abstract: false, final false
  inline void _RenderSMAA_b__56_3(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderStopNaN>b__53_0, addr 0x6cd5d88, size 0x150, virtual false, abstract: false, final false
  inline void _RenderStopNaN_b__53_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderUberPost>b__104_0, addr 0x6cda1b8, size 0x3c8, virtual false, abstract: false, final false
  inline void _RenderUberPost_b__104_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <UpdateCameraResolution>b__45_0, addr 0x6cd5ce0, size 0xa8, virtual false, abstract: false, final false
  inline void _UpdateCameraResolution_b__45_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData* data,
                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx);

  /// @brief Method .ctor, addr 0x6cd5cdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__100_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__104_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__106_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__45_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__53_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__56_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__56_1();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__56_2();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__56_3();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__64_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__65_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__66_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__69_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__73_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__75_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__83_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__86_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__87_0();

  static inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* getStaticF___9__87_1();

  static inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* getStaticF___9__87_2();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__90_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__95_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__97_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c* value);

  static inline void
  setStaticF___9__100_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*,
                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__104_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__106_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__45_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__53_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__56_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__56_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__56_2(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__56_3(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__64_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__65_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__66_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__69_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__73_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__75_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__83_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__86_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__87_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__87_1(::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value);

  static inline void setStaticF___9__87_2(::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value);

  static inline void setStaticF___9__90_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void
  setStaticF___9__95_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void
  setStaticF___9__97_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph___c(PostProcessPassRenderGraph___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph___c(PostProcessPassRenderGraph___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13105 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Rendering.RenderGraphModule.TextureHandle,
// UnityEngine.Rendering.Universal.PostProcessPassRenderGraph::BloomMaterialParams, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPassRenderGraph
class CORDL_TYPE PostProcessPassRenderGraph : public ::System::Object {
public:
  // Declarations
  using BloomMaterialParams = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams;

  using BloomPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData;

  using Constants = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_Constants;

  using DoFBokehPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData;

  using DoFGaussianPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData;

  using FinalBlitSettings = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings;

  using LensFlarePassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData;

  using LensFlareScreenSpacePassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData;

  using MotionBlurPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData;

  using PaniniProjectionPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData;

  using PostFXSetupPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData;

  using PostProcessingFinalBlitPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData;

  using PostProcessingFinalFSRScalePassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData;

  using PostProcessingFinalSetupPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData;

  using SMAAPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData;

  using SMAASetupPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants;

  using StopNaNsPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData;

  using UberPostPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData;

  using UberSetupBloomPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData;

  using UpdateCameraResolutionPassData = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData;

  using __c = ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c;

  /// @brief Field _BloomMipDown, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__BloomMipDown, put = __cordl_internal_set__BloomMipDown)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> _BloomMipDown;

  /// @brief Field _BloomMipUp, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__BloomMipUp, put = __cordl_internal_set__BloomMipUp)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> _BloomMipUp;

  /// @brief Field m_Bloom, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bloom, put = __cordl_internal_set_m_Bloom)) ::UnityW<::UnityEngine::Rendering::Universal::Bloom> m_Bloom;

  /// @brief Field m_BloomColorFormat, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BloomColorFormat, put = __cordl_internal_set_m_BloomColorFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_BloomColorFormat;

  /// @brief Field m_BloomMipDownName, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BloomMipDownName, put = __cordl_internal_set_m_BloomMipDownName)) ::ArrayW<::StringW> m_BloomMipDownName;

  /// @brief Field m_BloomMipUpName, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BloomMipUpName, put = __cordl_internal_set_m_BloomMipUpName)) ::ArrayW<::StringW> m_BloomMipUpName;

  /// @brief Field m_BloomParamsPrev, offset 0xb0, size 0x28
  __declspec(property(get = __cordl_internal_get_m_BloomParamsPrev,
                      put = __cordl_internal_set_m_BloomParamsPrev)) ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams m_BloomParamsPrev;

  /// @brief Field m_BokehHash, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehHash, put = __cordl_internal_set_m_BokehHash)) int32_t m_BokehHash;

  /// @brief Field m_BokehKernel, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BokehKernel, put = __cordl_internal_set_m_BokehKernel)) ::ArrayW<::UnityEngine::Vector4> m_BokehKernel;

  /// @brief Field m_BokehMaxRadius, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehMaxRadius, put = __cordl_internal_set_m_BokehMaxRadius)) float_t m_BokehMaxRadius;

  /// @brief Field m_BokehRCPAspect, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehRCPAspect, put = __cordl_internal_set_m_BokehRCPAspect)) float_t m_BokehRCPAspect;

  /// @brief Field m_ChromaticAberration, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChromaticAberration, put = __cordl_internal_set_m_ChromaticAberration)) ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration>
      m_ChromaticAberration;

  /// @brief Field m_ColorAdjustments, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorAdjustments, put = __cordl_internal_set_m_ColorAdjustments)) ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> m_ColorAdjustments;

  /// @brief Field m_ColorLookup, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorLookup, put = __cordl_internal_set_m_ColorLookup)) ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> m_ColorLookup;

  /// @brief Field m_DepthOfField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthOfField, put = __cordl_internal_set_m_DepthOfField)) ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> m_DepthOfField;

  /// @brief Field m_DitheringTextureIndex, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DitheringTextureIndex, put = __cordl_internal_set_m_DitheringTextureIndex)) int32_t m_DitheringTextureIndex;

  /// @brief Field m_EnableColorEncodingIfNeeded, offset 0xfd, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableColorEncodingIfNeeded, put = __cordl_internal_set_m_EnableColorEncodingIfNeeded)) bool m_EnableColorEncodingIfNeeded;

  /// @brief Field m_FilmGrain, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FilmGrain, put = __cordl_internal_set_m_FilmGrain)) ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> m_FilmGrain;

  /// @brief Field m_GaussianCoCFormat, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GaussianCoCFormat, put = __cordl_internal_set_m_GaussianCoCFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_GaussianCoCFormat;

  /// @brief Field m_GaussianDoFColorFormat, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GaussianDoFColorFormat,
                      put = __cordl_internal_set_m_GaussianDoFColorFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_GaussianDoFColorFormat;

  /// @brief Field m_HasFinalPass, offset 0xfc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasFinalPass, put = __cordl_internal_set_m_HasFinalPass)) bool m_HasFinalPass;

  /// @brief Field m_InternalLut, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalLut, put = __cordl_internal_set_m_InternalLut)) ::UnityEngine::Rendering::RTHandle* m_InternalLut;

  /// @brief Field m_LensDistortion, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LensDistortion, put = __cordl_internal_set_m_LensDistortion)) ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> m_LensDistortion;

  /// @brief Field m_LensFlareScreenSpace, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LensFlareScreenSpace, put = __cordl_internal_set_m_LensFlareScreenSpace)) ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>
      m_LensFlareScreenSpace;

  /// @brief Field m_LensFlareScreenSpaceColorFormat, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LensFlareScreenSpaceColorFormat,
                      put = __cordl_internal_set_m_LensFlareScreenSpaceColorFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_LensFlareScreenSpaceColorFormat;

  /// @brief Field m_Materials, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Materials, put = __cordl_internal_set_m_Materials)) ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary* m_Materials;

  /// @brief Field m_MotionBlur, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionBlur, put = __cordl_internal_set_m_MotionBlur)) ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> m_MotionBlur;

  /// @brief Field m_PaniniProjection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PaniniProjection, put = __cordl_internal_set_m_PaniniProjection)) ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> m_PaniniProjection;

  /// @brief Field m_SMAAEdgeFormat, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SMAAEdgeFormat, put = __cordl_internal_set_m_SMAAEdgeFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_SMAAEdgeFormat;

  /// @brief Field m_SupportDataDrivenLensFlare, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportDataDrivenLensFlare, put = __cordl_internal_set_m_SupportDataDrivenLensFlare)) bool m_SupportDataDrivenLensFlare;

  /// @brief Field m_SupportScreenSpaceLensFlare, offset 0xff, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportScreenSpaceLensFlare, put = __cordl_internal_set_m_SupportScreenSpaceLensFlare)) bool m_SupportScreenSpaceLensFlare;

  /// @brief Field m_Tonemapping, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tonemapping, put = __cordl_internal_set_m_Tonemapping)) ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> m_Tonemapping;

  /// @brief Field m_UseFastSRGBLinearConversion, offset 0xfe, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseFastSRGBLinearConversion, put = __cordl_internal_set_m_UseFastSRGBLinearConversion)) bool m_UseFastSRGBLinearConversion;

  /// @brief Field m_UserLut, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UserLut, put = __cordl_internal_set_m_UserLut)) ::UnityEngine::Rendering::RTHandle* m_UserLut;

  /// @brief Field m_Vignette, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Vignette, put = __cordl_internal_set_m_Vignette)) ::UnityW<::UnityEngine::Rendering::Universal::Vignette> m_Vignette;

  /// @brief Method BloomDual, addr 0x6cca04c, size 0x5e0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle BloomDual(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, int32_t mipCount);

  /// @brief Method BloomGaussian, addr 0x6ccabbc, size 0x5e0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle BloomGaussian(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, int32_t mipCount);

  /// @brief Method BloomKawase, addr 0x6cca62c, size 0x590, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle BloomKawase(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, int32_t mipCount);

  /// @brief Method CalcBloomMipCount, addr 0x6cc9584, size 0x11c, virtual false, abstract: false, final false
  inline int32_t CalcBloomMipCount(::UnityEngine::Rendering::Universal::Bloom* bloom, ::UnityEngine::Vector2Int bloomResolution);

  /// @brief Method CalcBloomResolution, addr 0x6cc94e4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int CalcBloomResolution(::UnityEngine::Rendering::Universal::Bloom* bloom,
                                                       /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> bloomSourceDesc);

  /// @brief Method CalcCropExtents, addr 0x6ccd7c4, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalcCropExtents(::UnityEngine::Camera* camera, float_t d, int32_t width, int32_t height);

  /// @brief Method CalcViewExtents, addr 0x6ccd76c, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalcViewExtents(::UnityEngine::Camera* camera, int32_t width, int32_t height);

  /// @brief Method Cleanup, addr 0x6cc6bdc, size 0x38, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CreateCompatibleTexture, addr 0x6cc7238, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateCompatibleTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc,
                                                                                                   ::StringW name, bool clear, ::UnityEngine::FilterMode filterMode);

  /// @brief Method CreateCompatibleTexture, addr 0x6cc7140, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateCompatibleTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                                                                                   ::StringW name, bool clear, ::UnityEngine::FilterMode filterMode);

  /// @brief Method Dispose, addr 0x6cc6c14, size 0x14, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetCompatibleDescriptor, addr 0x6cc7324, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor GetCompatibleDescriptor(::UnityEngine::RenderTextureDescriptor desc, int32_t width, int32_t height,
                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief Method GetCompatibleDescriptor, addr 0x6cc72d0, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc GetCompatibleDescriptor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc);

  /// @brief Method GetCompatibleDescriptor, addr 0x6cc72f4, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc GetCompatibleDescriptor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc, int32_t width, int32_t height,
                                                                                                 ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetLensFlareLightAttenuation, addr 0x6ccf390, size 0x24c, virtual false, abstract: false, final false
  static inline float_t GetLensFlareLightAttenuation(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method GetMaxBokehRadiusInPixels, addr 0x6ccd090, size 0x1c, virtual false, abstract: false, final false
  static inline float_t GetMaxBokehRadiusInPixels(float_t viewportHeight);

  /// @brief Method IsAlphaFormat, addr 0x6cc6cf4, size 0x78, virtual false, abstract: false, final false
  static inline bool IsAlphaFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsHDRFormat, addr 0x6cc6c28, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsHDRFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method LensFlareDataDrivenComputeOcclusion, addr 0x6cce71c, size 0x5d4, virtual false, abstract: false, final false
  inline void LensFlareDataDrivenComputeOcclusion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                  ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> srcDesc);

  /// @brief Method MakeCompatible, addr 0x6cc7220, size 0x18, virtual false, abstract: false, final false
  static inline void MakeCompatible(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc);

  static inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph* New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat requestPostProColorFormat);

  /// @brief Method PrepareBokehKernel, addr 0x6ccce38, size 0x258, virtual false, abstract: false, final false
  inline void PrepareBokehKernel(float_t maxRadius, float_t rcpAspect);

  /// @brief Method RenderBloomTexture, addr 0x6cc96a0, size 0x9ac, virtual false, abstract: false, final false
  inline void RenderBloomTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                 /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination, bool enableAlphaOutput);

  /// @brief Method RenderDoF, addr 0x6ccb19c, size 0x1cc, virtual false, abstract: false, final false
  inline void RenderDoF(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                        ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderDoFBokeh, addr 0x6ccc10c, size 0xd2c, virtual false, abstract: false, final false
  inline void RenderDoFBokeh(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination, ::by_ref<::UnityEngine::Material*> dofMaterial);

  /// @brief Method RenderDoFGaussian, addr 0x6ccb368, size 0xda4, virtual false, abstract: false, final false
  inline void RenderDoFGaussian(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::by_ref<::UnityEngine::Material*> dofMaterial);

  /// @brief Method RenderFinalBlit, addr 0x6cd0fe8, size 0x7d4, virtual false, abstract: false, final false
  inline void RenderFinalBlit(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> overlayUITexture,
                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> postProcessingTarget,
                              ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings> settings);

  /// @brief Method RenderFinalFSRScale, addr 0x6cd0ad8, size 0x510, virtual false, abstract: false, final false
  inline void RenderFinalFSRScale(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> srcDesc,
                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination,
                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> dstDesc, bool enableAlphaOutput);

  /// @brief Method RenderFinalPassRenderGraph, addr 0x6cd17bc, size 0x86c, virtual false, abstract: false, final false
  inline void RenderFinalPassRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> overlayUITexture,
                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> postProcessingTarget, bool enableColorEncodingIfNeeded);

  /// @brief Method RenderFinalSetup, addr 0x6cd03b0, size 0x728, virtual false, abstract: false, final false
  inline void RenderFinalSetup(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination,
                               ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings> settings, bool isActiveTargetBackBuffer);

  /// @brief Method RenderLensFlareDataDriven, addr 0x6ccecf0, size 0x6a0, virtual false, abstract: false, final false
  inline void RenderLensFlareDataDriven(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination,
                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> srcDesc);

  /// @brief Method RenderLensFlareScreenSpace, addr 0x6ccf5dc, size 0x798, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle RenderLensFlareScreenSpace(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera,
                                                                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> srcDesc,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle originalBloomTexture,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle screenSpaceLensFlareBloomMipTexture,
                                                                                               bool sameBloomInputOutputTex);

  /// @brief Method RenderMotionBlur, addr 0x6ccdce8, size 0x7ac, virtual false, abstract: false, final false
  inline void RenderMotionBlur(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                               ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderPaniniProjection, addr 0x6ccd0ac, size 0x6c0, virtual false, abstract: false, final false
  inline void RenderPaniniProjection(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera,
                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderPostProcessingRenderGraph, addr 0x6cd305c, size 0x1124, virtual false, abstract: false, final false
  inline void RenderPostProcessingRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> activeCameraColorTexture,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> lutTexture,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> overlayUITexture,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> postProcessingTarget, bool hasFinalPass,
                                              bool resolveToDebugScreen, bool enableColorEndingIfNeeded);

  /// @brief Method RenderSMAA, addr 0x6cc7800, size 0x179c, virtual false, abstract: false, final false
  inline void RenderSMAA(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                         ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality,
                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> SMAATarget);

  /// @brief Method RenderSTP, addr 0x6ccd970, size 0x378, virtual false, abstract: false, final false
  inline void RenderSTP(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                        ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderStopNaN, addr 0x6cc7374, size 0x48c, virtual false, abstract: false, final false
  inline void RenderStopNaN(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> activeCameraColor,
                            ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> stopNaNTarget);

  /// @brief Method RenderTemporalAA, addr 0x6ccd85c, size 0x114, virtual false, abstract: false, final false
  inline void RenderTemporalAA(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                               ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderUberPost, addr 0x6cd2238, size 0xe24, virtual false, abstract: false, final false
  inline void RenderUberPost(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* postProcessingData,
                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> sourceTexture,
                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destTexture,
                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> lutTexture,
                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> bloomTexture,
                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> overlayUITexture, bool requireHDROutput, bool enableAlphaOutput);

  /// @brief Method RequireHDROutput, addr 0x6cc6d88, size 0x38, virtual false, abstract: false, final false
  static inline bool RequireHDROutput(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method RequireSRGBConversionBlitToBackBuffer, addr 0x6cc6d6c, size 0x1c, virtual false, abstract: false, final false
  inline bool RequireSRGBConversionBlitToBackBuffer(bool requireSrgbConversion);

  /// @brief Method ScaleViewport, addr 0x6ccfd74, size 0x240, virtual false, abstract: false, final false
  static inline void ScaleViewport(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sourceTextureHdl, ::UnityEngine::Rendering::RTHandle* dest,
                                   ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isActiveTargetBackBuffer);

  /// @brief Method ScaleViewportAndBlit, addr 0x6ccffb4, size 0x178, virtual false, abstract: false, final false
  static inline void ScaleViewportAndBlit(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext const> context,
                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination,
                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material, bool isActiveTargetBackBuffer);

  /// @brief Method ScaleViewportAndDrawVisibilityMesh, addr 0x6cd012c, size 0x284, virtual false, abstract: false, final false
  static inline void ScaleViewportAndDrawVisibilityMesh(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext const> context,
                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination,
                                                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material, bool isActiveTargetBackBuffer);

  /// @brief Method SetupChromaticAberration, addr 0x6cd4488, size 0x10c, virtual false, abstract: false, final false
  inline void SetupChromaticAberration(::UnityEngine::Material* material);

  /// @brief Method SetupDithering, addr 0x6cd4894, size 0xa8, virtual false, abstract: false, final false
  inline void SetupDithering(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material);

  /// @brief Method SetupGrain, addr 0x6cd47dc, size 0xb8, virtual false, abstract: false, final false
  inline void SetupGrain(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material);

  /// @brief Method SetupHDROutput, addr 0x6cd493c, size 0xa0c, virtual false, abstract: false, final false
  inline void SetupHDROutput(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayInformation, ::UnityEngine::ColorGamut hdrDisplayColorGamut, ::UnityEngine::Material* material,
                             ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations, bool rendersOverlayUI);

  /// @brief Method SetupLensDistortion, addr 0x6cd4180, size 0x308, virtual false, abstract: false, final false
  inline void SetupLensDistortion(::UnityEngine::Material* material, bool isSceneView);

  /// @brief Method SetupVignette, addr 0x6cd4594, size 0x248, virtual false, abstract: false, final false
  inline void SetupVignette(::UnityEngine::Material* material, ::UnityEngine::Experimental::Rendering::XRPass* xrPass, int32_t width, int32_t height);

  /// @brief Method TryGetCachedUserLutTextureHandle, addr 0x6cd2028, size 0x210, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle TryGetCachedUserLutTextureHandle(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method UberPostSetupBloomPass, addr 0x6cc8f9c, size 0x548, virtual false, abstract: false, final false
  inline void UberPostSetupBloomPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* rendergraph, ::UnityEngine::Material* uberMaterial,
                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> srcDesc);

  /// @brief Method UpdateCameraResolution, addr 0x6cc6dc0, size 0x380, virtual false, abstract: false, final false
  inline void UpdateCameraResolution(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                     ::UnityEngine::Vector2Int newCameraTargetSize);

  /// @brief Method UpdateMotionBlurMatrices, addr 0x6cce494, size 0x288, virtual false, abstract: false, final false
  static inline void UpdateMotionBlurMatrices(::by_ref<::UnityEngine::Material*> material, ::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRPass* xr);

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get__BloomMipDown() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get__BloomMipDown();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& __cordl_internal_get__BloomMipUp() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& __cordl_internal_get__BloomMipUp();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom> const& __cordl_internal_get_m_Bloom() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom>& __cordl_internal_get_m_Bloom();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_BloomColorFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_BloomColorFormat();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_BloomMipDownName() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_BloomMipDownName();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_m_BloomMipUpName() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_m_BloomMipUpName();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams const& __cordl_internal_get_m_BloomParamsPrev() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams& __cordl_internal_get_m_BloomParamsPrev();

  constexpr int32_t const& __cordl_internal_get_m_BokehHash() const;

  constexpr int32_t& __cordl_internal_get_m_BokehHash();

  constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_BokehKernel() const;

  constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_BokehKernel();

  constexpr float_t const& __cordl_internal_get_m_BokehMaxRadius() const;

  constexpr float_t& __cordl_internal_get_m_BokehMaxRadius();

  constexpr float_t const& __cordl_internal_get_m_BokehRCPAspect() const;

  constexpr float_t& __cordl_internal_get_m_BokehRCPAspect();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> const& __cordl_internal_get_m_ChromaticAberration() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration>& __cordl_internal_get_m_ChromaticAberration();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> const& __cordl_internal_get_m_ColorAdjustments() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments>& __cordl_internal_get_m_ColorAdjustments();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> const& __cordl_internal_get_m_ColorLookup() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup>& __cordl_internal_get_m_ColorLookup();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> const& __cordl_internal_get_m_DepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField>& __cordl_internal_get_m_DepthOfField();

  constexpr int32_t const& __cordl_internal_get_m_DitheringTextureIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DitheringTextureIndex();

  constexpr bool const& __cordl_internal_get_m_EnableColorEncodingIfNeeded() const;

  constexpr bool& __cordl_internal_get_m_EnableColorEncodingIfNeeded();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> const& __cordl_internal_get_m_FilmGrain() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain>& __cordl_internal_get_m_FilmGrain();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_GaussianCoCFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_GaussianCoCFormat();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_GaussianDoFColorFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_GaussianDoFColorFormat();

  constexpr bool const& __cordl_internal_get_m_HasFinalPass() const;

  constexpr bool& __cordl_internal_get_m_HasFinalPass();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_InternalLut() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_InternalLut();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> const& __cordl_internal_get_m_LensDistortion() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion>& __cordl_internal_get_m_LensDistortion();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> const& __cordl_internal_get_m_LensFlareScreenSpace() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>& __cordl_internal_get_m_LensFlareScreenSpace();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_LensFlareScreenSpaceColorFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_LensFlareScreenSpaceColorFormat();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary* const& __cordl_internal_get_m_Materials() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*& __cordl_internal_get_m_Materials();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> const& __cordl_internal_get_m_MotionBlur() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur>& __cordl_internal_get_m_MotionBlur();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> const& __cordl_internal_get_m_PaniniProjection() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection>& __cordl_internal_get_m_PaniniProjection();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_SMAAEdgeFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_SMAAEdgeFormat();

  constexpr bool const& __cordl_internal_get_m_SupportDataDrivenLensFlare() const;

  constexpr bool& __cordl_internal_get_m_SupportDataDrivenLensFlare();

  constexpr bool const& __cordl_internal_get_m_SupportScreenSpaceLensFlare() const;

  constexpr bool& __cordl_internal_get_m_SupportScreenSpaceLensFlare();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> const& __cordl_internal_get_m_Tonemapping() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping>& __cordl_internal_get_m_Tonemapping();

  constexpr bool const& __cordl_internal_get_m_UseFastSRGBLinearConversion() const;

  constexpr bool& __cordl_internal_get_m_UseFastSRGBLinearConversion();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_UserLut() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_UserLut();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette> const& __cordl_internal_get_m_Vignette() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette>& __cordl_internal_get_m_Vignette();

  constexpr void __cordl_internal_set__BloomMipDown(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  constexpr void __cordl_internal_set__BloomMipUp(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value);

  constexpr void __cordl_internal_set_m_Bloom(::UnityW<::UnityEngine::Rendering::Universal::Bloom> value);

  constexpr void __cordl_internal_set_m_BloomColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_BloomMipDownName(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set_m_BloomMipUpName(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set_m_BloomParamsPrev(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams value);

  constexpr void __cordl_internal_set_m_BokehHash(int32_t value);

  constexpr void __cordl_internal_set_m_BokehKernel(::ArrayW<::UnityEngine::Vector4> value);

  constexpr void __cordl_internal_set_m_BokehMaxRadius(float_t value);

  constexpr void __cordl_internal_set_m_BokehRCPAspect(float_t value);

  constexpr void __cordl_internal_set_m_ChromaticAberration(::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> value);

  constexpr void __cordl_internal_set_m_ColorAdjustments(::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> value);

  constexpr void __cordl_internal_set_m_ColorLookup(::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> value);

  constexpr void __cordl_internal_set_m_DepthOfField(::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> value);

  constexpr void __cordl_internal_set_m_DitheringTextureIndex(int32_t value);

  constexpr void __cordl_internal_set_m_EnableColorEncodingIfNeeded(bool value);

  constexpr void __cordl_internal_set_m_FilmGrain(::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> value);

  constexpr void __cordl_internal_set_m_GaussianCoCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_GaussianDoFColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_HasFinalPass(bool value);

  constexpr void __cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_LensDistortion(::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> value);

  constexpr void __cordl_internal_set_m_LensFlareScreenSpace(::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> value);

  constexpr void __cordl_internal_set_m_LensFlareScreenSpaceColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_Materials(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary* value);

  constexpr void __cordl_internal_set_m_MotionBlur(::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> value);

  constexpr void __cordl_internal_set_m_PaniniProjection(::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> value);

  constexpr void __cordl_internal_set_m_SMAAEdgeFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_SupportDataDrivenLensFlare(bool value);

  constexpr void __cordl_internal_set_m_SupportScreenSpaceLensFlare(bool value);

  constexpr void __cordl_internal_set_m_Tonemapping(::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> value);

  constexpr void __cordl_internal_set_m_UseFastSRGBLinearConversion(bool value);

  constexpr void __cordl_internal_set_m_UserLut(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_Vignette(::UnityW<::UnityEngine::Rendering::Universal::Vignette> value);

  /// @brief Method .ctor, addr 0x6cc67b4, size 0x428, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::PostProcessData* data, ::UnityEngine::Experimental::Rendering::GraphicsFormat requestPostProColorFormat);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPassRenderGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPassRenderGraph(PostProcessPassRenderGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPassRenderGraph", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPassRenderGraph(PostProcessPassRenderGraph const&) = delete;

  /// @brief Field _TemporalAATargetName offset 0xffffffff size 0x8
  static constexpr ::ConstString _TemporalAATargetName{ u"_TemporalAATarget" };

  /// @brief Field _UpscaledColorTargetName offset 0xffffffff size 0x8
  static constexpr ::ConstString _UpscaledColorTargetName{ u"_CameraColorUpscaledSTP" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13106 };

  /// @brief Field m_Materials, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary* ___m_Materials;

  /// @brief Field m_DepthOfField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> ___m_DepthOfField;

  /// @brief Field m_MotionBlur, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> ___m_MotionBlur;

  /// @brief Field m_PaniniProjection, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> ___m_PaniniProjection;

  /// @brief Field m_Bloom, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Bloom> ___m_Bloom;

  /// @brief Field m_LensFlareScreenSpace, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> ___m_LensFlareScreenSpace;

  /// @brief Field m_LensDistortion, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> ___m_LensDistortion;

  /// @brief Field m_ChromaticAberration, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> ___m_ChromaticAberration;

  /// @brief Field m_Vignette, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Vignette> ___m_Vignette;

  /// @brief Field m_ColorLookup, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> ___m_ColorLookup;

  /// @brief Field m_ColorAdjustments, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> ___m_ColorAdjustments;

  /// @brief Field m_Tonemapping, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> ___m_Tonemapping;

  /// @brief Field m_FilmGrain, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> ___m_FilmGrain;

  /// @brief Field m_BloomMipDownName, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::StringW> ___m_BloomMipDownName;

  /// @brief Field m_BloomMipUpName, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::StringW> ___m_BloomMipUpName;

  /// @brief Field _BloomMipUp, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ____BloomMipUp;

  /// @brief Field _BloomMipDown, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> ____BloomMipDown;

  /// @brief Field m_UserLut, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_UserLut;

  /// @brief Field m_InternalLut, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_InternalLut;

  /// @brief Field m_SMAAEdgeFormat, offset: 0xa8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_SMAAEdgeFormat;

  /// @brief Field m_BloomColorFormat, offset: 0xac, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_BloomColorFormat;

  /// @brief Field m_BloomParamsPrev, offset: 0xb0, size: 0x28, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams ___m_BloomParamsPrev;

  /// @brief Field m_GaussianCoCFormat, offset: 0xd8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_GaussianCoCFormat;

  /// @brief Field m_GaussianDoFColorFormat, offset: 0xdc, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_GaussianDoFColorFormat;

  /// @brief Field m_BokehKernel, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4> ___m_BokehKernel;

  /// @brief Field m_BokehHash, offset: 0xe8, size: 0x4, def value: None
  int32_t ___m_BokehHash;

  /// @brief Field m_BokehMaxRadius, offset: 0xec, size: 0x4, def value: None
  float_t ___m_BokehMaxRadius;

  /// @brief Field m_BokehRCPAspect, offset: 0xf0, size: 0x4, def value: None
  float_t ___m_BokehRCPAspect;

  /// @brief Field m_LensFlareScreenSpaceColorFormat, offset: 0xf4, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_LensFlareScreenSpaceColorFormat;

  /// @brief Field m_DitheringTextureIndex, offset: 0xf8, size: 0x4, def value: None
  int32_t ___m_DitheringTextureIndex;

  /// @brief Field m_HasFinalPass, offset: 0xfc, size: 0x1, def value: None
  bool ___m_HasFinalPass;

  /// @brief Field m_EnableColorEncodingIfNeeded, offset: 0xfd, size: 0x1, def value: None
  bool ___m_EnableColorEncodingIfNeeded;

  /// @brief Field m_UseFastSRGBLinearConversion, offset: 0xfe, size: 0x1, def value: None
  bool ___m_UseFastSRGBLinearConversion;

  /// @brief Field m_SupportScreenSpaceLensFlare, offset: 0xff, size: 0x1, def value: None
  bool ___m_SupportScreenSpaceLensFlare;

  /// @brief Field m_SupportDataDrivenLensFlare, offset: 0x100, size: 0x1, def value: None
  bool ___m_SupportDataDrivenLensFlare;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_Materials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_DepthOfField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_MotionBlur) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_PaniniProjection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_Bloom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_LensFlareScreenSpace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_LensDistortion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_ChromaticAberration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_Vignette) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_ColorLookup) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_ColorAdjustments) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_Tonemapping) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_FilmGrain) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_BloomMipDownName) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_BloomMipUpName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ____BloomMipUp) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ____BloomMipDown) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_UserLut) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_InternalLut) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_SMAAEdgeFormat) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_BloomColorFormat) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_BloomParamsPrev) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_GaussianCoCFormat) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_GaussianDoFColorFormat) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_BokehKernel) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_BokehHash) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_BokehMaxRadius) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_BokehRCPAspect) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_LensFlareScreenSpaceColorFormat) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_DitheringTextureIndex) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_HasFinalPass) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_EnableColorEncodingIfNeeded) == 0xfd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_UseFastSRGBLinearConversion) == 0xfe, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_SupportScreenSpaceLensFlare) == 0xff, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph, ___m_SupportDataDrivenLensFlare) == 0x100, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph) == 0x108, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
