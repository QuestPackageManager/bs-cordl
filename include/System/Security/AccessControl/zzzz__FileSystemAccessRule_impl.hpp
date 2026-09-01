#pragma once
// IWYU pragma private; include "System\Security\AccessControl\FileSystemAccessRule.hpp"
#include "System/Security/AccessControl/zzzz__AccessRule_impl.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemAccessRule_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemRights_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::FileSystemAccessRule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::AccessControl::FileSystemAccessRule::*)(
    ::System::Security::Principal::IdentityReference*, ::System::Security::AccessControl::FileSystemRights, bool, ::System::Security::AccessControl::InheritanceFlags,
    ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType)>(&::System::Security::AccessControl::FileSystemAccessRule::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b1f68c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::FileSystemAccessRule*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::System::Security::Principal::IdentityReference*>(), ::i2c::type_of<::System::Security::AccessControl::FileSystemRights>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(),
                                             ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(), ::i2c::type_of<::System::Security::AccessControl::AccessControlType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::FileSystemAccessRule.get_FileSystemRights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::AccessControl::FileSystemRights (::System::Security::AccessControl::FileSystemAccessRule::*)()>(
    &::System::Security::AccessControl::FileSystemAccessRule::get_FileSystemRights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1f690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::FileSystemAccessRule*>(), { "get_FileSystemRights", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::FileSystemAccessRule::_ctor(::System::Security::Principal::IdentityReference* identity,
                                                                         ::System::Security::AccessControl::FileSystemRights fileSystemRights, bool isInherited,
                                                                         ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                         ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                         ::System::Security::AccessControl::AccessControlType type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::FileSystemAccessRule*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Security::Principal::IdentityReference*>(), ::i2c::type_of<::System::Security::AccessControl::FileSystemRights>(),
                                                  ::i2c::type_of<bool>(), ::i2c::type_of<::System::Security::AccessControl::InheritanceFlags>(),
                                                  ::i2c::type_of<::System::Security::AccessControl::PropagationFlags>(), ::i2c::type_of<::System::Security::AccessControl::AccessControlType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identity, fileSystemRights, isInherited, inheritanceFlags, propagationFlags, type);
}
inline ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemAccessRule::get_FileSystemRights() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::AccessControl::FileSystemAccessRule*>(), { "get_FileSystemRights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::FileSystemRights>(this, ___internal_method);
}
inline ::System::Security::AccessControl::FileSystemAccessRule*
System::Security::AccessControl::FileSystemAccessRule::New_ctor(::System::Security::Principal::IdentityReference* identity, ::System::Security::AccessControl::FileSystemRights fileSystemRights,
                                                                bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::AccessControl::FileSystemAccessRule*>(identity, fileSystemRights, isInherited, inheritanceFlags, propagationFlags, type));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::FileSystemAccessRule::FileSystemAccessRule() {}
