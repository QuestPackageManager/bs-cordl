#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\CryptoApiRandomGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__CryptoApiRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::*)()>(&::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x341dbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::*)(::System::Security::Cryptography::RandomNumberGenerator*)>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341dc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x341dc08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x341dc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x341dc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x341dc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RandomNumberGenerator*& Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::__cordl_internal_get_rndProv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rndProv;
}
constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::__cordl_internal_get_rndProv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rndProv;
}
constexpr void Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::__cordl_internal_set_rndProv(::System::Security::Cryptography::RandomNumberGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rndProv = value;
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::RandomNumberGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rng);
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::AddSeedMaterial(::ArrayW<uint8_t> seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::AddSeedMaterial(int64_t seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::NextBytes(::ArrayW<uint8_t> bytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, start, len);
}
inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator* Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>());
}
inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator* Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*>(rng));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::i___Org__BouncyCastle__Crypto__Prng__IRandomGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator::CryptoApiRandomGenerator() {}
