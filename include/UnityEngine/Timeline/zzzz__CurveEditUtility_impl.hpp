#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/CurveEditUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__CurveEditUtility_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::CurveEditUtility.CreateMatchingCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::Timeline::CurveEditUtility::CreateMatchingCurve)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6dec600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::CurveEditUtility*>(), { "CreateMatchingCurve", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::AnimationCurve* UnityEngine::Timeline::CurveEditUtility::CreateMatchingCurve(::UnityEngine::AnimationCurve* curve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::CurveEditUtility*>(), { "CreateMatchingCurve", {}, { ::i2c::type_of<::UnityEngine::AnimationCurve*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(nullptr, ___internal_method, curve);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::CurveEditUtility::CurveEditUtility() {}
