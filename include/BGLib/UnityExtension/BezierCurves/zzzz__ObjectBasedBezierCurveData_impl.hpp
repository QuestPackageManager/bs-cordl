#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/ObjectBasedBezierCurveData.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__BaseBezierCurveData_impl.hpp"
#include "BGLib/UnityExtension/BezierCurves/zzzz__ObjectBasedBezierCurveData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData.get_startPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_startPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22b9240;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData.get_endPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_endPoint)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22b925c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData.get_hasReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_hasReferences)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x22b8fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(), "get_hasReferences",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::*)()>(
    &::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22b9278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_get__startPointTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_get__startPointTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startPointTransform;
}
constexpr void BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_set__startPointTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____startPointTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_get__endPointTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPointTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_get__endPointTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endPointTransform;
}
constexpr void BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::__cordl_internal_set__endPointTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endPointTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_startPoint() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_endPoint() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline bool BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::get_hasReferences() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(), "get_hasReferences",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData* BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData*>());
}
// Ctor Parameters []
constexpr ::BGLib::UnityExtension::BezierCurves::ObjectBasedBezierCurveData::ObjectBasedBezierCurveData() {}
