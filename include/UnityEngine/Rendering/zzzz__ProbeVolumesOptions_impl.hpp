#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumesOptions.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponent_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumesOptions_def.hpp"
#include "UnityEngine/Rendering/zzzz__APVLeakReductionModeParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClampedFloatParameter_def.hpp"
#include "UnityEngine/Rendering/zzzz__Vector3Parameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ProbeVolumesOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ProbeVolumesOptions::*)()>(&::UnityEngine::Rendering::ProbeVolumesOptions::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x6793470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumesOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_normalBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBias;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_normalBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normalBias;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_normalBias(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normalBias = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_viewBias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewBias;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_viewBias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewBias;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_viewBias(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewBias = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_scaleBiasWithMinProbeDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleBiasWithMinProbeDistance;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_scaleBiasWithMinProbeDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scaleBiasWithMinProbeDistance;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_scaleBiasWithMinProbeDistance(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scaleBiasWithMinProbeDistance = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_samplingNoise() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplingNoise;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_samplingNoise() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___samplingNoise;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_samplingNoise(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___samplingNoise = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_animateSamplingNoise() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animateSamplingNoise;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_animateSamplingNoise() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animateSamplingNoise;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_animateSamplingNoise(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animateSamplingNoise = value;
}
constexpr ::UnityEngine::Rendering::APVLeakReductionModeParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_leakReductionMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leakReductionMode;
}
constexpr ::UnityEngine::Rendering::APVLeakReductionModeParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_leakReductionMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leakReductionMode;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_leakReductionMode(::UnityEngine::Rendering::APVLeakReductionModeParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leakReductionMode = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_minValidDotProductValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValidDotProductValue;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_minValidDotProductValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minValidDotProductValue;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_minValidDotProductValue(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minValidDotProductValue = value;
}
constexpr ::UnityEngine::Rendering::BoolParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_occlusionOnlyReflectionNormalization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionOnlyReflectionNormalization;
}
constexpr ::UnityEngine::Rendering::BoolParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_occlusionOnlyReflectionNormalization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___occlusionOnlyReflectionNormalization;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_occlusionOnlyReflectionNormalization(::UnityEngine::Rendering::BoolParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___occlusionOnlyReflectionNormalization = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_intensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensityMultiplier;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_intensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intensityMultiplier;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_intensityMultiplier(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intensityMultiplier = value;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_skyOcclusionIntensityMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionIntensityMultiplier;
}
constexpr ::UnityEngine::Rendering::ClampedFloatParameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_skyOcclusionIntensityMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skyOcclusionIntensityMultiplier;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_skyOcclusionIntensityMultiplier(::UnityEngine::Rendering::ClampedFloatParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skyOcclusionIntensityMultiplier = value;
}
constexpr ::UnityEngine::Rendering::Vector3Parameter*& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_worldOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldOffset;
}
constexpr ::UnityEngine::Rendering::Vector3Parameter* const& UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_get_worldOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___worldOffset;
}
constexpr void UnityEngine::Rendering::ProbeVolumesOptions::__cordl_internal_set_worldOffset(::UnityEngine::Rendering::Vector3Parameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___worldOffset = value;
}
inline void UnityEngine::Rendering::ProbeVolumesOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ProbeVolumesOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumesOptions* UnityEngine::Rendering::ProbeVolumesOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ProbeVolumesOptions*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumesOptions::ProbeVolumesOptions() {}
