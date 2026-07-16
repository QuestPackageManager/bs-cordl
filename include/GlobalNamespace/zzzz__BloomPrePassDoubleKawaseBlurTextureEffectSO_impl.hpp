#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassDoubleKawaseBlurTextureEffectSO.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassEffectSO_impl.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassDoubleKawaseBlurTextureEffectSO_def.hpp"
#include "GlobalNamespace/zzzz__KawaseBlurRendererSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::*)()>(
    &::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f49e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom1KernelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom1KernelSize;
}
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom1KernelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom1KernelSize;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__bloom1KernelSize(::GlobalNamespace::KawaseBlurRendererSO_KernelSize value) {
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
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom2KernelSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom2KernelSize;
}
constexpr ::GlobalNamespace::KawaseBlurRendererSO_KernelSize const& GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_get__bloom2KernelSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom2KernelSize;
}
constexpr void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::__cordl_internal_set__bloom2KernelSize(::GlobalNamespace::KawaseBlurRendererSO_KernelSize value) {
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
  this->____kawaseBlurRenderer = value;
}
inline void GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO* GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomPrePassDoubleKawaseBlurTextureEffectSO::BloomPrePassDoubleKawaseBlurTextureEffectSO() {}
