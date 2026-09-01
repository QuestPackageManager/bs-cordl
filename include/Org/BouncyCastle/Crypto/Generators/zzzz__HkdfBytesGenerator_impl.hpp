#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\HkdfBytesGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__HkdfBytesGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__HMac_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x33db1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::*)(::Org::BouncyCastle::Crypto::IDerivationParameters*)>(
    &::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::Init)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x33db2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator.Extract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::KeyParameter* (
    ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::Extract)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x33db4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(),
                                                                                           { "Extract", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator.ExpandNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::ExpandNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x33db5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), { "ExpandNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator.get_Digest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33db6f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator.GenerateBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x33db70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), 9 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Macs::HMac*& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_hMacHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hMacHash;
}
constexpr ::Org::BouncyCastle::Crypto::Macs::HMac* const& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_hMacHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hMacHash;
}
constexpr void Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_set_hMacHash(::Org::BouncyCastle::Crypto::Macs::HMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hMacHash = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_hashLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_hashLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashLen;
}
constexpr void Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_set_hashLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashLen = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_set_info(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___info = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_currentT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentT;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_currentT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentT;
}
constexpr void Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_set_currentT(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentT = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_generatedBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generatedBytes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_get_generatedBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___generatedBytes;
}
constexpr void Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::__cordl_internal_set_generatedBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___generatedBytes = value;
}
inline void Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* hash) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::Extract(::ArrayW<uint8_t> salt, ::ArrayW<uint8_t> ikm) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(),
                                                                                         { "Extract", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>(this, ___internal_method, salt, ikm);
}
inline void Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::ExpandNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), { "ExpandNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::get_Digest() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff, len);
}
inline ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator* Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* hash) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator*>(hash));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::HkdfBytesGenerator::HkdfBytesGenerator() {}
