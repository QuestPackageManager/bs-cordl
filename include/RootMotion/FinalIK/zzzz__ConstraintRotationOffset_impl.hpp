#pragma once
#include "RootMotion/FinalIK/zzzz__Constraint_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "RootMotion/FinalIK/zzzz__ConstraintRotationOffset_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotationOffset.UpdateConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotationOffset::*)()>(
    &::RootMotion::FinalIK::ConstraintRotationOffset::UpdateConstraint)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12ddaa8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotationOffset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotationOffset::*)()>(
    &::RootMotion::FinalIK::ConstraintRotationOffset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12ddc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotationOffset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintRotationOffset::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::ConstraintRotationOffset::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12ddc0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintRotationOffset.get_rotationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::ConstraintRotationOffset::*)()>(
    &::RootMotion::FinalIK::ConstraintRotationOffset::get_rotationChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12ddbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                                                                               "get_rotationChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_set_offset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_defaultRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_defaultRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultRotation;
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_set_defaultRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_defaultLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_defaultLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalRotation;
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_set_defaultLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultLocalRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_lastLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_lastLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastLocalRotation;
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_set_lastLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastLocalRotation = value;
}
constexpr ::UnityEngine::Quaternion& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_defaultTargetLocalRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultTargetLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_defaultTargetLocalRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultTargetLocalRotation;
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_set_defaultTargetLocalRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultTargetLocalRotation = value;
}
constexpr bool& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::ConstraintRotationOffset::__cordl_internal_set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
inline void RootMotion::FinalIK::ConstraintRotationOffset::UpdateConstraint() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::ConstraintRotationOffset* RootMotion::FinalIK::ConstraintRotationOffset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::ConstraintRotationOffset*>());
}
inline void RootMotion::FinalIK::ConstraintRotationOffset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::ConstraintRotationOffset* RootMotion::FinalIK::ConstraintRotationOffset::New_ctor(::UnityEngine::Transform* transform) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::FinalIK::ConstraintRotationOffset*>(transform));
}
inline void RootMotion::FinalIK::ConstraintRotationOffset::_ctor(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
inline bool RootMotion::FinalIK::ConstraintRotationOffset::get_rotationChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintRotationOffset*>::get(),
                                                                             "get_rotationChanged", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::ConstraintRotationOffset::ConstraintRotationOffset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
