#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Engines\Rfc3211WrapEngine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Rfc3211WrapEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/Modes/zzzz__CbcBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ParametersWithIV_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)(::Org::BouncyCastle::Crypto::IBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x33bcc24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Init)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x33bcc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)()>(
    &::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::get_AlgorithmName)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x33bce10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine.Wrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Wrap)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x33bcee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine.Unwrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Unwrap)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x33bd160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*& Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* const& Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___engine = value;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*& Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* const& Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___param = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_get_forWrapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forWrapping;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_get_forWrapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forWrapping;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_set_forWrapping(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forWrapping = value;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rand;
}
constexpr void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::__cordl_internal_set_rand(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rand = value;
}
inline void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, engine);
}
inline void Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* param) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forWrapping, param);
}
inline ::StringW Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::get_AlgorithmName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Wrap(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inBytes, inOff, inLen);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Unwrap(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inBytes, inOff, inLen);
}
inline ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine* Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*>(engine));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
constexpr ::Org::BouncyCastle::Crypto::IWrapper* Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::i___Org__BouncyCastle__Crypto__IWrapper() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IWrapper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine::Rfc3211WrapEngine() {}
