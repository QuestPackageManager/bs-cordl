#pragma once
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__ISecurityEncodable_def.hpp"
//  Writing Method size for method: ::System::Security::IPermission.Demand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::IPermission::*)()>(&::System::Security::IPermission::Demand)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::IPermission*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::IPermission*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::IPermission.IsSubsetOf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::IPermission::*)(::System::Security::IPermission*)>(
    &::System::Security::IPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::IPermission*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::IPermission*>::get(), 1));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Security::ISecurityEncodable"
constexpr System::Security::IPermission::operator ::System::Security::ISecurityEncodable*() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::ISecurityEncodable"
constexpr ::System::Security::ISecurityEncodable* System::Security::IPermission::i___System__Security__ISecurityEncodable() noexcept {
  return static_cast<::System::Security::ISecurityEncodable*>(static_cast<void*>(this));
}
inline void System::Security::IPermission::Demand() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::IPermission*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Security::IPermission::IsSubsetOf(::System::Security::IPermission* target) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::IPermission*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, target);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
