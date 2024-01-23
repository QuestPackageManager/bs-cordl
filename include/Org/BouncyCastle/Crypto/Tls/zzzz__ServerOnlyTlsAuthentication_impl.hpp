#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ServerOnlyTlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication.NotifyServerCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)(
    ::Org::BouncyCastle::Crypto::Tls::Certificate*)>(&::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::NotifyServerCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication.GetClientCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials* (::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
        &::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::GetClientCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf95a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>::get(), "GetClientCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf95aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsAuthentication"
constexpr Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::operator ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsAuthentication"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::i___Org__BouncyCastle__Crypto__Tls__TlsAuthentication() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*>(static_cast<void*>(this));
}
inline void Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::NotifyServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverCertificate);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*
Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::GetClientCredentials(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>::get(), "GetClientCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*, false>(this, ___internal_method, certificateRequest);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication* Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>());
}
inline void Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::ServerOnlyTlsAuthentication() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
