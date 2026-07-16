#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/Extrapolation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__Extrapolation_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__Extrapolation_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::Extrapolation___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::Extrapolation___c::*)()>(&::UnityEngine::Timeline::Extrapolation___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69c7f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Extrapolation___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Extrapolation___c._SortClipsByStartTime_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::Extrapolation___c::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::Extrapolation___c::_SortClipsByStartTime_b__2_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x69c7f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Extrapolation___c*>(),
                            { "<SortClipsByStartTime>b__2_0", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::Extrapolation___c::setStaticF___9(::UnityEngine::Timeline::Extrapolation___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::Extrapolation___c*, "<>9", ::UnityEngine::Timeline::Extrapolation___c*>(std::forward<::UnityEngine::Timeline::Extrapolation___c*>(value));
}
inline ::UnityEngine::Timeline::Extrapolation___c* UnityEngine::Timeline::Extrapolation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::Extrapolation___c*, "<>9", ::UnityEngine::Timeline::Extrapolation___c*>();
}
inline void UnityEngine::Timeline::Extrapolation___c::setStaticF___9__2_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__2_0", ::UnityEngine::Timeline::Extrapolation___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* UnityEngine::Timeline::Extrapolation___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__2_0", ::UnityEngine::Timeline::Extrapolation___c*>();
}
inline void UnityEngine::Timeline::Extrapolation___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Extrapolation___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::Extrapolation___c::_SortClipsByStartTime_b__2_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Extrapolation___c*>(),
                          { "<SortClipsByStartTime>b__2_0", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, clip1, clip2);
}
inline ::UnityEngine::Timeline::Extrapolation___c* UnityEngine::Timeline::Extrapolation___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::Extrapolation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::Extrapolation___c::Extrapolation___c() {}
//  Writing Method size for method: ::UnityEngine::Timeline::Extrapolation.CalculateExtrapolationTimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x69c7988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Extrapolation*>(),
                                                                                           { "CalculateExtrapolationTimes", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Extrapolation.SortClipsByStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Timeline::TimelineClip*> (*)(::ArrayW<::UnityEngine::Timeline::TimelineClip*>)>(
    &::UnityEngine::Timeline::Extrapolation::SortClipsByStartTime)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x69c7d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Extrapolation*>(),
                                                                                           { "SortClipsByStartTime", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Timeline::TimelineClip*>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::Extrapolation::setStaticF_kMinExtrapolationTime(double_t value) {
  ::cordl_internals::setStaticField<double_t, "kMinExtrapolationTime", ::UnityEngine::Timeline::Extrapolation*>(std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::Extrapolation::getStaticF_kMinExtrapolationTime() {
  return ::cordl_internals::getStaticField<double_t, "kMinExtrapolationTime", ::UnityEngine::Timeline::Extrapolation*>();
}
inline void UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* asset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Extrapolation*>(), { "CalculateExtrapolationTimes", {}, { ::i2c::type_of<::UnityEngine::Timeline::TrackAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asset);
}
inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*> UnityEngine::Timeline::Extrapolation::SortClipsByStartTime(::ArrayW<::UnityEngine::Timeline::TimelineClip*> clips) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::Extrapolation*>(),
                                                                                         { "SortClipsByStartTime", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Timeline::TimelineClip*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Timeline::TimelineClip*>>(nullptr, ___internal_method, clips);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::Extrapolation::Extrapolation() {}
