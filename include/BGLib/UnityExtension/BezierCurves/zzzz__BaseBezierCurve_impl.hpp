#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\BezierCurves\BaseBezierCurve.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_def.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__CurveData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve.get_isReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::*)()>(&::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::get_isReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::*)(float_t)>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::Evaluate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x332b4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve.GetBezierCurveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::UnityExtension::BezierCurves::CurveData (::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::GetBezierCurveData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve.SetBezierCurveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::*)(::BGLib::UnityExtension::BezierCurves::CurveData)>(
    &::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::SetBezierCurveData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::*)()>(&::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332b5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool BGLib::UnityExtension::BezierCurves::BaseBezierCurve::get_isReady() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::BaseBezierCurve::Evaluate(float_t current) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, current);
}
inline ::BGLib::UnityExtension::BezierCurves::CurveData BGLib::UnityExtension::BezierCurves::BaseBezierCurve::GetBezierCurveData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::UnityExtension::BezierCurves::CurveData>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::BaseBezierCurve::SetBezierCurveData(::BGLib::UnityExtension::BezierCurves::CurveData data) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void BGLib::UnityExtension::BezierCurves::BaseBezierCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve* BGLib::UnityExtension::BezierCurves::BaseBezierCurve::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve::BaseBezierCurve() {}
