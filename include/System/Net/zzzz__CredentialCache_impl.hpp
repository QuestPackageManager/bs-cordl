#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CredentialCache_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
//  Writing Method size for method: ::System::Net::CredentialCache.get_DefaultCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (*)()>(&::System::Net::CredentialCache::get_DefaultCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x299b568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CredentialCache*>::get(), "get_DefaultCredentials",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.get_DefaultNetworkCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (*)()>(&::System::Net::CredentialCache::get_DefaultNetworkCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x299b5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CredentialCache*>::get(),
                                                                               "get_DefaultNetworkCredentials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::ICredentials* System::Net::CredentialCache::get_DefaultCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CredentialCache*>::get(), "get_DefaultCredentials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(nullptr, ___internal_method);
}
inline ::System::Net::NetworkCredential* System::Net::CredentialCache::get_DefaultNetworkCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CredentialCache*>::get(),
                                                                             "get_DefaultNetworkCredentials", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::CredentialCache::CredentialCache() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
