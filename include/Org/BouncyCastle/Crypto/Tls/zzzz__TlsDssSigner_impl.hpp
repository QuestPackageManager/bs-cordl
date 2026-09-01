#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsDssSigner.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDsaSigner_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsDssSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDsa_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner.IsValidPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::IsValidPublicKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x348090c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner.CreateDsaImpl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDsa* (::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::CreateDsaImpl)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3480988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner.get_SignatureAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::get_SignatureAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3480a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x347d658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool Org::BouncyCastle::Crypto::Tls::TlsDssSigner::IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Crypto::IDsa* Org::BouncyCastle::Crypto::Tls::TlsDssSigner::CreateDsaImpl(uint8_t hashAlgorithm) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDsa*>(this, ___internal_method, hashAlgorithm);
}
inline uint8_t Org::BouncyCastle::Crypto::Tls::TlsDssSigner::get_SignatureAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsDssSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner* Org::BouncyCastle::Crypto::Tls::TlsDssSigner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsDssSigner*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDssSigner::TlsDssSigner() {}
