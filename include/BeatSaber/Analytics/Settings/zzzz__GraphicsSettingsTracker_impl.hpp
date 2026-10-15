#pragma once
// IWYU pragma private; include "BeatSaber/Analytics/Settings/GraphicsSettingsTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Analytics/Settings/zzzz__GraphicsSettingsTracker_def.hpp"
#include "BeatSaber/Analytics/Gameplay/EventSenders/zzzz__ISettingsEventSender_def.hpp"
#include "BeatSaber/Settings/zzzz__QualitySettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::GraphicsSettingsTracker::*)(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*)>(
    &::BeatSaber::Analytics::Settings::GraphicsSettingsTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35062d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker.TakeSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::GraphicsSettingsTracker::*)(::BeatSaber::Settings::QualitySettings)>(
    &::BeatSaber::Analytics::Settings::GraphicsSettingsTracker::TakeSnapshot)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x35071cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(),
                                                                                           { "TakeSnapshot", {}, { ::i2c::type_of<::BeatSaber::Settings::QualitySettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker.DiffAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Analytics::Settings::GraphicsSettingsTracker::*)(::BeatSaber::Settings::QualitySettings)>(
    &::BeatSaber::Analytics::Settings::GraphicsSettingsTracker::DiffAndSend)> {
  constexpr static std::size_t size = 0x1828;
  constexpr static std::size_t addrs = 0x350739c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(),
                                                                                           { "DiffAndSend", {}, { ::i2c::type_of<::BeatSaber::Settings::QualitySettings>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__sender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr ::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__sender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sender;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__sender(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sender = value;
}
constexpr bool& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__hasSnapshot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr bool const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__hasSnapshot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasSnapshot;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__hasSnapshot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasSnapshot = value;
}
constexpr int32_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__antiAliasingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____antiAliasingLevel;
}
constexpr int32_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__antiAliasingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____antiAliasingLevel;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__antiAliasingLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____antiAliasingLevel = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__bloom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__bloom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloom;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__bloom(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloom = value;
}
constexpr bool& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__burnMarkTrails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarkTrails;
}
constexpr bool const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__burnMarkTrails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burnMarkTrails;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__burnMarkTrails(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____burnMarkTrails = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__mainEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffect;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__mainEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainEffect;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__mainEffect(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainEffect = value;
}
constexpr int32_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__maxNumberOfCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfCutSoundEffects;
}
constexpr int32_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__maxNumberOfCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfCutSoundEffects;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__maxNumberOfCutSoundEffects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberOfCutSoundEffects = value;
}
constexpr int32_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__maxQueuedFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxQueuedFrames;
}
constexpr int32_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__maxQueuedFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxQueuedFrames;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__maxQueuedFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxQueuedFrames = value;
}
constexpr int32_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__maxShockwaveParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxShockwaveParticles;
}
constexpr int32_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__maxShockwaveParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxShockwaveParticles;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__maxShockwaveParticles(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxShockwaveParticles = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__menuVRResolutionScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuVRResolutionScaleMultiplier;
}
constexpr float_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__menuVRResolutionScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuVRResolutionScaleMultiplier;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__menuVRResolutionScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuVRResolutionScaleMultiplier = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__mirror() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirror;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__mirror() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirror;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__mirror(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirror = value;
}
constexpr ::StringW& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr ::StringW const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__obstacles(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacles = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__renderViewportScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderViewportScale;
}
constexpr float_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__renderViewportScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderViewportScale;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__renderViewportScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderViewportScale = value;
}
constexpr bool& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__screenDisplacementEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenDisplacementEffects;
}
constexpr bool const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__screenDisplacementEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenDisplacementEffects;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__screenDisplacementEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenDisplacementEffects = value;
}
constexpr bool& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__smokeGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smokeGraphics;
}
constexpr bool const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__smokeGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smokeGraphics;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__smokeGraphics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smokeGraphics = value;
}
constexpr int32_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__targetFramerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetFramerate;
}
constexpr int32_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__targetFramerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetFramerate;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__targetFramerate(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetFramerate = value;
}
constexpr int32_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__vSyncCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vSyncCount;
}
constexpr int32_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__vSyncCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vSyncCount;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__vSyncCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vSyncCount = value;
}
constexpr float_t& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__vrResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrResolutionScale;
}
constexpr float_t const& BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_get__vrResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrResolutionScale;
}
constexpr void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::__cordl_internal_set__vrResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrResolutionScale = value;
}
inline void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::TakeSnapshot(::BeatSaber::Settings::QualitySettings s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(),
                                                                                         { "TakeSnapshot", {}, { ::i2c::type_of<::BeatSaber::Settings::QualitySettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void BeatSaber::Analytics::Settings::GraphicsSettingsTracker::DiffAndSend(::BeatSaber::Settings::QualitySettings s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(),
                                                                                         { "DiffAndSend", {}, { ::i2c::type_of<::BeatSaber::Settings::QualitySettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*
BeatSaber::Analytics::Settings::GraphicsSettingsTracker::New_ctor(::BeatSaber::Analytics::Gameplay::EventSenders::ISettingsEventSender* sender) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Analytics::Settings::GraphicsSettingsTracker*>(sender));
}
// Ctor Parameters []
constexpr ::BeatSaber::Analytics::Settings::GraphicsSettingsTracker::GraphicsSettingsTracker() {}
