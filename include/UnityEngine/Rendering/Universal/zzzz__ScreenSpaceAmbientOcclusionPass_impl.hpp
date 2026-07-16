#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes::ScreenSpaceAmbientOcclusionPass_BlurTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes::ScreenSpaceAmbientOcclusionPass_BlurTypes() {}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes::Bilateral{ static_cast<int32_t>(
    0x0) };
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes::Gaussian{ static_cast<int32_t>(
    0x1) };
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes::Kawase{ static_cast<int32_t>(
    0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::ScreenSpaceAmbientOcclusionPass_ShaderPasses(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::ScreenSpaceAmbientOcclusionPass_ShaderPasses() {}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::AmbientOcclusion{
  static_cast<int32_t>(0x0)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::BilateralBlurHorizontal{
  static_cast<int32_t>(0x1)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::BilateralBlurVertical{
  static_cast<int32_t>(0x2)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::BilateralBlurFinal{
  static_cast<int32_t>(0x3)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::BilateralAfterOpaque{
  static_cast<int32_t>(0x4)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::GaussianBlurHorizontal{
  static_cast<int32_t>(0x5)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::GaussianBlurVertical{
  static_cast<int32_t>(0x6)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::GaussianAfterOpaque{
  static_cast<int32_t>(0x7)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::KawaseBlur{
  static_cast<int32_t>(0x8)
};
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses::KawaseAfterOpaque{
  static_cast<int32_t>(0x9)
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>, bool)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x68a0310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>(),
                                                { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::Equals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x68a03f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>(),
                                                { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::_ctor(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> settings,
                                                                                                         bool isOrthographic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>(),
                                              { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, settings, isOrthographic);
}
inline bool
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::Equals(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>(),
                                                           { "Equals", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "orthographicCamera", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "aoBlueNoise", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "aoInterleavedGradient", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sampleCountHigh", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sampleCountMedium", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sampleCountLow", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sourceDepthNormals", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sourceDepthHigh", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "sourceDepthMedium", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "sourceDepthLow", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "ssaoParams", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams(
    bool orthographicCamera, bool aoBlueNoise, bool aoInterleavedGradient, bool sampleCountHigh, bool sampleCountMedium, bool sampleCountLow, bool sourceDepthNormals, bool sourceDepthHigh,
    bool sourceDepthMedium, bool sourceDepthLow, ::UnityEngine::Vector4 ssaoParams) noexcept {
  this->orthographicCamera = orthographicCamera;
  this->aoBlueNoise = aoBlueNoise;
  this->aoInterleavedGradient = aoInterleavedGradient;
  this->sampleCountHigh = sampleCountHigh;
  this->sampleCountMedium = sampleCountMedium;
  this->sampleCountLow = sampleCountLow;
  this->sourceDepthNormals = sourceDepthNormals;
  this->sourceDepthHigh = sourceDepthHigh;
  this->sourceDepthMedium = sourceDepthMedium;
  this->sourceDepthLow = sourceDepthLow;
  this->ssaoParams = ssaoParams;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x689f830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_afterOpaque() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterOpaque;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_afterOpaque() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___afterOpaque;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_afterOpaque(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___afterOpaque = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_BlurQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BlurQuality;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_BlurQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BlurQuality;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_BlurQuality(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BlurQuality = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___material;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___material = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_directLightingStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directLightingStrength;
}
constexpr float_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_directLightingStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___directLightingStrength;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_directLightingStrength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___directLightingStrength = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_cameraColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraColor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_cameraColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraColor;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_cameraColor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraColor = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_AOTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AOTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_AOTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___AOTexture;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_AOTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___AOTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_finalTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_finalTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finalTexture;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_finalTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finalTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_blurTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blurTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_blurTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blurTexture;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_blurTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blurTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_cameraNormalsTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraNormalsTexture;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_get_cameraNormalsTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraNormalsTexture;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::__cordl_internal_set_cameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraNormalsTexture = value;
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::ScreenSpaceAmbientOcclusionPass_SSAOPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x68a2c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c._RecordRenderGraph_b__52_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::*)(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::_RecordRenderGraph_b__52_0)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x68a2c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>(),
                                                                                           { "<RecordRenderGraph>b__52_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>(),
                                                                                               ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*, "<>9", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>(
      std::forward<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*, "<>9",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::setStaticF___9__52_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__52_0", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::getStaticF___9__52_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__52_0", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::_RecordRenderGraph_b__52_0(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* data,
                                                                                                               ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>(),
                                                                                         { "<RecordRenderGraph>b__52_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::ScreenSpaceAmbientOcclusionPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.get_isRendererDeferred
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::get_isRendererDeferred)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x689f5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), { "get_isRendererDeferred", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x689f640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>, ::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>, ::by_ref<::UnityEngine::Material*>,
    ::by_ref<::ArrayW<::UnityEngine::Texture2D*>>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Setup)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x689f834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                             { "Setup",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Texture2D*>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.IsAfterOpaquePass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::IsAfterOpaquePass)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x689f9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                { "IsAfterOpaquePass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.SetupKeywordsAndParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>, ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::SetupKeywordsAndParameters)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0x689f9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                                                           { "SetupKeywordsAndParameters",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.InitSSAOPassData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::InitSSAOPassData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x68a04e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                { "InitSSAOPassData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
        &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xaa0;
  constexpr static std::size_t addrs = 0x68a0528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.CreateRenderTextureHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::CreateRenderTextureHandles)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x68a0fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
            { "CreateRenderTextureHandles",
              {},
              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
                ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x68a130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Execute)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x68a1a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.RenderAndSetBaseMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::by_ref<::UnityEngine::Rendering::CommandBuffer*>, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, ::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>,
    ::by_ref<::UnityEngine::Material*>, ::by_ref<::UnityEngine::Rendering::RTHandle*>, ::by_ref<::UnityEngine::Rendering::RTHandle*>,
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::RenderAndSetBaseMap)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x68a2240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                         { "RenderAndSetBaseMap",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(),
                                             ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.GetPassOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes, bool, ::by_ref<::ArrayW<int32_t>>,
                                                                ::by_ref<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::GetPassOrder)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x68a2078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                            { "GetPassOrder",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(),
                                ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x68a254c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x68a2624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SupportsR8RenderTextureFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsR8RenderTextureFormat;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SupportsR8RenderTextureFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SupportsR8RenderTextureFormat;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SupportsR8RenderTextureFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SupportsR8RenderTextureFormat = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlueNoiseTextureIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoiseTextureIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlueNoiseTextureIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoiseTextureIndex;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_BlueNoiseTextureIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlueNoiseTextureIndex = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_Material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_Material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Material;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Material = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_PassData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_PassData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PassData;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PassData = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlueNoiseTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoiseTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlueNoiseTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoiseTextures;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_BlueNoiseTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlueNoiseTextures = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraTopLeftCorner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraTopLeftCorner;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraTopLeftCorner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraTopLeftCorner;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraTopLeftCorner(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraTopLeftCorner = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraXExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraXExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraXExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraXExtent;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraXExtent(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraXExtent = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraYExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraYExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraYExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraYExtent;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraYExtent(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraYExtent = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraZExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraZExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraZExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraZExtent;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraZExtent(::ArrayW<::UnityEngine::Vector4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraZExtent = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTextures;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTextures;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SSAOTextures(::ArrayW<::UnityEngine::Rendering::RTHandle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SSAOTextures = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlurType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlurType;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlurType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlurType;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_BlurType(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlurType = value;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraViewProjections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraViewProjections;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraViewProjections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraViewProjections;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraViewProjections(::ArrayW<::UnityEngine::Matrix4x4> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CameraViewProjections = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_ProfilingSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_ProfilingSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProfilingSampler = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_Renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_Renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Renderer;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_Renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Renderer = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_AOPassDescriptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AOPassDescriptor;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_AOPassDescriptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AOPassDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_AOPassDescriptor(::UnityEngine::RenderTextureDescriptor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AOPassDescriptor = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CurrentSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSettings;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CurrentSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentSettings;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CurrentSettings(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentSettings = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOParamsPrev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOParamsPrev;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOParamsPrev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOParamsPrev;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SSAOParamsPrev(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SSAOParamsPrev = value;
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_AmbientOcclusionParamID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_AmbientOcclusionParamID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_AmbientOcclusionParamID() {
  return ::cordl_internals::getStaticField<int32_t, "s_AmbientOcclusionParamID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOParamsID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "s_SSAOParamsID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOBlueNoiseParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOBlueNoiseParamsID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOBlueNoiseParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "s_SSAOBlueNoiseParamsID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_BlueNoiseTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_BlueNoiseTextureID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_BlueNoiseTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_BlueNoiseTextureID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOFinalTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOFinalTextureID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOFinalTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_SSAOFinalTextureID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewXExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewXExtentID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewXExtentID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewXExtentID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewYExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewYExtentID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewYExtentID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewYExtentID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewZExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewZExtentID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewZExtentID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewZExtentID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_ProjectionParams2ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ProjectionParams2ID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_ProjectionParams2ID() {
  return ::cordl_internals::getStaticField<int32_t, "s_ProjectionParams2ID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewProjectionsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewProjectionsID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewProjectionsID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewProjectionsID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewTopLeftCornerID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewTopLeftCornerID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewTopLeftCornerID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewTopLeftCornerID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraNormalsTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraNormalsTextureID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraNormalsTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraNormalsTextureID", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_BilateralTexturesIndices(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "m_BilateralTexturesIndices", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_BilateralTexturesIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "m_BilateralTexturesIndices", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_BilateralPasses(::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_BilateralPasses",
                                    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_BilateralPasses() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_BilateralPasses",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_BilateralAfterOpaquePasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_BilateralAfterOpaquePasses",
                                    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_BilateralAfterOpaquePasses() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_BilateralAfterOpaquePasses",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_GaussianTexturesIndices(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "m_GaussianTexturesIndices", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_GaussianTexturesIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "m_GaussianTexturesIndices", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_GaussianPasses(::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_GaussianPasses",
                                    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_GaussianPasses() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_GaussianPasses",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_GaussianAfterOpaquePasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_GaussianAfterOpaquePasses",
                                    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_GaussianAfterOpaquePasses() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_GaussianAfterOpaquePasses",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_KawaseTexturesIndices(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "m_KawaseTexturesIndices", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_KawaseTexturesIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "m_KawaseTexturesIndices", ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_KawasePasses(::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_KawasePasses",
                                    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_KawasePasses() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_KawasePasses",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_KawaseAfterOpaquePasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_KawaseAfterOpaquePasses",
                                    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(
      std::forward<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_KawaseAfterOpaquePasses() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>, "m_KawaseAfterOpaquePasses",
                                           ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>();
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::get_isRendererDeferred() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), { "get_isRendererDeferred", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Setup(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> featureSettings,
                                                                                      ::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer,
                                                                                      ::by_ref<::UnityEngine::Material*> material, ::by_ref<::ArrayW<::UnityEngine::Texture2D*>> blueNoiseTextures) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                           { "Setup",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Texture2D*>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, featureSettings, renderer, material, blueNoiseTextures);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::IsAfterOpaquePass(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> pass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                              { "IsAfterOpaquePass", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pass);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::SetupKeywordsAndParameters(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> settings,
                                                                                                           ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                                                                         { "SetupKeywordsAndParameters",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::InitSSAOPassData(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                              { "InitSSAOPassData", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                  ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::CreateRenderTextureHandles(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                           ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                                           ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> aoTexture,
                                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> blurTexture,
                                                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> finalTexture) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
          { "CreateRenderTextureHandles",
            {},
            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(),
              ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
              ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, resourceData, cameraData, aoTexture, blurTexture, finalTexture);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                              ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                        ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::RenderAndSetBaseMap(::by_ref<::UnityEngine::Rendering::CommandBuffer*> cmd,
                                                                                                    ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                                    ::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer,
                                                                                                    ::by_ref<::UnityEngine::Material*> mat, ::by_ref<::UnityEngine::Rendering::RTHandle*> baseMap,
                                                                                                    ::by_ref<::UnityEngine::Rendering::RTHandle*> target,
                                                                                                    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses pass) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                                              { "RenderAndSetBaseMap",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::CommandBuffer*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Material*>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RTHandle*>>(),
                                                  ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, renderingData, renderer, mat, baseMap, target, pass);
}
inline void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::GetPassOrder(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes blurType, bool isAfterOpaque,
                                                                                 ::by_ref<::ArrayW<int32_t>> textureIndices,
                                                                                 ::by_ref<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>> shaderPasses) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(),
                          { "GetPassOrder",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(),
                              ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, blurType, isAfterOpaque, textureIndices, shaderPasses);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::ScreenSpaceAmbientOcclusionPass() {}
