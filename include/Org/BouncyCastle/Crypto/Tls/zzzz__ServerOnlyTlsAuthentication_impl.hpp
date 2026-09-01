#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\ServerOnlyTlsAuthentication.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ServerOnlyTlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAuthentication_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication.NotifyServerCertificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::NotifyServerCertificate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication.GetClientCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials* (::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
        &::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::GetClientCredentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>(),
                                                             { "GetClientCredentials", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x346f888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::NotifyServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* serverCertificate) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverCertificate);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*
Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::GetClientCredentials(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>(),
                                                                                         { "GetClientCredentials", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication* Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsAuthentication"
constexpr Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::operator ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsAuthentication"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication* Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::i___Org__BouncyCastle__Crypto__Tls__TlsAuthentication() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAuthentication*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication::ServerOnlyTlsAuthentication() {}
