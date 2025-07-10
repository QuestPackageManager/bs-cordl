#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/GenericBezierCurve.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurve_1_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__GenericBezierCurve_def.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__CurveData_def.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__GenericBezierCurveData_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve.get_isReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::get_isReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b89ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve.GetBezierCurveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::UnityExtension::BezierCurves::CurveData (::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::GetBezierCurveData)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x22b89b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve.SetBezierCurveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::*)(
    ::BGLib::UnityExtension::BezierCurves::CurveData)>(&::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::SetBezierCurveData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x22b8b78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::*)()>(
    &::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22b8d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool BGLib::UnityExtension::BezierCurves::GenericBezierCurve::get_isReady() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::CurveData BGLib::UnityExtension::BezierCurves::GenericBezierCurve::GetBezierCurveData() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::BGLib::UnityExtension::BezierCurves::CurveData, false>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::GenericBezierCurve::SetBezierCurveData(::BGLib::UnityExtension::BezierCurves::CurveData newValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newValue);
}
inline void BGLib::UnityExtension::BezierCurves::GenericBezierCurve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve* BGLib::UnityExtension::BezierCurves::GenericBezierCurve::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::BezierCurves::GenericBezierCurve*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::GenericBezierCurve::GenericBezierCurve() {}
