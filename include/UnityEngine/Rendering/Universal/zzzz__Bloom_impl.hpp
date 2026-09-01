#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Bloom.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Bloom_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DownscaleParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedIntParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__MinFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Bloom.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Bloom::*)()>(&::UnityEngine::Rendering::Universal::Bloom::IsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6873f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Bloom*>(), { "IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Bloom.IsTileCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Bloom::*)()>(&::UnityEngine::Rendering::Universal::Bloom::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6873f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Bloom*>(), { "IsTileCompatible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Bloom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Bloom::*)()>(&::UnityEngine::Rendering::Universal::Bloom::_ctor)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6873f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Bloom*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ClampedIntParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_skipIterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipIterations;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_skipIterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipIterations;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_skipIterations(::UnityEngine::Rendering::ClampedIntParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skipIterations = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_threshold(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_intensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_scatter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scatter;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_scatter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scatter;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_scatter(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scatter = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_clamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_clamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clamp;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_clamp(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clamp = value;
}
constexpr ::UnityEngine::Rendering::ColorParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_tint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tint;
}
constexpr ::UnityEngine::Rendering::ColorParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_tint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tint;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_tint(::UnityEngine::Rendering::ColorParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tint = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_highQualityFiltering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualityFiltering;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_highQualityFiltering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highQualityFiltering;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_highQualityFiltering(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highQualityFiltering = value;
}
constexpr ::UnityEngine::Rendering::Universal::DownscaleParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_downscale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downscale;
}
constexpr ::UnityEngine::Rendering::Universal::DownscaleParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_downscale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downscale;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_downscale(::UnityEngine::Rendering::Universal::DownscaleParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___downscale = value;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_maxIterations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIterations;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_maxIterations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxIterations;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_maxIterations(::UnityEngine::Rendering::ClampedIntParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxIterations = value;
}
constexpr ::UnityEngine::Rendering::TextureParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_dirtTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtTexture;
}
constexpr ::UnityEngine::Rendering::TextureParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_dirtTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtTexture;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_dirtTexture(::UnityEngine::Rendering::TextureParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtTexture = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_dirtIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtIntensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::Bloom::__cordl_internal_get_dirtIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dirtIntensity;
}
constexpr void UnityEngine::Rendering::Universal::Bloom::__cordl_internal_set_dirtIntensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dirtIntensity = value;
}
inline bool UnityEngine::Rendering::Universal::Bloom::IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Bloom*>(), { "IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Bloom::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Bloom*>(), { "IsTileCompatible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Bloom::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Bloom*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Bloom* UnityEngine::Rendering::Universal::Bloom::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Bloom*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::Bloom::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::Bloom::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Bloom::Bloom() {}
