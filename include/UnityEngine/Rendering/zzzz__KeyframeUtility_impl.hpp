#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/KeyframeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__KeyframeUtility_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Keyframe_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::KeyframeUtility.ResetAnimationCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::Rendering::KeyframeUtility::ResetAnimationCurve)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x67c3c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(), { "ResetAnimationCurve", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::KeyframeUtility.LerpSingleKeyframe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (*)(::UnityEngine::Keyframe, ::UnityEngine::Keyframe, float_t)>(
    &::UnityEngine::Rendering::KeyframeUtility::LerpSingleKeyframe)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x67c3c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                                                { "LerpSingleKeyframe", {}, { ::i2c::type_of<::UnityEngine::Keyframe>(), ::i2c::type_of<::UnityEngine::Keyframe>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::KeyframeUtility.GetKeyframeAndClampEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>, int32_t)>(
    &::UnityEngine::Rendering::KeyframeUtility::GetKeyframeAndClampEdge)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x67c3c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                                                { "GetKeyframeAndClampEdge", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::KeyframeUtility.FetchKeyFromIndexClampEdge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>, int32_t, float_t, float_t)>(
    &::UnityEngine::Rendering::KeyframeUtility::FetchKeyFromIndexClampEdge)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67c3d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                            { "FetchKeyFromIndexClampEdge",
                              {},
                              { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::KeyframeUtility.EvalCurveSegmentAndDeriv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<float_t>, ::by_ref<float_t>, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe, float_t)>(
    &::UnityEngine::Rendering::KeyframeUtility::EvalCurveSegmentAndDeriv)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x67c3dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                                                             { "EvalCurveSegmentAndDeriv",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::UnityEngine::Keyframe>(),
                                                                 ::i2c::type_of<::UnityEngine::Keyframe>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::KeyframeUtility.EvalKeyAtTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Keyframe (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>, int32_t, int32_t, float_t, float_t, float_t)>(
    &::UnityEngine::Rendering::KeyframeUtility::EvalKeyAtTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x67c3ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                                                             { "EvalKeyAtTime",
                                                               {},
                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::KeyframeUtility.InterpAnimationCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::AnimationCurve*>, ::UnityEngine::AnimationCurve*, float_t)>(
    &::UnityEngine::Rendering::KeyframeUtility::InterpAnimationCurve)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x67c3f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                         { "InterpAnimationCurve", {}, { ::i2c::type_of<::by_ref<::UnityEngine::AnimationCurve*>>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::KeyframeUtility._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::KeyframeUtility::*)()>(&::UnityEngine::Rendering::KeyframeUtility::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x67c44e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::KeyframeUtility::ResetAnimationCurve(::UnityEngine::AnimationCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(), { "ResetAnimationCurve", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, curve);
}
inline ::UnityEngine::Keyframe UnityEngine::Rendering::KeyframeUtility::LerpSingleKeyframe(::UnityEngine::Keyframe lhs, ::UnityEngine::Keyframe rhs, float_t t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                                              { "LerpSingleKeyframe", {}, { ::i2c::type_of<::UnityEngine::Keyframe>(), ::i2c::type_of<::UnityEngine::Keyframe>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(nullptr, ___internal_method, lhs, rhs, t);
}
inline ::UnityEngine::Keyframe UnityEngine::Rendering::KeyframeUtility::GetKeyframeAndClampEdge(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                                              { "GetKeyframeAndClampEdge", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(nullptr, ___internal_method, keys, index);
}
inline ::UnityEngine::Keyframe UnityEngine::Rendering::KeyframeUtility::FetchKeyFromIndexClampEdge(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t index,
                                                                                                   float_t segmentStartTime, float_t segmentEndTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(), { "FetchKeyFromIndexClampEdge",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>>(),
                                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(nullptr, ___internal_method, keys, index, segmentStartTime, segmentEndTime);
}
inline void UnityEngine::Rendering::KeyframeUtility::EvalCurveSegmentAndDeriv(::by_ref<float_t> dstValue, ::by_ref<float_t> dstDeriv, ::UnityEngine::Keyframe lhsKey, ::UnityEngine::Keyframe rhsKey,
                                                                              float_t desiredTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                                                           { "EvalCurveSegmentAndDeriv",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::UnityEngine::Keyframe>(),
                                                               ::i2c::type_of<::UnityEngine::Keyframe>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dstValue, dstDeriv, lhsKey, rhsKey, desiredTime);
}
inline ::UnityEngine::Keyframe UnityEngine::Rendering::KeyframeUtility::EvalKeyAtTime(::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe> keys, int32_t lhsIndex, int32_t rhsIndex,
                                                                                      float_t startTime, float_t endTime, float_t currTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                                                           { "EvalKeyAtTime",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Keyframe>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Keyframe>(nullptr, ___internal_method, keys, lhsIndex, rhsIndex, startTime, endTime, currTime);
}
inline void UnityEngine::Rendering::KeyframeUtility::InterpAnimationCurve(::by_ref<::UnityEngine::AnimationCurve*> lhsAndResultCurve, ::UnityEngine::AnimationCurve* rhsCurve, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(),
                       { "InterpAnimationCurve", {}, { ::i2c::type_of<::by_ref<::UnityEngine::AnimationCurve*>>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lhsAndResultCurve, rhsCurve, t);
}
inline void UnityEngine::Rendering::KeyframeUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::KeyframeUtility*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::KeyframeUtility* UnityEngine::Rendering::KeyframeUtility::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::KeyframeUtility*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::KeyframeUtility::KeyframeUtility() {}
