#pragma once
// IWYU pragma private; include "System/Security/AccessControl/FileSystemSecurity.hpp"
#include "System/Security/AccessControl/zzzz__NativeObjectSecurity_impl.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessRule_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::FileSystemSecurity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::FileSystemSecurity::*)(bool, ::StringW, ::System::Security::AccessControl::AccessControlSections)>(
    &::System::Security::AccessControl::FileSystemSecurity::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b1d198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::FileSystemSecurity*>(),
                                                { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::FileSystemSecurity.AccessRuleFactory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::AccessRule* (
    ::System::Security::AccessControl::FileSystemSecurity::*)(::System::Security::Principal::IdentityReference*, int32_t, bool, ::System::Security::AccessControl::InheritanceFlags,
                                                              ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType)>(
    &::System::Security::AccessControl::FileSystemSecurity::AccessRuleFactory)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b1d3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::FileSystemSecurity*>(),
                                                { "AccessRuleFactory",
                                                  {},
                                                  { ::i2c::type_of<::System::Security::Principal::IdentityReference*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(), ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(),
                                                    ::i2c::type_of<::System::Security::AccessControl::AccessControlType>() } })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::FileSystemSecurity::_ctor(bool isContainer, ::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::FileSystemSecurity*>(),
                                              { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::AccessControl::AccessControlSections>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isContainer, name, includeSections);
}
inline ::System::Security::AccessControl::AccessRule* System::Security::AccessControl::FileSystemSecurity::AccessRuleFactory(::System::Security::Principal::IdentityReference* identityReference,
                                                                                                                             int32_t accessMask, bool isInherited,
                                                                                                                             ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                                                                             ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                                                                             ::System::Security::AccessControl::AccessControlType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::FileSystemSecurity*>(),
                                              { "AccessRuleFactory",
                                                {},
                                                { ::i2c::type_of<::System::Security::Principal::IdentityReference*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(), ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::AccessControlType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AccessRule*>(this, ___internal_method, identityReference, accessMask, isInherited, inheritanceFlags, propagationFlags,
                                                                                             type);
}
inline ::System::Security::AccessControl::FileSystemSecurity* System::Security::AccessControl::FileSystemSecurity::New_ctor(bool isContainer, ::StringW name,
                                                                                                                            ::System::Security::AccessControl::AccessControlSections includeSections) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::FileSystemSecurity*>(isContainer, name, includeSections));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::FileSystemSecurity::FileSystemSecurity() {}
