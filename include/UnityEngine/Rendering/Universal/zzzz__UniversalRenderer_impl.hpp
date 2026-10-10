#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
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
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CapturePass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawScreenSpaceUIPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DrawSkyboxPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InvokeOnRenderObjectCallbackPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__MotionVectorRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPassRenderGraph_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StencilCrossFadeRenderPass_def.hpp"
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
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
// Ctor Parameters [CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresDepthPrepass", ty: "bool", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "requiresNormalsTexture", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresColorTexture", ty:
// "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresMotionVectors", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "requiresDepthNormalAtEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "requiresDepthTextureEarliestEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary::UniversalRenderer_RenderPassInputSummary(
    bool requiresDepthTexture, bool requiresDepthPrepass, bool requiresNormalsTexture, bool requiresColorTexture, bool requiresMotionVectors,
    ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalAtEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthTextureEarliestEvent) noexcept {
  this->requiresDepthTexture = requiresDepthTexture;
  this->requiresDepthPrepass = requiresDepthPrepass;
  this->requiresNormalsTexture = requiresNormalsTexture;
  this->requiresColorTexture = requiresColorTexture;
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
  constexpr static std::size_t addrs = 0x6cb53b0;

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
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams::*)(bool, bool, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cb08ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams::_ctor(bool clearColor, bool clearDepth, ::UnityEngine::Color clearVal) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, clearColor, clearDepth, clearVal);
}
// Ctor Parameters [CppParam { name: "mustClearColor", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mustClearDepth", ty: "bool", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "clearValue", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams::UniversalRenderer_ClearCameraParams(bool mustClearColor, bool mustClearDepth,
                                                                                                                        ::UnityEngine::Color clearValue) noexcept {
  this->mustClearColor = mustClearColor;
  this->mustClearDepth = mustClearDepth;
  this->clearValue = clearValue;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams::UniversalRenderer_ClearCameraParams() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass::UniversalRenderer_OccluderPass(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass::UniversalRenderer_OccluderPass() {}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass::DepthPrepass{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass::ForwardOpaque{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass::GBuffer{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule::UniversalRenderer_ColorCopySchedule(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule::UniversalRenderer_ColorCopySchedule() {}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule::AfterSkybox{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule::None{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "depth", ty: "::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "color", ty: "::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule", modifiers: "", def_value: Some("{}"), comment: None }]
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
  constexpr static std::size_t addrs = 0x6cb5408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer___c._BlitEmptyTexture_b__126_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer___c::*)(
    ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer___c::_BlitEmptyTexture_b__126_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6cb540c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                                                           { "<BlitEmptyTexture>b__126_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer___c._OnAfterRendering_b__188_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer___c::_OnAfterRendering_b__188_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6cb54dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                             { "<OnAfterRendering>b__188_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
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
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::setStaticF___9__126_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                    "<>9__126_0", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
UnityEngine::Rendering::Universal::UniversalRenderer___c::getStaticF___9__126_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*,
                                           "<>9__126_0", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::setStaticF___9__188_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__188_0", ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(
      std::forward<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(value));
}
inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* UnityEngine::Rendering::Universal::UniversalRenderer___c::getStaticF___9__188_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, "<>9__188_0",
                                           ::UnityEngine::Rendering::Universal::UniversalRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer___c::_BlitEmptyTexture_b__126_0(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData* data,
                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                                                         { "<BlitEmptyTexture>b__126_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer___c::_OnAfterRendering_b__188_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>(),
                                                           { "<OnAfterRendering>b__188_0", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* UnityEngine::Rendering::Universal::UniversalRenderer___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderer___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer___c::UniversalRenderer___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::Setup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cab8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::SetupLights)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cab8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SupportedCameraStackingTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SupportedCameraStackingTypes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6cab8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SupportsMotionVectors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SupportsMotionVectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cab900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SupportsCameraOpaque
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SupportsCameraOpaque)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cab908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SupportsCameraNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SupportsCameraNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cab910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_renderingModeRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingModeRequested)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cab918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_renderingModeRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_deferredModeUnsupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_deferredModeUnsupported)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6cab920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_deferredModeUnsupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_renderingModeActual
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::RenderingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingModeActual)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6cab994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_renderingModeActual", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_usesDeferredLighting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_usesDeferredLighting)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6ca6340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_usesDeferredLighting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_usesClusterLightLoop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_usesClusterLightLoop)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6cab9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_usesClusterLightLoop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_accurateGbufferNormals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_accurateGbufferNormals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6ca636c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_accurateGbufferNormals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_needTransparencyPass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_needTransparencyPass)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6caba14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_needTransparencyPass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_depthPrimingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DepthPrimingMode (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_depthPrimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cabaf4;

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
  constexpr static std::size_t addrs = 0x6cabafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "set_depthPrimingMode", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthPrimingMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_isPostProcessPassRenderGraphActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_isPostProcessPassRenderGraphActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6cabb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_isPostProcessPassRenderGraphActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_deferredLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::Internal::DeferredLights* (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_deferredLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cabb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_deferredLights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_prepassLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_prepassLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cabb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_prepassLayerMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.set_prepassLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::set_prepassLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cabb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "set_prepassLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_opaqueLayerMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_opaqueLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cabb2c;

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
  constexpr static std::size_t addrs = 0x6cabb34;

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
  constexpr static std::size_t addrs = 0x6cabb3c;

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
  constexpr static std::size_t addrs = 0x6cabb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "set_transparentLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cabb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_shadowTransparentReceive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.set_shadowTransparentReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::set_shadowTransparentReceive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cabb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "set_shadowTransparentReceive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_cameraDepthTextureFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_cameraDepthTextureFormat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cabb5c;

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
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cabbbc;

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
  constexpr static std::size_t size = 0x10d4;
  constexpr static std::size_t addrs = 0x6ca2568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRendererData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::Dispose)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6cabc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.ReleaseRenderTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::ReleaseRenderTargets)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6cabf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsOffscreenDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::IsOffscreenDepthTexture)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6ca6ec0;

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
  constexpr static std::size_t addrs = 0x6cabfe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "IsOffscreenDepthTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsWebGL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsWebGL)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cac078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsWebGL", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsGLESDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsGLESDevice)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6cac080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsGLESDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsGLDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsGLDevice)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6cac0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsGLDevice", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.HasActiveRenderFeatures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::HasActiveRenderFeatures)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6cac158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                         { "HasActiveRenderFeatures", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.HasPassesRequiringIntermediateTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::HasPassesRequiringIntermediateTexture)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6cac27c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                         { "HasPassesRequiringIntermediateTexture", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupVFXCameraBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupVFXCameraBuffer)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6cac3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "SetupVFXCameraBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupCullingParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>,
                                                                                                                        ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupCullingParameters)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6cac60c;

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
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cac90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.GetRenderPassInputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary (*)(
    bool, bool, bool, bool, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*, ::UnityEngine::Rendering::Universal::MotionVectorRenderPass*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::GetRenderPassInputs)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6cac910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "GetRenderPassInputs",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.PlatformRequiresExplicitMsaaResolve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Universal::UniversalRenderer::PlatformRequiresExplicitMsaaResolve)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6cacbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "PlatformRequiresExplicitMsaaResolve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequiresIntermediateColorTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>, bool, bool)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateColorTexture)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6cacc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "RequiresIntermediateColorTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsScalableBufferManagerUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::IsScalableBufferManagerUsed)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6caceac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "IsScalableBufferManagerUsed", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CanCopyDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CanCopyDepth)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6cacf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                           { "CanCopyDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.get_supportsNativeRenderPassRendergraphCompiler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)()>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::get_supportsNativeRenderPassRendergraphCompiler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cad0ac;

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
  constexpr static std::size_t addrs = 0x6cad0b4;

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
  constexpr static std::size_t addrs = 0x6cad128;

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
  constexpr static std::size_t addrs = 0x6cad218;

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
  constexpr static std::size_t addrs = 0x6cad24c;

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
  constexpr static std::size_t addrs = 0x6cad2a4;

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
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x6cad2e4;

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
  constexpr static std::size_t addrs = 0x6cadd58;

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
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x6cada68;

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
  constexpr static std::size_t addrs = 0x6cadfc4;

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
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6cae3d4;

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
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6cae478;

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
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6cabe24;

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
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6cae514;

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
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::RenderTextureDescriptor const>, ::StringW, bool, ::UnityEngine::Color, ::UnityEngine::FilterMode,
    ::UnityEngine::TextureWrapMode, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphTexture)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6cae78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "CreateRenderGraphTexture",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor const>>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                             ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.GetTextureDesc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderTextureDescriptor const>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::GetTextureDesc)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6cae5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "GetTextureDesc",
                              {},
                              { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateRenderGraphTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>, ::StringW, bool, ::UnityEngine::Color,
    ::UnityEngine::FilterMode, ::UnityEngine::TextureWrapMode, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphTexture)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6cae898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CreateRenderGraphTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>(),
                                ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequiresIntermediateAttachments
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>, bool, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateAttachments)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6cae938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "RequiresIntermediateAttachments",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.UpdateCameraHistory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::UpdateCameraHistory)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6caea2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "UpdateCameraHistory", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateRenderGraphCameraRenderTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool, bool, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphCameraRenderTargets)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x6caeaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "CreateRenderGraphCameraRenderTargets",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.GetClearCameraParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::GetClearCameraParams)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6caedc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "GetClearCameraParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupTargetHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupTargetHandles)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x6caef6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "SetupTargetHandles", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetupRenderingLayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(int32_t)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetupRenderingLayers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cb08c0;

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
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6cb0940;

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
  constexpr static std::size_t addrs = 0x6cb09c0;

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
  constexpr static std::size_t addrs = 0x6cb0ec0;

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
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x6cb0f30;

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
  constexpr static std::size_t addrs = 0x6cb4030;

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
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6cb4098;

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
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6cb4104;

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
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x6cb1730;

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
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6cb1ca8;

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
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x6cb4258;

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
  constexpr static std::size_t addrs = 0x6cb4660;

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
  constexpr static std::size_t addrs = 0x6cb4854;

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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::UnityEngine::Rendering::Universal::RenderPassEvent, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::AllowPartialDepthNormalsPrepass)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6cb4944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "AllowPartialDepthNormalsPrepass", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CalculateDepthCopySchedule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CalculateDepthCopySchedule)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6cb4960;

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
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>, bool, bool, bool, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CalculateTextureCopySchedules)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6cb49b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "CalculateTextureCopySchedules",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CopyDepthToDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                                        ::UnityEngine::Rendering::Universal::UniversalResourceData*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CopyDepthToDepthTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6cb4a70;

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
  constexpr static std::size_t addrs = 0x6cb4b30;

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
  constexpr static std::size_t addrs = 0x6cb48f4;

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
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext,
    ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>, bool, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::OnMainRendering)> {
  constexpr static std::size_t size = 0x13a8;
  constexpr static std::size_t addrs = 0x6cb2078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "OnMainRendering",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.OnAfterRendering
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::OnAfterRendering)> {
  constexpr static std::size_t size = 0xc10;
  constexpr static std::size_t addrs = 0x6cb3420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "OnAfterRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequirePrepassForTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::RequirePrepassForTextures)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6cb155c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "RequirePrepassForTextures",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.RequireDepthTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>, bool)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderer::RequireDepthTexture)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6cb151c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "RequireDepthTexture",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.IsDepthPrimingEnabledRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>,
                         ::UnityEngine::Rendering::Universal::DepthPrimingMode, bool, bool, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::IsDepthPrimingEnabledRenderGraph)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6cb1634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "IsDepthPrimingEnabledRenderGraph",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthPrimingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.SetRenderingLayersGlobalTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::SetRenderingLayersGlobalTextures)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6cb4d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "SetRenderingLayersGlobalTextures", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.ImportBackBuffers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Color, bool)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::ImportBackBuffers)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x6caf404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "ImportBackBuffers",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateIntermediateCameraColorAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>,
    bool, ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateIntermediateCameraColorAttachment)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x6cafa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CreateIntermediateCameraColorAttachment",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateIntermediateCameraDepthAttachment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>,
    bool, ::UnityEngine::Color, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateIntermediateCameraDepthAttachment)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6cafd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                         { "CreateIntermediateCameraDepthAttachment",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(),
                                             ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateCameraDepthCopyTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc, bool, ::UnityEngine::Color)>(
    &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraDepthCopyTexture)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6cb0034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                { "CreateCameraDepthCopyTexture",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                    ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateMotionVectorTextures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateMotionVectorTextures)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6cb036c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CreateMotionVectorTextures",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateCameraNormalsTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraNormalsTexture)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6cb01a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CreateCameraNormalsTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateRenderingLayersTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderingLayersTexture)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x6cb04e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CreateRenderingLayersTexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateAfterPostProcessTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::CreateAfterPostProcessTexture)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6cb51ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
            { "CreateAfterPostProcessTexture", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.CreateOffscreenUITexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc)>(
        &::UnityEngine::Rendering::Universal::UniversalRenderer::CreateOffscreenUITexture)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6cb0724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                            { "CreateOffscreenUITexture",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::UniversalRenderer.DepthNormalPrepassRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::UniversalRenderer::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>, uint32_t, bool, bool, bool)>(&::UnityEngine::Rendering::Universal::UniversalRenderer::DepthNormalPrepassRender)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6cb4be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                             { "DepthNormalPrepassRender",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                 ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(), ::i2c::type_of<uint32_t>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
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
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OffscreenUICoverPrepass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OffscreenUICoverPrepass;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_OffscreenUICoverPrepass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OffscreenUICoverPrepass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_OffscreenUICoverPrepass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OffscreenUICoverPrepass = value;
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
constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_StencilCrossFadeRenderPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilCrossFadeRenderPass;
}
constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_StencilCrossFadeRenderPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StencilCrossFadeRenderPass;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_StencilCrossFadeRenderPass(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StencilCrossFadeRenderPass = value;
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
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_BlitOffscreenUICoverMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitOffscreenUICoverMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_BlitOffscreenUICoverMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlitOffscreenUICoverMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_BlitOffscreenUICoverMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlitOffscreenUICoverMaterial = value;
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
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ClusterDeferredMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClusterDeferredMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ClusterDeferredMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClusterDeferredMaterial;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ClusterDeferredMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ClusterDeferredMaterial = value;
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
constexpr ::UnityEngine::LayerMask& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get__prepassLayerMask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepassLayerMask_k__BackingField;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get__prepassLayerMask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepassLayerMask_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set__prepassLayerMask_k__BackingField(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prepassLayerMask_k__BackingField = value;
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
constexpr bool& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get__shadowTransparentReceive_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowTransparentReceive_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get__shadowTransparentReceive_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shadowTransparentReceive_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set__shadowTransparentReceive_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shadowTransparentReceive_k__BackingField = value;
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
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorGradingLutPassRenderGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradingLutPassRenderGraph;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* const&
UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_ColorGradingLutPassRenderGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ColorGradingLutPassRenderGraph;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_ColorGradingLutPassRenderGraph(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ColorGradingLutPassRenderGraph = value;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PostProcessPassRenderGraph() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessPassRenderGraph;
}
constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph* const& UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_get_m_PostProcessPassRenderGraph() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PostProcessPassRenderGraph;
}
constexpr void UnityEngine::Rendering::Universal::UniversalRenderer::__cordl_internal_set_m_PostProcessPassRenderGraph(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PostProcessPassRenderGraph = value;
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
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_RenderGraphCameraColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "m_RenderGraphCameraColorHandles", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_RenderGraphCameraColorHandles() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "m_RenderGraphCameraColorHandles", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
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
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_RenderGraphDebugTextureHandle(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_RenderGraphDebugTextureHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_RenderGraphDebugTextureHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_RenderGraphDebugTextureHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_OffscreenUIColorHandle(::UnityEngine::Rendering::RTHandle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_OffscreenUIColorHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(
      std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_OffscreenUIColorHandle() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_OffscreenUIColorHandle", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::setStaticF_m_RequiresIntermediateAttachments(bool value) {
  ::cordl_internals::setStaticField<bool, "m_RequiresIntermediateAttachments", ::UnityEngine::Rendering::Universal::UniversalRenderer*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::getStaticF_m_RequiresIntermediateAttachments() {
  return ::cordl_internals::getStaticField<bool, "m_RequiresIntermediateAttachments", ::UnityEngine::Rendering::Universal::UniversalRenderer*>();
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::Setup(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                        ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                              ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline int32_t UnityEngine::Rendering::Universal::UniversalRenderer::SupportedCameraStackingTypes() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::SupportsMotionVectors() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::SupportsCameraOpaque() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::SupportsCameraNormals() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingModeRequested() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_renderingModeRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_deferredModeUnsupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_deferredModeUnsupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderingMode UnityEngine::Rendering::Universal::UniversalRenderer::get_renderingModeActual() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_renderingModeActual", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderingMode>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_usesDeferredLighting() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_usesDeferredLighting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_usesClusterLightLoop() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_usesClusterLightLoop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_accurateGbufferNormals() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_accurateGbufferNormals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_needTransparencyPass() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_needTransparencyPass", {}, {} })));
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
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_isPostProcessPassRenderGraphActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_isPostProcessPassRenderGraphActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* UnityEngine::Rendering::Universal::UniversalRenderer::get_deferredLights() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_deferredLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::Rendering::Universal::UniversalRenderer::get_prepassLayerMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_prepassLayerMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::set_prepassLayerMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "set_prepassLayerMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
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
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::get_shadowTransparentReceive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "get_shadowTransparentReceive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::set_shadowTransparentReceive(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "set_shadowTransparentReceive", {}, { ::i2c::type_of<bool>() } })));
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
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::ReleaseRenderTargets() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
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
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsWebGL() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsWebGL", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsGLESDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsGLESDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsGLDevice() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "IsGLDevice", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::HasActiveRenderFeatures(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "HasActiveRenderFeatures", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rendererFeatures);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::HasPassesRequiringIntermediateTexture(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "HasPassesRequiringIntermediateTexture", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, activeRenderPassQueue);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupVFXCameraBuffer(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "SetupVFXCameraBuffer", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraData);
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
inline ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary
UnityEngine::Rendering::Universal::UniversalRenderer::GetRenderPassInputs(bool isTemporalAAEnabled, bool postProcessingEnabled, bool isSceneViewCamera, bool renderingLayerProvidesByDepthNormalPass,
                                                                          ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue,
                                                                          ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* motionVectorPass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "GetRenderPassInputs",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(),
                                                               ::i2c::type_of<::UnityEngine::Rendering::Universal::MotionVectorRenderPass*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>(
      nullptr, ___internal_method, isTemporalAAEnabled, postProcessingEnabled, isSceneViewCamera, renderingLayerProvidesByDepthNormalPass, activeRenderPassQueue, motionVectorPass);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::PlatformRequiresExplicitMsaaResolve() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(), { "PlatformRequiresExplicitMsaaResolve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateColorTexture(
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const> renderPassInputs, bool usesDeferredLighting, bool applyPostProcessing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "RequiresIntermediateColorTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData, renderPassInputs, usesDeferredLighting, applyPostProcessing);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsScalableBufferManagerUsed(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "IsScalableBufferManagerUsed", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::CanCopyDepth(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "CanCopyDepth", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData);
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
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphTexture(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor const> desc, ::StringW name, bool clear,
    ::UnityEngine::Color color, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool discardOnLastUse) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "CreateRenderGraphTexture",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor const>>(),
                                                  ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                                                  ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, desc, name, clear, color, filterMode, wrapMode,
                                                                                                         discardOnLastUse);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::GetTextureDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor const> desc,
                                                                                 ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> rgDesc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "GetTextureDesc",
                            {},
                            { ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, desc, rgDesc);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphTexture(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> desc, ::StringW name, bool clear,
    ::UnityEngine::Color clearColor, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool discardOnLastUse) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CreateRenderGraphTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>(),
                              ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::FilterMode>(),
                              ::i2c::type_of<::UnityEngine::TextureWrapMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(nullptr, ___internal_method, renderGraph, desc, name, clear, clearColor, filterMode, wrapMode,
                                                                                                         discardOnLastUse);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::RequiresIntermediateAttachments(
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const> renderPassInputs, bool requireCopyFromDepth, bool applyPostProcessing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "RequiresIntermediateAttachments",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData, renderPassInputs, requireCopyFromDepth, applyPostProcessing);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::UpdateCameraHistory(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "UpdateCameraHistory", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderGraphCameraRenderTargets(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                       bool isCameraTargetOffscreenDepth, bool requireIntermediateAttachments,
                                                                                                       bool depthTextureIsDepthFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                       { "CreateRenderGraphCameraRenderTargets",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, isCameraTargetOffscreenDepth, requireIntermediateAttachments, depthTextureIsDepthFormat);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams
UnityEngine::Rendering::Universal::UniversalRenderer::GetClearCameraParams(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "GetClearCameraParams", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetupTargetHandles(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "SetupTargetHandles", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
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
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::AllowPartialDepthNormalsPrepass(bool isDeferred, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalEvent,
                                                                                                  bool useDepthPriming) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "AllowPartialDepthNormalsPrepass", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, isDeferred, requiresDepthNormalEvent, useDepthPriming);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule
UnityEngine::Rendering::Universal::UniversalRenderer::CalculateDepthCopySchedule(::UnityEngine::Rendering::Universal::RenderPassEvent earliestDepthReadEvent, bool hasFullPrepass) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "CalculateDepthCopySchedule", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule>(this, ___internal_method, earliestDepthReadEvent, hasFullPrepass);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules UnityEngine::Rendering::Universal::UniversalRenderer::CalculateTextureCopySchedules(
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const> renderPassInputs, bool isDeferred, bool requiresDepthPrepass, bool hasFullPrepass,
    bool requireDepthTexture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "CalculateTextureCopySchedules",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules>(this, ___internal_method, cameraData, renderPassInputs, isDeferred,
                                                                                                                          requiresDepthPrepass, hasFullPrepass, requireDepthTexture);
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
inline void
UnityEngine::Rendering::Universal::UniversalRenderer::OnMainRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const> renderPassInputs,
                                                                      bool requiresPrepass, bool requireDepthTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "OnMainRendering",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, context, renderPassInputs, requiresPrepass, requireDepthTexture);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::OnAfterRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool applyPostProcessing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "OnAfterRendering", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, applyPostProcessing);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::RequirePrepassForTextures(
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const> renderPassInputs, bool requireDepthTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "RequirePrepassForTextures",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraData, renderPassInputs, requireDepthTexture);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::RequireDepthTexture(
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const> renderPassInputs, bool applyPostProcessing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "RequireDepthTexture",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData, renderPassInputs, applyPostProcessing);
}
inline bool UnityEngine::Rendering::Universal::UniversalRenderer::IsDepthPrimingEnabledRenderGraph(
    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const> renderPassInputs,
    ::UnityEngine::Rendering::Universal::DepthPrimingMode depthPrimingMode, bool requireDepthTexture, bool requirePrepassForTextures, bool usesDeferredLighting) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                       { "IsDepthPrimingEnabledRenderGraph",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary const>>(),
                                           ::i2c::type_of<::UnityEngine::Rendering::Universal::DepthPrimingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cameraData, renderPassInputs, depthPrimingMode, requireDepthTexture, requirePrepassForTextures, usesDeferredLighting);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::SetRenderingLayersGlobalTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                           { "SetRenderingLayersGlobalTextures", {}, { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::ImportBackBuffers(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                    ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Color clearBackgroundColor,
                                                                                    bool isCameraTargetOffscreenDepth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "ImportBackBuffers",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, clearBackgroundColor, isCameraTargetOffscreenDepth);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateIntermediateCameraColorAttachment(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> cameraDescriptor, bool clearColor, ::UnityEngine::Color clearBackgroundColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CreateIntermediateCameraColorAttachment",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, cameraDescriptor, clearColor, clearBackgroundColor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateIntermediateCameraDepthAttachment(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const> cameraDescriptor, bool clearDepth, ::UnityEngine::Color clearBackgroundDepth,
    bool depthTextureIsDepthFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                       { "CreateIntermediateCameraDepthAttachment",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc const>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(),
                                           ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, cameraData, cameraDescriptor, clearDepth, clearBackgroundDepth, depthTextureIsDepthFormat);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraDepthCopyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor, bool isDepthTexture,
                                                                                               ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                              { "CreateCameraDepthCopyTexture",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor, isDepthTexture, clearColor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateMotionVectorTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CreateMotionVectorTextures",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateCameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                             ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CreateCameraNormalsTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateRenderingLayersTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CreateRenderingLayersTexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
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
inline void UnityEngine::Rendering::Universal::UniversalRenderer::CreateOffscreenUITexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                           ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                          { "CreateOffscreenUITexture",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, descriptor);
}
inline void UnityEngine::Rendering::Universal::UniversalRenderer::DepthNormalPrepassRender(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                           ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary renderPassInputs,
                                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> depthTarget,
                                                                                           uint32_t batchLayerMask, bool setGlobalDepth, bool setGlobalTextures, bool partialPass) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::UniversalRenderer*>(),
                                                                                         { "DepthNormalPrepassRender",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const>>(),
                                                                                             ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, renderPassInputs, depthTarget, batchLayerMask, setGlobalDepth, setGlobalTextures, partialPass);
}
inline ::UnityEngine::Rendering::Universal::UniversalRenderer* UnityEngine::Rendering::Universal::UniversalRenderer::New_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::UniversalRenderer*>(data));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderer::UniversalRenderer() {}
