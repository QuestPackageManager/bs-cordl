#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AccessRule.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_impl.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRule_impl.hpp"
#include "System/Security/AccessControl/zzzz__AccessRule_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::AccessRule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::AccessRule::*)(
    ::System::Security::Principal::IdentityReference*, int32_t, bool, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags,
    ::System::Security::AccessControl::AccessControlType)>(&::System::Security::AccessControl::AccessRule::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3cc284c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AccessRule*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AccessRule.get_AccessControlType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AccessControlType (::System::Security::AccessControl::AccessRule::*)()>(
    &::System::Security::AccessControl::AccessRule::get_AccessControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc2a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AccessRule*>::get(),
                                                                               "get_AccessControlType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Security::AccessControl::AccessControlType& System::Security::AccessControl::AccessRule::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Security::AccessControl::AccessControlType const& System::Security::AccessControl::AccessRule::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Security::AccessControl::AccessRule::__cordl_internal_set_type(::System::Security::AccessControl::AccessControlType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
inline void System::Security::AccessControl::AccessRule::_ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask, bool isInherited,
                                                               ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                               ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AccessRule*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identity, accessMask, isInherited, inheritanceFlags, propagationFlags, type);
}
inline ::System::Security::AccessControl::AccessControlType System::Security::AccessControl::AccessRule::get_AccessControlType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AccessRule*>::get(),
                                                                             "get_AccessControlType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AccessControlType, false>(this, ___internal_method);
}
inline ::System::Security::AccessControl::AccessRule* System::Security::AccessControl::AccessRule::New_ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask,
                                                                                                            bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                            ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                                            ::System::Security::AccessControl::AccessControlType type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::AccessRule*>(identity, accessMask, isInherited, inheritanceFlags, propagationFlags, type));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AccessRule::AccessRule() {}
