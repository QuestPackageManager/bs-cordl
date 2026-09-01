#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\TlsBlockCipher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.get_WriteMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsMac* (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::get_WriteMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34739e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.get_ReadMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsMac* (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::get_ReadMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34739ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(
    ::Org::BouncyCastle::Crypto::Tls::TlsContext*, ::Org::BouncyCastle::Crypto::IBlockCipher*, ::Org::BouncyCastle::Crypto::IBlockCipher*, ::Org::BouncyCastle::Crypto::IDigest*,
    ::Org::BouncyCastle::Crypto::IDigest*, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::_ctor)> {
  constexpr static std::size_t size = 0xbac;
  constexpr static std::size_t addrs = 0x34739f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.GetPlaintextLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::GetPlaintextLimit)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x34745a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.EncodePlaintext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::EncodePlaintext)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x34746b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.DecodeCiphertext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::DecodeCiphertext)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x3474d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.CheckPaddingConstantTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(::ArrayW<uint8_t>, int32_t, int32_t, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::CheckPaddingConstantTime)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x34751c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.ChooseExtraPadBlocks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::ChooseExtraPadBlocks)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3475370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher.LowestBitSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::LowestBitSet)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3475418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 14 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext*& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext* const& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_randomData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomData;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_randomData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___randomData;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_set_randomData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___randomData = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_useExplicitIV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useExplicitIV;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_useExplicitIV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useExplicitIV;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_set_useExplicitIV(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useExplicitIV = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_encryptThenMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptThenMac;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_encryptThenMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptThenMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_set_encryptThenMac(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptThenMac = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_encryptCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_encryptCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_set_encryptCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encryptCipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_decryptCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_decryptCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptCipher;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_set_decryptCipher(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decryptCipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_mWriteMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteMac;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_mWriteMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mWriteMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_set_mWriteMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mWriteMac = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac*& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_mReadMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadMac;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac* const& Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_get_mReadMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReadMac;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::__cordl_internal_set_mReadMac(::Org::BouncyCastle::Crypto::Tls::TlsMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReadMac = value;
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsMac* Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::get_WriteMac() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsMac*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsMac* Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::get_ReadMac() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsMac*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context, ::Org::BouncyCastle::Crypto::IBlockCipher* clientWriteCipher,
                                                                  ::Org::BouncyCastle::Crypto::IBlockCipher* serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                  ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::TlsContext*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::GetPlaintextLimit(int32_t ciphertextLimit) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ciphertextLimit);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, seqNo, type, plaintext, offset, len);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, seqNo, type, ciphertext, offset, len);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::CheckPaddingConstantTime(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t blockSize, int32_t macSize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buf, off, len, blockSize, macSize);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::ChooseExtraPadBlocks(::Org::BouncyCastle::Security::SecureRandom* r, int32_t max) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, r, max);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::LowestBitSet(int32_t x) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher* Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext* context,
                                                                                                                  ::Org::BouncyCastle::Crypto::IBlockCipher* clientWriteCipher,
                                                                                                                  ::Org::BouncyCastle::Crypto::IBlockCipher* serverWriteCipher,
                                                                                                                  ::Org::BouncyCastle::Crypto::IDigest* clientWriteDigest,
                                                                                                                  ::Org::BouncyCastle::Crypto::IDigest* serverWriteDigest, int32_t cipherKeySize) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher*>(context, clientWriteCipher, serverWriteCipher, clientWriteDigest, serverWriteDigest, cipherKeySize));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::operator ::Org::BouncyCastle::Crypto::Tls::TlsCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsCipher"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCipher* Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::i___Org__BouncyCastle__Crypto__Tls__TlsCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsBlockCipher::TlsBlockCipher() {}
