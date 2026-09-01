#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\OpenPgp\PgpKeyPair.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyPair_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricCipherKeyPair_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*, ::System::DateTime)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3583674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::DateTime)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x3583690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                    ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3583ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair.get_KeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::get_KeyId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3583cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), { "get_KeyId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair.get_PublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3583cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), { "get_PublicKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair.get_PrivateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::get_PrivateKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3583cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), { "get_PrivateKey", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::__cordl_internal_get_pub() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pub;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::__cordl_internal_get_pub() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pub;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::__cordl_internal_set_pub(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pub = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::__cordl_internal_get_priv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priv;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::__cordl_internal_get_priv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priv;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::__cordl_internal_set_priv(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priv = value;
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* keyPair,
                                                                ::System::DateTime time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, keyPair, time);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, algorithm, pubKey, privKey, time);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* priv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pub, priv);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), { "get_KeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::get_PublicKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), { "get_PublicKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::get_PrivateKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(), { "get_PrivateKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                                                              ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* keyPair, ::System::DateTime time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(algorithm, keyPair, time));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                                                              ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
                                                                                                              ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(algorithm, pubKey, privKey, time));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub,
                                                                                                              ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* priv) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>(pub, priv));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair::PgpKeyPair() {}
