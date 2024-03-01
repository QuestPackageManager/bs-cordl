#pragma once
#include "RootMotion/FinalIK/zzzz__Constraint_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "RootMotion/FinalIK/zzzz__ConstraintRotation_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotation.UpdateConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotation::*)()>(
    &::RootMotion::FinalIK::ConstraintRotation::UpdateConstraint)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x131e9e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotation*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotation*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotation::*)()>(&::RootMotion::FinalIK::ConstraintRotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x131ea64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotation*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotation::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::ConstraintRotation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x131ea6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotation::__cordl_internal_get_rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotation::__cordl_internal_get_rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotation;
}
constexpr void RootMotion::FinalIK::ConstraintRotation::__cordl_internal_set_rotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotation = value;
}
inline void RootMotion::FinalIK::ConstraintRotation::UpdateConstraint() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::ConstraintRotation* RootMotion::FinalIK::ConstraintRotation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::ConstraintRotation*>());
}
inline void RootMotion::FinalIK::ConstraintRotation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotation*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::ConstraintRotation* RootMotion::FinalIK::ConstraintRotation::New_ctor(::UnityEngine::Transform* transform) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::ConstraintRotation*>(transform));
}
inline void RootMotion::FinalIK::ConstraintRotation::_ctor(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::ConstraintRotation::ConstraintRotation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
