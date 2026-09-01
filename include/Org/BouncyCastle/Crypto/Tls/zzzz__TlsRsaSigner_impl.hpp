#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsRsaSigner.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsRsaSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner.GenerateRawSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*,
                                                                                                                             ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::GenerateRawSignature)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x348b048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner.VerifyRawSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::ArrayW<uint8_t>,
                                                                                                                ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::VerifyRawSignature)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x348b258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner.CreateSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::CreateSigner)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x348b3b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner.CreateVerifyer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::CreateVerifyer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x348b4d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner.IsValidPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::IsValidPublicKey)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x348b4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner.MakeSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, bool, bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::MakeSigner)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x348b574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner.CreateRsaImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* (::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::CreateRsaImpl)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x348bae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3483844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                            ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> hash) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, algorithm, privateKey, hash);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t> sigBytes,
                                                                             ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t> hash) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, algorithm, sigBytes, publicKey, hash);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                        ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(this, ___internal_method, algorithm, privateKey);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                          ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(this, ___internal_method, algorithm, publicKey);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::MakeSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, bool raw, bool forSigning,
                                                                                                      ::Org::BouncyCastle::Crypto::ICipherParameters* cp) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(this, ___internal_method, algorithm, raw, forSigning, cp);
}
inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::CreateRsaImpl() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner* Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsRsaSigner::TlsRsaSigner() {}
