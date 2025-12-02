#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPass.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
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
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>, bool)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6685bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::Equals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6685ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>::get(), "Equals",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::_ctor(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> settings,
                                                                                                         bool isOrthographic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, isOrthographic);
}
inline bool
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::Equals(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>::get(), "Equals",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x66850e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData::ScreenSpaceAmbientOcclusionPass_SSAOPassData() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6688510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c._RecordRenderGraph_b__52_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::*)(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::_RecordRenderGraph_b__52_0)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0x6688514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>::get(), "<RecordRenderGraph>b__52_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::setStaticF___9(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::setStaticF___9__52_0(
    ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                    "<>9__52_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>::get>(
      std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                     ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::getStaticF___9__52_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*,
                                           "<>9__52_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::_RecordRenderGraph_b__52_0(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData* data,
                                                                                                               ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>::get(), "<RecordRenderGraph>b__52_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, rgContext);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass___c::ScreenSpaceAmbientOcclusionPass___c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.get_isRendererDeferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::get_isRendererDeferred)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6684e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(),
                                                 "get_isRendererDeferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6684ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>, ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>, ::ByRef<::UnityEngine::Material*>,
    ::ByRef<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Setup)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x66850e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Material*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.IsAfterOpaquePass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::IsAfterOpaquePass)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6685290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "IsAfterOpaquePass",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.SetupKeywordsAndParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>, ::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::SetupKeywordsAndParameters)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0x66852ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "SetupKeywordsAndParameters",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.InitSSAOPassData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::InitSSAOPassData)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6685d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "InitSSAOPassData",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.RecordRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(
        &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0xaa0;
  constexpr static std::size_t addrs = 0x6685ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.CreateRenderTextureHandles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>,
    ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::CreateRenderTextureHandles)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x668687c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "CreateRenderTextureHandles",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalResourceData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.OnCameraSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x6686bc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Execute)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x66872d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.RenderAndSetBaseMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::UnityEngine::Rendering::CommandBuffer*>, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>,
    ::ByRef<::UnityEngine::Material*>, ::ByRef<::UnityEngine::Rendering::RTHandle*>, ::ByRef<::UnityEngine::Rendering::RTHandle*>,
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::RenderAndSetBaseMap)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6687af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "RenderAndSetBaseMap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CommandBuffer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Material*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.GetPassOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes, bool, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>,
    ::ByRef<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>)>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::GetPassOrder)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x668792c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "GetPassOrder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses,
                                                                                   ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6687e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6687ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PassData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlueNoiseTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoiseTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_BlueNoiseTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlueNoiseTextures;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_BlueNoiseTextures(
    ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlueNoiseTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraTopLeftCorner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraTopLeftCorner;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraTopLeftCorner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraTopLeftCorner;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraTopLeftCorner(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraTopLeftCorner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraXExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraXExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraXExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraXExtent;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraXExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraXExtent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraYExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraYExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraYExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraYExtent;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraYExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraYExtent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraZExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraZExtent;
}
constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraZExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraZExtent;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraZExtent(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraZExtent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTextures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTextures;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_SSAOTextures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SSAOTextures;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_SSAOTextures(
    ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SSAOTextures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraViewProjections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraViewProjections;
}
constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const&
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_get_m_CameraViewProjections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraViewProjections;
}
constexpr void
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::__cordl_internal_set_m_CameraViewProjections(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraViewProjections)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<int32_t, "s_AmbientOcclusionParamID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_AmbientOcclusionParamID() {
  return ::cordl_internals::getStaticField<int32_t, "s_AmbientOcclusionParamID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "s_SSAOParamsID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOBlueNoiseParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOBlueNoiseParamsID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOBlueNoiseParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "s_SSAOBlueNoiseParamsID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_BlueNoiseTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_BlueNoiseTextureID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_BlueNoiseTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_BlueNoiseTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_SSAOFinalTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SSAOFinalTextureID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_SSAOFinalTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_SSAOFinalTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewXExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewXExtentID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewXExtentID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewXExtentID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewYExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewYExtentID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewYExtentID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewYExtentID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewZExtentID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewZExtentID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewZExtentID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewZExtentID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_ProjectionParams2ID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ProjectionParams2ID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_ProjectionParams2ID() {
  return ::cordl_internals::getStaticField<int32_t, "s_ProjectionParams2ID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewProjectionsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewProjectionsID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewProjectionsID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewProjectionsID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraViewTopLeftCornerID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraViewTopLeftCornerID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraViewTopLeftCornerID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraViewTopLeftCornerID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraDepthTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraDepthTextureID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraDepthTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraDepthTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_s_CameraNormalsTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraNormalsTextureID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_s_CameraNormalsTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraNormalsTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_BilateralTexturesIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "m_BilateralTexturesIndices",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_BilateralTexturesIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "m_BilateralTexturesIndices",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_BilateralPasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value) {
  ::cordl_internals::setStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_BilateralPasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<
          ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>(
          value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_BilateralPasses() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_BilateralPasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_BilateralAfterOpaquePasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value) {
  ::cordl_internals::setStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_BilateralAfterOpaquePasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<
          ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>(
          value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_BilateralAfterOpaquePasses() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_BilateralAfterOpaquePasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_GaussianTexturesIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "m_GaussianTexturesIndices",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_GaussianTexturesIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "m_GaussianTexturesIndices",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_GaussianPasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value) {
  ::cordl_internals::setStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_GaussianPasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<
          ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>(
          value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_GaussianPasses() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_GaussianPasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_GaussianAfterOpaquePasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value) {
  ::cordl_internals::setStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_GaussianAfterOpaquePasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<
          ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>(
          value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_GaussianAfterOpaquePasses() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_GaussianAfterOpaquePasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_KawaseTexturesIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "m_KawaseTexturesIndices",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_KawaseTexturesIndices() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "m_KawaseTexturesIndices",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_KawasePasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value) {
  ::cordl_internals::setStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_KawasePasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<
          ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>(
          value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_KawasePasses() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_KawasePasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::setStaticF_m_KawaseAfterOpaquePasses(
    ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*> value) {
  ::cordl_internals::setStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_KawaseAfterOpaquePasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>(
      std::forward<
          ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>(
          value));
}
inline ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>
UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::getStaticF_m_KawaseAfterOpaquePasses() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>,
      "m_KawaseAfterOpaquePasses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get>();
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::get_isRendererDeferred() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(),
                                               "get_isRendererDeferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Setup(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> featureSettings,
                                                                                      ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer,
                                                                                      ::ByRef<::UnityEngine::Material*> material,
                                                                                      ::ByRef<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>> blueNoiseTextures) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Material*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, featureSettings, renderer, material, blueNoiseTextures);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::IsAfterOpaquePass(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses> pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "IsAfterOpaquePass",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pass);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::SetupKeywordsAndParameters(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> settings,
                                                                                                           ::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "SetupKeywordsAndParameters",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::InitSSAOPassData(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "InitSSAOPassData",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_SSAOPassData*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                  ::UnityEngine::Rendering::ContextContainer* frameData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, frameData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::CreateRenderTextureHandles(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                           ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                                                                           ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> aoTexture,
                                                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> blurTexture,
                                                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> finalTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "CreateRenderTextureHandles",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalResourceData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::UniversalCameraData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraph, resourceData, cameraData, aoTexture, blurTexture, finalTexture);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                              ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                        ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::RenderAndSetBaseMap(::ByRef<::UnityEngine::Rendering::CommandBuffer*> cmd,
                                                                                                    ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                                    ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> renderer,
                                                                                                    ::ByRef<::UnityEngine::Material*> mat, ::ByRef<::UnityEngine::Rendering::RTHandle*> baseMap,
                                                                                                    ::ByRef<::UnityEngine::Rendering::RTHandle*> target,
                                                                                                    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "RenderAndSetBaseMap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::CommandBuffer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Material*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::RTHandle*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, renderingData, renderer, mat, baseMap, target, pass);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::GetPassOrder(
    ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes blurType, bool isAfterOpaque, ::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> textureIndices,
    ::ByRef<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses, ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>
        shaderPasses) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "GetPassOrder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_BlurTypes>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses,
                                                                                 ::Array<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass_ShaderPasses>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, blurType, isAfterOpaque, textureIndices, shaderPasses);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass::ScreenSpaceAmbientOcclusionPass() {}
