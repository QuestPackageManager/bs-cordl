#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/X931SecureRandomBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__X931SecureRandomBuilder_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__X931SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySourceProvider_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::*)()>(&::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x341f924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::*)(::Org::BouncyCastle::Security::SecureRandom*, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x341f984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IEntropySourceProvider*)>(
    &::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341f9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder.SetDateTimeVector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* (::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::SetDateTimeVector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341f9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(), { "SetDateTimeVector", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom* (
    ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::*)(::Org::BouncyCastle::Crypto::IBlockCipher*, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::Build)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x341fa04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(),
            { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_get_mRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandom;
}
constexpr ::Org::BouncyCastle::Security::SecureRandom* const& Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_get_mRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mRandom;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_set_mRandom(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mRandom = value;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider*& Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_get_mEntropySourceProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySourceProvider;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySourceProvider* const& Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_get_mEntropySourceProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySourceProvider;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_set_mEntropySourceProvider(::Org::BouncyCastle::Crypto::IEntropySourceProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySourceProvider = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_get_mDateTimeVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDateTimeVector;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_get_mDateTimeVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDateTimeVector;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::__cordl_internal_set_mDateTimeVector(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDateTimeVector = value;
}
inline void Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource, bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entropySource, predictionResistant);
}
inline void Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySourceProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entropySourceProvider);
}
inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::SetDateTimeVector(::ArrayW<uint8_t> dateTimeVector) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(), { "SetDateTimeVector", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(this, ___internal_method, dateTimeVector);
}
inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandom* Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::Build(::Org::BouncyCastle::Crypto::IBlockCipher* engine,
                                                                                                                            ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                                                                            bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(),
          { "Build", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Prng::X931SecureRandom*>(this, ___internal_method, engine, key, predictionResistant);
}
inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>());
}
inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder* Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::New_ctor(::Org::BouncyCastle::Security::SecureRandom* entropySource,
                                                                                                                                      bool predictionResistant) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(entropySource, predictionResistant));
}
inline ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*
Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::New_ctor(::Org::BouncyCastle::Crypto::IEntropySourceProvider* entropySourceProvider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder*>(entropySourceProvider));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::X931SecureRandomBuilder::X931SecureRandomBuilder() {}
