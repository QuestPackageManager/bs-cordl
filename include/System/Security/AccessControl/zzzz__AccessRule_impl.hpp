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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::AccessRule::*)(
    ::System::Security::Principal::IdentityReference*, int32_t, bool, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags,
    ::System::Security::AccessControl::AccessControlType)>(&::System::Security::AccessControl::AccessRule::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b1a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::AccessRule*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Security::Principal::IdentityReference*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(), ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::AccessControlType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::AccessRule.get_AccessControlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AccessControlType (::System::Security::AccessControl::AccessRule::*)()>(
    &::System::Security::AccessControl::AccessRule::get_AccessControlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1a7fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::AccessRule*>(), { "get_AccessControlType", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::AccessRule*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Security::Principal::IdentityReference*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(), ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::AccessControlType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, accessMask, isInherited, inheritanceFlags, propagationFlags, type);
}
inline ::System::Security::AccessControl::AccessControlType System::Security::AccessControl::AccessRule::get_AccessControlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::AccessRule*>(), { "get_AccessControlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AccessControlType>(this, ___internal_method);
}
inline ::System::Security::AccessControl::AccessRule* System::Security::AccessControl::AccessRule::New_ctor(::System::Security::Principal::IdentityReference* identity, int32_t accessMask,
                                                                                                            bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                            ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                                            ::System::Security::AccessControl::AccessControlType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::AccessRule*>(identity, accessMask, isInherited, inheritanceFlags, propagationFlags, type));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::AccessRule::AccessRule() {}
