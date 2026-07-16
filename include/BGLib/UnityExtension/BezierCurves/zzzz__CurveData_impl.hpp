#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/CurveData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__CurveData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::CurveData.RotatePointsAroundPivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGLib::UnityExtension::BezierCurves::CurveData (::BGLib::UnityExtension::BezierCurves::CurveData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::BGLib::UnityExtension::BezierCurves::CurveData::RotatePointsAroundPivot)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x332979c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::CurveData>(),
                                                             { "RotatePointsAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::CurveData.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::CurveData::*)(float_t)>(
    &::BGLib::UnityExtension::BezierCurves::CurveData::Evaluate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3329178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::CurveData>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::CurveData.RotatePointAroundPivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::BGLib::UnityExtension::BezierCurves::CurveData::RotatePointAroundPivot)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3329920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::CurveData>(),
                            { "RotatePointAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
    return ___internal_method;
  }
};
inline ::BGLib::UnityExtension::BezierCurves::CurveData BGLib::UnityExtension::BezierCurves::CurveData::RotatePointsAroundPivot(::UnityEngine::Vector3 pivot, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::CurveData>(),
                                                           { "RotatePointsAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::UnityExtension::BezierCurves::CurveData>(*this, ___internal_method, pivot, rot);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::CurveData::Evaluate(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::CurveData>(), { "Evaluate", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::CurveData::RotatePointAroundPivot(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 pivot, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::BezierCurves::CurveData>(),
                          { "RotatePointAroundPivot", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, point, pivot, rot);
}
// Ctor Parameters [CppParam { name: "startPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "endPoint", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "startControlPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "endControlPoint", ty:
// "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::UnityExtension::BezierCurves::CurveData::CurveData(::UnityEngine::Vector3 startPoint, ::UnityEngine::Vector3 endPoint, ::UnityEngine::Vector3 startControlPoint,
                                                                      ::UnityEngine::Vector3 endControlPoint) noexcept {
  this->startPoint = startPoint;
  this->endPoint = endPoint;
  this->startControlPoint = startControlPoint;
  this->endControlPoint = endControlPoint;
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::CurveData::CurveData() {}
