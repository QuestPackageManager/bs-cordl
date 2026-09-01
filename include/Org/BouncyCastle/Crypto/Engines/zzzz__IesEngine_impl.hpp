#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\IesEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__IesEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KdfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    ::Org::BouncyCastle::Crypto::IBasicAgreement*, ::Org::BouncyCastle::Crypto::IDerivationFunction*, ::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x33b41f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBasicAgreement*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDerivationFunction*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    ::Org::BouncyCastle::Crypto::IBasicAgreement*, ::Org::BouncyCastle::Crypto::IDerivationFunction*, ::Org::BouncyCastle::Crypto::IMac*, ::Org::BouncyCastle::Crypto::BufferedBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x33b42ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBasicAgreement*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDerivationFunction*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    bool, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::IesEngine::Init)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x33b43e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::IesEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x33b44bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                         { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Engines::IesEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x33b4cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                         { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.GenerateKdfBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(::Org::BouncyCastle::Crypto::Parameters::KdfParameters*, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::IesEngine::GenerateKdfBytes)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x33b4b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                                             { "GenerateKdfBytes", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::IesEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x33b52b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement*& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_agree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agree;
}
constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement* const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_agree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agree;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_agree(::Org::BouncyCastle::Crypto::IBasicAgreement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___agree = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_kdf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kdf;
}
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_kdf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___kdf;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___kdf = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mac = value;
}
constexpr ::Org::BouncyCastle::Crypto::BufferedBlockCipher*& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr ::Org::BouncyCastle::Crypto::BufferedBlockCipher* const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::BufferedBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cipher = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_macBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBuf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_macBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___macBuf;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_macBuf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___macBuf = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_privParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privParam;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_privParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privParam;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_privParam(::Org::BouncyCastle::Crypto::ICipherParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privParam = value;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_pubParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubParam;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_pubParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubParam;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_pubParam(::Org::BouncyCastle::Crypto::ICipherParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pubParam = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::IesParameters*& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::IesParameters* const& Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::IesParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___param = value;
}
inline void Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                 ::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBasicAgreement*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDerivationFunction*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agree, kdf, mac);
}
inline void Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                 ::Org::BouncyCastle::Crypto::IMac* mac, ::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBasicAgreement*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IDerivationFunction*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agree, kdf, mac, cipher);
}
inline void Org::BouncyCastle::Crypto::Engines::IesEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* privParameters,
                                                                ::Org::BouncyCastle::Crypto::ICipherParameters* pubParameters, ::Org::BouncyCastle::Crypto::ICipherParameters* iesParameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, privParameters, pubParameters, iesParameters);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::DecryptBlock(::ArrayW<uint8_t> in_enc, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                       { "DecryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, in_enc, inOff, inLen, z);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                       { "EncryptBlock", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen, z);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::GenerateKdfBytes(::Org::BouncyCastle::Crypto::Parameters::KdfParameters* kParam, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(),
                                                           { "GenerateKdfBytes", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, kParam, length);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::IesEngine::ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, inOff, inLen);
}
inline ::Org::BouncyCastle::Crypto::Engines::IesEngine* Org::BouncyCastle::Crypto::Engines::IesEngine::New_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree,
                                                                                                                ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                                                                ::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(agree, kdf, mac));
}
inline ::Org::BouncyCastle::Crypto::Engines::IesEngine* Org::BouncyCastle::Crypto::Engines::IesEngine::New_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree,
                                                                                                                ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                                                                ::Org::BouncyCastle::Crypto::IMac* mac,
                                                                                                                ::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(agree, kdf, mac, cipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::IesEngine::IesEngine() {}
