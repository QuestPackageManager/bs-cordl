#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/CurveData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__CurveData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::CurveData.RotatePointsAroundPivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::UnityExtension::BezierCurves::CurveData (::BGLib::UnityExtension::BezierCurves::CurveData::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::BGLib::UnityExtension::BezierCurves::CurveData::RotatePointsAroundPivot)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3230120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::CurveData>::get(), "RotatePointsAroundPivot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::CurveData.Evaluate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::CurveData::*)(float_t)>(
    &::BGLib::UnityExtension::BezierCurves::CurveData::Evaluate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x322fafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::CurveData>::get(), "Evaluate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::CurveData.RotatePointAroundPivot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::BGLib::UnityExtension::BezierCurves::CurveData::RotatePointAroundPivot)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32302a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::CurveData>::get(), "RotatePointAroundPivot", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
inline ::BGLib::UnityExtension::BezierCurves::CurveData BGLib::UnityExtension::BezierCurves::CurveData::RotatePointsAroundPivot(::UnityEngine::Vector3 pivot, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::CurveData>::get(), "RotatePointsAroundPivot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGLib::UnityExtension::BezierCurves::CurveData, false>(this, ___internal_method, pivot, rot);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::CurveData::Evaluate(float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::CurveData>::get(), "Evaluate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, t);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::CurveData::RotatePointAroundPivot(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 pivot, ::UnityEngine::Quaternion rot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::CurveData>::get(), "RotatePointAroundPivot", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, point, pivot, rot);
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
