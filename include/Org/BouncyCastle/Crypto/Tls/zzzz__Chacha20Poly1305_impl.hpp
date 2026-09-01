#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\Chacha20Poly1305.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Chacha20Poly1305_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__ChaCha7539Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCipher_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(::Org::BouncyCastle::Crypto::Tls::TlsContext*)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::_ctor)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x343bc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.GetPlaintextLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x343bf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.EncodePlaintext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::EncodePlaintext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x343bf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.DecodeCiphertext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x343c0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.InitRecord
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (
    ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(::Org::BouncyCastle::Crypto::IStreamCipher*, bool, int64_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::InitRecord)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x343c2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.CalculateNonce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int64_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::CalculateNonce)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x343c3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.GenerateRecordMacKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (
    ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(::Org::BouncyCastle::Crypto::IStreamCipher*)>(&::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GenerateRecordMacKey)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x343c4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.CalculateRecordMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(
    ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::CalculateRecordMac)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x343c650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.UpdateRecordMacLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(::Org::BouncyCastle::Crypto::IMac*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::UpdateRecordMacLength)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x343c804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.UpdateRecordMacText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(::Org::BouncyCastle::Crypto::IMac*, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::UpdateRecordMacText)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x343c8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305.GetAdditionalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::*)(int64_t, uint8_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GetAdditionalData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x343ca70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 16 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_encryptCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptCipher;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* const& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_encryptCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_set_encryptCipher(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptCipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_decryptCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptCipher;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* const& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_decryptCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_set_decryptCipher(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decryptCipher = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_encryptIV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptIV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_encryptIV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptIV;
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_set_encryptIV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptIV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_decryptIV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptIV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_get_decryptIV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptIV;
}
constexpr void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::__cordl_internal_set_decryptIV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decryptIV = value;
}
inline void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::setStaticF_Zeroes(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Zeroes", ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::getStaticF_Zeroes() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Zeroes", ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>();
}
inline void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GetPlaintextLimit(int32_t ciphertextLimit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ciphertextLimit);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, seqNo, type, plaintext, offset, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, seqNo, type, ciphertext, offset, len);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::InitRecord(::Org::BouncyCastle::Crypto::IStreamCipher* cipher, bool forEncryption,
                                                                                                                           int64_t seqNo, ::ArrayW<uint8_t> iv) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(this, ___internal_method, cipher, forEncryption, seqNo, iv);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::CalculateNonce(int64_t seqNo, ::ArrayW<uint8_t> iv) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, seqNo, iv);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GenerateRecordMacKey(::Org::BouncyCastle::Crypto::IStreamCipher* cipher) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(this, ___internal_method, cipher);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::CalculateRecordMac(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* macKey, ::ArrayW<uint8_t> additionalData,
                                                                                              ::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, macKey, additionalData, buf, off, len);
}
inline void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::UpdateRecordMacLength(::Org::BouncyCastle::Crypto::IMac* mac, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mac, len);
}
inline void Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::UpdateRecordMacText(::Org::BouncyCastle::Crypto::IMac* mac, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mac, buf, off, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, seqNo, type, len);
}
inline ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305* Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305*>(context));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305::Chacha20Poly1305() {}
