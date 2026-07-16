#pragma once
// IWYU pragma private; include "GlobalNamespace/PyramidBloomRendererSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass::PyramidBloomRendererSO_Pass(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass::PyramidBloomRendererSO_Pass() {}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Prefilter13{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Prefilter4{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Downsample13{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Downsample4{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::DownsampleBilinearGamma{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTent{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleBox{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTentGamma{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleBoxGamma{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::Bilinear{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::BilinearGamma{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTentAndReinhardToneMapping{ static_cast<int32_t>(0xb) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTentAndACESToneMapping{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass GlobalNamespace::PyramidBloomRendererSO_Pass::UpsampleTentAndACESToneMappingGlobalIntensity{ static_cast<int32_t>(0xd) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PyramidBloomRendererSO_TextureType::PyramidBloomRendererSO_TextureType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PyramidBloomRendererSO_TextureType::PyramidBloomRendererSO_TextureType() {}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_TextureType GlobalNamespace::PyramidBloomRendererSO_TextureType::BloomPrePass{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PyramidBloomRendererSO_TextureType GlobalNamespace::PyramidBloomRendererSO_TextureType::MainEffect{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::OnEnable)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x58603d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), { ::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::OnDisable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5860748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.SetupTempTextureHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)(
    ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor,
    ::GlobalNamespace::PyramidBloomRendererSO_TextureType, float_t, bool, ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>)>(
    &::GlobalNamespace::PyramidBloomRendererSO::SetupTempTextureHandles)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x586075c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(),
                            { "SetupTempTextureHandles",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                                ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_TextureType>(), ::i2c::type_of<float_t>(),
                                ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO.RenderBloom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, float_t, float_t, float_t, float_t, bool, bool, float_t, float_t, float_t, float_t,
    ::GlobalNamespace::PyramidBloomRendererSO_Pass, ::GlobalNamespace::PyramidBloomRendererSO_Pass, ::GlobalNamespace::PyramidBloomRendererSO_Pass, ::GlobalNamespace::PyramidBloomRendererSO_Pass,
    bool, bool)>(&::GlobalNamespace::PyramidBloomRendererSO::RenderBloom)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x5860bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), { "RenderBloom",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                                                            ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                                            ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                                            ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                                            ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<bool>(),
                                                                                                            ::i2c::type_of<bool>(),
                                                                                                            ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_Pass>(),
                                                                                                            ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_Pass>(),
                                                                                                            ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_Pass>(),
                                                                                                            ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_Pass>(),
                                                                                                            ::i2c::type_of<bool>(),
                                                                                                            ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomRendererSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomRendererSO::*)()>(&::GlobalNamespace::PyramidBloomRendererSO::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5861280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__shader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__shader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shader;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__shader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shader = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__material(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____material = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__mipDownNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDownNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__mipDownNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipDownNames;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__mipDownNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipDownNames = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__mipUpNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipUpNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__mipUpNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mipUpNames;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__mipUpNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mipUpNames = value;
}
constexpr ::StringW& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get_kIsScreenspaceEffectKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kIsScreenspaceEffectKeyword;
}
constexpr ::StringW const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get_kIsScreenspaceEffectKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kIsScreenspaceEffectKeyword;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set_kIsScreenspaceEffectKeyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kIsScreenspaceEffectKeyword = value;
}
constexpr ::StringW& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get_kLegacyAutoExposureKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kLegacyAutoExposureKeyword;
}
constexpr ::StringW const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get_kLegacyAutoExposureKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kLegacyAutoExposureKeyword;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set_kLegacyAutoExposureKeyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kLegacyAutoExposureKeyword = value;
}
constexpr ::UnityEngine::Rendering::LocalKeyword& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__isScreenspaceEffectKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isScreenspaceEffectKeyword;
}
constexpr ::UnityEngine::Rendering::LocalKeyword const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__isScreenspaceEffectKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isScreenspaceEffectKeyword;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__isScreenspaceEffectKeyword(::UnityEngine::Rendering::LocalKeyword value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isScreenspaceEffectKeyword = value;
}
constexpr ::UnityEngine::Rendering::GlobalKeyword& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__isScreenspaceEffectGlobalKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isScreenspaceEffectGlobalKeyword;
}
constexpr ::UnityEngine::Rendering::GlobalKeyword const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__isScreenspaceEffectGlobalKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isScreenspaceEffectGlobalKeyword;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__isScreenspaceEffectGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isScreenspaceEffectGlobalKeyword = value;
}
constexpr ::UnityEngine::Rendering::GlobalKeyword& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__legacyAutoExposureGlobalKeyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legacyAutoExposureGlobalKeyword;
}
constexpr ::UnityEngine::Rendering::GlobalKeyword const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__legacyAutoExposureGlobalKeyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____legacyAutoExposureGlobalKeyword;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__legacyAutoExposureGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____legacyAutoExposureGlobalKeyword = value;
}
constexpr bool& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::PyramidBloomRendererSO::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__bloomTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_bloomTexID", ::GlobalNamespace::PyramidBloomRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__bloomTexID() {
  return ::cordl_internals::getStaticField<int32_t, "_bloomTexID", ::GlobalNamespace::PyramidBloomRendererSO*>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__globalIntensityTex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_globalIntensityTex", ::GlobalNamespace::PyramidBloomRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__globalIntensityTex() {
  return ::cordl_internals::getStaticField<int32_t, "_globalIntensityTex", ::GlobalNamespace::PyramidBloomRendererSO*>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__combineParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_combineParamsID", ::GlobalNamespace::PyramidBloomRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__combineParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "_combineParamsID", ::GlobalNamespace::PyramidBloomRendererSO*>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::setStaticF__bloomParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_bloomParamsID", ::GlobalNamespace::PyramidBloomRendererSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomRendererSO::getStaticF__bloomParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "_bloomParamsID", ::GlobalNamespace::PyramidBloomRendererSO*>();
}
inline void GlobalNamespace::PyramidBloomRendererSO::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomRendererSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomRendererSO::SetupTempTextureHandles(::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* builder,
                                                                             ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor destDesc,
                                                                             ::GlobalNamespace::PyramidBloomRendererSO_TextureType textureType, float_t radius, bool downsampleOnFirstPass,
                                                                             ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> textureHandles) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(),
                          { "SetupTempTextureHandles",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(),
                              ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>(), ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_TextureType>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, renderGraph, destDesc, textureType, radius, downsampleOnFirstPass, textureHandles);
}
inline void GlobalNamespace::PyramidBloomRendererSO::RenderBloom(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle src,
                                                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dest,
                                                                 ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempRTHandles, float_t radius, float_t intensity,
                                                                 float_t autoExposureLimit, float_t downIntensityOffset, bool uniformPyramidWeights, bool downsampleOnFirstPass,
                                                                 float_t pyramidWeightsParam, float_t alphaWeights, float_t firstUpsampleBrightness, float_t finalUpsampleBrightness,
                                                                 ::GlobalNamespace::PyramidBloomRendererSO_Pass preFilterPass, ::GlobalNamespace::PyramidBloomRendererSO_Pass downsamplePass,
                                                                 ::GlobalNamespace::PyramidBloomRendererSO_Pass upsamplePass, ::GlobalNamespace::PyramidBloomRendererSO_Pass finalUpsamplePass,
                                                                 bool legacyAutoExposure, bool isScreenspaceEffect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), { "RenderBloom",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(),
                                                                                                                 ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<float_t>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_Pass>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_Pass>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_Pass>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::PyramidBloomRendererSO_Pass>(),
                                                                                                                 ::i2c::type_of<bool>(),
                                                                                                                 ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, src, dest, tempRTHandles, radius, intensity, autoExposureLimit, downIntensityOffset, uniformPyramidWeights,
                                                   downsampleOnFirstPass, pyramidWeightsParam, alphaWeights, firstUpsampleBrightness, finalUpsampleBrightness, preFilterPass, downsamplePass,
                                                   upsamplePass, finalUpsamplePass, legacyAutoExposure, isScreenspaceEffect);
}
inline void GlobalNamespace::PyramidBloomRendererSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomRendererSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PyramidBloomRendererSO* GlobalNamespace::PyramidBloomRendererSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PyramidBloomRendererSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PyramidBloomRendererSO::PyramidBloomRendererSO() {}
