#pragma once
// IWYU pragma private; include "System/Security/AccessControl/CommonObjectSecurity.hpp"
#include "System/Security/AccessControl/zzzz__ObjectSecurity_impl.hpp"
#include "System/Security/AccessControl/zzzz__CommonObjectSecurity_def.hpp"
#include "System/Security/AccessControl/zzzz__AuthorizationRuleCollection_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::CommonObjectSecurity._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::CommonObjectSecurity::*)(bool)>(
    &::System::Security::AccessControl::CommonObjectSecurity::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3cc3800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonObjectSecurity*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::CommonObjectSecurity.GetAccessRules
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::AuthorizationRuleCollection* (
    ::System::Security::AccessControl::CommonObjectSecurity::*)(bool, bool, ::System::Type*)>(&::System::Security::AccessControl::CommonObjectSecurity::GetAccessRules)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3cc38fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonObjectSecurity*>::get(), "GetAccessRules", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::CommonObjectSecurity::_ctor(bool isContainer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonObjectSecurity*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isContainer);
}
inline ::System::Security::AccessControl::AuthorizationRuleCollection* System::Security::AccessControl::CommonObjectSecurity::GetAccessRules(bool includeExplicit, bool includeInherited,
                                                                                                                                             ::System::Type* targetType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::CommonObjectSecurity*>::get(), "GetAccessRules", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::AuthorizationRuleCollection*, false>(this, ___internal_method, includeExplicit, includeInherited, targetType);
}
inline ::System::Security::AccessControl::CommonObjectSecurity* System::Security::AccessControl::CommonObjectSecurity::New_ctor(bool isContainer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::AccessControl::CommonObjectSecurity*>(isContainer));
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::CommonObjectSecurity::CommonObjectSecurity() {}
