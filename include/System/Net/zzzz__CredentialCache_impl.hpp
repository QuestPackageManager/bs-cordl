#pragma once
// IWYU pragma private; include "System/Net/CredentialCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CredentialCache_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
//  Writing Method size for method: ::System::Net::CredentialCache.get_DefaultCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (*)()>(&::System::Net::CredentialCache::get_DefaultCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x449ecd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CredentialCache*>::get(), "get_DefaultCredentials",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.get_DefaultNetworkCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (*)()>(&::System::Net::CredentialCache::get_DefaultNetworkCredentials)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x449ed28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CredentialCache*>::get(),
                                                                               "get_DefaultNetworkCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Net::ICredentials* System::Net::CredentialCache::get_DefaultCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CredentialCache*>::get(), "get_DefaultCredentials",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(nullptr, ___internal_method);
}
inline ::System::Net::NetworkCredential* System::Net::CredentialCache::get_DefaultNetworkCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CredentialCache*>::get(),
                                                                             "get_DefaultNetworkCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::CredentialCache::CredentialCache() {}
