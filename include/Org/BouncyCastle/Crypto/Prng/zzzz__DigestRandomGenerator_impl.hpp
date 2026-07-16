#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/DigestRandomGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__DigestRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__IRandomGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::Org::BouncyCastle::Crypto::IDigest*)>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x341ba1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x341bb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "AddSeedMaterial", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.AddSeedMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::AddSeedMaterial)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x341bdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "AddSeedMaterial", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x341bf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "NextBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.NextBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::NextBytes)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x341bf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(),
                                                             { "NextBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.CycleSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)()>(&::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::CycleSeed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x341c154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "CycleSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.GenerateState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::GenerateState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x341c0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "GenerateState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.DigestAddCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestAddCounter)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x341be6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "DigestAddCounter", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.DigestUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x341bc34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "DigestUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator.DigestDoFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestDoFinal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x341bcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "DigestDoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_stateCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateCounter;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_stateCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateCounter;
}
constexpr void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_set_stateCounter(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stateCounter = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_seedCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seedCounter;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_seedCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seedCounter;
}
constexpr void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_set_seedCounter(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seedCounter = value;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_digest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_digest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digest;
}
constexpr void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___digest = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_set_state(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::__cordl_internal_set_seed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seed = value;
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::AddSeedMaterial(::ArrayW<uint8_t> inSeed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "AddSeedMaterial", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inSeed);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::AddSeedMaterial(int64_t rSeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "AddSeedMaterial", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rSeed);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::NextBytes(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "NextBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::NextBytes(::ArrayW<uint8_t> bytes, int32_t start, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(),
                                                           { "NextBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes, start, len);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::CycleSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "CycleSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::GenerateState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "GenerateState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestAddCounter(int64_t seedVal) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "DigestAddCounter", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seedVal);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestUpdate(::ArrayW<uint8_t> inSeed) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "DigestUpdate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inSeed);
}
inline void Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestDoFinal(::ArrayW<uint8_t> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(), { "DigestDoFinal", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator* Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*>(digest));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::i___Org__BouncyCastle__Crypto__Prng__IRandomGenerator() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator::DigestRandomGenerator() {}
