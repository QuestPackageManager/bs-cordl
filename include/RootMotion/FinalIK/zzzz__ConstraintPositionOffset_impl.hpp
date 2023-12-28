#pragma once
#include "RootMotion/FinalIK/zzzz__Constraint_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "RootMotion/FinalIK/zzzz__ConstraintPositionOffset_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintPositionOffset.UpdateConstraint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintPositionOffset::*)()>(
    &::RootMotion::FinalIK::ConstraintPositionOffset::UpdateConstraint)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x12427bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintPositionOffset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintPositionOffset::*)()>(
    &::RootMotion::FinalIK::ConstraintPositionOffset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124291c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintPositionOffset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::ConstraintPositionOffset::*)(::UnityEngine::Transform*)>(
    &::RootMotion::FinalIK::ConstraintPositionOffset::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1242924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::ConstraintPositionOffset.get_positionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::ConstraintPositionOffset::*)()>(
    &::RootMotion::FinalIK::ConstraintPositionOffset::get_positionChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x12428c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(),
                                                                               "get_positionChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::ConstraintPositionOffset::__get_offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::ConstraintPositionOffset::__get_offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offset;
}
constexpr void RootMotion::FinalIK::ConstraintPositionOffset::__set_offset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offset = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::ConstraintPositionOffset::__get_defaultLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::ConstraintPositionOffset::__get_defaultLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLocalPosition;
}
constexpr void RootMotion::FinalIK::ConstraintPositionOffset::__set_defaultLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& RootMotion::FinalIK::ConstraintPositionOffset::__get_lastLocalPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& RootMotion::FinalIK::ConstraintPositionOffset::__get_lastLocalPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastLocalPosition;
}
constexpr void RootMotion::FinalIK::ConstraintPositionOffset::__set_lastLocalPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastLocalPosition = value;
}
constexpr bool& RootMotion::FinalIK::ConstraintPositionOffset::__get_initiated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr bool const& RootMotion::FinalIK::ConstraintPositionOffset::__get_initiated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initiated;
}
constexpr void RootMotion::FinalIK::ConstraintPositionOffset::__set_initiated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initiated = value;
}
inline void RootMotion::FinalIK::ConstraintPositionOffset::UpdateConstraint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(),
                                                                             "UpdateConstraint", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::ConstraintPositionOffset* RootMotion::FinalIK::ConstraintPositionOffset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::ConstraintPositionOffset*>());
}
inline void RootMotion::FinalIK::ConstraintPositionOffset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::ConstraintPositionOffset* RootMotion::FinalIK::ConstraintPositionOffset::New_ctor(::UnityEngine::Transform* transform) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::ConstraintPositionOffset*>(transform));
}
inline void RootMotion::FinalIK::ConstraintPositionOffset::_ctor(::UnityEngine::Transform* transform) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
inline bool RootMotion::FinalIK::ConstraintPositionOffset::get_positionChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::ConstraintPositionOffset*>::get(),
                                                                             "get_positionChanged", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::ConstraintPositionOffset::ConstraintPositionOffset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
