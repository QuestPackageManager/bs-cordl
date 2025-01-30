#pragma once
// IWYU pragma private; include "System/Security/AccessControl/DirectorySecurity.hpp"
#include "System/Security/AccessControl/zzzz__FileSystemSecurity_impl.hpp"
#include "System/Security/AccessControl/zzzz__DirectorySecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::DirectorySecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::DirectorySecurity::*)(
    ::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::Security::AccessControl::DirectorySecurity::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3cc7204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DirectorySecurity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::DirectorySecurity::_ctor(::StringW name, ::System::Security::AccessControl::AccessControlSections includeSections) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::DirectorySecurity*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, includeSections);
}
inline ::System::Security::AccessControl::DirectorySecurity* System::Security::AccessControl::DirectorySecurity::New_ctor(::StringW name,
                                                                                                                          ::System::Security::AccessControl::AccessControlSections includeSections) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::DirectorySecurity*>(name, includeSections));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::DirectorySecurity::DirectorySecurity() {}
