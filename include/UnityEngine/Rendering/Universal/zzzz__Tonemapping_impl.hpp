#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Tonemapping.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Tonemapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRACESPresetParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__NeutralRangeReductionModeParameter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingModeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Tonemapping.IsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Tonemapping::*)()>(&::UnityEngine::Rendering::Universal::Tonemapping::IsActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x687fb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), { "IsActive", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Tonemapping.IsTileCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::Tonemapping::*)()>(&::UnityEngine::Rendering::Universal::Tonemapping::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x687fb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), { "IsTileCompatible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Tonemapping._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Tonemapping::*)()>(&::UnityEngine::Rendering::Universal::Tonemapping::_ctor)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x687fb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::UnityEngine::Rendering::Universal::TonemappingModeParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_mode(::UnityEngine::Rendering::Universal::TonemappingModeParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_neutralHDRRangeReductionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neutralHDRRangeReductionMode;
}
constexpr ::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_neutralHDRRangeReductionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___neutralHDRRangeReductionMode;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_neutralHDRRangeReductionMode(::UnityEngine::Rendering::Universal::NeutralRangeReductionModeParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___neutralHDRRangeReductionMode = value;
}
constexpr ::UnityEngine::Rendering::Universal::HDRACESPresetParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_acesPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acesPreset;
}
constexpr ::UnityEngine::Rendering::Universal::HDRACESPresetParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_acesPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___acesPreset;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_acesPreset(::UnityEngine::Rendering::Universal::HDRACESPresetParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___acesPreset = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_hueShiftAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueShiftAmount;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_hueShiftAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hueShiftAmount;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_hueShiftAmount(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hueShiftAmount = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_detectPaperWhite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectPaperWhite;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_detectPaperWhite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectPaperWhite;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_detectPaperWhite(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___detectPaperWhite = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_paperWhite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paperWhite;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_paperWhite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paperWhite;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_paperWhite(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paperWhite = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_detectBrightnessLimits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectBrightnessLimits;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_detectBrightnessLimits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___detectBrightnessLimits;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_detectBrightnessLimits(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___detectBrightnessLimits = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_minNits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minNits;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_minNits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minNits;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_minNits(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minNits = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_maxNits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNits;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_get_maxNits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNits;
}
constexpr void UnityEngine::Rendering::Universal::Tonemapping::__cordl_internal_set_maxNits(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxNits = value;
}
inline bool UnityEngine::Rendering::Universal::Tonemapping::IsActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), { "IsActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::Tonemapping::IsTileCompatible() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), { "IsTileCompatible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Tonemapping::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Tonemapping*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Tonemapping* UnityEngine::Rendering::Universal::Tonemapping::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Tonemapping*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr UnityEngine::Rendering::Universal::Tonemapping::operator ::UnityEngine::Rendering::IPostProcessComponent*() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IPostProcessComponent"
constexpr ::UnityEngine::Rendering::IPostProcessComponent* UnityEngine::Rendering::Universal::Tonemapping::i___UnityEngine__Rendering__IPostProcessComponent() noexcept {
  return static_cast<::UnityEngine::Rendering::IPostProcessComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Tonemapping::Tonemapping() {}
