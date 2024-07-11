#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassDoubleKawaseBlurTextureEffectSO.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassDoubleKawaseBlurTextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO.Render
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::*)(
    ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::Render)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c0d728;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::*)()>(
    &::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2c0d760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom1KernelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom1KernelSize;
}
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom1KernelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom1KernelSize;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__bloom1KernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloom1KernelSize = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom1Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom1Boost;
}
constexpr float_t const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom1Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom1Boost;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__bloom1Boost(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloom1Boost = value;
}
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom2KernelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom2KernelSize;
}
constexpr ::GlobalNamespace::__KawaseBlurRendererSO__KernelSize const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom2KernelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom2KernelSize;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__bloom2KernelSize(::GlobalNamespace::__KawaseBlurRendererSO__KernelSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloom2KernelSize = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom2Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom2Boost;
}
constexpr float_t const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom2Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom2Boost;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__bloom2Boost(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloom2Boost = value;
}
constexpr float_t& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom2Alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom2Alpha;
}
constexpr float_t const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom2Alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom2Alpha;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__bloom2Alpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloom2Alpha = value;
}
constexpr int32_t& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__downsample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsample;
}
constexpr int32_t const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__downsample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____downsample;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__downsample(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____downsample = value;
}
constexpr bool& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__gammaCorrection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gammaCorrection;
}
constexpr bool const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__gammaCorrection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gammaCorrection;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__gammaCorrection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gammaCorrection = value;
}
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO>& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__kawaseBlurRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr ::UnityW<::GlobalNamespace::KawaseBlurRendererSO> const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__kawaseBlurRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kawaseBlurRenderer;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__kawaseBlurRenderer(::UnityW<::GlobalNamespace::KawaseBlurRendererSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kawaseBlurRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, src, dest);
}
inline ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO* GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>());
}
inline void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::BloomPrePassDoubleKawaseBlurTextureEffectSO() {}
