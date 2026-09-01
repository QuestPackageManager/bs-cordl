#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\AbstractTlsAgreementCredentials.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsAgreementCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials.GenerateAgreement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::GenerateAgreement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3435200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::GenerateAgreement(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* peerPublicKey) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, peerPublicKey);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials* Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*
Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::i___Org__BouncyCastle__Crypto__Tls__TlsAgreementCredentials() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::operator ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCredentials"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials* Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::i___Org__BouncyCastle__Crypto__Tls__TlsCredentials() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials::AbstractTlsAgreementCredentials() {}
