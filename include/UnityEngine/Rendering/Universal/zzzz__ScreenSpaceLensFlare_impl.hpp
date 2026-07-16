#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceLensFlare.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceLensFlare_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceLensFlareResolutionParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedIntParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
#include "UnityEngine/Rendering/zzzz__MinFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__Vector2Parameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::*)()>(&::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::_ctor)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x6879b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::*)()>(&::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::IsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6879f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>(), { "IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare.IsStreaksActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::IsStreaksActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6879f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>(), { "IsStreaksActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare.IsTileCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::*)()>(
    &::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6879f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>(), { "IsTileCompatible", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensity;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_intensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::ColorParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_tintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColor;
}
constexpr ::UnityEngine::Rendering::ColorParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_tintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tintColor;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_tintColor(::UnityEngine::Rendering::ColorParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tintColor = value;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_bloomMip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMip;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_bloomMip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomMip;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_bloomMip(::UnityEngine::Rendering::ClampedIntParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomMip = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_firstFlareIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstFlareIntensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_firstFlareIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstFlareIntensity;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_firstFlareIntensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstFlareIntensity = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_secondaryFlareIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondaryFlareIntensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_secondaryFlareIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secondaryFlareIntensity;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_secondaryFlareIntensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secondaryFlareIntensity = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_warpedFlareIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___warpedFlareIntensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_warpedFlareIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___warpedFlareIntensity;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_warpedFlareIntensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___warpedFlareIntensity = value;
}
constexpr ::UnityEngine::Rendering::Vector2Parameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_warpedFlareScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___warpedFlareScale;
}
constexpr ::UnityEngine::Rendering::Vector2Parameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_warpedFlareScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___warpedFlareScale;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_warpedFlareScale(::UnityEngine::Rendering::Vector2Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___warpedFlareScale = value;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_samples() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samples;
}
constexpr ::UnityEngine::Rendering::ClampedIntParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_samples() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samples;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_samples(::UnityEngine::Rendering::ClampedIntParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___samples = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_sampleDimmer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleDimmer;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_sampleDimmer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampleDimmer;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_sampleDimmer(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sampleDimmer = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_vignetteEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vignetteEffect;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_vignetteEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vignetteEffect;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_vignetteEffect(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vignetteEffect = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_startingPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startingPosition;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_startingPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startingPosition;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_startingPosition(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startingPosition = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_scale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_scale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scale;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_scale(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scale = value;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_streaksIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streaksIntensity;
}
constexpr ::UnityEngine::Rendering::MinFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_streaksIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streaksIntensity;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_streaksIntensity(::UnityEngine::Rendering::MinFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streaksIntensity = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_streaksLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streaksLength;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_streaksLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streaksLength;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_streaksLength(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streaksLength = value;
}
constexpr ::UnityEngine::Rendering::FloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_streaksOrientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streaksOrientation;
}
constexpr ::UnityEngine::Rendering::FloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_streaksOrientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streaksOrientation;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_streaksOrientation(::UnityEngine::Rendering::FloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streaksOrientation = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_streaksThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streaksThreshold;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_streaksThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streaksThreshold;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_streaksThreshold(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___streaksThreshold = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_resolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolution;
}
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_resolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resolution;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_resolution(::UnityEngine::Rendering::Universal::ScreenSpaceLensFlareResolutionParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___resolution = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_chromaticAbberationIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaticAbberationIntensity;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_get_chromaticAbberationIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___chromaticAbberationIntensity;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::__cordl_internal_set_chromaticAbberationIntensity(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___chromaticAbberationIntensity = value;
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>(), { "IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::IsStreaksActive() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>(), { "IsStreaksActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::IsTileCompatible() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>(), { "IsTileCompatible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare* UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare::ScreenSpaceLensFlare() {}
