#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectAvoidanceTiltEvaluator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidanceTiltEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)(
    ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::BezierSplineEvaluator*, ::UnityEngine::Vector2)>(&::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x32821d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>(),
            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::BezierSplineEvaluator*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator.GetTiltAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::*)()>(&::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x32822b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>(), { "GetTiltAngle", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__gravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gravity;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__gravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gravity;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_set__gravity(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gravity = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__normalizedGravity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedGravity;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__normalizedGravity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalizedGravity;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_set__normalizedGravity(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalizedGravity = value;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator*& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__bezierSplineEvaluator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierSplineEvaluator;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator* const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__bezierSplineEvaluator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierSplineEvaluator;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_set__bezierSplineEvaluator(::GlobalNamespace::BezierSplineEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bezierSplineEvaluator = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__currentAcceleration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAcceleration;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_get__currentAcceleration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentAcceleration;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::__cordl_internal_set__currentAcceleration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentAcceleration = value;
}
inline void GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator,
                                                                        ::UnityEngine::Vector2 gravity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>(),
          { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::BezierSplineEvaluator*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioTimeSource, bezierSplineEvaluator, gravity);
}
inline float_t GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::GetTiltAngle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>(), { "GetTiltAngle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                                                              ::GlobalNamespace::BezierSplineEvaluator* bezierSplineEvaluator,
                                                                                                                              ::UnityEngine::Vector2 gravity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*>(audioTimeSource, bezierSplineEvaluator, gravity));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator::BeatmapObjectAvoidanceTiltEvaluator() {}
