#pragma once
// IWYU pragma private; include "System/Security/AccessControl/FileSystemAccessRule.hpp"
#include "System/Security/AccessControl/zzzz__AccessRule_impl.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemAccessRule_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlType_def.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemRights_def.hpp"
#include "System/Security/AccessControl/zzzz__InheritanceFlags_def.hpp"
#include "System/Security/AccessControl/zzzz__PropagationFlags_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::FileSystemAccessRule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::FileSystemAccessRule::*)(
    ::System::Security::Principal::IdentityReference*, ::System::Security::AccessControl::FileSystemRights, bool, ::System::Security::AccessControl::InheritanceFlags,
    ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AccessControlType)>(&::System::Security::AccessControl::FileSystemAccessRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c6403c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::FileSystemAccessRule*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::FileSystemRights>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::FileSystemAccessRule.get_FileSystemRights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::FileSystemRights (::System::Security::AccessControl::FileSystemAccessRule::*)()>(
    &::System::Security::AccessControl::FileSystemAccessRule::get_FileSystemRights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c64044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::FileSystemAccessRule*>::get(),
                                                                               "get_FileSystemRights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Security::AccessControl::FileSystemAccessRule*
System::Security::AccessControl::FileSystemAccessRule::New_ctor(::System::Security::Principal::IdentityReference* identity, ::System::Security::AccessControl::FileSystemRights fileSystemRights,
                                                                bool isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AccessControlType type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::FileSystemAccessRule*>(identity, fileSystemRights, isInherited, inheritanceFlags, propagationFlags, type));
}
inline void System::Security::AccessControl::FileSystemAccessRule::_ctor(::System::Security::Principal::IdentityReference* identity,
                                                                         ::System::Security::AccessControl::FileSystemRights fileSystemRights, bool isInherited,
                                                                         ::System::Security::AccessControl::InheritanceFlags inheritanceFlags,
                                                                         ::System::Security::AccessControl::PropagationFlags propagationFlags,
                                                                         ::System::Security::AccessControl::AccessControlType type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::FileSystemAccessRule*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::IdentityReference*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::FileSystemRights>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::InheritanceFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::PropagationFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identity, fileSystemRights, isInherited, inheritanceFlags, propagationFlags, type);
}
inline ::System::Security::AccessControl::FileSystemRights System::Security::AccessControl::FileSystemAccessRule::get_FileSystemRights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::FileSystemAccessRule*>::get(),
                                                                             "get_FileSystemRights", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::FileSystemRights, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::FileSystemAccessRule::FileSystemAccessRule() {}
