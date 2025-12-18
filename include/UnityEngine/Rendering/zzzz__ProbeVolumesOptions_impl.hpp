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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ProbeVolumesOptions::*)()>(&::UnityEngine::Rendering::ProbeVolumesOptions::_ctor)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x65e1b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumesOptions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___normalBias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewBias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scaleBiasWithMinProbeDistance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___samplingNoise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___animateSamplingNoise)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leakReductionMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___minValidDotProductValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___occlusionOnlyReflectionNormalization)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___intensityMultiplier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___skyOcclusionIntensityMultiplier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___worldOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::ProbeVolumesOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ProbeVolumesOptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProbeVolumesOptions* UnityEngine::Rendering::ProbeVolumesOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ProbeVolumesOptions*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ProbeVolumesOptions::ProbeVolumesOptions() {}
