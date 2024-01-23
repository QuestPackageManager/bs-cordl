#pragma once
#include "GlobalNamespace/zzzz__ObstaclesQuality_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_def.hpp"
#include "GlobalNamespace/zzzz__QuestPerformanceSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerformancePreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PerformancePreset::*)()>(&::GlobalNamespace::PerformancePreset::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x234fd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformancePreset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_dataVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataVersion;
}
constexpr uint32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_dataVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataVersion;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_dataVersion(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataVersion = value;
}
constexpr ::StringW& GlobalNamespace::PerformancePreset::__cordl_internal_get_presetName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presetName;
}
constexpr ::StringW const& GlobalNamespace::PerformancePreset::__cordl_internal_get_presetName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presetName;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_presetName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___presetName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PerformancePreset::__cordl_internal_get_presetNameLocalizationTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presetNameLocalizationTag;
}
constexpr ::StringW const& GlobalNamespace::PerformancePreset::__cordl_internal_get_presetNameLocalizationTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presetNameLocalizationTag;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_presetNameLocalizationTag(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___presetNameLocalizationTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_renderViewportScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderViewportScale;
}
constexpr float_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_renderViewportScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderViewportScale;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_renderViewportScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderViewportScale = value;
}
constexpr float_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_vrResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr float_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_vrResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_vrResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vrResolutionScale = value;
}
constexpr float_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_menuVRResolutionScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr float_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_menuVRResolutionScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_menuVRResolutionScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuVRResolutionScaleMultiplier = value;
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_antiAliasingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_antiAliasingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_antiAliasingLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___antiAliasingLevel = value;
}
constexpr float_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_targetFramerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr float_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_targetFramerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_targetFramerate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetFramerate = value;
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_vSyncCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vSyncCount;
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_vSyncCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vSyncCount;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_vSyncCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vSyncCount = value;
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_maxQueuedFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxQueuedFrames;
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_maxQueuedFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxQueuedFrames;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_maxQueuedFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxQueuedFrames = value;
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_mirrorGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphics;
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_mirrorGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphics;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_mirrorGraphics(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorGraphics = value;
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_mainEffectGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphics;
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_mainEffectGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphics;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_mainEffectGraphics(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainEffectGraphics = value;
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_bloomGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomGraphics;
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_bloomGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomGraphics;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_bloomGraphics(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomGraphics = value;
}
constexpr bool& GlobalNamespace::PerformancePreset::__cordl_internal_get_smokeGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphics;
}
constexpr bool const& GlobalNamespace::PerformancePreset::__cordl_internal_get_smokeGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphics;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_smokeGraphics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smokeGraphics = value;
}
constexpr bool& GlobalNamespace::PerformancePreset::__cordl_internal_get_burnMarkTrails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrails;
}
constexpr bool const& GlobalNamespace::PerformancePreset::__cordl_internal_get_burnMarkTrails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrails;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_burnMarkTrails(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___burnMarkTrails = value;
}
constexpr bool& GlobalNamespace::PerformancePreset::__cordl_internal_get_screenDisplacementEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffects;
}
constexpr bool const& GlobalNamespace::PerformancePreset::__cordl_internal_get_screenDisplacementEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffects;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_screenDisplacementEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenDisplacementEffects = value;
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_maxShockwaveParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_maxShockwaveParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_maxShockwaveParticles(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxShockwaveParticles = value;
}
constexpr int32_t& GlobalNamespace::PerformancePreset::__cordl_internal_get_maxNumberOfCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr int32_t const& GlobalNamespace::PerformancePreset::__cordl_internal_get_maxNumberOfCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_maxNumberOfCutSoundEffects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxNumberOfCutSoundEffects = value;
}
constexpr ::GlobalNamespace::ObstaclesQuality& GlobalNamespace::PerformancePreset::__cordl_internal_get_obstaclesQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr ::GlobalNamespace::ObstaclesQuality const& GlobalNamespace::PerformancePreset::__cordl_internal_get_obstaclesQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_obstaclesQuality(::GlobalNamespace::ObstaclesQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstaclesQuality = value;
}
constexpr ::GlobalNamespace::QuestPerformanceSettings*& GlobalNamespace::PerformancePreset::__cordl_internal_get_questSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___questSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuestPerformanceSettings*> const& GlobalNamespace::PerformancePreset::__cordl_internal_get_questSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___questSettings;
}
constexpr void GlobalNamespace::PerformancePreset::__cordl_internal_set_questSettings(::GlobalNamespace::QuestPerformanceSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___questSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PerformancePreset* GlobalNamespace::PerformancePreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PerformancePreset*>());
}
inline void GlobalNamespace::PerformancePreset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PerformancePreset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformancePreset::PerformancePreset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
