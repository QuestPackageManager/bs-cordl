#pragma once
// IWYU pragma private; include "GlobalNamespace\PosePrediction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PosePrediction_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PosePrediction.PredictPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, int64_t, ::UnityEngine::Pose, int64_t, int64_t)>(&::GlobalNamespace::PosePrediction::PredictPose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x32be144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PosePrediction*>(),
            { "PredictPose", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosePrediction.InterpolatePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Pose, ::UnityEngine::Pose, float_t)>(&::GlobalNamespace::PosePrediction::InterpolatePose)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x32be234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosePrediction*>(),
                                                             { "InterpolatePose", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosePrediction.PredictPoseSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PoseSerializable (*)(::GlobalNamespace::PoseSerializable, int64_t, ::GlobalNamespace::PoseSerializable, int64_t, int64_t)>(
    &::GlobalNamespace::PosePrediction::PredictPoseSerializable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x32be504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosePrediction*>(),
                                                             { "PredictPoseSerializable",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosePrediction.InterpolatePoseSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PoseSerializable (*)(::GlobalNamespace::PoseSerializable, ::GlobalNamespace::PoseSerializable, float_t)>(
    &::GlobalNamespace::PosePrediction::InterpolatePoseSerializable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x32be634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PosePrediction*>(),
            { "InterpolatePoseSerializable", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PosePrediction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PosePrediction::*)()>(&::GlobalNamespace::PosePrediction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32be754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosePrediction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose GlobalNamespace::PosePrediction::PredictPose(::UnityEngine::Pose prev, int64_t prevTime, ::UnityEngine::Pose curr, int64_t currTime, int64_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PosePrediction*>(),
          { "PredictPose", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, prev, prevTime, curr, currTime, time);
}
inline ::UnityEngine::Pose GlobalNamespace::PosePrediction::InterpolatePose(::UnityEngine::Pose prev, ::UnityEngine::Pose curr, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosePrediction*>(),
                                                           { "InterpolatePose", {}, { ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, prev, curr, t);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::PosePrediction::PredictPoseSerializable(::GlobalNamespace::PoseSerializable prev, int64_t prevTime,
                                                                                                    ::GlobalNamespace::PoseSerializable curr, int64_t currTime, int64_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosePrediction*>(), { "PredictPoseSerializable",
                                                                                   {},
                                                                                   { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<int64_t>(),
                                                                                     ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable>(nullptr, ___internal_method, prev, prevTime, curr, currTime, time);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::PosePrediction::InterpolatePoseSerializable(::GlobalNamespace::PoseSerializable a, ::GlobalNamespace::PoseSerializable b, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PosePrediction*>(),
          { "InterpolatePoseSerializable", {}, { ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable>(nullptr, ___internal_method, a, b, t);
}
inline void GlobalNamespace::PosePrediction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PosePrediction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PosePrediction* GlobalNamespace::PosePrediction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PosePrediction*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PosePrediction::PosePrediction() {}
