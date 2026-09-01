#pragma once
// IWYU pragma private; include "GlobalNamespace\CubicBezierHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CubicBezierHelper_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CubicBezierHelper.EvaluateCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                                  ::by_ref<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::CubicBezierHelper::EvaluateCurve)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3324ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                { "EvaluateCurve",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubicBezierHelper.EvaluateCurveDerivative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                                  ::by_ref<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::CubicBezierHelper::EvaluateCurveDerivative)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3324b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                { "EvaluateCurveDerivative",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubicBezierHelper.EvaluateCurveSecondDerivative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                                  ::by_ref<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::CubicBezierHelper::EvaluateCurveSecondDerivative)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3324bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                { "EvaluateCurveSecondDerivative",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubicBezierHelper.Normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                                  ::by_ref<::UnityEngine::Vector3>, float_t)>(&::GlobalNamespace::CubicBezierHelper::Normal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3324ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                { "Normal",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubicBezierHelper.SplitCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, float_t)>(&::GlobalNamespace::CubicBezierHelper::SplitCurve)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x3324e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                             { "SplitCurve", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CubicBezierHelper.EstimateCurveLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>,
                                                                   ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::CubicBezierHelper::EstimateCurveLength)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x33252d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(), { "EstimateCurveLength",
                                                                                        {},
                                                                                        { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::CubicBezierHelper::EvaluateCurve(::by_ref<::UnityEngine::Vector3> a1, ::by_ref<::UnityEngine::Vector3> c1, ::by_ref<::UnityEngine::Vector3> c2,
                                                                                ::by_ref<::UnityEngine::Vector3> a2, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                           { "EvaluateCurve",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a1, c1, c2, a2, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CubicBezierHelper::EvaluateCurveDerivative(::by_ref<::UnityEngine::Vector3> a1, ::by_ref<::UnityEngine::Vector3> c1, ::by_ref<::UnityEngine::Vector3> c2,
                                                                                          ::by_ref<::UnityEngine::Vector3> a2, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                           { "EvaluateCurveDerivative",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a1, c1, c2, a2, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CubicBezierHelper::EvaluateCurveSecondDerivative(::by_ref<::UnityEngine::Vector3> a1, ::by_ref<::UnityEngine::Vector3> c1,
                                                                                                ::by_ref<::UnityEngine::Vector3> c2, ::by_ref<::UnityEngine::Vector3> a2, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                           { "EvaluateCurveSecondDerivative",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a1, c1, c2, a2, t);
}
inline ::UnityEngine::Vector3 GlobalNamespace::CubicBezierHelper::Normal(::by_ref<::UnityEngine::Vector3> a1, ::by_ref<::UnityEngine::Vector3> c1, ::by_ref<::UnityEngine::Vector3> c2,
                                                                         ::by_ref<::UnityEngine::Vector3> a2, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                           { "Normal",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, a1, c1, c2, a2, t);
}
inline void GlobalNamespace::CubicBezierHelper::SplitCurve(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(),
                                                           { "SplitCurve", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, t);
}
inline float_t GlobalNamespace::CubicBezierHelper::EstimateCurveLength(::by_ref<::UnityEngine::Vector3> p0, ::by_ref<::UnityEngine::Vector3> p1, ::by_ref<::UnityEngine::Vector3> p2,
                                                                       ::by_ref<::UnityEngine::Vector3> p3) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CubicBezierHelper*>(), { "EstimateCurveLength",
                                                                                      {},
                                                                                      { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(),
                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, p0, p1, p2, p3);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CubicBezierHelper::CubicBezierHelper() {}
