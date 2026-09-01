#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectAvoidancePathEvaluator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectAvoidancePathEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__BezierSplineEvaluator_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)(
    ::GlobalNamespace::IAudioTimeSource*, ::GlobalNamespace::PlayerTransforms*, ::GlobalNamespace::BezierSplineEvaluator*, float_t, float_t, float_t, float_t, float_t, float_t)>(
    &::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32820b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::PlayerTransforms*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BezierSplineEvaluator*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator.GetCurrentPathPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)()>(
    &::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x32820c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>(), { "GetCurrentPathPosition", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__jumpStartZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpStartZ;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__jumpStartZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpStartZ;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__jumpStartZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpStartZ = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__jumpEndZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndZ;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__jumpEndZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndZ;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__jumpEndZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpEndZ = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__zOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__zOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zOffset;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__zOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__yOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__yOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____yOffset;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__yOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____yOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__noteJumpSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpSpeed;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__noteJumpSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpSpeed;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__noteJumpSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpSpeed = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__moveToPlayerHeadTParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveToPlayerHeadTParam;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__moveToPlayerHeadTParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveToPlayerHeadTParam;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__moveToPlayerHeadTParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveToPlayerHeadTParam = value;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator*& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__pathBezierCurveEvaluator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathBezierCurveEvaluator;
}
constexpr ::GlobalNamespace::BezierSplineEvaluator* const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__pathBezierCurveEvaluator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pathBezierCurveEvaluator;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__pathBezierCurveEvaluator(::GlobalNamespace::BezierSplineEvaluator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pathBezierCurveEvaluator = value;
}
constexpr ::GlobalNamespace::IAudioTimeSource*& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__audioTimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr ::GlobalNamespace::IAudioTimeSource* const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__audioTimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSource;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSource = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerTransforms = value;
}
inline void GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::PlayerTransforms* playerTransforms,
                                                                        ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator, float_t jumpStartZ, float_t jumpEndZ, float_t yOffset,
                                                                        float_t zOffset, float_t noteJumpSeed, float_t moveToPlayerHeadTParam) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IAudioTimeSource*>(), ::i2c::type_of<::GlobalNamespace::PlayerTransforms*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BezierSplineEvaluator*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset, noteJumpSeed,
                                                   moveToPlayerHeadTParam);
}
inline ::UnityEngine::Vector3 GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>(), { "GetCurrentPathPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                                                              ::GlobalNamespace::PlayerTransforms* playerTransforms,
                                                                                                                              ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator,
                                                                                                                              float_t jumpStartZ, float_t jumpEndZ, float_t yOffset, float_t zOffset,
                                                                                                                              float_t noteJumpSeed, float_t moveToPlayerHeadTParam) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*>(audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ,
                                                                                                                   yOffset, zOffset, noteJumpSeed, moveToPlayerHeadTParam));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::BeatmapObjectAvoidancePathEvaluator() {}
