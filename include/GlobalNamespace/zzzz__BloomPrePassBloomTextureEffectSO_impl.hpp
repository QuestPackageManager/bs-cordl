#pragma once
// IWYU pragma private; include "GlobalNamespace\BloomPrePassBloomTextureEffectSO.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBloomTextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__IUnsafeRenderGraphBuilder_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO.get_toneMapping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ToneMapping (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(
    &::GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f4f314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO.BindAndFetchTempTextureHandles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)(
    ::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::RenderTextureDescriptor,
    ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>)>(&::GlobalNamespace::BloomPrePassBloomTextureEffectSO::BindAndFetchTempTextureHandles)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5f4f328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO.Render
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle,
    ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>)>(&::GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f4f380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(&::GlobalNamespace::BloomPrePassBloomTextureEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f4f3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__radius() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__radius() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____radius;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__radius(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____radius = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__downBloomIntensityOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downBloomIntensityOffset;
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__downBloomIntensityOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downBloomIntensityOffset;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__downBloomIntensityOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downBloomIntensityOffset = value;
}
constexpr bool& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__uniformPyramidWeights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uniformPyramidWeights;
}
constexpr bool const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__uniformPyramidWeights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uniformPyramidWeights;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__uniformPyramidWeights(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uniformPyramidWeights = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__pyramidWeightsParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pyramidWeightsParam;
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__pyramidWeightsParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pyramidWeightsParam;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__pyramidWeightsParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pyramidWeightsParam = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__firstUpsampleBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstUpsampleBrightness;
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__firstUpsampleBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstUpsampleBrightness;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__firstUpsampleBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstUpsampleBrightness = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__finalUpsampleBrightness() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalUpsampleBrightness;
}
constexpr float_t const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__finalUpsampleBrightness() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalUpsampleBrightness;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__finalUpsampleBrightness(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalUpsampleBrightness = value;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__prefilterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefilterPass;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__prefilterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefilterPass;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__prefilterPass(::GlobalNamespace::PyramidBloomRendererSO_Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefilterPass = value;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__downsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsamplePass;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__downsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsamplePass;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__downsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downsamplePass = value;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__upsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upsamplePass;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__upsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upsamplePass;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__upsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upsamplePass = value;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__finalUpsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalUpsamplePass;
}
constexpr ::GlobalNamespace::PyramidBloomRendererSO_Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__finalUpsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalUpsamplePass;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__finalUpsamplePass(::GlobalNamespace::PyramidBloomRendererSO_Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finalUpsamplePass = value;
}
constexpr ::UnityW<::GlobalNamespace::PyramidBloomRendererSO>& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__bloomRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomRenderer;
}
constexpr ::UnityW<::GlobalNamespace::PyramidBloomRendererSO> const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__bloomRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomRenderer;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__bloomRenderer(::UnityW<::GlobalNamespace::PyramidBloomRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO>& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::UnityW<::GlobalNamespace::BloomFogSO> const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__bloomFog(::UnityW<::GlobalNamespace::BloomFogSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomFog = value;
}
inline ::GlobalNamespace::ToneMapping GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ToneMapping>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBloomTextureEffectSO::BindAndFetchTempTextureHandles(::UnityEngine::Rendering::RenderGraphModule::IUnsafeRenderGraphBuilder* builder,
                                                                                              ::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                              ::UnityEngine::RenderTextureDescriptor destDesc,
                                                                                              ::by_ref<::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>> textureHandles) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, renderGraph, destDesc, textureHandles);
}
inline void GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle src,
                                                                      ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dest,
                                                                      ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> tempTextures) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, src, dest, tempTextures);
}
inline void GlobalNamespace::BloomPrePassBloomTextureEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassBloomTextureEffectSO* GlobalNamespace::BloomPrePassBloomTextureEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBloomTextureEffectSO::BloomPrePassBloomTextureEffectSO() {}
