#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\Mgf1BytesGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Mgf1BytesGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x33dd8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::*)(::Org::BouncyCastle::Crypto::IDerivationParameters*)>(
    &::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::Init)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x33dd97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDerivationParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator.get_Digest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33ddab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(), { "get_Digest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator.ItoOSP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::*)(int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::ItoOSP)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x33ddac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(),
                                                                                           { "ItoOSP", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator.GenerateBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x33ddb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(),
                                                             { "GenerateBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_set_seed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seed = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_get_hLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_get_hLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hLen;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::__cordl_internal_set_hLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hLen = value;
}
inline void Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDerivationParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::get_Digest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(), { "get_Digest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::ItoOSP(int32_t i, ::ArrayW<uint8_t> sp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(),
                                                                                         { "ItoOSP", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i, sp);
}
inline int32_t Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(),
                                                           { "GenerateBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, outOff, length);
}
inline ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator* Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator*>(digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Mgf1BytesGenerator::Mgf1BytesGenerator() {}
