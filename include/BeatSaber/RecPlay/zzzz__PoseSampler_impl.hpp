#pragma once
// IWYU pragma private; include "BeatSaber\RecPlay\PoseSampler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseSampler_def.hpp"
#include "BeatSaber/RecPlay/zzzz__FrameSample_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseFrame_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseSampler.SamplePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::ArrayW<::BeatSaber::RecPlay::PoseFrame>, float_t, ::by_ref<int32_t>)>(
    &::BeatSaber::RecPlay::PoseSampler::SamplePose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x32c54e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseSampler*>(),
                                         { "SamplePose", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseSampler.FindPoseSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::RecPlay::FrameSample (*)(::ArrayW<::BeatSaber::RecPlay::PoseFrame>, float_t, int32_t)>(
    &::BeatSaber::RecPlay::PoseSampler::FindPoseSample)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x32c575c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseSampler*>(),
                                                { "FindPoseSample", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseSampler.InterpolatePoseSample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::ArrayW<::BeatSaber::RecPlay::PoseFrame>, ::by_ref<::BeatSaber::RecPlay::FrameSample>)>(
    &::BeatSaber::RecPlay::PoseSampler::InterpolatePoseSample)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32c58a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseSampler*>(),
                            { "InterpolatePoseSample", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>(), ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::FrameSample>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose BeatSaber::RecPlay::PoseSampler::SamplePose(::ArrayW<::BeatSaber::RecPlay::PoseFrame> frames, float_t time, ::by_ref<int32_t> nearest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseSampler*>(),
                                              { "SamplePose", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, frames, time, nearest);
}
inline ::BeatSaber::RecPlay::FrameSample BeatSaber::RecPlay::PoseSampler::FindPoseSample(::ArrayW<::BeatSaber::RecPlay::PoseFrame> frames, float_t time, int32_t nearest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseSampler*>(),
                                              { "FindPoseSample", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::FrameSample>(nullptr, ___internal_method, frames, time, nearest);
}
inline ::UnityEngine::Pose BeatSaber::RecPlay::PoseSampler::InterpolatePoseSample(::ArrayW<::BeatSaber::RecPlay::PoseFrame> frames, ::by_ref<::BeatSaber::RecPlay::FrameSample> sample) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseSampler*>(),
                          { "InterpolatePoseSample", {}, { ::i2c::type_of<::ArrayW<::BeatSaber::RecPlay::PoseFrame>>(), ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::FrameSample>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, frames, sample);
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PoseSampler::PoseSampler() {}
