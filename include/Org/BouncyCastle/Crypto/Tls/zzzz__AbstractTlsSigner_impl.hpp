#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\AbstractTlsSigner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSigner_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3437798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.GenerateRawSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::GenerateRawSignature)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x34377a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.GenerateRawSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(
    ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::GenerateRawSignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.VerifyRawSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(
    ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::VerifyRawSignature)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x34377bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.VerifyRawSignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::ArrayW<uint8_t>,
                                                                                                                     ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::VerifyRawSignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.CreateSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::CreateSigner)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x34377dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.CreateSigner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::CreateSigner)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.CreateVerifyer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::CreateVerifyer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x34377f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.CreateVerifyer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ISigner* (
    ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::CreateVerifyer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner.IsValidPublicKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)>(
    &::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::IsValidPublicKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::*)()>(&::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x343780c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::__cordl_internal_get_mContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::__cordl_internal_get_mContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::__cordl_internal_set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mContext = value;
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::Init(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::GenerateRawSignature(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> md5AndSha1) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, privateKey, md5AndSha1);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::GenerateRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, ::ArrayW<uint8_t> hash) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, algorithm, privateKey, hash);
}
inline bool Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::VerifyRawSignature(::ArrayW<uint8_t> sigBytes, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey,
                                                                                  ::ArrayW<uint8_t> md5AndSha1) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sigBytes, publicKey, md5AndSha1);
}
inline bool Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::VerifyRawSignature(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm, ::ArrayW<uint8_t> sigBytes,
                                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey, ::ArrayW<uint8_t> hash) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, algorithm, sigBytes, publicKey, hash);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::CreateSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(this, ___internal_method, privateKey);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::CreateSigner(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                             ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(this, ___internal_method, algorithm, privateKey);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::CreateVerifyer(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(this, ___internal_method, publicKey);
}
inline ::Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::CreateVerifyer(::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm* algorithm,
                                                                                                               ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ISigner*>(this, ___internal_method, algorithm, publicKey);
}
inline bool Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::IsValidPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, publicKey);
}
inline void Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner* Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSigner"
constexpr Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::operator ::Org::BouncyCastle::Crypto::Tls::TlsSigner*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSigner*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSigner"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSigner* Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::i___Org__BouncyCastle__Crypto__Tls__TlsSigner() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSigner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner::AbstractTlsSigner() {}
