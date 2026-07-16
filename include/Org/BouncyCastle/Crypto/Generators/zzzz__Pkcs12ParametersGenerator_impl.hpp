#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/Pkcs12ParametersGenerator.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__PbeParametersGenerator_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__Pkcs12ParametersGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33df51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.Adjust
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::Adjust)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x33df638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                             { "Adjust", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedKey)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x33df6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                           { "GenerateDerivedKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x33dfce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::StringW, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x33dfd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x33dfe20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(::StringW, int32_t, int32_t)>(
        &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x33dff20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator.GenerateDerivedMacParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::ICipherParameters* (::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::*)(int32_t)>(
    &::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedMacParameters)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x33e003c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 12 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_u() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_u() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___u;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_set_u(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___u = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::__cordl_internal_set_v(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
inline void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::Adjust(::ArrayW<uint8_t> a, int32_t aOff, ::ArrayW<uint8_t> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                           { "Adjust", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, aOff, b);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedKey(int32_t idByte, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(),
                                                                                         { "GenerateDerivedKey", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, idByte, n);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters(int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, algorithm, keySize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters(int32_t keySize, int32_t ivSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedParameters(::StringW algorithm, int32_t keySize,
                                                                                                                                                   int32_t ivSize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, algorithm, keySize, ivSize);
}
inline ::Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::GenerateDerivedMacParameters(int32_t keySize) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::ICipherParameters*>(this, ___internal_method, keySize);
}
inline ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator* Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator*>(digest));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::Pkcs12ParametersGenerator::Pkcs12ParametersGenerator() {}
