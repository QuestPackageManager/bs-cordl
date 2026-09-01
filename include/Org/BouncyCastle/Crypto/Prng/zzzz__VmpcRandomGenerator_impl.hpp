#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Prng\VmpcRandomGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__VmpcRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)()>(&::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3420c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3420c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3420d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3420d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x3420da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), 11 }));
    return ___internal_method;
  }
};
constexpr uint8_t& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_set_n(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___n = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_get_P() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_get_P() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___P;
}
constexpr void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_set_P(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___P = value;
}
constexpr uint8_t& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr uint8_t const& Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::__cordl_internal_set_s(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::AddSeedMaterial(::ArrayW<uint8_t> seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::AddSeedMaterial(int64_t seed) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::NextBytes(::ArrayW<uint8_t> bytes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, start, len);
}
inline ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator* Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator*>());
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::i___Org__BouncyCastle__Crypto__Prng__IRandomGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::VmpcRandomGenerator::VmpcRandomGenerator() {}
