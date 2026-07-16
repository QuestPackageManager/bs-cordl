#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsStreamCipher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsStreamCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::IStreamCipher*, ::Org::BouncyCastle::Crypto::IStreamCipher*, ::Org::BouncyCastle::Crypto::IDigest*,
    ::Org::BouncyCastle::Crypto::IDigest*, int32_t, bool)>(&::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::_ctor)> {
  constexpr static std::size_t size = 0x66c;
  constexpr static std::size_t addrs = 0x3490ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCipher*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.GetPlaintextLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x349114c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.EncodePlaintext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::EncodePlaintext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x3491178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.DecodeCiphertext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3491378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.CheckMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t,
                                                                                                                   int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::CheckMac)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3491574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher.UpdateIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::*)(::Org::BouncyCastle::Crypto::IStreamCipher*, bool, int64_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::UpdateIV)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3491694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher*& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_encryptCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* const& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_encryptCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_set_encryptCipher(::Org::BouncyCastle::Crypto::IStreamCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptCipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher*& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_decryptCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* const& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_decryptCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_set_decryptCipher(::Org::BouncyCastle::Crypto::IStreamCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decryptCipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_writeMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeMac;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_writeMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeMac = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_readMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readMac;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_readMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___readMac = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_usesNonce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usesNonce;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_get_usesNonce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___usesNonce;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::__cordl_internal_set_usesNonce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___usesNonce = value;
}
inline void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IStreamCipher* clientWriteCipher,
                                                                   ::Org::BouncyCastle::Crypto::IStreamCipher* serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                   ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize, bool usesNonce) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCipher*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IStreamCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize, usesNonce);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::GetPlaintextLimit(int32_t ciphertextLimit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ciphertextLimit);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, seqNo, type, plaintext, offset, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, seqNo, type, ciphertext, offset, len);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::CheckMac(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> recBuf, int32_t recStart, int32_t recEnd, ::ArrayW<uint8_t> calcBuf,
                                                                      int32_t calcOff, int32_t calcLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seqNo, type, recBuf, recStart, recEnd, calcBuf, calcOff, calcLen);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::UpdateIV(::Org::BouncyCastle::Crypto::IStreamCipher* cipher, bool forEncryption, int64_t seqNo) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cipher, forEncryption, seqNo);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*
Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IStreamCipher* clientWriteCipher,
                                                          ::Org::BouncyCastle::Crypto::IStreamCipher* serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                          ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize, bool usesNonce) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher*>(context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest,
                                                                                                              cipherKeySize, usesNonce));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher::TlsStreamCipher() {}
