#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DefaultTlsSignerCredentials.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSignerCredentials_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DefaultTlsSignerCredentials_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34406d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::Tls::Certificate*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*,
    ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*)>(&::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::_ctor)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x34406d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(),
                                ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials.get_Certificate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::Certificate* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::get_Certificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3440ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials.GenerateCertificateSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::GenerateCertificateSignature)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x3440ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials.get_SignatureAndHashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* (::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::get_SignatureAndHashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3440d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mContext = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificate;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate* const& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mCertificate;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mCertificate = value;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mPrivateKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrivateKey;
}
constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* const& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mPrivateKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrivateKey;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPrivateKey = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mSignatureAndHashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignatureAndHashAlgorithm;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* const& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mSignatureAndHashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSignatureAndHashAlgorithm;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mSignatureAndHashAlgorithm(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSignatureAndHashAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner*& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mSigner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner* const& Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_get_mSigner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSigner;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::__cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::Tls::TlsSigner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSigner = value;
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, certificate, privateKey);
}
inline void Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                               ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Certificate*>(),
                              ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, certificate, privateKey, signatureAndHashAlgorithm);
}
inline ::Org::BouncyCastle::Crypto::Tls::Certificate* Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::get_Certificate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Certificate*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::GenerateCertificateSignature(::ArrayW<uint8_t> hash) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, hash);
}
inline ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::get_SignatureAndHashAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*
Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(context, certificate, privateKey));
}
inline ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*
Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::Tls::Certificate* certificate,
                                                                      ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey,
                                                                      ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* signatureAndHashAlgorithm) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials*>(context, certificate, privateKey, signatureAndHashAlgorithm));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DefaultTlsSignerCredentials::DefaultTlsSignerCredentials() {}
