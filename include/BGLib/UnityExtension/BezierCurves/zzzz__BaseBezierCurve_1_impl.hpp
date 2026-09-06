#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/BaseBezierCurve_1.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurveData_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_1_def.hpp"
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>)
constexpr T& BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::__cordl_internal_get__bezierCurveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierCurveData;
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>)
constexpr T const& BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::__cordl_internal_get__bezierCurveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bezierCurveData;
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>)
constexpr void BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::__cordl_internal_set__bezierCurveData(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bezierCurveData = value;
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>)
inline void BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>)
inline ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>* BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>*>());
}
// Ctor Parameters []
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::BGLib::UnityExtension::BezierCurves::BaseBezierCurveData*>)
constexpr ::BGLib::UnityExtension::BezierCurves::BaseBezierCurve_1<T>::BaseBezierCurve_1() {}
