#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPassRenderGraph.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__BloomFilterMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPassRenderGraph_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Bloom_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ChromaticAberration_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorAdjustments_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorLookup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfField_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrain_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LensDistortion_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlur_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PaniniProjection_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessMaterialLibrary_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPassRenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceLensFlare_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Tonemapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalPostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Vignette_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__StencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilRef", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__StencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilRef", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__StencilMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilMask", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__StencilMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilMask", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__ColorTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ColorTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__ColorTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_ColorTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Params2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Params2", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Params2() {
  return ::cordl_internals::getStaticField<int32_t, "_Params2", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__ViewProjM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ViewProjM", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__ViewProjM() {
  return ::cordl_internals::getStaticField<int32_t, "_ViewProjM", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__PrevViewProjM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PrevViewProjM", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__PrevViewProjM() {
  return ::cordl_internals::getStaticField<int32_t, "_PrevViewProjM", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__ViewProjMStereo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ViewProjMStereo", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__ViewProjMStereo() {
  return ::cordl_internals::getStaticField<int32_t, "_ViewProjMStereo", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__PrevViewProjMStereo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PrevViewProjMStereo", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__PrevViewProjMStereo() {
  return ::cordl_internals::getStaticField<int32_t, "_PrevViewProjMStereo", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__FullscreenProjMat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FullscreenProjMat", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__FullscreenProjMat() {
  return ::cordl_internals::getStaticField<int32_t, "_FullscreenProjMat", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__FullCoCTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FullCoCTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__FullCoCTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_FullCoCTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__HalfCoCTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_HalfCoCTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__HalfCoCTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_HalfCoCTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__DofTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DofTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__DofTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_DofTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__CoCParams(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CoCParams", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__CoCParams() {
  return ::cordl_internals::getStaticField<int32_t, "_CoCParams", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__BokehKernel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BokehKernel", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__BokehKernel() {
  return ::cordl_internals::getStaticField<int32_t, "_BokehKernel", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__BokehConstants(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BokehConstants", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__BokehConstants() {
  return ::cordl_internals::getStaticField<int32_t, "_BokehConstants", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__DownSampleScaleFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DownSampleScaleFactor", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__DownSampleScaleFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_DownSampleScaleFactor", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Metrics(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Metrics", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Metrics() {
  return ::cordl_internals::getStaticField<int32_t, "_Metrics", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__AreaTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AreaTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__AreaTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_AreaTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__SearchTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SearchTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__SearchTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_SearchTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__BlendTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BlendTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__BlendTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_BlendTexture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__SourceTexLowMip(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SourceTexLowMip", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__SourceTexLowMip() {
  return ::cordl_internals::getStaticField<int32_t, "_SourceTexLowMip", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Bloom_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Bloom_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Bloom_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Bloom_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Bloom_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Bloom_Texture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Bloom_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_Bloom_Texture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__LensDirt_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Texture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__LensDirt_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Texture", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__LensDirt_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__LensDirt_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__LensDirt_Intensity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Intensity", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__LensDirt_Intensity() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Intensity", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Distortion_Params1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Distortion_Params1", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Distortion_Params1() {
  return ::cordl_internals::getStaticField<int32_t, "_Distortion_Params1", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Distortion_Params2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Distortion_Params2", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Distortion_Params2() {
  return ::cordl_internals::getStaticField<int32_t, "_Distortion_Params2", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Chroma_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Chroma_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Chroma_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Chroma_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Vignette_Params1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_Params1", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Vignette_Params1() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_Params1", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Vignette_Params2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_Params2", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Vignette_Params2() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_Params2", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Vignette_ParamsXR(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_ParamsXR", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Vignette_ParamsXR() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_ParamsXR", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__InternalLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InternalLut", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__InternalLut() {
  return ::cordl_internals::getStaticField<int32_t, "_InternalLut", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__Lut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Lut_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__Lut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Lut_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__UserLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UserLut", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__UserLut() {
  return ::cordl_internals::getStaticField<int32_t, "_UserLut", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::setStaticF__UserLut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UserLut_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::getStaticF__UserLut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_UserLut_Params", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_ShaderConstants::PostProcessPassRenderGraph_ShaderConstants() {}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_Constants::PostProcessPassRenderGraph_Constants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData::__cordl_internal_get_newCameraTargetSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newCameraTargetSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData::__cordl_internal_get_newCameraTargetSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newCameraTargetSize;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData::__cordl_internal_set_newCameraTargetSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newCameraTargetSize = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData::PostProcessPassRenderGraph_UpdateCameraResolutionPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::__cordl_internal_get_stopNaN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::__cordl_internal_get_stopNaN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::__cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stopNaN = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData::PostProcessPassRenderGraph_StopNaNsPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_metrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metrics;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_metrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metrics;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_set_metrics(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___metrics = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_areaTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___areaTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_areaTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___areaTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_set_areaTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___areaTexture = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_searchTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_searchTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_set_searchTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___searchTexture = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_stencilRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilRef;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_stencilRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilRef;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_set_stencilRef(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilRef = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_stencilMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMask;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_stencilMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMask;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_set_stencilMask(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilMask = value;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_antialiasingQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antialiasingQuality;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_antialiasingQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antialiasingQuality;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___antialiasingQuality = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData::PostProcessPassRenderGraph_SMAASetupPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_get_blendTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_get_blendTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_set_blendTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData::PostProcessPassRenderGraph_SMAAPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_bloomParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_bloomParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_set_bloomParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomParams = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_dirtScaleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtScaleOffset;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_dirtScaleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtScaleOffset;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_set_dirtScaleOffset(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtScaleOffset = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_dirtIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtIntensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_dirtIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtIntensity;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_set_dirtIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtIntensity = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_dirtTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_dirtTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_set_dirtTexture(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_highQualityFilteringValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualityFilteringValue;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_highQualityFilteringValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualityFilteringValue;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_set_highQualityFilteringValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highQualityFilteringValue = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_bloomTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_bloomTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_set_bloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_uberMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uberMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_get_uberMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uberMaterial;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::__cordl_internal_set_uberMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uberMaterial = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberSetupBloomPassData::PostProcessPassRenderGraph_UberSetupBloomPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_mipCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_mipCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipCount;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_set_mipCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mipCount = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_upsampleMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upsampleMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_upsampleMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upsampleMaterials;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_set_upsampleMaterials(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upsampleMaterials = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_bloomMipUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMipUp;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_bloomMipUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMipUp;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_set_bloomMipUp(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomMipUp = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_bloomMipDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMipDown;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_get_bloomMipDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMipDown;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::__cordl_internal_set_bloomMipDown(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomMipDown = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData::PostProcessPassRenderGraph_BloomPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams>)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6cd5b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams>(),
                                                             { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams>>() } })));
    return ___internal_method;
  }
};
inline bool
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams::Equals(::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams>(),
                                                           { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "parameters", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parameters2", ty: "::UnityEngine::Vector4",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bloomFilter", ty: "::UnityEngine::Rendering::Universal::BloomFilterMode", modifiers: "", def_value: Some("{}"), comment:
// None }, CppParam { name: "highQualityFiltering", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enableAlphaOutput", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams::PostProcessPassRenderGraph_BloomMaterialParams(
    ::UnityEngine::Vector4 parameters, ::UnityEngine::Vector4 parameters2, ::UnityEngine::Rendering::Universal::BloomFilterMode bloomFilter, bool highQualityFiltering,
    bool enableAlphaOutput) noexcept {
  this->parameters = parameters;
  this->parameters2 = parameters2;
  this->bloomFilter = bloomFilter;
  this->highQualityFiltering = highQualityFiltering;
  this->enableAlphaOutput = enableAlphaOutput;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams::PostProcessPassRenderGraph_BloomMaterialParams() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6cd5c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_downsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsample;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_downsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsample;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_downsample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___downsample = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingData& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_renderingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingData;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingData const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_renderingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingData;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::RenderingData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingData = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_cocParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cocParams;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_cocParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cocParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_cocParams(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cocParams = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_highQualitySamplingValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualitySamplingValue;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_highQualitySamplingValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualitySamplingValue;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_highQualitySamplingValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highQualitySamplingValue = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_depthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_depthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_depthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_materialCoC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCoC;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_materialCoC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCoC;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_materialCoC(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialCoC = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_halfCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfCoCTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_halfCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfCoCTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_halfCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___halfCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_fullCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCoCTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_fullCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCoCTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_fullCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_pingTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_pingTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_pingTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_pongTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pongTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_pongTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pongTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_pongTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pongTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_multipleRenderTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipleRenderTargets;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_multipleRenderTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipleRenderTargets;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_multipleRenderTargets(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multipleRenderTargets = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData::PostProcessPassRenderGraph_DoFGaussianPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_bokehKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehKernel;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_bokehKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehKernel;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_bokehKernel(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bokehKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_downSample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downSample;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_downSample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downSample;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_downSample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___downSample = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_uvMargin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvMargin;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_uvMargin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvMargin;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_uvMargin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uvMargin = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_cocParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cocParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_cocParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cocParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_cocParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cocParams = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_useFastSRGBLinearConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFastSRGBLinearConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_useFastSRGBLinearConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFastSRGBLinearConversion;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_useFastSRGBLinearConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useFastSRGBLinearConversion = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_depthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_depthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_depthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_materialCoC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCoC;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_materialCoC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCoC;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_materialCoC(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialCoC = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_halfCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfCoCTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_halfCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfCoCTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_halfCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___halfCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_fullCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCoCTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_fullCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCoCTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_fullCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_pingTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_pingTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_pingTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_pongTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pongTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_pongTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pongTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_pongTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pongTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData::PostProcessPassRenderGraph_DoFBokehPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_paniniParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_paniniParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_set_paniniParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paniniParams = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_isPaniniGeneric() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPaniniGeneric;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_get_isPaniniGeneric() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPaniniGeneric;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::__cordl_internal_set_isPaniniGeneric(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPaniniGeneric = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData::PostProcessPassRenderGraph_PaniniProjectionPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_motionVectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionVectors;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_motionVectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionVectors;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_motionVectors(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___motionVectors = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_passIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_passIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_passIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndex = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camera = value;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xr = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_clamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_clamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_clamp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clamp = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_enableAlphaOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_get_enableAlphaOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::__cordl_internal_set_enableAlphaOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaOutput = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData::PostProcessPassRenderGraph_MotionBlurPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_viewport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewport;
}
constexpr ::UnityEngine::Rect const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_viewport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewport;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_viewport(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewport = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_paniniDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_paniniDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniDistance;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_paniniDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paniniDistance = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_paniniCropToFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniCropToFit;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_paniniCropToFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniCropToFit;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_paniniCropToFit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paniniCropToFit = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_width(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_height(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_usePanini() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePanini;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_get_usePanini() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePanini;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::__cordl_internal_set_usePanini(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePanini = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData::PostProcessPassRenderGraph_LensFlarePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_streakTmpTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streakTmpTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_streakTmpTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streakTmpTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_streakTmpTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streakTmpTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_streakTmpTexture2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streakTmpTexture2;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_streakTmpTexture2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streakTmpTexture2;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_streakTmpTexture2(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streakTmpTexture2 = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_originalBloomTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalBloomTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_originalBloomTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalBloomTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_originalBloomTexture(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalBloomTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_screenSpaceLensFlareBloomMipTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceLensFlareBloomMipTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_screenSpaceLensFlareBloomMipTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceLensFlareBloomMipTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_screenSpaceLensFlareBloomMipTexture(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenSpaceLensFlareBloomMipTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_result(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___result = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_actualWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualWidth;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_actualWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualWidth;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_actualWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___actualWidth = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_actualHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualHeight;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_actualHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actualHeight;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_actualHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___actualHeight = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camera = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_lensFlareScreenSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareScreenSpace;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_lensFlareScreenSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareScreenSpace;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_lensFlareScreenSpace(
    ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lensFlareScreenSpace = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_downsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsample;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_get_downsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsample;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::__cordl_internal_set_downsample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___downsample = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData::PostProcessPassRenderGraph_LensFlareScreenSpacePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_set_destinationTexture(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_isActiveTargetBackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_get_isActiveTargetBackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::__cordl_internal_set_isActiveTargetBackBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveTargetBackBuffer = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_set_sourceTexture(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_enableAlphaOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_enableAlphaOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_set_enableAlphaOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaOutput = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_fsrInputSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsrInputSize;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_fsrInputSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsrInputSize;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_set_fsrInputSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fsrInputSize = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_fsrOutputSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsrOutputSize;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_get_fsrOutputSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fsrOutputSize;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::__cordl_internal_set_fsrOutputSize(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fsrOutputSize = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings (*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6cd5c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isFxaaEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isFsrEnabled", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "isTaaSharpeningEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requireHDROutput", ty: "bool",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isAlphaOutputEnabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hdrOperations",
// ty: "::UnityEngine::Rendering::HDROutputUtils_Operation", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings::PostProcessPassRenderGraph_FinalBlitSettings(
    bool isFxaaEnabled, bool isFsrEnabled, bool isTaaSharpeningEnabled, bool requireHDROutput, bool isAlphaOutputEnabled, ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations) noexcept {
  this->isFxaaEnabled = isFxaaEnabled;
  this->isFsrEnabled = isFsrEnabled;
  this->isTaaSharpeningEnabled = isTaaSharpeningEnabled;
  this->requireHDROutput = requireHDROutput;
  this->isAlphaOutputEnabled = isAlphaOutputEnabled;
  this->hdrOperations = hdrOperations;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings::PostProcessPassRenderGraph_FinalBlitSettings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_set_destinationTexture(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::__cordl_internal_set_settings(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_lutTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_lutTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_lutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lutTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_bloomTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_bloomTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_bloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomTexture = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_lutParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_lutParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_lutParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lutParams = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_userLutTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_userLutTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_userLutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userLutTexture = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_userLutParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_userLutParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_userLutParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userLutParams = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_toneMappingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toneMappingMode;
}
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_toneMappingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toneMappingMode;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_toneMappingMode(::UnityEngine::Rendering::Universal::TonemappingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toneMappingMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_isHdrGrading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHdrGrading;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_isHdrGrading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHdrGrading;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_isHdrGrading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isHdrGrading = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_isBackbuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isBackbuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_isBackbuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isBackbuffer;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_isBackbuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isBackbuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_enableAlphaOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_enableAlphaOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_enableAlphaOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaOutput = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_isActiveTargetBackBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_get_isActiveTargetBackBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActiveTargetBackBuffer;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::__cordl_internal_set_isActiveTargetBackBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActiveTargetBackBuffer = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData::PostProcessPassRenderGraph_UberPostPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData::PostProcessPassRenderGraph_PostFXSetupPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cd5cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._UpdateCameraResolution_b__45_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_UpdateCameraResolution_b__45_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6cd5ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                             { "<UpdateCameraResolution>b__45_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderStopNaN_b__53_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderStopNaN_b__53_0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6cd5d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderStopNaN>b__53_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderSMAA_b__56_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderSMAA_b__56_0)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6cd5ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderSMAA>b__56_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderSMAA_b__56_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderSMAA_b__56_1)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6cd6078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderSMAA>b__56_1",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderSMAA_b__56_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderSMAA_b__56_2)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6cd61c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderSMAA>b__56_2",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderSMAA_b__56_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderSMAA_b__56_3)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6cd6318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderSMAA>b__56_3",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._BloomGaussian_b__64_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_BloomGaussian_b__64_0)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x6cd64c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<BloomGaussian>b__64_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._BloomKawase_b__65_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_BloomKawase_b__65_0)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x6cd6a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<BloomKawase>b__65_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._BloomDual_b__66_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_BloomDual_b__66_0)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x6cd6da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<BloomDual>b__66_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderDoFGaussian_b__69_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderDoFGaussian_b__69_0)> {
  constexpr static std::size_t size = 0x884;
  constexpr static std::size_t addrs = 0x6cd71f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderDoFGaussian>b__69_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderDoFBokeh_b__73_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderDoFBokeh_b__73_0)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x6cd7b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderDoFBokeh>b__73_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderPaniniProjection_b__75_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderPaniniProjection_b__75_0)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6cd8174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                             { "<RenderPaniniProjection>b__75_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderMotionBlur_b__83_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderMotionBlur_b__83_0)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x6cd8370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderMotionBlur>b__83_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._LensFlareDataDrivenComputeOcclusion_b__86_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_LensFlareDataDrivenComputeOcclusion_b__86_0)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x6cd8628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<LensFlareDataDrivenComputeOcclusion>b__86_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderLensFlareDataDriven_b__87_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderLensFlareDataDriven_b__87_0)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x6cd8cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderLensFlareDataDriven>b__87_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderLensFlareDataDriven_b__87_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderLensFlareDataDriven_b__87_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cd948c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
            { "<RenderLensFlareDataDriven>b__87_1", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderLensFlareDataDriven_b__87_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderLensFlareDataDriven_b__87_2)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cd949c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
            { "<RenderLensFlareDataDriven>b__87_2", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderLensFlareScreenSpace_b__90_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderLensFlareScreenSpace_b__90_0)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x6cd94ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                             { "<RenderLensFlareScreenSpace>b__90_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderFinalSetup_b__95_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderFinalSetup_b__95_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6cd98bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                             { "<RenderFinalSetup>b__95_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderFinalFSRScale_b__97_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderFinalFSRScale_b__97_0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6cd9970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                             { "<RenderFinalFSRScale>b__97_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderFinalBlit_b__100_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderFinalBlit_b__100_0)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x6cd9b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                             { "<RenderFinalBlit>b__100_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderUberPost_b__104_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderUberPost_b__104_0)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x6cda1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderUberPost>b__104_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c._RenderPostProcessingRenderGraph_b__106_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderPostProcessingRenderGraph_b__106_0)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6cda580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                           { "<RenderPostProcessingRenderGraph>b__106_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*, "<>9", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*, "<>9", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__45_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__45_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__45_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
      "<>9__45_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__53_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__53_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__53_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__53_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__56_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__56_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__56_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__56_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__56_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__56_1", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__56_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__56_1", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__56_2(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__56_2", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__56_2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__56_2", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__56_3(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__56_3", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__56_3() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__56_3", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__64_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__64_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__64_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__64_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__65_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__65_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__65_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__65_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__66_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__66_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__66_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__66_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__69_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__69_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__69_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__69_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__73_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__73_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__73_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__73_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__75_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__75_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__75_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__75_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__83_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__83_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__83_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__83_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__86_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__86_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__86_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__86_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__87_1(
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__87_1",
                                    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__87_1() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__87_1",
                                           ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__87_2(
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__87_2",
                                    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__87_2() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__87_2",
                                           ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__87_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__87_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__87_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__87_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__90_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__90_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__90_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__90_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__95_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__95_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__95_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__95_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__97_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__97_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__97_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__97_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__100_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__100_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__100_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*,
                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
      "<>9__100_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__104_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__104_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__104_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__104_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::setStaticF___9__106_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__106_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::getStaticF___9__106_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__106_0", ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_UpdateCameraResolution_b__45_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                           { "<UpdateCameraResolution>b__45_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UpdateCameraResolutionPassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderStopNaN_b__53_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData* data,
                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderStopNaN>b__53_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_StopNaNsPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderSMAA_b__56_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderSMAA>b__56_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAASetupPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderSMAA_b__56_1(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderSMAA>b__56_1",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderSMAA_b__56_2(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderSMAA>b__56_2",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderSMAA_b__56_3(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderSMAA>b__56_3",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_SMAAPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_BloomGaussian_b__64_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData* data,
                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<BloomGaussian>b__64_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_BloomKawase_b__65_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData* data,
                                                                                                    ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<BloomKawase>b__65_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_BloomDual_b__66_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData* data,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<BloomDual>b__66_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderDoFGaussian_b__69_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData* data,
                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderDoFGaussian>b__69_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFGaussianPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderDoFBokeh_b__73_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData* data,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderDoFBokeh>b__73_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_DoFBokehPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderPaniniProjection_b__75_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData* data,
                                                                                                   ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                           { "<RenderPaniniProjection>b__75_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PaniniProjectionPassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderMotionBlur_b__83_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData* data,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderMotionBlur>b__83_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_MotionBlurPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_LensFlareDataDrivenComputeOcclusion_b__86_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData* data,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<LensFlareDataDrivenComputeOcclusion>b__86_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderLensFlareDataDriven_b__87_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData* data,
                                                                                                      ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderLensFlareDataDriven>b__87_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlarePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderLensFlareDataDriven_b__87_1(::UnityEngine::Light* light, ::UnityEngine::Camera* cam,
                                                                                                                     ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                       { "<RenderLensFlareDataDriven>b__87_1", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, light, cam, wo);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderLensFlareDataDriven_b__87_2(::UnityEngine::Light* light, ::UnityEngine::Camera* cam,
                                                                                                                     ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                       { "<RenderLensFlareDataDriven>b__87_2", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, light, cam, wo);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderLensFlareScreenSpace_b__90_0(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                           { "<RenderLensFlareScreenSpace>b__90_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_LensFlareScreenSpacePassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderFinalSetup_b__95_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                           { "<RenderFinalSetup>b__95_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalSetupPassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderFinalFSRScale_b__97_0(
    ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                           { "<RenderFinalFSRScale>b__97_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalFSRScalePassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderFinalBlit_b__100_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                           { "<RenderFinalBlit>b__100_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostProcessingFinalBlitPassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderUberPost_b__104_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData* data,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderUberPost>b__104_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_UberPostPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::_RenderPostProcessingRenderGraph_b__106_0(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData* data,
                                                                                                             ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>(),
                                                                                         { "<RenderPostProcessingRenderGraph>b__106_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_PostFXSetupPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c* UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph___c::PostProcessPassRenderGraph___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::Universal::PostProcessData*, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::_ctor)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x6cc67b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::Cleanup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6cc6bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cc6c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.IsHDRFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::IsHDRFormat)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6cc6c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "IsHDRFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.IsAlphaFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::IsAlphaFormat)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cc6cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "IsAlphaFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RequireSRGBConversionBlitToBackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RequireSRGBConversionBlitToBackBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6cc6d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "RequireSRGBConversionBlitToBackBuffer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RequireHDROutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RequireHDROutput)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6cc6d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "RequireHDROutput", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.UpdateCameraResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::UpdateCameraResolution)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6cc6dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "UpdateCameraResolution",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.CreateCompatibleTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::StringW, bool, ::UnityEngine::FilterMode)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CreateCompatibleTexture)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6cc7140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "CreateCompatibleTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::FilterMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.CreateCompatibleTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, ::StringW, bool, ::UnityEngine::FilterMode)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CreateCompatibleTexture)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6cc7238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "CreateCompatibleTexture",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(),
                                                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::FilterMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.GetCompatibleDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureDesc (*)(::UnityEngine::Rendering::RenderGraphModule::TextureDesc, int32_t, int32_t,
                                                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetCompatibleDescriptor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6cc72f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "GetCompatibleDescriptor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.GetCompatibleDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureDesc (*)(::UnityEngine::Rendering::RenderGraphModule::TextureDesc)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetCompatibleDescriptor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6cc72d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "GetCompatibleDescriptor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.MakeCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::MakeCompatible)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6cc7220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "MakeCompatible", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.GetCompatibleDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(
    ::UnityEngine::RenderTextureDescriptor, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetCompatibleDescriptor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6cc7324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                         { "GetCompatibleDescriptor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderStopNaN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderStopNaN)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x6cc7374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "RenderStopNaN",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderSMAA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::AntialiasingQuality,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderSMAA)> {
  constexpr static std::size_t size = 0x179c;
  constexpr static std::size_t addrs = 0x6cc7800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderSMAA",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::AntialiasingQuality>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.UberPostSetupBloomPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Material*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::UberPostSetupBloomPass)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x6cc8f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "UberPostSetupBloomPass",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.CalcBloomResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::Universal::Bloom*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CalcBloomResolution)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cc94e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
            { "CalcBloomResolution", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Bloom*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.CalcBloomMipCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::Universal::Bloom*, ::UnityEngine::Vector2Int)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CalcBloomMipCount)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6cc9584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                { "CalcBloomMipCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Bloom*>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderBloomTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderBloomTexture)> {
  constexpr static std::size_t size = 0x9ac;
  constexpr static std::size_t addrs = 0x6cc96a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderBloomTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.BloomGaussian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::BloomGaussian)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x6ccabbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "BloomGaussian",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.BloomKawase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::BloomKawase)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x6cca62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "BloomKawase",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.BloomDual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, int32_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::BloomDual)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x6cca04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "BloomDual",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderDoF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderDoF)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6ccb19c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderDoF",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderDoFGaussian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::by_ref<::UnityEngine::Material*>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderDoFGaussian)> {
  constexpr static std::size_t size = 0xda4;
  constexpr static std::size_t addrs = 0x6ccb368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderDoFGaussian",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.PrepareBokehKernel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::PrepareBokehKernel)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6ccce38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "PrepareBokehKernel", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.GetMaxBokehRadiusInPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetMaxBokehRadiusInPixels)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6ccd090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(), { "GetMaxBokehRadiusInPixels", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderDoFBokeh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Material*>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderDoFBokeh)> {
  constexpr static std::size_t size = 0xd2c;
  constexpr static std::size_t addrs = 0x6ccc10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderDoFBokeh",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderPaniniProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderPaniniProjection)> {
  constexpr static std::size_t size = 0x6c0;
  constexpr static std::size_t addrs = 0x6ccd0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "RenderPaniniProjection",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.CalcViewExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Camera*, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CalcViewExtents)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6ccd76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "CalcViewExtents", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.CalcCropExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Camera*, float_t, int32_t, int32_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CalcCropExtents)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ccd7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                         { "CalcCropExtents", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderTemporalAA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderTemporalAA)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6ccd85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderTemporalAA",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderSTP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderSTP)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6ccd970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderSTP",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderMotionBlur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderMotionBlur)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x6ccdce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderMotionBlur",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.UpdateMotionBlurMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Material*>, ::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::UpdateMotionBlurMatrices)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6cce494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "UpdateMotionBlurMatrices",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.LensFlareDataDrivenComputeOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::LensFlareDataDrivenComputeOcclusion)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x6cce71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                         { "LensFlareDataDrivenComputeOcclusion",
                           {},
                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderLensFlareDataDriven
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderLensFlareDataDriven)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x6ccecf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderLensFlareDataDriven",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.GetLensFlareLightAttenuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetLensFlareLightAttenuation)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6ccf390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "GetLensFlareLightAttenuation", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderLensFlareScreenSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderLensFlareScreenSpace)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0x6ccf5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "RenderLensFlareScreenSpace",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.ScaleViewport
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::ScaleViewport)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6ccfd74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                            { "ScaleViewport",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.ScaleViewportAndBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Material*, bool)>(
        &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::ScaleViewportAndBlit)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6ccffb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                         { "ScaleViewportAndBlit",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.ScaleViewportAndDrawVisibilityMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Material*, bool)>(
        &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::ScaleViewportAndDrawVisibilityMesh)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6cd012c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                         { "ScaleViewportAndDrawVisibilityMesh",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderFinalSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderFinalSetup)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x6cd03b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                         { "RenderFinalSetup",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderFinalFSRScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderFinalFSRScale)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x6cd0ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
            { "RenderFinalFSRScale",
              {},
              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderFinalBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderFinalBlit)> {
  constexpr static std::size_t size = 0x7d4;
  constexpr static std::size_t addrs = 0x6cd0fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                         { "RenderFinalBlit",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderFinalPassRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderFinalPassRenderGraph)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0x6cd17bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                { "RenderFinalPassRenderGraph",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.TryGetCachedUserLutTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::TryGetCachedUserLutTextureHandle)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6cd2028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "TryGetCachedUserLutTextureHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderUberPost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::Universal::UniversalPostProcessingData*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderUberPost)> {
  constexpr static std::size_t size = 0xe24;
  constexpr static std::size_t addrs = 0x6cd2238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
            { "RenderUberPost",
              {},
              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.RenderPostProcessingRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool, bool, bool)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderPostProcessingRenderGraph)> {
  constexpr static std::size_t size = 0x1124;
  constexpr static std::size_t addrs = 0x6cd305c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
            { "RenderPostProcessingRenderGraph",
              {},
              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.SetupLensDistortion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(::UnityEngine::Material*, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupLensDistortion)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x6cd4180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "SetupLensDistortion", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.SetupChromaticAberration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupChromaticAberration)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6cd4488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                           { "SetupChromaticAberration", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.SetupVignette
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Material*, ::UnityEngine::Experimental::Rendering::XRPass*, int32_t, int32_t)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupVignette)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x6cd4594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                             { "SetupVignette",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.SetupGrain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupGrain)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6cd47dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                { "SetupGrain", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.SetupDithering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupDithering)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6cd4894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                         { "SetupDithering", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph.SetupHDROutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::*)(
    ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, ::UnityEngine::ColorGamut, ::UnityEngine::Material*, ::UnityEngine::Rendering::HDROutputUtils_Operation, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupHDROutput)> {
  constexpr static std::size_t size = 0xa0c;
  constexpr static std::size_t addrs = 0x6cd493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                { "SetupHDROutput",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(), ::i2c::type_of<::UnityEngine::ColorGamut>(),
                                                    ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_Operation>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary*& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_Materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Materials;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary* const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_Materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Materials;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_Materials(::UnityEngine::Rendering::Universal::PostProcessMaterialLibrary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Materials = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_DepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthOfField;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_DepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_DepthOfField(::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthOfField = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_MotionBlur() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionBlur;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_MotionBlur() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionBlur;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_MotionBlur(::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionBlur = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_PaniniProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PaniniProjection;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_PaniniProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PaniniProjection;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_PaniniProjection(::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PaniniProjection = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_Bloom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bloom;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_Bloom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bloom;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_Bloom(::UnityW<::UnityEngine::Rendering::Universal::Bloom> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Bloom = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_LensFlareScreenSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensFlareScreenSpace;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_LensFlareScreenSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensFlareScreenSpace;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_LensFlareScreenSpace(::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LensFlareScreenSpace = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_LensDistortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensDistortion;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_LensDistortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensDistortion;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_LensDistortion(::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LensDistortion = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_ChromaticAberration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChromaticAberration;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_ChromaticAberration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChromaticAberration;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_ChromaticAberration(::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChromaticAberration = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_Vignette() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vignette;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_Vignette() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vignette;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_Vignette(::UnityW<::UnityEngine::Rendering::Universal::Vignette> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Vignette = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_ColorLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorLookup;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_ColorLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorLookup;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_ColorLookup(::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorLookup = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_ColorAdjustments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAdjustments;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_ColorAdjustments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAdjustments;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_ColorAdjustments(::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorAdjustments = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_Tonemapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tonemapping;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_Tonemapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tonemapping;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_Tonemapping(::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tonemapping = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_FilmGrain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilmGrain;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_FilmGrain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilmGrain;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_FilmGrain(::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilmGrain = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BloomMipDownName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomMipDownName;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BloomMipDownName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomMipDownName;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_BloomMipDownName(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BloomMipDownName = value;
}
constexpr ::ArrayW<::StringW>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BloomMipUpName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomMipUpName;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BloomMipUpName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomMipUpName;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_BloomMipUpName(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BloomMipUpName = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get__BloomMipUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BloomMipUp;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get__BloomMipUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BloomMipUp;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set__BloomMipUp(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BloomMipUp = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get__BloomMipDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BloomMipDown;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get__BloomMipDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BloomMipDown;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set__BloomMipDown(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BloomMipDown = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_UserLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserLut;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_UserLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserLut;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_UserLut(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UserLut = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_InternalLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_InternalLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalLut = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_SMAAEdgeFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SMAAEdgeFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_SMAAEdgeFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SMAAEdgeFormat;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_SMAAEdgeFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SMAAEdgeFormat = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BloomColorFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomColorFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BloomColorFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomColorFormat;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_BloomColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BloomColorFormat = value;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BloomParamsPrev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomParamsPrev;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams const&
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BloomParamsPrev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomParamsPrev;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_BloomParamsPrev(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_BloomMaterialParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BloomParamsPrev = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_GaussianCoCFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GaussianCoCFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_GaussianCoCFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GaussianCoCFormat;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_GaussianCoCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GaussianCoCFormat = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_GaussianDoFColorFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GaussianDoFColorFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_GaussianDoFColorFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GaussianDoFColorFormat;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_GaussianDoFColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GaussianDoFColorFormat = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BokehKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehKernel;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BokehKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehKernel;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_BokehKernel(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BokehHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehHash;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BokehHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehHash;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_BokehHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehHash = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BokehMaxRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehMaxRadius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BokehMaxRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehMaxRadius;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_BokehMaxRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehMaxRadius = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BokehRCPAspect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehRCPAspect;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_BokehRCPAspect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehRCPAspect;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_BokehRCPAspect(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehRCPAspect = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_LensFlareScreenSpaceColorFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensFlareScreenSpaceColorFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_LensFlareScreenSpaceColorFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensFlareScreenSpaceColorFormat;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_LensFlareScreenSpaceColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LensFlareScreenSpaceColorFormat = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_DitheringTextureIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DitheringTextureIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_DitheringTextureIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DitheringTextureIndex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_DitheringTextureIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DitheringTextureIndex = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_HasFinalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFinalPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_HasFinalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFinalPass;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_HasFinalPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasFinalPass = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_EnableColorEncodingIfNeeded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableColorEncodingIfNeeded;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_EnableColorEncodingIfNeeded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableColorEncodingIfNeeded;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_EnableColorEncodingIfNeeded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableColorEncodingIfNeeded = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_UseFastSRGBLinearConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFastSRGBLinearConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_UseFastSRGBLinearConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFastSRGBLinearConversion;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_UseFastSRGBLinearConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseFastSRGBLinearConversion = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_SupportScreenSpaceLensFlare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportScreenSpaceLensFlare;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_SupportScreenSpaceLensFlare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportScreenSpaceLensFlare;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_SupportScreenSpaceLensFlare(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportScreenSpaceLensFlare = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_SupportDataDrivenLensFlare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportDataDrivenLensFlare;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_get_m_SupportDataDrivenLensFlare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportDataDrivenLensFlare;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::__cordl_internal_set_m_SupportDataDrivenLensFlare(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportDataDrivenLensFlare = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                                 ::UnityEngine::Experimental::Rendering::GraphicsFormat requestPostProColorFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, requestPostProColorFormat);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::IsHDRFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "IsHDRFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::IsAlphaFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "IsAlphaFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RequireSRGBConversionBlitToBackBuffer(bool requireSrgbConversion) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "RequireSRGBConversionBlitToBackBuffer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requireSrgbConversion);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RequireHDROutput(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "RequireHDROutput", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::UpdateCameraResolution(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                  ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                  ::UnityEngine::Vector2Int newCameraTargetSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "UpdateCameraResolution",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, newCameraTargetSize);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CreateCompatibleTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                       /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source, ::StringW name,
                                                                                       bool clear, ::UnityEngine::FilterMode filterMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "CreateCompatibleTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::FilterMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, source, name, clear, filterMode);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CreateCompatibleTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                       /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc, ::StringW name,
                                                                                       bool clear, ::UnityEngine::FilterMode filterMode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "CreateCompatibleTexture",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(),
                                                                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::FilterMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, desc, name, clear, filterMode);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetCompatibleDescriptor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc, int32_t width, int32_t height,
                                                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "GetCompatibleDescriptor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(nullptr, ___internal_method, desc, width, height, format);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetCompatibleDescriptor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "GetCompatibleDescriptor", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(nullptr, ___internal_method, desc);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::MakeCompatible(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "MakeCompatible", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, desc);
}
inline ::UnityEngine::RenderTextureDescriptor
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetCompatibleDescriptor(::UnityEngine::RenderTextureDescriptor desc, int32_t width, int32_t height,
                                                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                       ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                       { "GetCompatibleDescriptor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method, desc, width, height, format, depthStencilFormat);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderStopNaN(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> activeCameraColor,
                                                                                         ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> stopNaNTarget) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "RenderStopNaN",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, activeCameraColor, stopNaNTarget);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderSMAA(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                      ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                      ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality,
                                                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                      ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> SMAATarget) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderSMAA",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::AntialiasingQuality>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, antialiasingQuality, source, SMAATarget);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::UberPostSetupBloomPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* rendergraph,
                                                                                                  ::UnityEngine::Material* uberMaterial,
                                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> srcDesc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "UberPostSetupBloomPass",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Material*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendergraph, uberMaterial, srcDesc);
}
inline ::UnityEngine::Vector2Int
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CalcBloomResolution(::UnityEngine::Rendering::Universal::Bloom* bloom,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> bloomSourceDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
          { "CalcBloomResolution", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Bloom*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, bloom, bloomSourceDesc);
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CalcBloomMipCount(::UnityEngine::Rendering::Universal::Bloom* bloom, ::UnityEngine::Vector2Int bloomResolution) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                              { "CalcBloomMipCount", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Bloom*>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, bloom, bloomResolution);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderBloomTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                              ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                              bool enableAlphaOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderBloomTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, source, destination, enableAlphaOutput);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::BloomGaussian(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                             ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "BloomGaussian",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph, source, mipCount);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::BloomKawase(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "BloomKawase",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph, source, mipCount);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::BloomDual(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                         ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, int32_t mipCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "BloomDual",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph, source, mipCount);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderDoF(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                     ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                     /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderDoF",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderDoFGaussian(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                                                             ::by_ref<::UnityEngine::Material*> dofMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderDoFGaussian",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination, dofMaterial);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::PrepareBokehKernel(float_t maxRadius, float_t rcpAspect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "PrepareBokehKernel", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxRadius, rcpAspect);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetMaxBokehRadiusInPixels(float_t viewportHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(), { "GetMaxBokehRadiusInPixels", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, viewportHeight);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderDoFBokeh(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                          /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                          ::by_ref<::UnityEngine::Material*> dofMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderDoFBokeh",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination, dofMaterial);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderPaniniProjection(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera,
                                                                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "RenderPaniniProjection",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, camera, source, destination);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CalcViewExtents(::UnityEngine::Camera* camera, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "CalcViewExtents", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, camera, width, height);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::CalcCropExtents(::UnityEngine::Camera* camera, float_t d, int32_t width, int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                       { "CalcCropExtents", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, camera, d, width, height);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderTemporalAA(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                            ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                            ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                            ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                            ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderTemporalAA",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderSTP(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                     ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                     ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderSTP",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderMotionBlur(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                            ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                            ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                            ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderMotionBlur",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::UpdateMotionBlurMatrices(::by_ref<::UnityEngine::Material*> material, ::UnityEngine::Camera* camera,
                                                                                                    ::UnityEngine::Experimental::Rendering::XRPass* xr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "UpdateMotionBlurMatrices",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, camera, xr);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::LensFlareDataDrivenComputeOcclusion(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> srcDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "LensFlareDataDrivenComputeOcclusion",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, srcDesc);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderLensFlareDataDriven(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> srcDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderLensFlareDataDriven",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, destination, srcDesc);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::GetLensFlareLightAttenuation(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "GetLensFlareLightAttenuation", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, light, cam, wo);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderLensFlareScreenSpace(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> srcDesc,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle originalBloomTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle screenSpaceLensFlareBloomMipTexture,
    bool sameBloomInputOutputTex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "RenderLensFlareScreenSpace",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph, camera, srcDesc, originalBloomTexture,
                                                                                                         screenSpaceLensFlareBloomMipTexture, sameBloomInputOutputTex);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::ScaleViewport(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sourceTextureHdl,
                                                                                         ::UnityEngine::Rendering::RTHandle* dest, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                         bool isActiveTargetBackBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                          { "ScaleViewport",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sourceTextureHdl, dest, cameraData, isActiveTargetBackBuffer);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::ScaleViewportAndBlit(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext> context,
                                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material,
                                                                                                bool isActiveTargetBackBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                       { "ScaleViewportAndBlit",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, source, destination, cameraData, material, isActiveTargetBackBuffer);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::ScaleViewportAndDrawVisibilityMesh(
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext> context,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material, bool isActiveTargetBackBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                       { "ScaleViewportAndDrawVisibilityMesh",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, source, destination, cameraData, material, isActiveTargetBackBuffer);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderFinalSetup(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                            ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                            ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings> settings,
                                                                                            bool isActiveTargetBackBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                       { "RenderFinalSetup",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, source, destination, settings, isActiveTargetBackBuffer);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderFinalFSRScale(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> srcDesc,
                                                                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                               /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> dstDesc,
                                                                                               bool enableAlphaOutput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                       { "RenderFinalFSRScale",
                         {},
                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, source, srcDesc, destination, dstDesc, enableAlphaOutput);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderFinalBlit(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                           ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
                                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget,
                                                                                           ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                       { "RenderFinalBlit",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph_FinalBlitSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, source, overlayUITexture, postProcessingTarget, settings);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderFinalPassRenderGraph(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget, bool enableColorEncodingIfNeeded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                              { "RenderFinalPassRenderGraph",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, source, overlayUITexture, postProcessingTarget, enableColorEncodingIfNeeded);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::TryGetCachedUserLutTextureHandle(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "TryGetCachedUserLutTextureHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderUberPost(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* postProcessingData, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> sourceTexture,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destTexture,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> lutTexture,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> bloomTexture,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture, bool requireHDROutput, bool enableAlphaOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
          { "RenderUberPost",
            {},
            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, cameraData, postProcessingData, sourceTexture, destTexture, lutTexture, bloomTexture,
                                                   overlayUITexture, requireHDROutput, enableAlphaOutput);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::RenderPostProcessingRenderGraph(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> activeCameraColorTexture,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> lutTexture,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget, bool hasFinalPass, bool resolveToDebugScreen, bool enableColorEndingIfNeeded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
          { "RenderPostProcessingRenderGraph",
            {},
            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, activeCameraColorTexture, lutTexture, overlayUITexture, postProcessingTarget, hasFinalPass,
                                                   resolveToDebugScreen, enableColorEndingIfNeeded);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupLensDistortion(::UnityEngine::Material* material, bool isSceneView) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "SetupLensDistortion", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, isSceneView);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupChromaticAberration(::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                                                         { "SetupChromaticAberration", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupVignette(::UnityEngine::Material* material, ::UnityEngine::Experimental::Rendering::XRPass* xrPass, int32_t width,
                                                                                         int32_t height) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                                           { "SetupVignette",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, xrPass, width, height);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupGrain(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                              { "SetupGrain", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupDithering(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                              { "SetupDithering", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::SetupHDROutput(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayInformation,
                                                                                          ::UnityEngine::ColorGamut hdrDisplayColorGamut, ::UnityEngine::Material* material,
                                                                                          ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations, bool rendersOverlayUI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(),
                                              { "SetupHDROutput",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(), ::i2c::type_of<::UnityEngine::ColorGamut>(),
                                                  ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_Operation>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hdrDisplayInformation, hdrDisplayColorGamut, material, hdrOperations, rendersOverlayUI);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*
UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                        ::UnityEngine::Experimental::Rendering::GraphicsFormat requestPostProColorFormat) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*>(data, requestPostProColorFormat));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph::PostProcessPassRenderGraph() {}
