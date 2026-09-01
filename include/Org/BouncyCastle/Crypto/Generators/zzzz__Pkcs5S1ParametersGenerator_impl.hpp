#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\Pkcs5S1ParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Pkcs5S1ParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e2460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator.GenerateDerivedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedKey)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x33e2468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), { "GenerateDerivedKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x33e27bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(::StringW, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x33e27c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x33e2974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(::StringW, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x33e2b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator.GenerateDerivedMacParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedMacParameters)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x33e2d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
inline void Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), { "GenerateDerivedKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters(int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, algorithm, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters(int32_t keySize, int32_t ivSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize,
                                                                                                                                                    int32_t ivSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, algorithm, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedMacParameters(int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator*>(digest));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::Pkcs5S1ParametersGenerator() {}
