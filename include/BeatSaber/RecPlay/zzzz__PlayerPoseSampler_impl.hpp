#pragma once
// IWYU pragma private; include "BeatSaber\RecPlay\PlayerPoseSampler.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseOffsets_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseSampler_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPose_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseSampler.Sample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::RecPlay::PlayerPoseSampler::*)(float_t, ::by_ref<::BeatSaber::RecPlay::PlayerPose>)>(
    &::BeatSaber::RecPlay::PlayerPoseSampler::Sample)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x32c53d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseSampler*>(),
                                                             { "Sample", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::PlayerPose>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseSampler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::RecPlay::PlayerPoseSampler::*)()>(&::BeatSaber::RecPlay::PlayerPoseSampler::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x32c56ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseSampler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::RecPlay::PoseOffsets& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get_offsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsets;
}
constexpr ::BeatSaber::RecPlay::PoseOffsets const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get_offsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsets;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set_offsets(::BeatSaber::RecPlay::PoseOffsets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsets = value;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseFrames& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get_frames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseFrames const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get_frames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set_frames(::BeatSaber::RecPlay::PlayerPoseFrames value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frames = value;
}
constexpr int32_t& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__headNearestFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNearestFrame;
}
constexpr int32_t const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__headNearestFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNearestFrame;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set__headNearestFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headNearestFrame = value;
}
constexpr int32_t& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__leftHandNearestFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandNearestFrame;
}
constexpr int32_t const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__leftHandNearestFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandNearestFrame;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set__leftHandNearestFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandNearestFrame = value;
}
constexpr int32_t& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__rightHandNearestFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandNearestFrame;
}
constexpr int32_t const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__rightHandNearestFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandNearestFrame;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set__rightHandNearestFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandNearestFrame = value;
}
inline void BeatSaber::RecPlay::PlayerPoseSampler::Sample(float_t time, ::by_ref<::BeatSaber::RecPlay::PlayerPose> player) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseSampler*>(), { "Sample", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::PlayerPose>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, player);
}
inline void BeatSaber::RecPlay::PlayerPoseSampler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PlayerPoseSampler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::RecPlay::PlayerPoseSampler* BeatSaber::RecPlay::PlayerPoseSampler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::RecPlay::PlayerPoseSampler*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PlayerPoseSampler::PlayerPoseSampler() {}
