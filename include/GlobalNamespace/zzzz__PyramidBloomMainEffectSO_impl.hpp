#pragma once
// IWYU pragma private; include "GlobalNamespace\PyramidBloomMainEffectSO.hpp"
#include "GlobalNamespace/zzzz__MainEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_impl.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomMainEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.get_hasPostProcessEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&::GlobalNamespace::PyramidBloomMainEffectSO::get_hasPostProcessEffect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f460d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.get_bloomTextureWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&::GlobalNamespace::PyramidBloomMainEffectSO::get_bloomTextureWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f460dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { "get_bloomTextureWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&::GlobalNamespace::PyramidBloomMainEffectSO::OnEnable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5f460e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&::GlobalNamespace::PyramidBloomMainEffectSO::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f462dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.LazyInitializeMaterials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&::GlobalNamespace::PyramidBloomMainEffectSO::LazyInitializeMaterials)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f461ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { "LazyInitializeMaterials", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.PreRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomMainEffectSO::*)(::UnityEngine::Rendering::IBaseCommandBuffer*)>(
    &::GlobalNamespace::PyramidBloomMainEffectSO::PreRender)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f4630c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.PostRender
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomMainEffectSO::*)(::UnityEngine::Rendering::RasterCommandBuffer*, float_t)>(
    &::GlobalNamespace::PyramidBloomMainEffectSO::PostRender)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f46384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.BindAndFetchTempTextureHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomMainEffectSO::*)(
    ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor,
    ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>)>(&::GlobalNamespace::PyramidBloomMainEffectSO::BindAndFetchTempTextureHandles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f4645c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomMainEffectSO::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, float_t)>(&::GlobalNamespace::PyramidBloomMainEffectSO::Render)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5f464b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PyramidBloomMainEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PyramidBloomMainEffectSO::*)()>(&::GlobalNamespace::PyramidBloomMainEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f466f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PyramidBloomRendererSO>& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomRenderer;
}
constexpr ::UnityW<::GlobalNamespace::PyramidBloomRendererSO> const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomRenderer;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__bloomRenderer(::UnityW<::GlobalNamespace::PyramidBloomRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFog = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__fadeShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__fadeShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeShader;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__fadeShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__mainEffectShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__mainEffectShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectShader;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__mainEffectShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectShader = value;
}
constexpr float_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomBlendFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomBlendFactor;
}
constexpr float_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomBlendFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomBlendFactor;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__bloomBlendFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomBlendFactor = value;
}
constexpr float_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomRadius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomRadius;
}
constexpr float_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomRadius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomRadius;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__bloomRadius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomRadius = value;
}
constexpr float_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomIntensity;
}
constexpr float_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomIntensity;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__bloomIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomIntensity = value;
}
constexpr float_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__downBloomIntensityOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downBloomIntensityOffset;
}
constexpr float_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__downBloomIntensityOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downBloomIntensityOffset;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__downBloomIntensityOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downBloomIntensityOffset = value;
}
constexpr float_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__pyramidWeightsParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pyramidWeightsParam;
}
constexpr float_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__pyramidWeightsParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pyramidWeightsParam;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__pyramidWeightsParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pyramidWeightsParam = value;
}
constexpr float_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__alphaWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaWeights;
}
constexpr float_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__alphaWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaWeights;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__alphaWeights(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaWeights = value;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__preFilterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preFilterPass;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__preFilterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preFilterPass;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__preFilterPass(::GlobalNamespace::PyramidBloomRendererSO_Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preFilterPass = value;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__downsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsamplePass;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__downsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsamplePass;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__downsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downsamplePass = value;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__upsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upsamplePass;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__upsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upsamplePass;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__upsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upsamplePass = value;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__finalUpsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalUpsamplePass;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__finalUpsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalUpsamplePass;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__finalUpsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalUpsamplePass = value;
}
constexpr int32_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomTextureWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomTextureWidth;
}
constexpr int32_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__bloomTextureWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomTextureWidth;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__bloomTextureWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomTextureWidth = value;
}
constexpr float_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__baseColorBoost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoost;
}
constexpr float_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__baseColorBoost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoost;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__baseColorBoost(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseColorBoost = value;
}
constexpr float_t& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__baseColorBoostThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoostThreshold;
}
constexpr float_t const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__baseColorBoostThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColorBoostThreshold;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__baseColorBoostThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseColorBoostThreshold = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__fadeMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__fadeMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeMaterial;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__fadeMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__mainEffectMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_get__mainEffectMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffectMaterial;
}
constexpr void GlobalNamespace::PyramidBloomMainEffectSO::__cordl_internal_set__mainEffectMaterial(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffectMaterial = value;
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::setStaticF__bloomTexID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_bloomTexID", ::GlobalNamespace::PyramidBloomMainEffectSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomMainEffectSO::getStaticF__bloomTexID() {
  return ::cordl_internals::getStaticField<int32_t, "_bloomTexID", ::GlobalNamespace::PyramidBloomMainEffectSO*>();
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::setStaticF__bloomIntensityID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_bloomIntensityID", ::GlobalNamespace::PyramidBloomMainEffectSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomMainEffectSO::getStaticF__bloomIntensityID() {
  return ::cordl_internals::getStaticField<int32_t, "_bloomIntensityID", ::GlobalNamespace::PyramidBloomMainEffectSO*>();
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::setStaticF__fadeID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_fadeID", ::GlobalNamespace::PyramidBloomMainEffectSO*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::PyramidBloomMainEffectSO::getStaticF__fadeID() {
  return ::cordl_internals::getStaticField<int32_t, "_fadeID", ::GlobalNamespace::PyramidBloomMainEffectSO*>();
}
inline bool GlobalNamespace::PyramidBloomMainEffectSO::get_hasPostProcessEffect() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PyramidBloomMainEffectSO::get_bloomTextureWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { "get_bloomTextureWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::LazyInitializeMaterials() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { "LazyInitializeMaterials", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::PreRender(::UnityEngine::Rendering::IBaseCommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::PostRender(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t fade) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, fade);
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::BindAndFetchTempTextureHandles(::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* builder,
                                                                                      ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                      ::UnityEngine::RenderTextureDescriptor destDesc,
                                                                                      ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> textureHandles) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, renderGraph, destDesc, textureHandles);
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle src,
                                                              ::UnityEngine::Rendering::RenderGraphModule::TextureHandle bloomTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dest,
                                                              ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures, float_t fade) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, src, bloomTexture, dest, tempTextures, fade);
}
inline void GlobalNamespace::PyramidBloomMainEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PyramidBloomMainEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PyramidBloomMainEffectSO* GlobalNamespace::PyramidBloomMainEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PyramidBloomMainEffectSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PyramidBloomMainEffectSO::PyramidBloomMainEffectSO() {}
