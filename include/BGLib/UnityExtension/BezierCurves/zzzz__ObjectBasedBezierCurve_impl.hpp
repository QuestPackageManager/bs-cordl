#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\BezierCurves\ObjectBasedBezierCurve.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_1_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__ObjectBasedBezierCurve_def.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__CurveData_def.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__ObjectBasedBezierCurveData_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve.get_isReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::get_isReady)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x332c440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve.GetBezierCurveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::UnityExtension::BezierCurves::CurveData (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::GetBezierCurveData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x332c4f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve.SetBezierCurveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::*)(::BGLib::UnityExtension::BezierCurves::CurveData)>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::SetBezierCurveData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x332c5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x332c674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::get_isReady() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::CurveData BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::GetBezierCurveData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::UnityExtension::BezierCurves::CurveData>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::SetBezierCurveData(::BGLib::UnityExtension::BezierCurves::CurveData newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve* BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurve::ObjectBasedBezierCurve() {}
