#pragma once
// IWYU pragma private; include "GlobalNamespace/ContinuousFireEffect.hpp"
#include "GlobalNamespace/zzzz__FireEffect_impl.hpp"
#include "GlobalNamespace/zzzz__ContinuousFireEffect_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)()>(&::GlobalNamespace::ContinuousFireEffect::Start)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58c123c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { ::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)()>(&::GlobalNamespace::ContinuousFireEffect::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect.HandleColorChangeBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(
    &::GlobalNamespace::ContinuousFireEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x58c14e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { ::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect.SetInitialValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)()>(&::GlobalNamespace::ContinuousFireEffect::SetInitialValues)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58c1264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "SetInitialValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect.StartEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)(float_t, float_t)>(&::GlobalNamespace::ContinuousFireEffect::StartEffect)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x58c165c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "StartEffect", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect.EndEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)()>(&::GlobalNamespace::ContinuousFireEffect::EndEffect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58c1638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "EndEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect.UpdateEffect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)()>(&::GlobalNamespace::ContinuousFireEffect::UpdateEffect)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x58c1310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "UpdateEffect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect.UpdateRenderers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)(float_t, float_t)>(&::GlobalNamespace::ContinuousFireEffect::UpdateRenderers)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x58c173c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "UpdateRenderers", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ContinuousFireEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ContinuousFireEffect::*)()>(&::GlobalNamespace::ContinuousFireEffect::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58c1924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__fadeInDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInDuration;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__fadeInDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInDuration;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__fadeInDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInDuration = value;
}
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__fadeOutDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutDuration;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__fadeOutDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutDuration;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__fadeOutDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutDuration = value;
}
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__sustainDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sustainDuration;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__sustainDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sustainDuration;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__sustainDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sustainDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__flipbookSustainCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipbookSustainCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__flipbookSustainCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipbookSustainCurve;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__flipbookSustainCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipbookSustainCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__bloomSustainCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomSustainCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__bloomSustainCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomSustainCurve;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__bloomSustainCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bloomSustainCurve = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__fadeInEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInEndTime;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__fadeInEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInEndTime;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__fadeInEndTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInEndTime = value;
}
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__fadeOutStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutStartTime;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__fadeOutStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutStartTime;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__fadeOutStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutStartTime = value;
}
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__effectStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectStartTime;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__effectStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectStartTime;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__effectStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectStartTime = value;
}
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__effectEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectEndTime;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__effectEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectEndTime;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__effectEndTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectEndTime = value;
}
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__lastSustainProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSustainProgress;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__lastSustainProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSustainProgress;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__lastSustainProgress(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSustainProgress = value;
}
constexpr float_t& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__lastFadeOutProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFadeOutProgress;
}
constexpr float_t const& GlobalNamespace::ContinuousFireEffect::__cordl_internal_get__lastFadeOutProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFadeOutProgress;
}
constexpr void GlobalNamespace::ContinuousFireEffect::__cordl_internal_set__lastFadeOutProgress(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFadeOutProgress = value;
}
inline void GlobalNamespace::ContinuousFireEffect::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ContinuousFireEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ContinuousFireEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void GlobalNamespace::ContinuousFireEffect::SetInitialValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "SetInitialValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ContinuousFireEffect::StartEffect(float_t startTime, float_t endTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "StartEffect", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTime, endTime);
}
inline void GlobalNamespace::ContinuousFireEffect::EndEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "EndEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ContinuousFireEffect::UpdateEffect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "UpdateEffect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ContinuousFireEffect::UpdateRenderers(float_t flipBookAlpha, float_t bloomAlpha) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { "UpdateRenderers", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flipBookAlpha, bloomAlpha);
}
inline void GlobalNamespace::ContinuousFireEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ContinuousFireEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ContinuousFireEffect* GlobalNamespace::ContinuousFireEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ContinuousFireEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContinuousFireEffect::ContinuousFireEffect() {}
