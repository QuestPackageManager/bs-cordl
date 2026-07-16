#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPasses_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__AdditionalLightsShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ColorGradingLutPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyColorPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__CopyDepthPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthNormalOnlyPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DepthOnlyPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsWithRenderingLayersPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__FinalBlitPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ForwardLights_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__GBufferPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__MainLightShadowCasterPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CapturePass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawScreenSpaceUIPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawSkyboxPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InvokeOnRenderObjectCallbackPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TransparentSettingsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalLightData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XRDepthMotionPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__XROcclusionMeshPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionTest_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
inline void UnityEngine::Rendering::Universal::UniversalRenderer_Profiling::setStaticF_createCameraRenderTarget(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "createCameraRenderTarget", ::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::UniversalRenderer_Profiling::getStaticF_createCameraRenderTarget() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "createCameraRenderTarget", ::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling::UniversalRenderer_Profiling() {}
// Ctor Parameters [CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresDepthPrepass", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "requiresNormalsTexture", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresColorTexture", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "requiresColorTextureCreated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "requiresMotionVectors", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "requiresDepthNormalAtEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "requiresDepthTextureEarliestEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary::UniversalRenderer_RenderPassInputSummary(
    bool requiresDepthTexture, bool requiresDepthPrepass, bool requiresNormalsTexture, bool requiresColorTexture, bool requiresColorTextureCreated, bool requiresMotionVectors,
    ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalAtEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthTextureEarliestEvent) noexcept {
  this->requiresDepthTexture = requiresDepthTexture;
  this->requiresDepthPrepass = requiresDepthPrepass;
  this->requiresNormalsTexture = requiresNormalsTexture;
  this->requiresColorTexture = requiresColorTexture;
  this->requiresColorTextureCreated = requiresColorTextureCreated;
  this->requiresMotionVectors = requiresMotionVectors;
  this->requiresDepthNormalAtEvent = requiresDepthNormalAtEvent;
  this->requiresDepthTextureEarliestEvent = requiresDepthTextureEarliestEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary::UniversalRenderer_RenderPassInputSummary() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d2a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::__cordl_internal_get_src() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___src;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::__cordl_internal_get_src() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___src;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::__cordl_internal_set_src(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___src = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::__cordl_internal_get_dest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dest;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::__cordl_internal_get_dest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dest;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::__cordl_internal_set_dest(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dest = value;
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData* UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData::UniversalRenderer_CopyToDebugTexturePassData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::UniversalRenderer_DepthCopySchedule(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::UniversalRenderer_DepthCopySchedule() {}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::DuringPrepass{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::AfterPrepass{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::AfterGBuffer{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::AfterOpaques{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::AfterSkybox{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::AfterTransparents{ static_cast<int32_t>(
    0x5) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule::None{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule::UniversalRenderer_ColorCopySchedule(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule::UniversalRenderer_ColorCopySchedule() {}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule::AfterSkybox{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule::None{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "depth", ty: "::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty:
// "::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules::UniversalRenderer_TextureCopySchedules(
    ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule depth, ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule color) noexcept {
  this->depth = depth;
  this->color = color;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules::UniversalRenderer_TextureCopySchedules() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer___c::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68d2a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer___c._Setup_b__110_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer___c::_Setup_b__110_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68d2a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                             { "<Setup>b__110_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer___c._Setup_b__110_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer___c::_Setup_b__110_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x68d2a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                             { "<Setup>b__110_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer___c._BlitEmptyTexture_b__139_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer___c::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer___c::_BlitEmptyTexture_b__139_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x68d2aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                                                           { "<BlitEmptyTexture>b__139_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer___c._OnAfterRendering_b__194_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer___c::_OnAfterRendering_b__194_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68d2b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                             { "<OnAfterRendering>b__194_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::setStaticF___9(::UnityEngine::Rendering::Universal::UniversalRenderer___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::UniversalRenderer___c*, "<>9", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(
      std::forward<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* UnityEngine::Rendering::Universal::UniversalRenderer___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::UniversalRenderer___c*, "<>9", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::setStaticF___9__110_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__110_0", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* UnityEngine::Rendering::Universal::UniversalRenderer___c::getStaticF___9__110_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__110_0",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::setStaticF___9__110_1(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__110_1", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* UnityEngine::Rendering::Universal::UniversalRenderer___c::getStaticF___9__110_1() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__110_1",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::setStaticF___9__139_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__139_0", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::UniversalRenderer___c::getStaticF___9__139_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__139_0", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::setStaticF___9__194_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__194_0", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* UnityEngine::Rendering::Universal::UniversalRenderer___c::getStaticF___9__194_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__194_0",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer___c::_Setup_b__110_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                                                         { "<Setup>b__110_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer___c::_Setup_b__110_1(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                                                         { "<Setup>b__110_1", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::_BlitEmptyTexture_b__139_0(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                                                         { "<BlitEmptyTexture>b__139_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer___c::_OnAfterRendering_b__194_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                           { "<OnAfterRendering>b__194_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* UnityEngine::Rendering::Universal::UniversalRenderer___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer___c::UniversalRenderer___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SupportedCameraStackingTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SupportedCameraStackingTypes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68c46c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SupportsMotionVectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SupportsMotionVectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c46ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_renderingModeRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingModeRequested)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c46f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_renderingModeRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_renderingModeActual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingModeActual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68c46fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_renderingModeActual", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68c478c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_accurateGbufferNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_depthPrimingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DepthPrimingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_depthPrimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_depthPrimingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.set_depthPrimingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::DepthPrimingMode)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::set_depthPrimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "set_depthPrimingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthPrimingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_colorGradingLutPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_colorGradingLutPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_colorGradingLutPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_postProcessPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::PostProcessPass* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_postProcessPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_postProcessPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_finalPostProcessPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::PostProcessPass* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_finalPostProcessPass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_finalPostProcessPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_colorGradingLut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_colorGradingLut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_colorGradingLut", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_deferredLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::Internal::DeferredLights* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_deferredLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_deferredLights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_opaqueLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.set_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::set_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "set_opaqueLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_transparentLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_transparentLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_transparentLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.set_transparentLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::set_transparentLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c47fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "set_transparentLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_cameraDepthTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_cameraDepthTextureFormat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68c4804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_cameraDepthTextureFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_cameraDepthAttachmentFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_cameraDepthAttachmentFormat)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68c4818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_cameraDepthAttachmentFormat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalRendererData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::_ctor)> {
  constexpr static std::size_t size = 0x10c8;
  constexpr static std::size_t addrs = 0x68c482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::Dispose)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x68c5a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.ReleaseRenderTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::ReleaseRenderTargets)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x68c5dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupFinalPassDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupFinalPassDebug)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x68c5ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "SetupFinalPassDebug", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsOffscreenDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::IsOffscreenDepthTexture)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x68c62b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "IsOffscreenDepthTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsOffscreenDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::IsOffscreenDepthTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68c6320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "IsOffscreenDepthTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsDepthPrimingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::IsDepthPrimingEnabled)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x68c63b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "IsDepthPrimingEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsWebGL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsWebGL)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68c65c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsWebGL", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsGLESDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsGLESDevice)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68c65cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsGLESDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsGLDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsGLDevice)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68c6600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsGLDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.HasActiveRenderFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::HasActiveRenderFeatures)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x68c6660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "HasActiveRenderFeatures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.HasPassesRequiringIntermediateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::HasPassesRequiringIntermediateTexture)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x68c6788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "HasPassesRequiringIntermediateTexture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::Setup)> {
  constexpr static std::size_t size = 0x2b1c;
  constexpr static std::size_t addrs = 0x68c68b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupVFXCameraBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupVFXCameraBuffer)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x68ca054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "SetupVFXCameraBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupRawColorDepthHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::SetupRawColorDepthHistory)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x68ca2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
            { "SetupRawColorDepthHistory", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::SetupLights)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x68ca5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupCullingParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>,
                                                                                                                        ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupCullingParameters)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x68ca780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.FinishRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::FinishRendering)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x68cab64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.EnqueueDeferred
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::RenderTextureDescriptor, bool, bool, bool, bool, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::EnqueueDeferred)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x68c9efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "EnqueueDeferred",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.GetRenderPassInputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    bool, bool, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::GetRenderPassInputs)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x68c9484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "GetRenderPassInputs", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateCameraRenderTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::RenderTextureDescriptor>, ::UnityEngine::Rendering::CommandBuffer*,
    ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraRenderTarget)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x68c9928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "CreateCameraRenderTarget",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.PlatformRequiresExplicitMsaaResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::PlatformRequiresExplicitMsaaResolve)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68cab90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "PlatformRequiresExplicitMsaaResolve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequiresIntermediateColorTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateColorTexture)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x68c975c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "RequiresIntermediateColorTexture",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CanCopyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CanCopyDepth)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x68c64a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "CanCopyDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SwapColorBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SwapColorBuffer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x68cac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.GetCameraColorFrontBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::GetCameraColorFrontBuffer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68cae00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.GetCameraColorBackBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::GetCameraColorBackBuffer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68cae18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.EnableSwapBufferMSAA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::EnableSwapBufferMSAA)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x68cae3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_supportsNativeRenderPassRendergraphCompiler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_supportsNativeRenderPassRendergraphCompiler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68cae58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.DebugHandlerRequireDepthPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::DebugHandlerRequireDepthPass)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68cae60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "DebugHandlerRequireDepthPass", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateDebugTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::RenderTextureDescriptor)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateDebugTexture)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68caed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "CreateDebugTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CalculateUVRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, float_t, float_t)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CalculateUVRect)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x68cafc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CalculateUVRect", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CalculateUVRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, int32_t)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CalculateUVRect)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68caff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "CalculateUVRect", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CorrectForTextureAspectRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::by_ref<float_t>, ::by_ref<float_t>, float_t, float_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CorrectForTextureAspectRatio)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68c6274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                         { "CorrectForTextureAspectRatio", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupRenderGraphFinalPassDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::SetupRenderGraphFinalPassDebug)> {
  constexpr static std::size_t size = 0x768;
  constexpr static std::size_t addrs = 0x68cb050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
            { "SetupRenderGraphFinalPassDebug", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupAfterPostRenderGraphFinalPassDebug
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupAfterPostRenderGraphFinalPassDebug)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x68cbaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "SetupAfterPostRenderGraphFinalPassDebug",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.BlitToDebugTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::BlitToDebugTexture)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x68cb7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "BlitToDebugTexture",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.BlitEmptyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::StringW)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::BlitEmptyTexture)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x68cbd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "BlitEmptyTexture",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_currentRenderGraphCameraColorHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_currentRenderGraphCameraColorHandle)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68cc120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_currentRenderGraphCameraColorHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_nextRenderGraphCameraColorHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_nextRenderGraphCameraColorHandle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68cc1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_nextRenderGraphCameraColorHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CleanupRenderGraphResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CleanupRenderGraphResources)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x68c5c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "CleanupRenderGraphResources", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateRenderGraphTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor, ::StringW, bool, ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphTexture)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x68cc254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "CreateRenderGraphTexture",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateRenderGraphTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor, ::StringW, bool, ::UnityEngine::Color, ::UnityEngine::FilterMode,
    ::UnityEngine::TextureWrapMode)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphTexture)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x68cc370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CreateRenderGraphTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::StringW>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.ShouldApplyPostProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::ShouldApplyPostProcessing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x68cc49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "ShouldApplyPostProcessing", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CameraHasPostProcessingWithDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CameraHasPostProcessingWithDepth)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68cc4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "CameraHasPostProcessingWithDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequiresIntermediateAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateAttachments)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x68cc4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "RequiresIntermediateAttachments",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.UpdateCameraHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::UpdateCameraHistory)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x68c93cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "UpdateCameraHistory", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateRenderGraphCameraRenderTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphCameraRenderTargets)> {
  constexpr static std::size_t size = 0x1318;
  constexpr static std::size_t addrs = 0x68cc794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "CreateRenderGraphCameraRenderTargets", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupRenderingLayers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68ce3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "SetupRenderingLayers", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupRenderGraphLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalRenderingData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::UnityEngine::Rendering::Universal::UniversalLightData*)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::SetupRenderGraphLights)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x68ce438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "SetupRenderGraphLights",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RenderRawColorDepthHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalResourceData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::RenderRawColorDepthHistory)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x68ce4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "RenderRawColorDepthHistory",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnBeginRenderGraphFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::OnBeginRenderGraphFrame)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x68ce9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnRecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::OnRecordRenderGraph)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x68cea10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnEndRenderGraphFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::OnEndRenderGraphFrame)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x68d0cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnFinishRenderGraphRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::OnFinishRenderGraphRendering)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x68d0d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_supportsGPUOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_supportsGPUOcclusion)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x68d0dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnOffscreenDepthTextureRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::UniversalResourceData*,
    ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::OnOffscreenDepthTextureRendering)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x68cecd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "OnOffscreenDepthTextureRendering",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnBeforeRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::OnBeforeRendering)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x68cf0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "OnBeforeRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.UpdateInstanceOccluders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::UpdateInstanceOccluders)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x68d1554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "UpdateInstanceOccluders",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.InstanceOcclusionTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::OcclusionTest)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::InstanceOcclusionTest)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x68d191c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "InstanceOcclusionTest",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::OcclusionTest>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RecordCustomPassesWithDepthCopyAndMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::RenderPassEvent,
    ::UnityEngine::Rendering::Universal::RenderPassEvent, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::RecordCustomPassesWithDepthCopyAndMotion)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68d1b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "RecordCustomPassesWithDepthCopyAndMotion",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                             ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.AllowPartialDepthNormalsPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(bool, ::UnityEngine::Rendering::Universal::RenderPassEvent)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::AllowPartialDepthNormalsPrepass)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x68d1c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "AllowPartialDepthNormalsPrepass", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CalculateDepthCopySchedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CalculateDepthCopySchedule)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68d1c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "CalculateDepthCopySchedule", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CalculateTextureCopySchedules
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, bool, bool, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CalculateTextureCopySchedules)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x68d1c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "CalculateTextureCopySchedules",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CopyDepthToDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                                        ::UnityEngine::Rendering::Universal::UniversalResourceData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CopyDepthToDepthTexture)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68d1dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CopyDepthToDepthTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RenderMotionVectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                                        ::UnityEngine::Rendering::Universal::UniversalResourceData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::RenderMotionVectors)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68d1e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "RenderMotionVectors",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.ExecuteScheduledDepthCopyWithMotion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                                        ::UnityEngine::Rendering::Universal::UniversalResourceData*, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::ExecuteScheduledDepthCopyWithMotion)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x68d1bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "ExecuteScheduledDepthCopyWithMotion",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnMainRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::OnMainRendering)> {
  constexpr static std::size_t size = 0xeb8;
  constexpr static std::size_t addrs = 0x68cf38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
            { "OnMainRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnAfterRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::OnAfterRendering)> {
  constexpr static std::size_t size = 0xab8;
  constexpr static std::size_t addrs = 0x68d0244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "OnAfterRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequireDepthPrepass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::RequireDepthPrepass)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x68cc600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "RequireDepthPrepass",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequireDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::RequireDepthTexture)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x68cc6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "RequireDepthTexture",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetRenderingLayersGlobalTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetRenderingLayersGlobalTextures)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x68d20f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "SetRenderingLayersGlobalTextures", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateCameraDepthCopyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraDepthCopyTexture)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x68cdaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CreateCameraDepthCopyTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateMotionVectorTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateMotionVectorTextures)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x68cde18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
            { "CreateMotionVectorTextures", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateCameraNormalsTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraNormalsTexture)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x68cdc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
            { "CreateCameraNormalsTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateRenderingLayersTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderingLayersTexture)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x68ce000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
            { "CreateRenderingLayersTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateAfterPostProcessTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateAfterPostProcessTexture)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x68ce25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
            { "CreateAfterPostProcessTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.DepthNormalPrepassRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, uint32_t, bool, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::DepthNormalPrepassRender)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x68d1f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "DepthNormalPrepassRender",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<uint32_t>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_Clustering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clustering;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_Clustering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clustering;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_Clustering(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Clustering = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrepass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrepass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrepass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrepass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthPrepass(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthPrepass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthNormalPrepass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthNormalPrepass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthNormalPrepass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthNormalPrepass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthNormalPrepass(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthNormalPrepass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PrimedDepthCopyPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimedDepthCopyPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PrimedDepthCopyPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrimedDepthCopyPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_PrimedDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrimedDepthCopyPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MotionVectorPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorPass;
}
constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MotionVectorPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_MotionVectorPass(::UnityEngine::Rendering::Universal::MotionVectorRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionVectorPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MainLightShadowCasterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowCasterPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MainLightShadowCasterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MainLightShadowCasterPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_MainLightShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MainLightShadowCasterPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_AdditionalLightsShadowCasterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowCasterPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_AdditionalLightsShadowCasterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AdditionalLightsShadowCasterPass;
}
constexpr void
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_AdditionalLightsShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AdditionalLightsShadowCasterPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_GBufferPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_GBufferPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_GBufferPass(::UnityEngine::Rendering::Universal::Internal::GBufferPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GBufferPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_GBufferCopyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferCopyDepthPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_GBufferCopyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GBufferCopyDepthPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_GBufferCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GBufferCopyDepthPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DeferredPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DeferredPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DeferredPass(::UnityEngine::Rendering::Universal::Internal::DeferredPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeferredPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardOnlyPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardOnlyPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardOnlyPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardOnlyPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderOpaqueForwardOnlyPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderOpaqueForwardOnlyPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderOpaqueForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderOpaqueForwardPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardWithRenderingLayersPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderOpaqueForwardWithRenderingLayersPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderOpaqueForwardWithRenderingLayersPass(
    ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderOpaqueForwardWithRenderingLayersPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DrawSkyboxPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSkyboxPass;
}
constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DrawSkyboxPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawSkyboxPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DrawSkyboxPass(::UnityEngine::Rendering::Universal::DrawSkyboxPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawSkyboxPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyDepthPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyColorPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyColorPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyColorPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyColorPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CopyColorPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyColorPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TransparentSettingsPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentSettingsPass;
}
constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TransparentSettingsPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TransparentSettingsPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TransparentSettingsPass(::UnityEngine::Rendering::Universal::TransparentSettingsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TransparentSettingsPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderTransparentForwardPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTransparentForwardPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderTransparentForwardPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderTransparentForwardPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderTransparentForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderTransparentForwardPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OnRenderObjectCallbackPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRenderObjectCallbackPass;
}
constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OnRenderObjectCallbackPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnRenderObjectCallbackPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_OnRenderObjectCallbackPass(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnRenderObjectCallbackPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_FinalBlitPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalBlitPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_FinalBlitPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FinalBlitPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_FinalBlitPass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FinalBlitPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::CapturePass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CapturePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturePass;
}
constexpr ::UnityEngine::Rendering::Universal::CapturePass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CapturePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CapturePass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CapturePass(::UnityEngine::Rendering::Universal::CapturePass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CapturePass = value;
}
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XROcclusionMeshPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XROcclusionMeshPass;
}
constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XROcclusionMeshPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XROcclusionMeshPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_XROcclusionMeshPass(::UnityEngine::Rendering::Universal::XROcclusionMeshPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XROcclusionMeshPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XRCopyDepthPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRCopyDepthPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XRCopyDepthPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRCopyDepthPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_XRCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XRCopyDepthPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XRDepthMotionPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRDepthMotionPass;
}
constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_XRDepthMotionPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_XRDepthMotionPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_XRDepthMotionPass(::UnityEngine::Rendering::Universal::XRDepthMotionPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_XRDepthMotionPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DrawOffscreenUIPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawOffscreenUIPass;
}
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DrawOffscreenUIPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawOffscreenUIPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DrawOffscreenUIPass(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawOffscreenUIPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DrawOverlayUIPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawOverlayUIPass;
}
constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DrawOverlayUIPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawOverlayUIPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DrawOverlayUIPass(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawOverlayUIPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_HistoryRawColorCopyPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryRawColorCopyPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_HistoryRawColorCopyPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryRawColorCopyPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_HistoryRawColorCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HistoryRawColorCopyPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_HistoryRawDepthCopyPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryRawDepthCopyPass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_HistoryRawDepthCopyPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HistoryRawDepthCopyPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_HistoryRawDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HistoryRawDepthCopyPass = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorBufferSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorBufferSystem;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorBufferSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorBufferSystem;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ColorBufferSystem(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorBufferSystem = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ActiveCameraColorAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCameraColorAttachment;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ActiveCameraColorAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCameraColorAttachment;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ActiveCameraColorAttachment(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveCameraColorAttachment = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorFrontBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorFrontBuffer;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorFrontBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorFrontBuffer;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ColorFrontBuffer(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorFrontBuffer = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ActiveCameraDepthAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCameraDepthAttachment;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ActiveCameraDepthAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveCameraDepthAttachment;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ActiveCameraDepthAttachment(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActiveCameraDepthAttachment = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthAttachment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthAttachment;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthAttachment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthAttachment;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CameraDepthAttachment(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraDepthAttachment = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthAttachment_D3d_11() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthAttachment_D3d_11;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthAttachment_D3d_11() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthAttachment_D3d_11;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CameraDepthAttachment_D3d_11(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraDepthAttachment_D3d_11 = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TargetColorHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetColorHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TargetColorHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetColorHandle;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TargetColorHandle(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetColorHandle = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TargetDepthHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetDepthHandle;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_TargetDepthHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetDepthHandle;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_TargetDepthHandle(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TargetDepthHandle = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_NormalsTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalsTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_NormalsTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NormalsTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_NormalsTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NormalsTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DecalLayersTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayersTexture;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DecalLayersTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DecalLayersTexture;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DecalLayersTexture(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DecalLayersTexture = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OpaqueColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueColor;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OpaqueColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OpaqueColor;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_OpaqueColor(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OpaqueColor = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MotionVectorColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorColor;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MotionVectorColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorColor;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_MotionVectorColor(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionVectorColor = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MotionVectorDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorDepth;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_MotionVectorDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MotionVectorDepth;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_MotionVectorDepth(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MotionVectorDepth = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ForwardLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardLights;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ForwardLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ForwardLights;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ForwardLights(::UnityEngine::Rendering::Universal::Internal::ForwardLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ForwardLights = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DeferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DeferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DeferredLights = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrimingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrimingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthPrimingMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMode;
}
constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CopyDepthMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CopyDepthMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CopyDepthMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthAttachmentFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthAttachmentFormat;
}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthAttachmentFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthAttachmentFormat;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CameraDepthAttachmentFormat(::UnityEngine::Rendering::Universal::DepthFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraDepthAttachmentFormat = value;
}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthTextureFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthTextureFormat;
}
constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraDepthTextureFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraDepthTextureFormat;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CameraDepthTextureFormat(::UnityEngine::Rendering::Universal::DepthFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraDepthTextureFormat = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrimingRecommended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingRecommended;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DepthPrimingRecommended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DepthPrimingRecommended;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DepthPrimingRecommended(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DepthPrimingRecommended = value;
}
constexpr ::UnityEngine::Rendering::StencilState& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DefaultStencilState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr ::UnityEngine::Rendering::StencilState const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DefaultStencilState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultStencilState;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::StencilState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultStencilState = value;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_LightCookieManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr ::UnityEngine::Rendering::Universal::LightCookieManager* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_LightCookieManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LightCookieManager;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LightCookieManager = value;
}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_IntermediateTextureMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntermediateTextureMode;
}
constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_IntermediateTextureMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntermediateTextureMode;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntermediateTextureMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_VulkanEnablePreTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VulkanEnablePreTransform;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_VulkanEnablePreTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VulkanEnablePreTransform;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_VulkanEnablePreTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VulkanEnablePreTransform = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_BlitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_BlitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlitMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_BlitHDRMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitHDRMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_BlitHDRMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitHDRMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_BlitHDRMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlitHDRMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_SamplingMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_SamplingMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SamplingMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SamplingMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_StencilDeferredMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_StencilDeferredMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilDeferredMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilDeferredMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraMotionVecMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraMotionVecMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_CameraMotionVecMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraMotionVecMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_CameraMotionVecMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraMotionVecMaterial = value;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PostProcessPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessPasses;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PostProcessPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessPasses;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_PostProcessPasses(::UnityEngine::Rendering::Universal::PostProcessPasses value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostProcessPasses = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get__opaqueLayerMask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opaqueLayerMask_k__BackingField;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get__opaqueLayerMask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____opaqueLayerMask_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set__opaqueLayerMask_k__BackingField(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____opaqueLayerMask_k__BackingField = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get__transparentLayerMask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparentLayerMask_k__BackingField;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get__transparentLayerMask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparentLayerMask_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set__transparentLayerMask_k__BackingField(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transparentLayerMask_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DebugBlitMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugBlitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_DebugBlitMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugBlitMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_DebugBlitMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DebugBlitMaterial = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RequiresRenderingLayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresRenderingLayer;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RequiresRenderingLayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequiresRenderingLayer;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RequiresRenderingLayer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequiresRenderingLayer = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayersEvent;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayersEvent;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderingLayersEvent(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayersEvent = value;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayersMaskSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayersMaskSize;
}
constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayersMaskSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayersMaskSize;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderingLayersMaskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayersMaskSize = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayerProvidesRenderObjectPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayerProvidesRenderObjectPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderingLayerProvidesRenderObjectPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayerProvidesRenderObjectPass = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayerProvidesByDepthNormalPass;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayerProvidesByDepthNormalPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderingLayerProvidesByDepthNormalPass(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayerProvidesByDepthNormalPass = value;
}
constexpr ::StringW& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayersTextureName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayersTextureName;
}
constexpr ::StringW const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_RenderingLayersTextureName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderingLayersTextureName;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_RenderingLayersTextureName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderingLayersTextureName = value;
}
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedGPUOcclusionUnsupportedMsg;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IssuedGPUOcclusionUnsupportedMsg;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_IssuedGPUOcclusionUnsupportedMsg(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IssuedGPUOcclusionUnsupportedMsg = value;
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_k_DepthNormalsOnly(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_DepthNormalsOnly", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_k_DepthNormalsOnly() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, "k_DepthNormalsOnly",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_RenderGraphCameraColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "m_RenderGraphCameraColorHandles", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_RenderGraphCameraColorHandles() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "m_RenderGraphCameraColorHandles", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_RenderGraphUpscaledCameraColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "m_RenderGraphUpscaledCameraColorHandles", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_RenderGraphUpscaledCameraColorHandles() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "m_RenderGraphUpscaledCameraColorHandles", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_RenderGraphCameraDepthHandle(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_RenderGraphCameraDepthHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_RenderGraphCameraDepthHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_RenderGraphCameraDepthHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_CurrentColorHandle(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_CurrentColorHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_CurrentColorHandle() {
  return ::cordl_internals::getStaticField<int32_t, "m_CurrentColorHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_UseUpscaledColorHandle(bool value) {
  ::cordl_internals::setStaticField<bool, "m_UseUpscaledColorHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_UseUpscaledColorHandle() {
  return ::cordl_internals::getStaticField<bool, "m_UseUpscaledColorHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_RenderGraphDebugTextureHandle(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_RenderGraphDebugTextureHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_RenderGraphDebugTextureHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_RenderGraphDebugTextureHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_RequiresIntermediateAttachments(bool value) {
  ::cordl_internals::setStaticField<bool, "m_RequiresIntermediateAttachments", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_RequiresIntermediateAttachments() {
  return ::cordl_internals::getStaticField<bool, "m_RequiresIntermediateAttachments", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderer::SupportedCameraStackingTypes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::SupportsMotionVectors() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingModeRequested() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_renderingModeRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingModeActual() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_renderingModeActual", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_accurateGbufferNormals() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_accurateGbufferNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DepthPrimingMode UnityEngine::Rendering::Universal::UniversalRenderer::get_depthPrimingMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_depthPrimingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DepthPrimingMode>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "set_depthPrimingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthPrimingMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* UnityEngine::Rendering::Universal::UniversalRenderer::get_colorGradingLutPass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_colorGradingLutPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass* UnityEngine::Rendering::Universal::UniversalRenderer::get_postProcessPass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_postProcessPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PostProcessPass*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::PostProcessPass* UnityEngine::Rendering::Universal::UniversalRenderer::get_finalPostProcessPass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_finalPostProcessPass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PostProcessPass*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::get_colorGradingLut() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_colorGradingLut", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* UnityEngine::Rendering::Universal::UniversalRenderer::get_deferredLights() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_deferredLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRenderer::get_opaqueLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_opaqueLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::set_opaqueLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "set_opaqueLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRenderer::get_transparentLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_transparentLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::set_transparentLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "set_transparentLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::UniversalRenderer::get_cameraDepthTextureFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_cameraDepthTextureFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::UniversalRenderer::get_cameraDepthAttachmentFormat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_cameraDepthAttachmentFormat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::ReleaseRenderTargets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupFinalPassDebug(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "SetupFinalPassDebug", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsOffscreenDepthTexture(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "IsOffscreenDepthTexture", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsOffscreenDepthTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "IsOffscreenDepthTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsDepthPrimingEnabled(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "IsDepthPrimingEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsWebGL() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsWebGL", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsGLESDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsGLESDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsGLDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsGLDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::HasActiveRenderFeatures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "HasActiveRenderFeatures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::HasPassesRequiringIntermediateTexture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "HasPassesRequiringIntermediateTexture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::Setup(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                        ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupVFXCameraBuffer(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "SetupVFXCameraBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupRawColorDepthHistory(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                            ::by_ref<::UnityEngine::RenderTextureDescriptor> cameraTargetDescriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
          { "SetupRawColorDepthHistory", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, cameraTargetDescriptor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters,
                                                                                         ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingParameters, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::EnqueueDeferred(::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor, bool hasDepthPrepass, bool hasNormalPrepass,
                                                                                  bool hasRenderingLayerPrepass, bool applyMainShadow, bool applyAdditionalShadow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "EnqueueDeferred",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraTargetDescriptor, hasDepthPrepass, hasNormalPrepass, hasRenderingLayerPrepass, applyMainShadow,
                                                   applyAdditionalShadow);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary
UnityEngine::Rendering::Universal::UniversalRenderer::GetRenderPassInputs(bool isTemporalAAEnabled, bool postProcessingEnabled, bool isSceneViewCamera) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "GetRenderPassInputs", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>(this, ___internal_method, isTemporalAAEnabled, postProcessingEnabled,
                                                                                                                            isSceneViewCamera);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraRenderTarget(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                           ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                           ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "CreateCameraRenderTarget",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, descriptor, cmd, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::PlatformRequiresExplicitMsaaResolve() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "PlatformRequiresExplicitMsaaResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool
UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateColorTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                       ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "RequiresIntermediateColorTexture",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData, renderPassInputs);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::CanCopyDepth(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "CanCopyDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::GetCameraColorBackBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::EnableSwapBufferMSAA(bool enable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_supportsNativeRenderPassRendergraphCompiler() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::DebugHandlerRequireDepthPass(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "DebugHandlerRequireDepthPass", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateDebugTexture(::UnityEngine::RenderTextureDescriptor descriptor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "CreateDebugTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, descriptor);
}
inline ::UnityEngine::Rect UnityEngine::Rendering::Universal::UniversalRenderer::CalculateUVRect(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CalculateUVRect", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, cameraData, width, height);
}
inline ::UnityEngine::Rect UnityEngine::Rendering::Universal::UniversalRenderer::CalculateUVRect(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, int32_t textureHeightPercent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "CalculateUVRect", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, cameraData, textureHeightPercent);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CorrectForTextureAspectRatio(::by_ref<float_t> width, ::by_ref<float_t> height, float_t sourceWidth, float_t sourceHeight) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CorrectForTextureAspectRatio", {}, { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width, height, sourceWidth, sourceHeight);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupRenderGraphFinalPassDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                 ::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
          { "SetupRenderGraphFinalPassDebug", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupAfterPostRenderGraphFinalPassDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                          ::UnityEngine::Rendering::ContextContainer* frameData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "SetupAfterPostRenderGraphFinalPassDebug",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::BlitToDebugTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, bool isSourceTextureColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                       { "BlitToDebugTexture",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, source, destination, isSourceTextureColor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::BlitEmptyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                   ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::StringW passName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "BlitEmptyTexture",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, destination, passName);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::get_currentRenderGraphCameraColorHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_currentRenderGraphCameraColorHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::get_nextRenderGraphCameraColorHandle() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_nextRenderGraphCameraColorHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CleanupRenderGraphResources() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "CleanupRenderGraphResources", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor desc,
                                                                               ::StringW name, bool clear, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                       { "CreateRenderGraphTexture",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(),
                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, desc, name, clear, filterMode, wrapMode);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor desc,
                                                                               ::StringW name, bool clear, ::UnityEngine::Color color, ::UnityEngine::FilterMode filterMode,
                                                                               ::UnityEngine::TextureWrapMode wrapMode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CreateRenderGraphTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::StringW>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::TextureWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, desc, name, clear, color, filterMode, wrapMode);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::ShouldApplyPostProcessing(bool postProcessEnabled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "ShouldApplyPostProcessing", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, postProcessEnabled);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::CameraHasPostProcessingWithDepth(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "CameraHasPostProcessingWithDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData);
}
inline bool
UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateAttachments(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "RequiresIntermediateAttachments",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData, renderPassInputs);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::UpdateCameraHistory(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "UpdateCameraHistory", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphCameraRenderTargets(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                       bool isCameraTargetOffscreenDepth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                       { "CreateRenderGraphCameraRenderTargets", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, isCameraTargetOffscreenDepth);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupRenderingLayers(int32_t msaaSamples) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "SetupRenderingLayers", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msaaSamples);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                         ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                         ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                         ::UnityEngine::Rendering::Universal::UniversalLightData* lightData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "SetupRenderGraphLights",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderingData*>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalLightData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, renderingData, cameraData, lightData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::RenderRawColorDepthHistory(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                             ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                       { "RenderRawColorDepthHistory",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, resourceData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnBeginRenderGraphFrame() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnRecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                      ::UnityEngine::Rendering::ScriptableRenderContext context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, context);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnEndRenderGraphFrame() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnFinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_supportsGPUOcclusion() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnOffscreenDepthTextureRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                   ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                   ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                                   ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "OnOffscreenDepthTextureRendering",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, context, resourceData, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnBeforeRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "OnBeforeRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                          ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                       { "UpdateInstanceOccluders",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, depthTexture);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                        ::UnityEngine::Rendering::OcclusionTest occlusionTest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "InstanceOcclusionTest",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::OcclusionTest>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, occlusionTest);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::RecordCustomPassesWithDepthCopyAndMotion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                           ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                                           ::UnityEngine::Rendering::Universal::RenderPassEvent earliestDepthReadEvent,
                                                                                                           ::UnityEngine::Rendering::Universal::RenderPassEvent currentEvent,
                                                                                                           bool renderMotionVectors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "RecordCustomPassesWithDepthCopyAndMotion",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, earliestDepthReadEvent, currentEvent, renderMotionVectors);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::AllowPartialDepthNormalsPrepass(bool isDeferred, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "AllowPartialDepthNormalsPrepass", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isDeferred, requiresDepthNormalEvent);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule
UnityEngine::Rendering::Universal::UniversalRenderer::CalculateDepthCopySchedule(::UnityEngine::Rendering::Universal::RenderPassEvent earliestDepthReadEvent, bool hasFullPrepass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "CalculateDepthCopySchedule", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule>(this, ___internal_method, earliestDepthReadEvent, hasFullPrepass);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules
UnityEngine::Rendering::Universal::UniversalRenderer::CalculateTextureCopySchedules(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary renderPassInputs, bool isDeferred,
                                                                                    bool requiresDepthPrepass, bool hasFullPrepass) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "CalculateTextureCopySchedules",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules>(this, ___internal_method, cameraData, renderPassInputs, isDeferred,
                                                                                                                          requiresDepthPrepass, hasFullPrepass);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CopyDepthToDepthTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                          ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CopyDepthToDepthTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::RenderMotionVectors(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                      ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "RenderMotionVectors",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::ExecuteScheduledDepthCopyWithMotion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                      ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                                      bool renderMotionVectors) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "ExecuteScheduledDepthCopyWithMotion",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, renderMotionVectors);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnMainRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                  ::UnityEngine::Rendering::ScriptableRenderContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
          { "OnMainRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, context);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnAfterRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "OnAfterRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::RequireDepthPrepass(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "RequireDepthPrepass",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData, renderPassInputs);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::RequireDepthTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool requiresDepthPrepass,
                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "RequireDepthTexture",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData, requiresDepthPrepass, renderPassInputs);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetRenderingLayersGlobalTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "SetRenderingLayersGlobalTextures", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraDepthCopyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                               ::UnityEngine::RenderTextureDescriptor descriptor, bool isDepthTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CreateCameraDepthCopyTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor, isDepthTexture);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateMotionVectorTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                             ::UnityEngine::RenderTextureDescriptor descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
          { "CreateMotionVectorTextures", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                             ::UnityEngine::RenderTextureDescriptor descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
          { "CreateCameraNormalsTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderingLayersTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                               ::UnityEngine::RenderTextureDescriptor descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
          { "CreateRenderingLayersTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateAfterPostProcessTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                ::UnityEngine::RenderTextureDescriptor descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
          { "CreateAfterPostProcessTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::DepthNormalPrepassRender(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                           ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary renderPassInputs,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget, uint32_t batchLayerMask,
                                                                                           bool setGlobalDepth, bool setGlobalTextures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                       { "DepthNormalPrepassRender",
                         {},
                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>(),
                           ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, renderPassInputs, depthTarget, batchLayerMask, setGlobalDepth, setGlobalTextures);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer* UnityEngine::Rendering::Universal::UniversalRenderer::New_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderer*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer::UniversalRenderer() {}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::Universal::UniversalRenderer::k_DepthStencilFormatDefault{ static_cast<int32_t>(0x5c) };
