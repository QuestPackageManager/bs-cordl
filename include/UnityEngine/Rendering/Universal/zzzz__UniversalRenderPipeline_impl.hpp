#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipeline.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipeline_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_impl.hpp"
#include "UnityEngine/zzzz__CubemapFace_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipeline_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__LightDataGI_def.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Lightmapping_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRColorBufferPrecision_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageUpscalingFilter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RTHandleResourcePool_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Tonemapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalAdditionalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalPostProcessingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineAsset_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineGlobalSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipelineRuntimeTextures_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderPipeline_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalShadowData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UpscalingFilterSelection_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::*)()>(
    &::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dd004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::__cordl_internal_get_sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const&
UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::__cordl_internal_get_sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
constexpr void
UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::__cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sampler = value;
}
inline void UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*
UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache.GetCached
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* (*)(::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache::GetCached)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x68dce3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*>(),
                                                                                           { "GetCached", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache::setStaticF_s_MetadataCache(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>*,
                                    "s_MetadataCache", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>*
UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache::getStaticF_s_MetadataCache() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>*, "s_MetadataCache",
      ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache::setStaticF_k_NoAllocEntry(
    ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*, "k_NoAllocEntry",
                                    ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*>(
      std::forward<::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>(value));
}
inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*
UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache::getStaticF_k_NoAllocEntry() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*, "k_NoAllocEntry",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*>();
}
inline ::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*
UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache::GetCached(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache*>(),
                                                                                         { "GetCached", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CameraMetadataCache_UniversalRenderPipeline_CameraMetadataCacheEntry*>(nullptr, ___internal_method, camera);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraMetadataCache::UniversalRenderPipeline_CameraMetadataCache() {}
inline void UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer::setStaticF_setupCullingParameters(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupCullingParameters", ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer::getStaticF_setupCullingParameters() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupCullingParameters",
                                           ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer*>();
}
inline void UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer::setStaticF_setup(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setup", ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer::getStaticF_setup() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setup", ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Renderer::Pipeline_Profiling_UniversalRenderPipeline_Renderer() {}
inline void UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context::setStaticF_submit(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "submit", ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context::getStaticF_submit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "submit", ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Pipeline_Profiling_UniversalRenderPipeline_Context::Pipeline_Profiling_UniversalRenderPipeline_Context() {}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_initializeCameraData(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeCameraData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_initializeCameraData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeCameraData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_initializeStackedCameraData(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeStackedCameraData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_initializeStackedCameraData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeStackedCameraData",
                                           ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_initializeAdditionalCameraData(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeAdditionalCameraData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_initializeAdditionalCameraData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeAdditionalCameraData",
                                           ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_initializeRenderingData(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeRenderingData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_initializeRenderingData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeRenderingData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_initializeShadowData(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeShadowData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_initializeShadowData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeShadowData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_initializeLightData(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeLightData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_initializeLightData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initializeLightData", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_buildAdditionalLightsShadowAtlasLayout(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "buildAdditionalLightsShadowAtlasLayout",
                                    ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_buildAdditionalLightsShadowAtlasLayout() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "buildAdditionalLightsShadowAtlasLayout",
                                           ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_getPerObjectLightFlags(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "getPerObjectLightFlags", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_getPerObjectLightFlags() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "getPerObjectLightFlags", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_getMainLightIndex(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "getMainLightIndex", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_getMainLightIndex() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "getMainLightIndex", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_setupPerFrameShaderConstants(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupPerFrameShaderConstants", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_setupPerFrameShaderConstants() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupPerFrameShaderConstants",
                                           ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::setStaticF_setupPerCameraShaderConstants(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupPerCameraShaderConstants", ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::getStaticF_setupPerCameraShaderConstants() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupPerCameraShaderConstants",
                                           ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Profiling_UniversalRenderPipeline_Pipeline::Profiling_UniversalRenderPipeline_Pipeline() {}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_Profiling::UniversalRenderPipeline_Profiling() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x68dd598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68dd644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::setStaticF_beginCameraRenderingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginCameraRenderingSampler", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::getStaticF_beginCameraRenderingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginCameraRenderingSampler",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::setStaticF_endCameraRenderingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endCameraRenderingSampler", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::getStaticF_endCameraRenderingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endCameraRenderingSampler",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::_ctor(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Camera", ty:
// "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::UniversalRenderPipeline_CameraRenderingScope(::UnityEngine::Rendering::ScriptableRenderContext m_Context,
                                                                                                                                          ::UnityW<::UnityEngine::Camera> m_Camera) noexcept {
  this->m_Context = m_Context;
  this->m_Camera = m_Camera;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_CameraRenderingScope::UniversalRenderPipeline_CameraRenderingScope() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x68dd7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68dd85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::setStaticF_beginContextRenderingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginContextRenderingSampler", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::getStaticF_beginContextRenderingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginContextRenderingSampler",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::setStaticF_endContextRenderingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endContextRenderingSampler", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::getStaticF_endContextRenderingSampler() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endContextRenderingSampler",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::_ctor(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, cameras);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Context", ty: "::UnityEngine::Rendering::ScriptableRenderContext", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Cameras", ty:
// "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::UniversalRenderPipeline_ContextRenderingScope(
    ::UnityEngine::Rendering::ScriptableRenderContext m_Context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* m_Cameras) noexcept {
  this->m_Context = m_Context;
  this->m_Cameras = m_Cameras;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_ContextRenderingScope::UniversalRenderPipeline_ContextRenderingScope() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68dd9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_set_destination(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___destination = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_get_mipLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipLevel;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_get_mipLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mipLevel;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_set_mipLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mipLevel = value;
}
constexpr ::UnityEngine::CubemapFace& UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_get_face() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr ::UnityEngine::CubemapFace const& UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_get_face() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___face;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_set_face(::UnityEngine::CubemapFace value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___face = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_get_slice() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___slice;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_get_slice() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___slice;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::__cordl_internal_set_slice(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___slice = value;
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest* UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline_SingleCameraRequest::UniversalRenderPipeline_SingleCameraRequest() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68dda20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c.__ctor_b__47_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::*)(::UnityEngine::Camera*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::__ctor_b__47_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68dda24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(),
                                                             { "<.ctor>b__47_0", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c.__cctor_b__122_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::*)(
    ::ArrayW<::UnityEngine::Light*>, ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::__cctor_b__122_0)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x68dda8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(),
                                                             { "<.cctor>b__122_0",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::Light*>>(),
                                                                 ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::setStaticF___9(::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*, "<>9", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(
      std::forward<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*, "<>9", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::setStaticF___9__47_0(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*, "<>9__47_0", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(
      std::forward<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::getStaticF___9__47_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*, "<>9__47_0", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::__ctor_b__47_0(::UnityEngine::Camera* camera1, ::UnityEngine::Camera* camera2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(),
                                                           { "<.ctor>b__47_0", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, camera1, camera2);
}
inline void
UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::__cctor_b__122_0(::ArrayW<::UnityEngine::Light*> requests,
                                                                                 ::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>(),
                                                           { "<.cctor>b__122_0",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::Light*>>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Experimental::GlobalIllumination::LightDataGI>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requests, lightsOutput);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c* UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline___c::UniversalRenderPipeline___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_maxShadowBias
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxShadowBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d30c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxShadowBias", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_minRenderScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_minRenderScale)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68d30c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_minRenderScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_maxRenderScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxRenderScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d30d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxRenderScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_maxNumIterationsEnclosingSphere
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxNumIterationsEnclosingSphere)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d30dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxNumIterationsEnclosingSphere", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_maxPerObjectLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxPerObjectLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d30e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxPerObjectLights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_maxVisibleAdditionalLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxVisibleAdditionalLights)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68caa24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxVisibleAdditionalLights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_lightsPerTile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_lightsPerTile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68d30ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_lightsPerTile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_maxZBinWords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxZBinWords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d3144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxZBinWords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_maxTileWords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxTileWords)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68d314c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxTileWords", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_maxVisibleReflectionProbes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxVisibleReflectionProbes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68d31a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxVisibleReflectionProbes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_runtimeTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* (
    ::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_runtimeTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d3224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_runtimeTextures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.set_runtimeTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::set_runtimeTextures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d322c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "set_runtimeTextures", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_defaultSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_defaultSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d3234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_canOptimizeScreenMSAASamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_canOptimizeScreenMSAASamples)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68d323c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_canOptimizeScreenMSAASamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.set_canOptimizeScreenMSAASamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::set_canOptimizeScreenMSAASamples)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68d3298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "set_canOptimizeScreenMSAASamples", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_startFrameScreenMSAASamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_startFrameScreenMSAASamples)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x68d32fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_startFrameScreenMSAASamples", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.set_startFrameScreenMSAASamples
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::set_startFrameScreenMSAASamples)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68d3358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "set_startFrameScreenMSAASamples", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68d33b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::_ctor)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x68d33d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Dispose)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x68d3dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.DisposeAdditionalCameraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::DisposeAdditionalCameraData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x68d40c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "DisposeAdditionalCameraData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Render)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x68d4180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::Render)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x68d4218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.RenderSingleCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCamera)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x68d6754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                { "RenderSingleCamera", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.RenderSingleCameraInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCameraInternal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x68d6688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                         { "RenderSingleCameraInternal", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.RenderSingleCameraInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCameraInternal)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x68d67bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "RenderSingleCameraInternal",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.TryGetCullingParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::TryGetCullingParameters)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x68d8a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                            { "TryGetCullingParameters",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.RenderSingleCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCamera)> {
  constexpr static std::size_t size = 0x1130;
  constexpr static std::size_t addrs = 0x68d7964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
            { "RenderSingleCamera", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CreateShadowAtlasAndCullShadowCasters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
                         ::by_ref<::UnityEngine::Rendering::CullingResults>, ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateShadowAtlasAndCullShadowCasters)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x68da55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                         { "CreateShadowAtlasAndCullShadowCasters",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.RenderCameraStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderCameraStack)> {
  constexpr static std::size_t size = 0x14b8;
  constexpr static std::size_t addrs = 0x68d4f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                { "RenderCameraStack", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.UpdateCameraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Experimental::Rendering::XRPass*>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateCameraData)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x68dac90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
            { "UpdateCameraData", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::Rendering::XRPass*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.UpdateVolumeFramework
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateVolumeFramework)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x68d63d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                            { "UpdateVolumeFramework", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CheckPostProcessForDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CheckPostProcessForDepth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68db000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "CheckPostProcessForDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CheckPostProcessForDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CheckPostProcessForDepth)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x68daa30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "CheckPostProcessForDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.SetSupportedRenderingFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetSupportedRenderingFeatures)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x68d3d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "SetSupportedRenderingFeatures", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer* (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetRenderer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68d6b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                         { "GetRenderer", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CreateCameraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalCameraData* (*)(::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Camera*,
                                                                                                                     ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateCameraData)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x68d6c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "CreateCameraData",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.InitializeStackedCameraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeStackedCameraData)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x68db094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "InitializeStackedCameraData",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.InitializeAdditionalCameraData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, bool, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeAdditionalCameraData)> {
  constexpr static std::size_t size = 0x7a8;
  constexpr static std::size_t addrs = 0x68d71bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "InitializeAdditionalCameraData",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CreateRenderingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::Universal::UniversalRenderingData* (*)(::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*,
                                                                                 ::UnityEngine::Rendering::CommandBuffer*, bool, ::UnityEngine::Rendering::Universal::ScriptableRenderer*)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateRenderingData)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x68da1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                            { "CreateRenderingData",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CreateShadowData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::Universal::UniversalShadowData* (*)(::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, bool)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateShadowData)> {
  constexpr static std::size_t size = 0xdcc;
  constexpr static std::size_t addrs = 0x68d931c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "CreateShadowData",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetMainLightCascadeSplit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int32_t, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetMainLightCascadeSplit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68dbf00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                         { "GetMainLightCascadeSplit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.InitializeMainLightShadowResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalShadowData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeMainLightShadowResolution)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x68da770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "InitializeMainLightShadowResolution", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CreatePostProcessingData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::Universal::UniversalPostProcessingData* (*)(::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreatePostProcessingData)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x68da0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                         { "CreatePostProcessingData",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CreateUniversalResourceData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalResourceData* (*)(::UnityEngine::Rendering::ContextContainer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateUniversalResourceData)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68d9084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                           { "CreateUniversalResourceData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CreateLightData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::Universal::UniversalLightData* (*)(::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*,
                                                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateLightData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x68d90d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                { "CreateLightData",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>(),
                                                    ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.ApplyTaaRenderingDebugOverrides
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::ApplyTaaRenderingDebugOverrides)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x68dbd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "ApplyTaaRenderingDebugOverrides", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.UpdateTemporalAAData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateTemporalAAData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x68dbc14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                           { "UpdateTemporalAAData",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.UpdateTemporalAATargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateTemporalAATargets)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x68d8f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "UpdateTemporalAATargets", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.UpdateCameraStereoMatrices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Camera*, ::UnityEngine::Experimental::Rendering::XRPass*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateCameraStereoMatrices)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x68dab1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                         { "UpdateCameraStereoMatrices", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetPerObjectLightFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PerObjectData (*)(int32_t, bool, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetPerObjectLightFlags)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x68dbe08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "GetPerObjectLightFlags", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetMainLightIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetMainLightIndex)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x68dbf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                           { "GetMainLightIndex",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>(),
                                                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.SetupPerFrameShaderConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetupPerFrameShaderConstants)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x68d4aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "SetupPerFrameShaderConstants", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.SetupPerCameraShaderConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetupPerCameraShaderConstants)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x68d8c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                           { "SetupPerCameraShaderConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CheckAndApplyDebugSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CheckAndApplyDebugSettings)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x68da32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "CheckAndApplyDebugSettings", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.ResolveUpscalingFilterSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::Rendering::Universal::ImageUpscalingFilter (*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Rendering::Universal::UpscalingFilterSelection, bool)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::ResolveUpscalingFilterSelection)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x68dba48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "ResolveUpscalingFilterSelection",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UpscalingFilterSelection>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.HDROutputForMainDisplayIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::HDROutputForMainDisplayIsActive)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x68da930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "HDROutputForMainDisplayIsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.HDROutputForAnyDisplayIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::HDROutputForAnyDisplayIsActive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68dc17c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "HDROutputForAnyDisplayIsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.SetHDRState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetHDRState)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x68d476c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "SetHDRState", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetHDROutputLuminanceParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation, ::UnityEngine::ColorGamut,
                                                                ::UnityEngine::Rendering::Universal::Tonemapping*, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetHDROutputLuminanceParameters)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68dc22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "GetHDROutputLuminanceParameters",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(), ::i2c::type_of<::UnityEngine::ColorGamut>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetHDROutputGradingParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::Tonemapping*, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetHDROutputGradingParameters)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68dc31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                            { "GetHDROutputGradingParameters", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.BuildAdditionalLightsShadowAtlasLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout (*)(
    ::UnityEngine::Rendering::Universal::UniversalLightData*, ::UnityEngine::Rendering::Universal::UniversalShadowData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::BuildAdditionalLightsShadowAtlasLayout)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x68da81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                         { "BuildAdditionalLightsShadowAtlasLayout",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.AdjustUIOverlayOwnership
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::AdjustUIOverlayOwnership)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68d48cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "AdjustUIOverlayOwnership", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.SetupScreenMSAASamplesState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetupScreenMSAASamplesState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x68d4994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "SetupScreenMSAASamplesState", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.IsGameCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::IsGameCamera)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x68d4e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "IsGameCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.get_asset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> (*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_asset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x68c58f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_asset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.SortCameras
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderPipeline::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::SortCameras)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68d4dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "SortCameras", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.MakeRenderTextureGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(bool, ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::MakeRenderTextureGraphicsFormat)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68c599c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
            { "MakeRenderTextureGraphicsFormat", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.MakeUnormRenderTextureGraphicsFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::MakeUnormRenderTextureGraphicsFormat)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68dc3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "MakeUnormRenderTextureGraphicsFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.CreateRenderTextureDescriptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool,
                                                                                                  ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision, int32_t, bool, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateRenderTextureDescriptor)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x68db748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                            { "CreateRenderTextureDescriptor",
                              {},
                              { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetLightAttenuationAndSpotDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::LightType, float_t, ::UnityEngine::Matrix4x4, float_t, ::System::Nullable_1<float_t>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetLightAttenuationAndSpotDirection)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x68dc42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                            { "GetLightAttenuationAndSpotDirection",
                              {},
                              { ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetPunctualLightDistanceAttenuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetPunctualLightDistanceAttenuation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68dc578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                             { "GetPunctualLightDistanceAttenuation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetSpotAngleAttenuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::System::Nullable_1<float_t>, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetSpotAngleAttenuation)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x68dc5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                            { "GetSpotAngleAttenuation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.GetSpotDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetSpotDirection)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68dc5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                { "GetSpotDirection", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.InitializeLightConstants_Common
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>, int32_t, ::by_ref<::UnityEngine::Vector4>,
                                                                ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Vector4>,
                                                                ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeLightConstants_Common)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x68dc6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                         { "InitializeLightConstants_Common",
                                           {},
                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::ScriptableRenderer*)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68dca60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                { "RecordRenderGraph",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderPipeline.RecordAndExecuteRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext,
                                                                ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::StringW)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderPipeline::RecordAndExecuteRenderGraph)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x68da68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                { "RecordAndExecuteRenderGraph",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                    ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsUI*& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_m_DebugDisplaySettingsUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugDisplaySettingsUI;
}
constexpr ::UnityEngine::Rendering::DebugDisplaySettingsUI* const& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_m_DebugDisplaySettingsUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugDisplaySettingsUI;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_set_m_DebugDisplaySettingsUI(::UnityEngine::Rendering::DebugDisplaySettingsUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugDisplaySettingsUI = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings>& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_m_GlobalSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalSettings;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> const&
UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_m_GlobalSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GlobalSettings;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_set_m_GlobalSettings(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GlobalSettings = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*&
UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get__runtimeTextures_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtimeTextures_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* const&
UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get__runtimeTextures_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____runtimeTextures_k__BackingField;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_set__runtimeTextures_k__BackingField(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____runtimeTextures_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_apvIsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___apvIsEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_apvIsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___apvIsEnabled;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_set_apvIsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___apvIsEnabled = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_pipelineAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pipelineAsset;
}
constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> const& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_pipelineAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pipelineAsset;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_set_pipelineAsset(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pipelineAsset = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_enableHDROnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableHDROnce;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_enableHDROnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableHDROnce;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_set_enableHDROnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableHDROnce = value;
}
constexpr ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>*& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_cameraComparison() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraComparison;
}
constexpr ::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* const& UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_get_cameraComparison() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraComparison;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderPipeline::__cordl_internal_set_cameraComparison(::System::Comparison_1<::UnityW<::UnityEngine::Camera>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraComparison = value;
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_cameraStackRequiresDepthForPostprocessing(bool value) {
  ::cordl_internals::setStaticField<bool, "cameraStackRequiresDepthForPostprocessing", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_cameraStackRequiresDepthForPostprocessing() {
  return ::cordl_internals::getStaticField<bool, "cameraStackRequiresDepthForPostprocessing", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_s_RenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, "s_RenderGraph", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_s_RenderGraph() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, "s_RenderGraph", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_s_RTHandlePool(::UnityEngine::Rendering::Universal::RTHandleResourcePool* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::RTHandleResourcePool*, "s_RTHandlePool", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(
      std::forward<::UnityEngine::Rendering::Universal::RTHandleResourcePool*>(value));
}
inline ::UnityEngine::Rendering::Universal::RTHandleResourcePool* UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_s_RTHandlePool() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::RTHandleResourcePool*, "s_RTHandlePool", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_useRenderGraph(bool value) {
  ::cordl_internals::setStaticField<bool, "useRenderGraph", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_useRenderGraph() {
  return ::cordl_internals::getStaticField<bool, "useRenderGraph", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF__canOptimizeScreenMSAASamples_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<canOptimizeScreenMSAASamples>k__BackingField", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF__canOptimizeScreenMSAASamples_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<canOptimizeScreenMSAASamples>k__BackingField", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF__startFrameScreenMSAASamples_k__BackingField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "<startFrameScreenMSAASamples>k__BackingField", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF__startFrameScreenMSAASamples_k__BackingField() {
  return ::cordl_internals::getStaticField<int32_t, "<startFrameScreenMSAASamples>k__BackingField", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_k_DefaultLightPosition(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "k_DefaultLightPosition", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_k_DefaultLightPosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "k_DefaultLightPosition", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_k_DefaultLightColor(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "k_DefaultLightColor", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_k_DefaultLightColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "k_DefaultLightColor", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_k_DefaultLightAttenuation(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "k_DefaultLightAttenuation", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_k_DefaultLightAttenuation() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "k_DefaultLightAttenuation", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_k_DefaultLightSpotDirection(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "k_DefaultLightSpotDirection", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_k_DefaultLightSpotDirection() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "k_DefaultLightSpotDirection", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_k_DefaultLightsProbeChannel(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "k_DefaultLightsProbeChannel", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_k_DefaultLightsProbeChannel() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "k_DefaultLightsProbeChannel", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_m_ShadowBiasData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, "m_ShadowBiasData", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_m_ShadowBiasData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, "m_ShadowBiasData", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_m_ShadowResolutionData(::System::Collections::Generic::List_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "m_ShadowResolutionData", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(
      std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_m_ShadowResolutionData() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "m_ShadowResolutionData", ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::setStaticF_lightsDelegate(::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*, "lightsDelegate",
                                    ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(
      std::forward<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*>(value));
}
inline ::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate* UnityEngine::Rendering::Universal::UniversalRenderPipeline::getStaticF_lightsDelegate() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::GlobalIllumination::Lightmapping_RequestLightsDelegate*, "lightsDelegate",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>();
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxShadowBias() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxShadowBias", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_minRenderScale() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_minRenderScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxRenderScale() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxRenderScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxNumIterationsEnclosingSphere() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxNumIterationsEnclosingSphere", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxPerObjectLights() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxPerObjectLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxVisibleAdditionalLights() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxVisibleAdditionalLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_lightsPerTile() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_lightsPerTile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxZBinWords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxZBinWords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxTileWords() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxTileWords", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_maxVisibleReflectionProbes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_maxVisibleReflectionProbes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_runtimeTextures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_runtimeTextures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::set_runtimeTextures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "set_runtimeTextures", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings> UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_defaultSettings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::RenderPipelineGlobalSettings>>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_canOptimizeScreenMSAASamples() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_canOptimizeScreenMSAASamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::set_canOptimizeScreenMSAASamples(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "set_canOptimizeScreenMSAASamples", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_startFrameScreenMSAASamples() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_startFrameScreenMSAASamples", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::set_startFrameScreenMSAASamples(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "set_startFrameScreenMSAASamples", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::Universal::UniversalRenderPipeline::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::_ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::DisposeAdditionalCameraData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "DisposeAdditionalCameraData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::Render(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::ArrayW<::UnityEngine::Camera*> cameras) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderContext, cameras);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::Render(::UnityEngine::Rendering::ScriptableRenderContext renderContext,
                                                                               ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderContext, cameras);
}
template <typename RequestData> inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::IsRenderRequestSupported(::UnityEngine::Camera* camera, RequestData data) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 6 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<RequestData>() }));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera, data);
}
template <typename RequestData>
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::ProcessRenderRequests(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera,
                                                                                              RequestData renderRequest) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), 5 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<RequestData>() }));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera, renderRequest);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                              { "RenderSingleCamera", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCameraInternal(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                       { "RenderSingleCameraInternal", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCameraInternal(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera,
                                                                                                   ::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*> additionalCameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "RenderSingleCameraInternal",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, camera, additionalCameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::TryGetCullingParameters(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                ::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                          { "TryGetCullingParameters",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData, cullingParams);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderSingleCamera(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                           ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
          { "RenderSingleCamera", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateShadowAtlasAndCullShadowCasters(::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                              ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                              ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                              ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                              ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext> context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                       { "CreateShadowAtlasAndCullShadowCasters",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CullingResults>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ScriptableRenderContext>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lightData, shadowData, cameraData, cullResults, context);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::RenderCameraStack(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* baseCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                              { "RenderCameraStack", {}, { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, baseCamera);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateCameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* baseCameraData,
                                                                                         ::by_ref<::UnityEngine::Experimental::Rendering::XRPass*> xr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
          { "UpdateCameraData", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Experimental::Rendering::XRPass*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCameraData, xr);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateVolumeFramework(::UnityEngine::Camera* camera,
                                                                                              ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                          { "UpdateVolumeFramework", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, additionalCameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::CheckPostProcessForDepth(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "CheckPostProcessForDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::CheckPostProcessForDepth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "CheckPostProcessForDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetSupportedRenderingFeatures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* pipelineAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "SetSupportedRenderingFeatures", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pipelineAsset);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer*
UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetRenderer(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                       { "GetRenderer", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(nullptr, ___internal_method, camera, additionalCameraData);
}
inline ::UnityEngine::Rendering::Universal::UniversalCameraData*
UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateCameraData(::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Camera* camera,
                                                                             ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData, bool resolveFinalTarget) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "CreateCameraData",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalCameraData*>(nullptr, ___internal_method, frameData, camera, additionalCameraData, resolveFinalTarget);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeStackedCameraData(::UnityEngine::Camera* baseCamera,
                                                                                                    ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* baseAdditionalCameraData,
                                                                                                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "InitializeStackedCameraData",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCamera, baseAdditionalCameraData, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeAdditionalCameraData(::UnityEngine::Camera* camera,
                                                                                                       ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData,
                                                                                                       bool resolveFinalTarget, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "InitializeAdditionalCameraData",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, additionalCameraData, resolveFinalTarget, cameraData);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderingData* UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateRenderingData(
    ::UnityEngine::Rendering::ContextContainer* frameData, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings, ::UnityEngine::Rendering::CommandBuffer* cmd,
    bool isForwardPlus, ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                          { "CreateRenderingData",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(nullptr, ___internal_method, frameData, settings, cmd, isForwardPlus, renderer);
}
inline ::UnityEngine::Rendering::Universal::UniversalShadowData*
UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateShadowData(::UnityEngine::Rendering::ContextContainer* frameData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* urpAsset, bool isForwardPlus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "CreateShadowData",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalShadowData*>(nullptr, ___internal_method, frameData, urpAsset, isForwardPlus);
}
inline ::UnityEngine::Vector3 UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetMainLightCascadeSplit(int32_t mainLightShadowCascadesCount,
                                                                                                                   ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* urpAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                       { "GetMainLightCascadeSplit", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, mainLightShadowCascadesCount, urpAsset);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeMainLightShadowResolution(::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "InitializeMainLightShadowResolution", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, shadowData);
}
inline ::UnityEngine::Rendering::Universal::UniversalPostProcessingData*
UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreatePostProcessingData(::UnityEngine::Rendering::ContextContainer* frameData,
                                                                                     ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                       { "CreatePostProcessingData",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*>(nullptr, ___internal_method, frameData, settings);
}
inline ::UnityEngine::Rendering::Universal::UniversalResourceData*
UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateUniversalResourceData(::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                         { "CreateUniversalResourceData", {}, { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalResourceData*>(nullptr, ___internal_method, frameData);
}
inline ::UnityEngine::Rendering::Universal::UniversalLightData*
UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateLightData(::UnityEngine::Rendering::ContextContainer* frameData,
                                                                            ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                                                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                              { "CreateLightData",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>(),
                                                  ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalLightData*>(nullptr, ___internal_method, frameData, settings, visibleLights);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::ApplyTaaRenderingDebugOverrides(::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings> taaSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "ApplyTaaRenderingDebugOverrides", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::TemporalAA_Settings>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, taaSettings);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateTemporalAAData(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* additionalCameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                          { "UpdateTemporalAAData",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraData, additionalCameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateTemporalAATargets(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "UpdateTemporalAATargets", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::UpdateCameraStereoMatrices(::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRPass* xr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                              { "UpdateCameraStereoMatrices", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::XRPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, camera, xr);
}
inline ::UnityEngine::Rendering::PerObjectData UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetPerObjectLightFlags(int32_t additionalLightsCount, bool isForwardPlus,
                                                                                                                                  bool reflectionProbeBlending) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "GetPerObjectLightFlags", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PerObjectData>(nullptr, ___internal_method, additionalLightsCount, isForwardPlus, reflectionProbeBlending);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetMainLightIndex(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* settings,
                                                                                             ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                         { "GetMainLightIndex",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*>(),
                                                                                             ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, settings, visibleLights);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetupPerFrameShaderConstants() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "SetupPerFrameShaderConstants", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetupPerCameraShaderConstants(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                                                         { "SetupPerCameraShaderConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::CheckAndApplyDebugSettings(::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "CheckAndApplyDebugSettings", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderingData);
}
inline ::UnityEngine::Rendering::Universal::ImageUpscalingFilter
UnityEngine::Rendering::Universal::UniversalRenderPipeline::ResolveUpscalingFilterSelection(::UnityEngine::Vector2 imageSize, float_t renderScale,
                                                                                            ::UnityEngine::Rendering::Universal::UpscalingFilterSelection selection, bool enableRenderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "ResolveUpscalingFilterSelection",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UpscalingFilterSelection>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ImageUpscalingFilter>(nullptr, ___internal_method, imageSize, renderScale, selection, enableRenderGraph);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::HDROutputForMainDisplayIsActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "HDROutputForMainDisplayIsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::HDROutputForAnyDisplayIsActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "HDROutputForAnyDisplayIsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetHDRState(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "SetHDRState", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameras);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetHDROutputLuminanceParameters(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayInformation,
                                                                                                        ::UnityEngine::ColorGamut hdrDisplayColorGamut,
                                                                                                        ::UnityEngine::Rendering::Universal::Tonemapping* tonemapping,
                                                                                                        ::by_ref<::UnityEngine::Vector4> hdrOutputParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "GetHDROutputLuminanceParameters",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation>(), ::i2c::type_of<::UnityEngine::ColorGamut>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdrDisplayInformation, hdrDisplayColorGamut, tonemapping, hdrOutputParameters);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetHDROutputGradingParameters(::UnityEngine::Rendering::Universal::Tonemapping* tonemapping,
                                                                                                      ::by_ref<::UnityEngine::Vector4> hdrOutputParameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                          { "GetHDROutputGradingParameters", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tonemapping, hdrOutputParameters);
}
inline ::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout
UnityEngine::Rendering::Universal::UniversalRenderPipeline::BuildAdditionalLightsShadowAtlasLayout(::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                                   ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData,
                                                                                                   ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                       { "BuildAdditionalLightsShadowAtlasLayout",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalShadowData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::AdditionalLightsShadowAtlasLayout>(nullptr, ___internal_method, lightData, shadowData, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::AdjustUIOverlayOwnership(int32_t cameraCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "AdjustUIOverlayOwnership", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraCount);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::SetupScreenMSAASamplesState(int32_t cameraCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "SetupScreenMSAASamplesState", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraCount);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderPipeline::IsGameCamera(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "IsGameCamera", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> UnityEngine::Rendering::Universal::UniversalRenderPipeline::get_asset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "get_asset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::SortCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "SortCameras", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameras);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::UniversalRenderPipeline::MakeRenderTextureGraphicsFormat(
    bool isHdrEnabled, ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision requestHDRColorBufferPrecision, bool needsAlpha) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                       { "MakeRenderTextureGraphicsFormat", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method, isHdrEnabled, requestHDRColorBufferPrecision, needsAlpha);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::UniversalRenderPipeline::MakeUnormRenderTextureGraphicsFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(), { "MakeUnormRenderTextureGraphicsFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::UniversalRenderPipeline::CreateRenderTextureDescriptor(
    ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isHdrEnabled,
    ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision requestHDRColorBufferPrecision, int32_t msaaSamples, bool needsAlpha, bool requiresOpaqueTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                          { "CreateRenderTextureDescriptor",
                            {},
                            { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(nullptr, ___internal_method, camera, cameraData, isHdrEnabled, requestHDRColorBufferPrecision, msaaSamples,
                                                                                     needsAlpha, requiresOpaqueTexture);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetLightAttenuationAndSpotDirection(::UnityEngine::LightType lightType, float_t lightRange,
                                                                                                            ::UnityEngine::Matrix4x4 lightLocalToWorldMatrix, float_t spotAngle,
                                                                                                            ::System::Nullable_1<float_t> innerSpotAngle,
                                                                                                            ::by_ref<::UnityEngine::Vector4> lightAttenuation,
                                                                                                            ::by_ref<::UnityEngine::Vector4> lightSpotDir) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                          { "GetLightAttenuationAndSpotDirection",
                            {},
                            { ::i2c::type_of<::UnityEngine::LightType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lightType, lightRange, lightLocalToWorldMatrix, spotAngle, innerSpotAngle, lightAttenuation, lightSpotDir);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetPunctualLightDistanceAttenuation(float_t lightRange, ::by_ref<::UnityEngine::Vector4> lightAttenuation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "GetPunctualLightDistanceAttenuation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lightRange, lightAttenuation);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetSpotAngleAttenuation(float_t spotAngle, ::System::Nullable_1<float_t> innerSpotAngle,
                                                                                                ::by_ref<::UnityEngine::Vector4> lightAttenuation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                          { "GetSpotAngleAttenuation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spotAngle, innerSpotAngle, lightAttenuation);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::GetSpotDirection(::by_ref<::UnityEngine::Matrix4x4> lightLocalToWorldMatrix, ::by_ref<::UnityEngine::Vector4> lightSpotDir) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                                           { "GetSpotDirection", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lightLocalToWorldMatrix, lightSpotDir);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::InitializeLightConstants_Common(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights,
                                                                                                        int32_t lightIndex, ::by_ref<::UnityEngine::Vector4> lightPos,
                                                                                                        ::by_ref<::UnityEngine::Vector4> lightColor, ::by_ref<::UnityEngine::Vector4> lightAttenuation,
                                                                                                        ::by_ref<::UnityEngine::Vector4> lightSpotDir,
                                                                                                        ::by_ref<::UnityEngine::Vector4> lightOcclusionProbeChannel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                       { "InitializeLightConstants_Common",
                                         {},
                                         { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>>(), ::i2c::type_of<int32_t>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lights, lightIndex, lightPos, lightColor, lightAttenuation, lightSpotDir, lightOcclusionProbeChannel);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                          ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                          ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                              { "RecordRenderGraph",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, context, renderer);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderPipeline::RecordAndExecuteRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                    ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                    ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer,
                                                                                                    ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::StringW cameraName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(),
                                              { "RecordAndExecuteRenderGraph",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                  ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderGraph, context, renderer, cmd, camera, cameraName);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderPipeline*
UnityEngine::Rendering::Universal::UniversalRenderPipeline::New_ctor(::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* asset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderPipeline*>(asset));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipeline::UniversalRenderPipeline() {}
