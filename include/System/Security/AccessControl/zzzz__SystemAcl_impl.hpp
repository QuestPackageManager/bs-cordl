#pragma once
// IWYU pragma private; include "System/Security/AccessControl/SystemAcl.hpp"
#include "System/Security/AccessControl/zzzz__CommonAcl_impl.hpp"
#include "System/Security/AccessControl/zzzz__SystemAcl_def.hpp"
#include "System/Security/AccessControl/zzzz__AceQualifier_def.hpp"
//  Writing Method size for method: ::System::Security::AccessControl::SystemAcl.ApplyCanonicalSortToExplicitAces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::AccessControl::SystemAcl::*)()>(
    &::System::Security::AccessControl::SystemAcl::ApplyCanonicalSortToExplicitAces)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3cc6e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::AccessControl::SystemAcl.GetAceInsertPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::AccessControl::SystemAcl::*)(::System::Security::AccessControl::AceQualifier)>(
    &::System::Security::AccessControl::SystemAcl::GetAceInsertPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cc6e64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl*>::get(), 15));
    return ___internal_method;
  }
};
inline void System::Security::AccessControl::SystemAcl::ApplyCanonicalSortToExplicitAces() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Security::AccessControl::SystemAcl::GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::AccessControl::SystemAcl*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, aceQualifier);
}
// Ctor Parameters []
constexpr ::System::Security::AccessControl::SystemAcl::SystemAcl() {}
