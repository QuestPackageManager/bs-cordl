#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBloomTextureEffectSO.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBloomTextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "GlobalNamespace/zzzz__PyramidBloomRendererSO_def.hpp"
#include "GlobalNamespace/zzzz__ToneMapping_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO.get_toneMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ToneMapping (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(
    &::GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4024034;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4024054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassBloomTextureEffectSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(
    &::GlobalNamespace::BloomPrePassBloomTextureEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x40240c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__prefilterPass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefilterPass;
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__prefilterPass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefilterPass;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__prefilterPass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefilterPass = value;
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__downsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsamplePass;
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__downsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsamplePass;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__downsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downsamplePass = value;
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__upsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upsamplePass;
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__upsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____upsamplePass;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__upsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____upsamplePass = value;
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__finalUpsamplePass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalUpsamplePass;
}
constexpr ::GlobalNamespace::__PyramidBloomRendererSO__Pass const& GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_get__finalUpsamplePass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finalUpsamplePass;
}
constexpr void GlobalNamespace::BloomPrePassBloomTextureEffectSO::__cordl_internal_set__finalUpsamplePass(::GlobalNamespace::__PyramidBloomRendererSO__Pass value) {
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomFog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ToneMapping GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ToneMapping, false>(this, ___internal_method);
}
inline void GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest);
}
inline ::GlobalNamespace::BloomPrePassBloomTextureEffectSO* GlobalNamespace::BloomPrePassBloomTextureEffectSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>());
}
inline void GlobalNamespace::BloomPrePassBloomTextureEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassBloomTextureEffectSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassBloomTextureEffectSO::BloomPrePassBloomTextureEffectSO() {}
