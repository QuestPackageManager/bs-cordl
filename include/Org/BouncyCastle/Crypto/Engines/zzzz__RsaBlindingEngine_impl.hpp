#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\RsaBlindingEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__RsaBlindingEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaKeyParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IAsymmetricBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IRsa_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)()>(&::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x33bfeb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)(::Org::BouncyCastle::Crypto::IRsa*)>(
    &::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33bff04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IRsa*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33bff0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::Init)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x33bff50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine.GetInputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::GetInputBlockSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x33c00e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine.GetOutputBlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::GetOutputBlockSize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x33c0188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x33c0230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine.BlindMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::BlindMessage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x33c0388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                           { "BlindMessage", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine.UnblindMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::UnblindMessage)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x33c03ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                           { "UnblindMessage", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IRsa*& Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_get_core() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___core;
}
constexpr ::Org::BouncyCastle::Crypto::IRsa* const& Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_get_core() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___core;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_set_core(::Org::BouncyCastle::Crypto::IRsa* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___core = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* const& Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_set_key(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_get_blindingFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blindingFactor;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_get_blindingFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blindingFactor;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_set_blindingFactor(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blindingFactor = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::__cordl_internal_set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forEncryption = value;
}
inline void Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IRsa*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rsa);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forEncryption, param);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::GetInputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::GetOutputBlockSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inBuf, inOff, inLen);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::BlindMessage(::Org::BouncyCastle::Math::BigInteger* msg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                         { "BlindMessage", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, msg);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::UnblindMessage(::Org::BouncyCastle::Math::BigInteger* blindedMsg) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(),
                                                                                         { "UnblindMessage", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, blindedMsg);
}
inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine* Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>());
}
inline ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine* Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine*>(rsa));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher"
constexpr ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::i___Org__BouncyCastle__Crypto__IAsymmetricBlockCipher() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::RsaBlindingEngine::RsaBlindingEngine() {}
