#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\PostProcessPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPass_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Bloom_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ChromaticAberration_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorAdjustments_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ColorLookup_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthOfField_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__FilmGrain_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LensDistortion_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionBlur_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PaniniProjection_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessParams_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceLensFlare_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Tonemapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalPostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Vignette_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::*)(::UnityEngine::Rendering::Universal::PostProcessData*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x6889750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary.Load
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::*)(::UnityEngine::Shader*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::Load)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x689c630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*>(), { "Load", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::Cleanup)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6889ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_stopNaN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_stopNaN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stopNaN = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_subpixelMorphologicalAntialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpixelMorphologicalAntialiasing;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_subpixelMorphologicalAntialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___subpixelMorphologicalAntialiasing;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___subpixelMorphologicalAntialiasing = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_gaussianDepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_gaussianDepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_gaussianDepthOfField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gaussianDepthOfField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_gaussianDepthOfFieldCoC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfFieldCoC;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_gaussianDepthOfFieldCoC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gaussianDepthOfFieldCoC;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_gaussianDepthOfFieldCoC(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gaussianDepthOfFieldCoC = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_bokehDepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_bokehDepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_bokehDepthOfField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bokehDepthOfField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_bokehDepthOfFieldCoC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfFieldCoC;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_bokehDepthOfFieldCoC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehDepthOfFieldCoC;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_bokehDepthOfFieldCoC(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bokehDepthOfFieldCoC = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_cameraMotionBlur() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionBlur;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_cameraMotionBlur() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraMotionBlur;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_cameraMotionBlur(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraMotionBlur = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_paniniProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniProjection;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_paniniProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniProjection;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_paniniProjection(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paniniProjection = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_bloom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloom;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_bloom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloom;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_bloom(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloom = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_bloomUpsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomUpsample;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_bloomUpsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomUpsample;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_bloomUpsample(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomUpsample = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_temporalAntialiasing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalAntialiasing;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_temporalAntialiasing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___temporalAntialiasing;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_temporalAntialiasing(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___temporalAntialiasing = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_scalingSetup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalingSetup;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_scalingSetup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scalingSetup;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_scalingSetup(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scalingSetup = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_easu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easu;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_easu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___easu;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_easu(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___easu = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_uber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uber;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_uber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uber;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_uber(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uber = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_finalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalPass;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_finalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalPass;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_finalPass(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finalPass = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_lensFlareDataDriven() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareDataDriven;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_lensFlareDataDriven() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareDataDriven;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_lensFlareDataDriven(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lensFlareDataDriven = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_lensFlareScreenSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareScreenSpace;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_get_lensFlareScreenSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareScreenSpace;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::__cordl_internal_set_lensFlareScreenSpace(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lensFlareScreenSpace = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::Load(::UnityEngine::Shader* shader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*>(), { "Load", {}, { ::i2c::type_of<::UnityEngine::Shader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method, shader);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*
UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary::PostProcessPass_MaterialLibrary() {}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__TempTarget(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TempTarget", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__TempTarget() {
  return ::cordl_internals::getStaticField<int32_t, "_TempTarget", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__TempTarget2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_TempTarget2", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__TempTarget2() {
  return ::cordl_internals::getStaticField<int32_t, "_TempTarget2", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__StencilRef(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilRef", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__StencilRef() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilRef", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__StencilMask(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_StencilMask", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__StencilMask() {
  return ::cordl_internals::getStaticField<int32_t, "_StencilMask", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FullCoCTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FullCoCTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FullCoCTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_FullCoCTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__HalfCoCTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_HalfCoCTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__HalfCoCTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_HalfCoCTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__DofTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DofTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__DofTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_DofTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__CoCParams(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_CoCParams", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__CoCParams() {
  return ::cordl_internals::getStaticField<int32_t, "_CoCParams", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__BokehKernel(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BokehKernel", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__BokehKernel() {
  return ::cordl_internals::getStaticField<int32_t, "_BokehKernel", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__BokehConstants(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BokehConstants", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__BokehConstants() {
  return ::cordl_internals::getStaticField<int32_t, "_BokehConstants", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__PongTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PongTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__PongTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_PongTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__PingTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_PingTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__PingTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_PingTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Metrics(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Metrics", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Metrics() {
  return ::cordl_internals::getStaticField<int32_t, "_Metrics", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__AreaTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_AreaTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__AreaTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_AreaTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__SearchTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SearchTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__SearchTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_SearchTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__EdgeTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_EdgeTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__EdgeTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_EdgeTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__BlendTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_BlendTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__BlendTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_BlendTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__ColorTexture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_ColorTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__ColorTexture() {
  return ::cordl_internals::getStaticField<int32_t, "_ColorTexture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__SourceTexLowMip(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_SourceTexLowMip", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__SourceTexLowMip() {
  return ::cordl_internals::getStaticField<int32_t, "_SourceTexLowMip", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Bloom_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Bloom_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Bloom_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Bloom_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Bloom_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Bloom_Texture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Bloom_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_Bloom_Texture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__LensDirt_Texture(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Texture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__LensDirt_Texture() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Texture", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__LensDirt_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__LensDirt_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__LensDirt_Intensity(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_LensDirt_Intensity", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__LensDirt_Intensity() {
  return ::cordl_internals::getStaticField<int32_t, "_LensDirt_Intensity", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Distortion_Params1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Distortion_Params1", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Distortion_Params1() {
  return ::cordl_internals::getStaticField<int32_t, "_Distortion_Params1", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Distortion_Params2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Distortion_Params2", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Distortion_Params2() {
  return ::cordl_internals::getStaticField<int32_t, "_Distortion_Params2", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Chroma_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Chroma_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Chroma_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Chroma_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Vignette_Params1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_Params1", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Vignette_Params1() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_Params1", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Vignette_Params2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_Params2", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Vignette_Params2() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_Params2", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Vignette_ParamsXR(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Vignette_ParamsXR", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Vignette_ParamsXR() {
  return ::cordl_internals::getStaticField<int32_t, "_Vignette_ParamsXR", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__Lut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_Lut_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__Lut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_Lut_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__UserLut_Params(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UserLut_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__UserLut_Params() {
  return ::cordl_internals::getStaticField<int32_t, "_UserLut_Params", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__InternalLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_InternalLut", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__InternalLut() {
  return ::cordl_internals::getStaticField<int32_t, "_InternalLut", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__UserLut(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_UserLut", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__UserLut() {
  return ::cordl_internals::getStaticField<int32_t, "_UserLut", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__DownSampleScaleFactor(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_DownSampleScaleFactor", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__DownSampleScaleFactor() {
  return ::cordl_internals::getStaticField<int32_t, "_DownSampleScaleFactor", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareOcclusionRemapTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionRemapTex", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareOcclusionRemapTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionRemapTex", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareOcclusionTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionTex", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareOcclusionTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionTex", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareOcclusionIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareOcclusionIndex", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareOcclusionIndex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareOcclusionIndex", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareTex", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareTex() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareTex", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareColorValue(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareColorValue", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareColorValue() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareColorValue", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareData0(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData0", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareData0() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData0", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareData1(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData1", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareData1() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData1", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareData2(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData2", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareData2() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData2", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareData3(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData3", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareData3() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData3", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareData4(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData4", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareData4() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData4", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FlareData5(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FlareData5", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FlareData5() {
  return ::cordl_internals::getStaticField<int32_t, "_FlareData5", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__FullscreenProjMat(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_FullscreenProjMat", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__FullscreenProjMat() {
  return ::cordl_internals::getStaticField<int32_t, "_FullscreenProjMat", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__BloomMipUp(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "_BloomMipUp", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__BloomMipUp() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_BloomMipUp", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::setStaticF__BloomMipDown(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "_BloomMipDown", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::getStaticF__BloomMipDown() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_BloomMipDown", ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants::PostProcessPass_ShaderConstants() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData::__cordl_internal_get_newCameraTargetSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newCameraTargetSize;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData::__cordl_internal_get_newCameraTargetSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newCameraTargetSize;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData::__cordl_internal_set_newCameraTargetSize(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newCameraTargetSize = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData* UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData::PostProcessPass_UpdateCameraResolutionPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_get_stopNaNTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaNTarget;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_get_stopNaNTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaNTarget;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_set_stopNaNTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stopNaNTarget = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_get_stopNaN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_get_stopNaN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopNaN;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::__cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stopNaN = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData* UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData::PostProcessPass_StopNaNsPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_metrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metrics;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_metrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___metrics;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_set_metrics(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___metrics = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_areaTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___areaTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_areaTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___areaTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_set_areaTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___areaTexture = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_searchTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_searchTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_set_searchTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___searchTexture = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_stencilRef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilRef;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_stencilRef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilRef;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_set_stencilRef(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilRef = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_stencilMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMask;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_stencilMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stencilMask;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_set_stencilMask(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stencilMask = value;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_antialiasingQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antialiasingQuality;
}
constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_antialiasingQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antialiasingQuality;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___antialiasingQuality = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData* UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData::PostProcessPass_SMAASetupPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_depthStencilTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthStencilTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_depthStencilTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthStencilTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_set_depthStencilTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthStencilTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_blendTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_blendTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blendTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_set_blendTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blendTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData* UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData::PostProcessPass_SMAAPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_bloomParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_bloomParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_set_bloomParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomParams = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_dirtScaleOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtScaleOffset;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_dirtScaleOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtScaleOffset;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_set_dirtScaleOffset(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtScaleOffset = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_dirtIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtIntensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_dirtIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtIntensity;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_set_dirtIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtIntensity = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_dirtTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtTexture;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_dirtTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_set_dirtTexture(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtTexture = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_highQualityFilteringValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualityFilteringValue;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_highQualityFilteringValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualityFilteringValue;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_set_highQualityFilteringValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highQualityFilteringValue = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_bloomTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_bloomTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_set_bloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_uberMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uberMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_get_uberMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uberMaterial;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::__cordl_internal_set_uberMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uberMaterial = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData* UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData::PostProcessPass_UberSetupBloomPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_mipCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_mipCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipCount;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_set_mipCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mipCount = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_upsampleMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upsampleMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_upsampleMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upsampleMaterials;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_set_upsampleMaterials(::ArrayW<::UnityW<::UnityEngine::Material>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upsampleMaterials = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_bloomMipUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMipUp;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_bloomMipUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMipUp;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_set_bloomMipUp(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomMipUp = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_bloomMipDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMipDown;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_get_bloomMipDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMipDown;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::__cordl_internal_set_bloomMipDown(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomMipDown = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData* UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData::PostProcessPass_BloomPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams>)>(&::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams::Equals)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68948e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams>(),
                                                             { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams::Equals(::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams>(),
                                                           { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "parameters", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "highQualityFiltering", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "enableAlphaOutput", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams::PostProcessPass_BloomMaterialParams(::UnityEngine::Vector4 parameters, bool highQualityFiltering,
                                                                                                                        bool enableAlphaOutput) noexcept {
  this->parameters = parameters;
  this->highQualityFiltering = highQualityFiltering;
  this->enableAlphaOutput = enableAlphaOutput;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams::PostProcessPass_BloomMaterialParams() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x689d1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_downsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsample;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_downsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsample;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_downsample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___downsample = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingData& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_renderingData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingData;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingData const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_renderingData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderingData;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::RenderingData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderingData = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_cocParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cocParams;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_cocParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cocParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_cocParams(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cocParams = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_highQualitySamplingValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualitySamplingValue;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_highQualitySamplingValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualitySamplingValue;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_highQualitySamplingValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highQualitySamplingValue = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_depthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_depthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_depthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_materialCoC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCoC;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_materialCoC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCoC;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_materialCoC(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialCoC = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_halfCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfCoCTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_halfCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfCoCTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_halfCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___halfCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_fullCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCoCTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_fullCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCoCTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_fullCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_pingTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_pingTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_pingTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_pongTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pongTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_pongTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pongTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_pongTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pongTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_multipleRenderTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipleRenderTargets;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_multipleRenderTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multipleRenderTargets;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_multipleRenderTargets(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multipleRenderTargets = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData* UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData::PostProcessPass_DoFGaussianPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_bokehKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehKernel;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_bokehKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bokehKernel;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_bokehKernel(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bokehKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_downSample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downSample;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_downSample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downSample;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_downSample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___downSample = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_uvMargin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvMargin;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_uvMargin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uvMargin;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_uvMargin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uvMargin = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_cocParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cocParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_cocParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cocParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_cocParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cocParams = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_useFastSRGBLinearConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFastSRGBLinearConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_useFastSRGBLinearConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFastSRGBLinearConversion;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_useFastSRGBLinearConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useFastSRGBLinearConversion = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_depthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_depthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_depthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_materialCoC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCoC;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_materialCoC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___materialCoC;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_materialCoC(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___materialCoC = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_halfCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfCoCTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_halfCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___halfCoCTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_halfCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___halfCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_fullCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCoCTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_fullCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCoCTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_fullCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_pingTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_pingTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_pingTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_pongTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pongTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_pongTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pongTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_pongTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pongTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::__cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData* UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData::PostProcessPass_DoFBokehPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_sourceTextureDesc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTextureDesc;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_sourceTextureDesc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTextureDesc;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_set_sourceTextureDesc(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTextureDesc = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_paniniParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_paniniParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_set_paniniParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paniniParams = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_isPaniniGeneric() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPaniniGeneric;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_get_isPaniniGeneric() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isPaniniGeneric;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::__cordl_internal_set_isPaniniGeneric(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isPaniniGeneric = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData* UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData::PostProcessPass_PaniniProjectionPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_motionVectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionVectors;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_motionVectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___motionVectors;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_motionVectors(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___motionVectors = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_passIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_passIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___passIndex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_passIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___passIndex = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camera = value;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_xr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_xr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xr;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xr = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_clamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_clamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_clamp(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clamp = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_enableAlphaOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_get_enableAlphaOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::__cordl_internal_set_enableAlphaOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaOutput = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData* UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData::PostProcessPass_MotionBlurPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_sourceDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_sourceDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_sourceDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceDescriptor = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_viewport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewport;
}
constexpr ::UnityEngine::Rect const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_viewport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewport;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_viewport(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewport = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_paniniDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniDistance;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_paniniDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniDistance;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_paniniDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paniniDistance = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_paniniCropToFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniCropToFit;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_paniniCropToFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paniniCropToFit;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_paniniCropToFit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paniniCropToFit = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___width;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_width(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___width = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___height;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_height(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___height = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_usePanini() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePanini;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_get_usePanini() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usePanini;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::__cordl_internal_set_usePanini(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usePanini = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData* UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData::PostProcessPass_LensFlarePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_streakTmpTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streakTmpTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_streakTmpTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streakTmpTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_streakTmpTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streakTmpTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_streakTmpTexture2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streakTmpTexture2;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_streakTmpTexture2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streakTmpTexture2;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_streakTmpTexture2(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streakTmpTexture2 = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_originalBloomTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalBloomTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_originalBloomTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalBloomTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_originalBloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalBloomTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_screenSpaceLensFlareBloomMipTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceLensFlareBloomMipTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_screenSpaceLensFlareBloomMipTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenSpaceLensFlareBloomMipTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_screenSpaceLensFlareBloomMipTexture(
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenSpaceLensFlareBloomMipTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___result;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_result(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___result = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_sourceDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_sourceDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_sourceDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceDescriptor = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_camera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_camera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___camera;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___camera = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>&
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_lensFlareScreenSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareScreenSpace;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> const&
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_lensFlareScreenSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lensFlareScreenSpace;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_lensFlareScreenSpace(::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lensFlareScreenSpace = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_downsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsample;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_get_downsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downsample;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::__cordl_internal_set_downsample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___downsample = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData* UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData::PostProcessPass_LensFlareScreenSpacePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData* UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData::PostProcessPass_PostProcessingFinalSetupPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_get_enableAlphaOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_get_enableAlphaOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::__cordl_internal_set_enableAlphaOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaOutput = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData* UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData::PostProcessPass_PostProcessingFinalFSRScalePassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings (*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x689d240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings::Create() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isFxaaEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isFsrEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "isTaaSharpeningEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requireHDROutput", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "resolveToDebugScreen", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isAlphaOutputEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "hdrOperations", ty: "::UnityEngine::Rendering::HDROutputUtils_Operation", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings::PostProcessPass_FinalBlitSettings(bool isFxaaEnabled, bool isFsrEnabled, bool isTaaSharpeningEnabled,
                                                                                                                    bool requireHDROutput, bool resolveToDebugScreen, bool isAlphaOutputEnabled,
                                                                                                                    ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations) noexcept {
  this->isFxaaEnabled = isFxaaEnabled;
  this->isFsrEnabled = isFsrEnabled;
  this->isTaaSharpeningEnabled = isTaaSharpeningEnabled;
  this->requireHDROutput = requireHDROutput;
  this->resolveToDebugScreen = resolveToDebugScreen;
  this->isAlphaOutputEnabled = isAlphaOutputEnabled;
  this->hdrOperations = hdrOperations;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings::PostProcessPass_FinalBlitSettings() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d23c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings& UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings const&
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_get_settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___settings;
}
constexpr void
UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::__cordl_internal_set_settings(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___settings = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData* UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData::PostProcessPass_PostProcessingFinalBlitPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d24c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_destinationTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_destinationTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destinationTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destinationTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_sourceTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_sourceTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_lutTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_lutTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_lutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lutTexture = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_lutParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_lutParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lutParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_lutParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lutParams = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_userLutTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_userLutTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_userLutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userLutTexture = value;
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_userLutParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutParams;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_userLutParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userLutParams;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_userLutParams(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userLutParams = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_cameraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_cameraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraData = value;
}
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_toneMappingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toneMappingMode;
}
constexpr ::UnityEngine::Rendering::Universal::TonemappingMode const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_toneMappingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___toneMappingMode;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_toneMappingMode(::UnityEngine::Rendering::Universal::TonemappingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___toneMappingMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_isHdrGrading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHdrGrading;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_isHdrGrading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHdrGrading;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_isHdrGrading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isHdrGrading = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_isBackbuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isBackbuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_isBackbuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isBackbuffer;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_isBackbuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isBackbuffer = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_enableAlphaOutput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_enableAlphaOutput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaOutput;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_enableAlphaOutput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaOutput = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_hasFinalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasFinalPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_get_hasFinalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasFinalPass;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::__cordl_internal_set_hasFinalPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasFinalPass = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData* UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData::PostProcessPass_UberPostPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData* UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData::PostProcessPass_PostFXSetupPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)()>(&::UnityEngine::Rendering::Universal::PostProcessPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689d2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._LensFlareDataDriven_b__98_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_LensFlareDataDriven_b__98_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x689d2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                            { "<LensFlareDataDriven>b__98_0", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._LensFlareDataDriven_b__98_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_LensFlareDataDriven_b__98_1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x689d340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                            { "<LensFlareDataDriven>b__98_1", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._UpdateCameraResolution_b__122_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_UpdateCameraResolution_b__122_0)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x689d3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<UpdateCameraResolution>b__122_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderStopNaN_b__124_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderStopNaN_b__124_0)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x689d47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderStopNaN>b__124_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderSMAA_b__127_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderSMAA_b__127_0)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x689d5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderSMAA>b__127_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderSMAA_b__127_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderSMAA_b__127_1)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x689d76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderSMAA>b__127_1",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderSMAA_b__127_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderSMAA_b__127_2)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x689d8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderSMAA>b__127_2",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderSMAA_b__127_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderSMAA_b__127_3)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x689da0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderSMAA>b__127_3",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._UberPostSetupBloomPass_b__129_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_UberPostSetupBloomPass_b__129_0)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x689dbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<UberPostSetupBloomPass>b__129_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderBloomTexture_b__132_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderBloomTexture_b__132_0)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x689dd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderBloomTexture>b__132_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderDoFGaussian_b__135_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderDoFGaussian_b__135_0)> {
  constexpr static std::size_t size = 0x89c;
  constexpr static std::size_t addrs = 0x689e360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderDoFGaussian>b__135_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderDoFBokeh_b__137_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderDoFBokeh_b__137_0)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x689ec6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderDoFBokeh>b__137_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderPaniniProjection_b__139_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderPaniniProjection_b__139_0)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x689f2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderPaniniProjection>b__139_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderMotionBlur_b__145_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderMotionBlur_b__145_0)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x689f4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderMotionBlur>b__145_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._LensFlareDataDrivenComputeOcclusion_b__147_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_LensFlareDataDrivenComputeOcclusion_b__147_0)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x689f890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<LensFlareDataDrivenComputeOcclusion>b__147_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderLensFlareDataDriven_b__148_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderLensFlareDataDriven_b__148_0)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x689ff1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderLensFlareDataDriven>b__148_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderLensFlareDataDriven_b__148_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderLensFlareDataDriven_b__148_1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68a06f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
            { "<RenderLensFlareDataDriven>b__148_1", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderLensFlareDataDriven_b__148_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderLensFlareDataDriven_b__148_2)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68a0788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
            { "<RenderLensFlareDataDriven>b__148_2", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderLensFlareScreenSpace_b__150_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderLensFlareScreenSpace_b__150_0)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x68a081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderLensFlareScreenSpace>b__150_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderFinalSetup_b__153_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderFinalSetup_b__153_0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x68a0c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderFinalSetup>b__153_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderFinalFSRScale_b__155_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderFinalFSRScale_b__155_0)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x68a0d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                             { "<RenderFinalFSRScale>b__155_0",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderFinalBlit_b__158_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(
    ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderFinalBlit_b__158_0)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x68a0f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderFinalBlit>b__158_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderUberPost_b__162_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderUberPost_b__162_0)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x68a1390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderUberPost>b__162_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass___c._RenderPostProcessingRenderGraph_b__164_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass___c::*)(::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                                                                          ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderPostProcessingRenderGraph_b__164_0)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x68a1640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                           { "<RenderPostProcessingRenderGraph>b__164_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::PostProcessPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::PostProcessPass___c*, "<>9", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass___c* UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::PostProcessPass___c*, "<>9", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__98_0(
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__98_0",
                                    ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__98_0() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__98_0",
                                           ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__98_1(
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__98_1",
                                    ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__98_1() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__98_1",
                                           ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__122_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__122_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__122_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__122_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__124_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__124_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__124_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__124_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__127_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__127_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__127_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__127_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__127_1(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__127_1", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__127_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__127_1", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__127_2(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__127_2", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__127_2() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__127_2", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__127_3(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
        value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__127_3", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__127_3() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__127_3", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__129_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__129_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__129_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__129_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__132_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__132_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__132_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__132_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__135_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__135_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__135_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__135_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__137_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__137_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__137_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__137_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__139_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__139_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__139_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__139_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__145_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__145_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__145_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__145_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__147_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__147_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__147_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__147_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__148_1(
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__148_1",
                                    ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__148_1() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__148_1",
                                           ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__148_2(
    ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__148_2",
                                    ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*>(value));
}
inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__148_2() {
  return ::cordl_internals::getStaticField<::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>*, "<>9__148_2",
                                           ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__148_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__148_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__148_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__148_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__150_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__150_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__150_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__150_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__153_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__153_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__153_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__153_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__155_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__155_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__155_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__155_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__158_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__158_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__158_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__158_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__162_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__162_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__162_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__162_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::setStaticF___9__164_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__164_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::PostProcessPass___c::getStaticF___9__164_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__164_0", ::UnityEngine::Rendering::Universal::PostProcessPass___c*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPass___c::_LensFlareDataDriven_b__98_0(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                          { "<LensFlareDataDriven>b__98_0", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, light, cam, wo);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPass___c::_LensFlareDataDriven_b__98_1(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                          { "<LensFlareDataDriven>b__98_1", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, light, cam, wo);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_UpdateCameraResolution_b__122_0(::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData* data,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<UpdateCameraResolution>b__122_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderStopNaN_b__124_0(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData* data,
                                                                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderStopNaN>b__124_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderSMAA_b__127_0(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData* data,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderSMAA>b__127_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderSMAA_b__127_1(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData* data,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderSMAA>b__127_1",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderSMAA_b__127_2(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData* data,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderSMAA>b__127_2",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderSMAA_b__127_3(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData* data,
                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderSMAA>b__127_3",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_UberPostSetupBloomPass_b__129_0(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData* data,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<UberPostSetupBloomPass>b__129_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderBloomTexture_b__132_0(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderBloomTexture>b__132_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderDoFGaussian_b__135_0(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData* data,
                                                                                                ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderDoFGaussian>b__135_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderDoFBokeh_b__137_0(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderDoFBokeh>b__137_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderPaniniProjection_b__139_0(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData* data,
                                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderPaniniProjection>b__139_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderMotionBlur_b__145_0(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData* data,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderMotionBlur>b__145_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_LensFlareDataDrivenComputeOcclusion_b__147_0(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData* data,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<LensFlareDataDrivenComputeOcclusion>b__147_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderLensFlareDataDriven_b__148_0(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData* data,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderLensFlareDataDriven>b__148_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, ctx);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderLensFlareDataDriven_b__148_1(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
          { "<RenderLensFlareDataDriven>b__148_1", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, light, cam, wo);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderLensFlareDataDriven_b__148_2(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
          { "<RenderLensFlareDataDriven>b__148_2", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, light, cam, wo);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderLensFlareScreenSpace_b__150_0(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData* data,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderLensFlareScreenSpace>b__150_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderFinalSetup_b__153_0(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData* data,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderFinalSetup>b__153_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderFinalFSRScale_b__155_0(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData* data,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                           { "<RenderFinalFSRScale>b__155_0",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderFinalBlit_b__158_0(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData* data,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderFinalBlit>b__158_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderUberPost_b__162_0(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData* data,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderUberPost>b__162_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass___c::_RenderPostProcessingRenderGraph_b__164_0(::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData* data,
                                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass___c*>(),
                                                                                         { "<RenderPostProcessingRenderGraph>b__164_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass___c* UnityEngine::Rendering::Universal::PostProcessPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass___c::PostProcessPass___c() {}
// Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "destination", ty:
// "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityEngine::Rendering::Universal::PostProcessPass*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "amountOfPassesRemaining", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0::PostProcessPass___c__DisplayClass89_0(::UnityEngine::Rendering::RTHandle* source,
                                                                                                                            ::UnityEngine::Rendering::RTHandle* destination,
                                                                                                                            ::UnityEngine::Rendering::Universal::PostProcessPass* __4__this,
                                                                                                                            int32_t amountOfPassesRemaining,
                                                                                                                            ::UnityEngine::Rendering::CommandBuffer* cmd) noexcept {
  this->source = source;
  this->destination = destination;
  this->__4__this = __4__this;
  this->amountOfPassesRemaining = amountOfPassesRemaining;
  this->cmd = cmd;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0::PostProcessPass___c__DisplayClass89_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::Universal::PostProcessData*, ::by_ref<::UnityEngine::Rendering::Universal::PostProcessParams>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::_ctor)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x6889054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)()>(&::UnityEngine::Rendering::Universal::PostProcessPass::Cleanup)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6889ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "Cleanup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)()>(&::UnityEngine::Rendering::Universal::PostProcessPass::Dispose)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6889c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::by_ref<::UnityEngine::Rendering::RTHandle*>, bool, ::by_ref<::UnityEngine::Rendering::RTHandle*>, ::by_ref<::UnityEngine::Rendering::RTHandle*>,
    ::by_ref<::UnityEngine::Rendering::RTHandle*>, bool, bool)>(&::UnityEngine::Rendering::Universal::PostProcessPass::Setup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6889dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "Setup",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupFinalPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::by_ref<::UnityEngine::Rendering::RTHandle*>, bool, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::SetupFinalPass)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6889f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "SetupFinalPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6889fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.CanRunOnTile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PostProcessPass::*)()>(&::UnityEngine::Rendering::Universal::PostProcessPass::CanRunOnTile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6889fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "CanRunOnTile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::Execute)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x6889fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.IsHDRFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::IsHDRFormat)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6889970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                           { "IsHDRFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.IsAlphaFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::IsAlphaFormat)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6889a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                           { "IsAlphaFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.GetCompatibleDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::Universal::PostProcessPass::*)()>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::GetCompatibleDescriptor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x688c138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "GetCompatibleDescriptor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.GetCompatibleDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::GetCompatibleDescriptor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x688c180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "GetCompatibleDescriptor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                                 ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.GetCompatibleDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(
    ::UnityEngine::RenderTextureDescriptor, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::GetCompatibleDescriptor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x688c25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "GetCompatibleDescriptor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RequireSRGBConversionBlitToBackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PostProcessPass::*)(bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RequireSRGBConversionBlitToBackBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x688c2ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "RequireSRGBConversionBlitToBackBuffer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RequireHDROutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RequireHDROutput)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x688c2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "RequireHDROutput", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::Render)> {
  constexpr static std::size_t size = 0x1454;
  constexpr static std::size_t addrs = 0x688ace4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "Render", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.DoSubpixelMorphologicalAntialiasing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::DoSubpixelMorphologicalAntialiasing)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x688c560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "DoSubpixelMorphologicalAntialiasing",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.DoDepthOfField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::CameraData>, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
    ::UnityEngine::Rect)>(&::UnityEngine::Rendering::Universal::PostProcessPass::DoDepthOfField)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x688cb3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "DoDepthOfField",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.DoGaussianDepthOfField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*,
                                                                                                                      ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rect, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::DoGaussianDepthOfField)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x688ffe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "DoGaussianDepthOfField",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.PrepareBokehKernel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::PrepareBokehKernel)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6890d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                           { "PrepareBokehKernel", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.GetMaxBokehRadiusInPixels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::Rendering::Universal::PostProcessPass::GetMaxBokehRadiusInPixels)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6890fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "GetMaxBokehRadiusInPixels", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.DoBokehDepthOfField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*,
                                                                                                                      ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rect, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::DoBokehDepthOfField)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0x6890734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "DoBokehDepthOfField",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.GetLensFlareLightAttenuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Light*, ::UnityEngine::Camera*, ::UnityEngine::Vector3)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::GetLensFlareLightAttenuation)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6890fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "GetLensFlareLightAttenuation", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.LensFlareDataDrivenComputeOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, bool, float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::LensFlareDataDrivenComputeOcclusion)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0x688e39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "LensFlareDataDrivenComputeOcclusion",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.LensFlareDataDriven
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, bool, float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::LensFlareDataDriven)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0x688eb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "LensFlareDataDriven",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.DoLensFlareScreenSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::DoLensFlareScreenSpace)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x688dd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "DoLensFlareScreenSpace",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.UpdateMotionBlurMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Material*>, ::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::UpdateMotionBlurMatrices)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x6891220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                           { "UpdateMotionBlurMatrices",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.DoMotionBlur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
    ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::DoMotionBlur)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x688cc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "DoMotionBlur",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.DoPaniniProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*,
                                                                                                                      ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::DoPaniniProjection)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x688cf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "DoPaniniProjection",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.CalcViewExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::CalcViewExtents)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6891418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "CalcViewExtents", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.CalcCropExtents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Camera*, float_t)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::CalcCropExtents)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6891474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                           { "CalcCropExtents", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupBloom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*, bool)>(&::UnityEngine::Rendering::Universal::PostProcessPass::SetupBloom)> {
  constexpr static std::size_t size = 0xbe4;
  constexpr static std::size_t addrs = 0x688d164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "SetupBloom",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupLensDistortion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Material*, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::SetupLensDistortion)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x688f34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                           { "SetupLensDistortion", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupChromaticAberration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::SetupChromaticAberration)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x688f658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                           { "SetupChromaticAberration", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupVignette
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::UnityEngine::Material*, ::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::SetupVignette)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x688f764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "SetupVignette", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupColorGrading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::SetupColorGrading)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x688f9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "SetupColorGrading",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupGrain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::PostProcessPass::SetupGrain)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x688fd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "SetupGrain", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupDithering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Material*)>(&::UnityEngine::Rendering::Universal::PostProcessPass::SetupDithering)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x688fdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "SetupDithering", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.SetupHDROutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, ::UnityEngine::ColorGamut, ::UnityEngine::Material*, ::UnityEngine::Rendering::HDROutputUtils_Operation, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::SetupHDROutput)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x688fe68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "SetupHDROutput",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(), ::i2c::type_of<::UnityEngine::ColorGamut>(),
                                                    ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_Operation>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderFinalPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalPass)> {
  constexpr static std::size_t size = 0x9b0;
  constexpr static std::size_t addrs = 0x688a334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                         { "RenderFinalPass", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.UpdateCameraResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Vector2Int)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::UpdateCameraResolution)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x68914c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "UpdateCameraResolution",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderStopNaN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderStopNaN)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x68918c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "RenderStopNaN",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderSMAA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::AntialiasingQuality,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderSMAA)> {
  constexpr static std::size_t size = 0x1454;
  constexpr static std::size_t addrs = 0x6891e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderSMAA",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::AntialiasingQuality>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.UberPostSetupBloomPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Material*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::UberPostSetupBloomPass)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x6893294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "UberPostSetupBloomPass",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderBloomTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderBloomTexture)> {
  constexpr static std::size_t size = 0xeac;
  constexpr static std::size_t addrs = 0x6893a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderBloomTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderDoF
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderDoF)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x6894950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderDoF",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderDoFGaussian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::by_ref<::UnityEngine::Material*>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderDoFGaussian)> {
  constexpr static std::size_t size = 0xad4;
  constexpr static std::size_t addrs = 0x6894bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderDoFGaussian",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderDoFBokeh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Material*>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderDoFBokeh)> {
  constexpr static std::size_t size = 0xa8c;
  constexpr static std::size_t addrs = 0x68956ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderDoFBokeh",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderPaniniProjection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderPaniniProjection)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x6896138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "RenderPaniniProjection",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderTemporalAA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderTemporalAA)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6896860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderTemporalAA",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderSTP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderSTP)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6896a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderSTP",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderMotionBlur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderMotionBlur)> {
  constexpr static std::size_t size = 0x8a8;
  constexpr static std::size_t addrs = 0x6896ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderMotionBlur",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.LensFlareDataDrivenComputeOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::LensFlareDataDrivenComputeOcclusion)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x6897574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "LensFlareDataDrivenComputeOcclusion",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderLensFlareDataDriven
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderLensFlareDataDriven)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x6897b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                         { "RenderLensFlareDataDriven",
                           {},
                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderLensFlareScreenSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderLensFlareScreenSpace)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0x68981a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderLensFlareScreenSpace",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.ScaleViewportAndBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*,
                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Material*, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::ScaleViewportAndBlit)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6898a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "ScaleViewportAndBlit",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderFinalSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalSetup)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x6898c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "RenderFinalSetup",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderFinalFSRScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalFSRScale)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x6899304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                            { "RenderFinalFSRScale",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderFinalBlit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalBlit)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x6899804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                         { "RenderFinalBlit",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderFinalPassRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalPassRenderGraph)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x6899ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "RenderFinalPassRenderGraph",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.TryGetCachedUserLutTextureHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::Universal::PostProcessPass::TryGetCachedUserLutTextureHandle)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x689a564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "TryGetCachedUserLutTextureHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderUberPost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::Universal::UniversalPostProcessingData*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool, bool, bool, bool)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderUberPost)> {
  constexpr static std::size_t size = 0xcec;
  constexpr static std::size_t addrs = 0x689a774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
            { "RenderUberPost",
              {},
              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass.RenderPostProcessingRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, bool, bool, bool)>(&::UnityEngine::Rendering::Universal::PostProcessPass::RenderPostProcessingRenderGraph)> {
  constexpr static std::size_t size = 0x1000;
  constexpr static std::size_t addrs = 0x689b460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
            { "RenderPostProcessingRenderGraph",
              {},
              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass._Render_g__GetSource_89_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>)>(
        &::UnityEngine::Rendering::Universal::PostProcessPass::_Render_g__GetSource_89_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x688c304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "<Render>g__GetSource|89_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass._Render_g__GetDestination_89_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::PostProcessPass::*)(::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>)>(
        &::UnityEngine::Rendering::Universal::PostProcessPass::_Render_g__GetDestination_89_1)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x688c30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                { "<Render>g__GetDestination|89_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessPass._Render_g__Swap_89_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::PostProcessPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>, ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>)>(
    &::UnityEngine::Rendering::Universal::PostProcessPass::_Render_g__Swap_89_2)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x688c448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                             { "<Render>g__Swap|89_2",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Descriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Descriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Descriptor;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Descriptor = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Source(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Source = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Destination;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Destination;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Destination(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Destination = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Depth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Depth;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Depth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Depth;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Depth(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Depth = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_InternalLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_InternalLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InternalLut;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InternalLut = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_MotionVectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectors;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_MotionVectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectors;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_MotionVectors(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionVectors = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_FullCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullCoCTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_FullCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FullCoCTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_FullCoCTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FullCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_HalfCoCTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HalfCoCTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_HalfCoCTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HalfCoCTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_HalfCoCTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HalfCoCTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_PingTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PingTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_PingTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PingTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_PingTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PingTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_PongTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PongTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_PongTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PongTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_PongTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PongTexture = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BloomMipDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomMipDown;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BloomMipDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomMipDown;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BloomMipDown(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BloomMipDown = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BloomMipUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomMipUp;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BloomMipUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomMipUp;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BloomMipUp(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BloomMipUp = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get__BloomMipUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BloomMipUp;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get__BloomMipUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BloomMipUp;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set__BloomMipUp(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BloomMipUp = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get__BloomMipDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BloomMipDown;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get__BloomMipDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BloomMipDown;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set__BloomMipDown(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BloomMipDown = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BlendTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BlendTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlendTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BlendTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlendTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_EdgeColorTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EdgeColorTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_EdgeColorTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EdgeColorTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_EdgeColorTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EdgeColorTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_EdgeStencilTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EdgeStencilTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_EdgeStencilTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EdgeStencilTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_EdgeStencilTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EdgeStencilTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_TempTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_TempTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempTarget;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_TempTarget(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempTarget = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_TempTarget2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempTarget2;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_TempTarget2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempTarget2;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_TempTarget2(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempTarget2 = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_StreakTmpTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreakTmpTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_StreakTmpTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreakTmpTexture;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_StreakTmpTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StreakTmpTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_StreakTmpTexture2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreakTmpTexture2;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_StreakTmpTexture2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StreakTmpTexture2;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_StreakTmpTexture2(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StreakTmpTexture2 = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ScreenSpaceLensFlareResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceLensFlareResult;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ScreenSpaceLensFlareResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenSpaceLensFlareResult;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_ScreenSpaceLensFlareResult(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenSpaceLensFlareResult = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_UserLut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserLut;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_UserLut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UserLut;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_UserLut(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UserLut = value;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Materials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Materials;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Materials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Materials;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Materials(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Materials = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Data(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Data = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_DepthOfField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthOfField;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_DepthOfField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthOfField;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_DepthOfField(::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthOfField = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_MotionBlur() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionBlur;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_MotionBlur() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionBlur;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_MotionBlur(::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionBlur = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_LensFlareScreenSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensFlareScreenSpace;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_LensFlareScreenSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensFlareScreenSpace;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_LensFlareScreenSpace(::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LensFlareScreenSpace = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_PaniniProjection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PaniniProjection;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_PaniniProjection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PaniniProjection;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_PaniniProjection(::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PaniniProjection = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Bloom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bloom;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Bloom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Bloom;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Bloom(::UnityW<::UnityEngine::Rendering::Universal::Bloom> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Bloom = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_LensDistortion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensDistortion;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_LensDistortion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LensDistortion;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_LensDistortion(::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LensDistortion = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ChromaticAberration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChromaticAberration;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ChromaticAberration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChromaticAberration;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_ChromaticAberration(::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChromaticAberration = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Vignette() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vignette;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Vignette() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Vignette;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Vignette(::UnityW<::UnityEngine::Rendering::Universal::Vignette> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Vignette = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ColorLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorLookup;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ColorLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorLookup;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_ColorLookup(::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorLookup = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ColorAdjustments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAdjustments;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ColorAdjustments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorAdjustments;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_ColorAdjustments(::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorAdjustments = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Tonemapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tonemapping;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_Tonemapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tonemapping;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_Tonemapping(::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tonemapping = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_FilmGrain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilmGrain;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_FilmGrain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilmGrain;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_FilmGrain(::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilmGrain = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_DefaultColorFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultColorFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_DefaultColorFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultColorFormat;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_DefaultColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultColorFormat = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_DefaultColorFormatIsAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultColorFormatIsAlpha;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_DefaultColorFormatIsAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultColorFormatIsAlpha;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_DefaultColorFormatIsAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultColorFormatIsAlpha = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_SMAAEdgeFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SMAAEdgeFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_SMAAEdgeFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SMAAEdgeFormat;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_SMAAEdgeFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SMAAEdgeFormat = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_GaussianCoCFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GaussianCoCFormat;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_GaussianCoCFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GaussianCoCFormat;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_GaussianCoCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GaussianCoCFormat = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_DitheringTextureIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DitheringTextureIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_DitheringTextureIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DitheringTextureIndex;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_DitheringTextureIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DitheringTextureIndex = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_MRT2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MRT2;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_MRT2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MRT2;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_MRT2(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MRT2 = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BokehKernel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehKernel;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BokehKernel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehKernel;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BokehKernel(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehKernel = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BokehHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehHash;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BokehHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehHash;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BokehHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehHash = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BokehMaxRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehMaxRadius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BokehMaxRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehMaxRadius;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BokehMaxRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehMaxRadius = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BokehRCPAspect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehRCPAspect;
}
constexpr float_t const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BokehRCPAspect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BokehRCPAspect;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BokehRCPAspect(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BokehRCPAspect = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_IsFinalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFinalPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_IsFinalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFinalPass;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_IsFinalPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsFinalPass = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_HasFinalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFinalPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_HasFinalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFinalPass;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_HasFinalPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasFinalPass = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_EnableColorEncodingIfNeeded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableColorEncodingIfNeeded;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_EnableColorEncodingIfNeeded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnableColorEncodingIfNeeded;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_EnableColorEncodingIfNeeded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnableColorEncodingIfNeeded = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_UseFastSRGBLinearConversion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFastSRGBLinearConversion;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_UseFastSRGBLinearConversion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseFastSRGBLinearConversion;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_UseFastSRGBLinearConversion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseFastSRGBLinearConversion = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_SupportScreenSpaceLensFlare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportScreenSpaceLensFlare;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_SupportScreenSpaceLensFlare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportScreenSpaceLensFlare;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_SupportScreenSpaceLensFlare(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportScreenSpaceLensFlare = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_SupportDataDrivenLensFlare() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportDataDrivenLensFlare;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_SupportDataDrivenLensFlare() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportDataDrivenLensFlare;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_SupportDataDrivenLensFlare(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportDataDrivenLensFlare = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ResolveToScreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResolveToScreen;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ResolveToScreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResolveToScreen;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_ResolveToScreen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResolveToScreen = value;
}
constexpr bool& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_UseSwapBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseSwapBuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_UseSwapBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseSwapBuffer;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_UseSwapBuffer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseSwapBuffer = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ScalingSetupTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScalingSetupTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_ScalingSetupTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScalingSetupTarget;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_ScalingSetupTarget(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScalingSetupTarget = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_UpscaledTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpscaledTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_UpscaledTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UpscaledTarget;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_UpscaledTarget(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UpscaledTarget = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BlitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BlitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlitMaterial = value;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BloomParamsPrev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomParamsPrev;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams const& UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_get_m_BloomParamsPrev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BloomParamsPrev;
}
constexpr void UnityEngine::Rendering::Universal::PostProcessPass::__cordl_internal_set_m_BloomParamsPrev(::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BloomParamsPrev = value;
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::setStaticF_m_ProfilingRenderPostProcessing(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingRenderPostProcessing", ::UnityEngine::Rendering::Universal::PostProcessPass*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::PostProcessPass::getStaticF_m_ProfilingRenderPostProcessing() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingRenderPostProcessing", ::UnityEngine::Rendering::Universal::PostProcessPass*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::setStaticF_m_ProfilingRenderFinalPostProcessing(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingRenderFinalPostProcessing", ::UnityEngine::Rendering::Universal::PostProcessPass*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::PostProcessPass::getStaticF_m_ProfilingRenderFinalPostProcessing() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "m_ProfilingRenderFinalPostProcessing", ::UnityEngine::Rendering::Universal::PostProcessPass*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::setStaticF_k_ShaderPropertyId_ViewProjM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShaderPropertyId_ViewProjM", ::UnityEngine::Rendering::Universal::PostProcessPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass::getStaticF_k_ShaderPropertyId_ViewProjM() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShaderPropertyId_ViewProjM", ::UnityEngine::Rendering::Universal::PostProcessPass*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::setStaticF_k_ShaderPropertyId_PrevViewProjM(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShaderPropertyId_PrevViewProjM", ::UnityEngine::Rendering::Universal::PostProcessPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass::getStaticF_k_ShaderPropertyId_PrevViewProjM() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShaderPropertyId_PrevViewProjM", ::UnityEngine::Rendering::Universal::PostProcessPass*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::setStaticF_k_ShaderPropertyId_ViewProjMStereo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShaderPropertyId_ViewProjMStereo", ::UnityEngine::Rendering::Universal::PostProcessPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass::getStaticF_k_ShaderPropertyId_ViewProjMStereo() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShaderPropertyId_ViewProjMStereo", ::UnityEngine::Rendering::Universal::PostProcessPass*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::setStaticF_k_ShaderPropertyId_PrevViewProjMStereo(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "k_ShaderPropertyId_PrevViewProjMStereo", ::UnityEngine::Rendering::Universal::PostProcessPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass::getStaticF_k_ShaderPropertyId_PrevViewProjMStereo() {
  return ::cordl_internals::getStaticField<int32_t, "k_ShaderPropertyId_PrevViewProjMStereo", ::UnityEngine::Rendering::Universal::PostProcessPass*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::setStaticF_s_CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::PostProcessPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::PostProcessPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::PostProcessPass*>();
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                      ::by_ref<::UnityEngine::Rendering::Universal::PostProcessParams> postProcessParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::PostProcessData*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, data, postProcessParams);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "Cleanup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::Setup(::by_ref<::UnityEngine::RenderTextureDescriptor> baseDescriptor, ::by_ref<::UnityEngine::Rendering::RTHandle*> source,
                                                                      bool resolveToScreen, ::by_ref<::UnityEngine::Rendering::RTHandle*> depth,
                                                                      ::by_ref<::UnityEngine::Rendering::RTHandle*> internalLut, ::by_ref<::UnityEngine::Rendering::RTHandle*> motionVectors,
                                                                      bool hasFinalPass, bool enableColorEncoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                       { "Setup",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseDescriptor, source, resolveToScreen, depth, internalLut, motionVectors, hasFinalPass, enableColorEncoding);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupFinalPass(::by_ref<::UnityEngine::Rendering::RTHandle*> source, bool useSwapBuffer, bool enableColorEncoding) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "SetupFinalPass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, useSwapBuffer, enableColorEncoding);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPass::CanRunOnTile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "CanRunOnTile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                        ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPass::IsHDRFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                         { "IsHDRFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPass::IsAlphaFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                         { "IsAlphaFormat", {}, { ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, format);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::PostProcessPass::GetCompatibleDescriptor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "GetCompatibleDescriptor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::PostProcessPass::GetCompatibleDescriptor(int32_t width, int32_t height,
                                                                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "GetCompatibleDescriptor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(),
                                                               ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method, width, height, format, depthStencilFormat);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::PostProcessPass::GetCompatibleDescriptor(::UnityEngine::RenderTextureDescriptor desc, int32_t width, int32_t height,
                                                                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                                                                          ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                       { "GetCompatibleDescriptor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method, desc, width, height, format, depthStencilFormat);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPass::RequireSRGBConversionBlitToBackBuffer(bool requireSrgbConversion) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "RequireSRGBConversionBlitToBackBuffer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requireSrgbConversion);
}
inline bool UnityEngine::Rendering::Universal::PostProcessPass::RequireHDROutput(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                         { "RequireHDROutput", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "Render", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::DoSubpixelMorphologicalAntialiasing(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                                                                                    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source,
                                                                                                    ::UnityEngine::Rendering::RTHandle* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "DoSubpixelMorphologicalAntialiasing",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, cmd, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::DoDepthOfField(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                               ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                                                               ::UnityEngine::Rect pixelRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                       { "DoDepthOfField",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, cmd, source, destination, pixelRect);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::DoGaussianDepthOfField(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source,
                                                                                       ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rect pixelRect, bool enableAlphaOutput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "DoGaussianDepthOfField",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destination, pixelRect, enableAlphaOutput);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::PrepareBokehKernel(float_t maxRadius, float_t rcpAspect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                         { "PrepareBokehKernel", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxRadius, rcpAspect);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPass::GetMaxBokehRadiusInPixels(float_t viewportHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "GetMaxBokehRadiusInPixels", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, viewportHeight);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::DoBokehDepthOfField(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source,
                                                                                    ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rect pixelRect, bool enableAlphaOutput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "DoBokehDepthOfField",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destination, pixelRect, enableAlphaOutput);
}
inline float_t UnityEngine::Rendering::Universal::PostProcessPass::GetLensFlareLightAttenuation(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "GetLensFlareLightAttenuation", {}, { ::i2c::type_of<::UnityEngine::Light*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, light, cam, wo);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::LensFlareDataDrivenComputeOcclusion(::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData,
                                                                                                    ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                                    ::UnityEngine::Rendering::RenderTargetIdentifier source, bool usePanini, float_t paniniDistance,
                                                                                                    float_t paniniCropToFit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                       { "LensFlareDataDrivenComputeOcclusion",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, cmd, source, usePanini, paniniDistance, paniniCropToFit);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::LensFlareDataDriven(::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData,
                                                                                    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                    bool usePanini, float_t paniniDistance, float_t paniniCropToFit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                       { "LensFlareDataDriven",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, cmd, source, usePanini, paniniDistance, paniniCropToFit);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::DoLensFlareScreenSpace(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                       ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                                                                       ::UnityEngine::Rendering::RTHandle* originalBloomTexture,
                                                                                       ::UnityEngine::Rendering::RTHandle* screenSpaceLensFlareBloomMipTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "DoLensFlareScreenSpace",
                            {},
                            { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, cmd, source, originalBloomTexture, screenSpaceLensFlareBloomMipTexture);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::UpdateMotionBlurMatrices(::by_ref<::UnityEngine::Material*> material, ::UnityEngine::Camera* camera,
                                                                                         ::UnityEngine::Experimental::Rendering::XRPass* xr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "UpdateMotionBlurMatrices",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, camera, xr);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::DoMotionBlur(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source,
                                                                             ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rendering::RTHandle* motionVectors,
                                                                             ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "DoMotionBlur",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, destination, motionVectors, cameraData);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::DoPaniniProjection(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                   ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "DoPaniniProjection",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, cmd, source, destination);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::PostProcessPass::CalcViewExtents(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "CalcViewExtents", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, camera);
}
inline ::UnityEngine::Vector2 UnityEngine::Rendering::Universal::PostProcessPass::CalcCropExtents(::UnityEngine::Camera* camera, float_t d) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                         { "CalcCropExtents", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, camera, d);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupBloom(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source,
                                                                           ::UnityEngine::Material* uberMaterial, bool enableAlphaOutput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "SetupBloom",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, source, uberMaterial, enableAlphaOutput);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupLensDistortion(::UnityEngine::Material* material, bool isSceneView) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                                                         { "SetupLensDistortion", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, isSceneView);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupChromaticAberration(::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(), { "SetupChromaticAberration", {}, { ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupVignette(::UnityEngine::Material* material, ::UnityEngine::Experimental::Rendering::XRPass* xrPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "SetupVignette", {}, { ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, xrPass);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupColorGrading(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                  ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ::UnityEngine::Material* material) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "SetupColorGrading",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupGrain(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "SetupGrain", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupDithering(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "SetupDithering", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, material);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::SetupHDROutput(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayInformation,
                                                                               ::UnityEngine::ColorGamut hdrDisplayColorGamut, ::UnityEngine::Material* material,
                                                                               ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations, bool rendersOverlayUI) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "SetupHDROutput",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(), ::i2c::type_of<::UnityEngine::ColorGamut>(),
                                                  ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_Operation>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hdrDisplayInformation, hdrDisplayColorGamut, material, hdrOperations, rendersOverlayUI);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalPass(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderFinalPass", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::UpdateCameraResolution(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                       ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                       ::UnityEngine::Vector2Int newCameraTargetSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "UpdateCameraResolution",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Vector2Int>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, newCameraTargetSize);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderStopNaN(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                              ::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor,
                                                                              ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> activeCameraColor,
                                                                              ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> stopNaNTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "RenderStopNaN",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraTargetDescriptor, activeCameraColor, stopNaNTarget);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderSMAA(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                           ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                           ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality,
                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> SMAATarget) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderSMAA",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::AntialiasingQuality>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, antialiasingQuality, source, SMAATarget);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::UberPostSetupBloomPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* rendergraph,
                                                                                       ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> bloomTexture,
                                                                                       ::UnityEngine::Material* uberMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "UberPostSetupBloomPass",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Material*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rendergraph, bloomTexture, uberMaterial);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderBloomTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                   ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                   ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination, bool enableAlphaOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderBloomTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, source, destination, enableAlphaOutput);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderDoF(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                          ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderDoF",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderDoFGaussian(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                  ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                  ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                  ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                                                                                  ::by_ref<::UnityEngine::Material*> dofMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderDoFGaussian",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination, dofMaterial);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderDoFBokeh(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                               ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                               ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                               ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                               ::by_ref<::UnityEngine::Material*> dofMaterial) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderDoFBokeh",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination, dofMaterial);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderPaniniProjection(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera,
                                                                                       ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                       ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "RenderPaniniProjection",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, camera, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderTemporalAA(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                 ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                 ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderTemporalAA",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderSTP(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                          ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderSTP",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderMotionBlur(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                 ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                 ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderMotionBlur",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, source, destination);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::LensFlareDataDrivenComputeOcclusion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                    ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                       { "LensFlareDataDrivenComputeOcclusion",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderLensFlareDataDriven(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                          ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                       { "RenderLensFlareDataDriven",
                         {},
                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, destination);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Universal::PostProcessPass::RenderLensFlareScreenSpace(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle originalBloomTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle screenSpaceLensFlareBloomMipTexture, bool enableXR) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderLensFlareScreenSpace",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                              ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph, camera, destination, originalBloomTexture,
                                                                                                         screenSpaceLensFlareBloomMipTexture, enableXR);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::ScaleViewportAndBlit(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sourceTextureHdl,
                                                                                     ::UnityEngine::Rendering::RTHandle* dest, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                     ::UnityEngine::Material* material, bool hasFinalPass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "ScaleViewportAndBlit",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                               ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sourceTextureHdl, dest, cameraData, material, hasFinalPass);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalSetup(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                 ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                 ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                       { "RenderFinalSetup",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, source, destination, settings);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalFSRScale(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination, bool enableAlphaOutput) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                          { "RenderFinalFSRScale",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, source, destination, enableAlphaOutput);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalBlit(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget,
                                                                                ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings> settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                       { "RenderFinalBlit",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, source, overlayUITexture, postProcessingTarget, settings);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderFinalPassRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                           ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget,
                                                                                           bool enableColorEncodingIfNeeded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "RenderFinalPassRenderGraph",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, source, overlayUITexture, postProcessingTarget, enableColorEncodingIfNeeded);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::PostProcessPass::TryGetCachedUserLutTextureHandle(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "TryGetCachedUserLutTextureHandle", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderUberPost(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* postProcessingData, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> sourceTexture,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destTexture, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> lutTexture,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture, bool requireHDROutput, bool enableAlphaOutput, bool resolveToDebugScreen, bool hasFinalPass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
          { "RenderUberPost",
            {},
            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, cameraData, postProcessingData, sourceTexture, destTexture, lutTexture, overlayUITexture,
                                                   requireHDROutput, enableAlphaOutput, resolveToDebugScreen, hasFinalPass);
}
inline void UnityEngine::Rendering::Universal::PostProcessPass::RenderPostProcessingRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> activeCameraColorTexture,
                                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> lutTexture,
                                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
                                                                                                ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget,
                                                                                                bool hasFinalPass, bool resolveToDebugScreen, bool enableColorEndingIfNeeded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
          { "RenderPostProcessingRenderGraph",
            {},
            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, activeCameraColorTexture, lutTexture, overlayUITexture, postProcessingTarget, hasFinalPass,
                                                   resolveToDebugScreen, enableColorEndingIfNeeded);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Rendering::Universal::PostProcessPass::_Render_g__GetSource_89_0(::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "<Render>g__GetSource|89_0", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::PostProcessPass::_Render_g__GetDestination_89_1(
    ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                              { "<Render>g__GetDestination|89_1", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void
UnityEngine::Rendering::Universal::PostProcessPass::_Render_g__Swap_89_2(::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*> r,
                                                                         ::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessPass*>(),
                                                           { "<Render>g__Swap|89_2",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass*
UnityEngine::Rendering::Universal::PostProcessPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                             ::by_ref<::UnityEngine::Rendering::Universal::PostProcessParams> postProcessParams) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::PostProcessPass*>(evt, data, postProcessParams));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessPass::PostProcessPass() {}
