#pragma once
// IWYU pragma private; include "System/Security/AccessControl/AuthorizationRule.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_impl.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRule_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::AuthorizationRule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::AuthorizationRule::*)(
    ::System::Security::Principal::IdentityReference*, int32_t, bool, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags)>(
    &::System::Security::AccessControl::AuthorizationRule::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x282e514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRule*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AuthorizationRule.get_AccessMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::AuthorizationRule::*)()>(
    &::System::Security::AccessControl::AuthorizationRule::get_AccessMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x282e784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRule*>::get(),
                                                                               "get_AccessMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Security::Principal::IdentityReference*& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_identity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identity;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Principal::IdentityReference*> const& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_identity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___identity;
}
constexpr void System::Security::AccessControl::AuthorizationRule::__cordl_internal_set_identity(::System::Security::Principal::IdentityReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___identity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_accessMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessMask;
}
constexpr int32_t const& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_accessMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessMask;
}
constexpr void System::Security::AccessControl::AuthorizationRule::__cordl_internal_set_accessMask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accessMask = value;
}
constexpr bool& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_isInherited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInherited;
}
constexpr bool const& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_isInherited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isInherited;
}
constexpr void System::Security::AccessControl::AuthorizationRule::__cordl_internal_set_isInherited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isInherited = value;
}
constexpr ::System::Security::AccessControl::InheritanceFlags& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_inheritanceFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inheritanceFlags;
}
constexpr ::System::Security::AccessControl::InheritanceFlags const& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_inheritanceFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inheritanceFlags;
}
constexpr void System::Security::AccessControl::AuthorizationRule::__cordl_internal_set_inheritanceFlags(::System::Security::AccessControl::InheritanceFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inheritanceFlags = value;
}
constexpr ::System::Security::AccessControl::PropagationFlags& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_propagationFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propagationFlags;
}
constexpr ::System::Security::AccessControl::PropagationFlags const& System::Security::AccessControl::AuthorizationRule::__cordl_internal_get_propagationFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___propagationFlags;
}
constexpr void System::Security::AccessControl::AuthorizationRule::__cordl_internal_set_propagationFlags(::System::Security::AccessControl::PropagationFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___propagationFlags = value;
}
inline ::System::Security::AccessControl::AuthorizationRule* System::Security::AccessControl::AuthorizationRule::New_ctor(::System::Security::Principal::IdentityReference* identity,
                                                                                                                          int32_t accessMask, bool isInherited,
                                                                                                                          ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                                          ::System::Security::AccessControl::PropagationFlags propagationFlags) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::AuthorizationRule*>(identity, accessMask, isInherited, inheritanceFlags, propagationFlags));
}
inline void System::Security::AccessControl::AuthorizationRule::_ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask, bool isInherited,
                                                                      ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                      ::System::Security::AccessControl::PropagationFlags propagationFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRule*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identity, accessMask, isInherited, inheritanceFlags, propagationFlags);
}
inline int32_t System::Security::AccessControl::AuthorizationRule::get_AccessMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::AuthorizationRule*>::get(),
                                                                             "get_AccessMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AuthorizationRule::AuthorizationRule() {}
