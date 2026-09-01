#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\BezierCurves\GenericBezierCurve.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_1_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__GenericBezierCurve_def.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__CurveData_def.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__GenericBezierCurveData_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve.get_isReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x332bcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve.GetBezierCurveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::UnityExtension::BezierCurves::CurveData (::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::GetBezierCurveData)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x332bd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve.SetBezierCurveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::*)(::BGLib::UnityExtension::BezierCurves::CurveData)>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::SetBezierCurveData)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x332bec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(),
                                                                                          { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::*)()>(&::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x332c074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool BGLib::UnityExtension::BezierCurves::GenericBezierCurve::get_isReady() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::CurveData BGLib::UnityExtension::BezierCurves::GenericBezierCurve::GetBezierCurveData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::UnityExtension::BezierCurves::CurveData>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::GenericBezierCurve::SetBezierCurveData(::BGLib::UnityExtension::BezierCurves::CurveData newValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void BGLib::UnityExtension::BezierCurves::GenericBezierCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve* BGLib::UnityExtension::BezierCurves::GenericBezierCurve::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::GenericBezierCurve() {}
