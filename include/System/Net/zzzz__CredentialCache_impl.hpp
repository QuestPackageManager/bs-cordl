#pragma once
// IWYU pragma private; include "System\Net\CredentialCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CredentialCache_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
//  Writing Method size for method: ::System::Net::CredentialCache.get_DefaultCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (*)()>(&::System::Net::CredentialCache::get_DefaultCredentials)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x640b968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CredentialCache*>(), { "get_DefaultCredentials", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CredentialCache.get_DefaultNetworkCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (*)()>(&::System::Net::CredentialCache::get_DefaultNetworkCredentials)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x640b9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CredentialCache*>(), { "get_DefaultNetworkCredentials", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Net::ICredentials* System::Net::CredentialCache::get_DefaultCredentials() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CredentialCache*>(), { "get_DefaultCredentials", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(nullptr, ___internal_method);
}
inline ::System::Net::NetworkCredential* System::Net::CredentialCache::get_DefaultNetworkCredentials() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CredentialCache*>(), { "get_DefaultNetworkCredentials", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::CredentialCache::CredentialCache() {}
