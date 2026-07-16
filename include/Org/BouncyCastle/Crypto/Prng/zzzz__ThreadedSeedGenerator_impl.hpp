#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/ThreadedSeedGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__ThreadedSeedGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__ThreadedSeedGenerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::*)(::System::Object*)>(
    &::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::Run)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x341e654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>(), { "Run", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator.GenerateSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::*)(int32_t, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::GenerateSeed)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x341e52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>(),
                                                                                           { "GenerateSeed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator.DoGenerateSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::*)(int32_t, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::DoGenerateSeed)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x341e680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>(),
                                                                                           { "DoGenerateSeed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x341e518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::__cordl_internal_get_counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::__cordl_internal_get_counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___counter;
}
constexpr void Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::__cordl_internal_set_counter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___counter = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::__cordl_internal_get_stop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stop;
}
constexpr bool const& Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::__cordl_internal_get_stop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stop;
}
constexpr void Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::__cordl_internal_set_stop(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stop = value;
}
inline void Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::Run(::System::Object* ignored) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>(), { "Run", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignored);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::GenerateSeed(int32_t numBytes, bool fast) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>(),
                                                                                         { "GenerateSeed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, numBytes, fast);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::DoGenerateSeed(int32_t numBytes, bool fast) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>(),
                                                                                         { "DoGenerateSeed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, numBytes, fast);
}
inline void Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator* Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator_SeedGenerator::ThreadedSeedGenerator_SeedGenerator() {}
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator.GenerateSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::*)(int32_t, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::GenerateSeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x341e4a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>(), { "GenerateSeed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::*)()>(&::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x341e650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::GenerateSeed(int32_t numBytes, bool fast) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>(), { "GenerateSeed", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, numBytes, fast);
}
inline void Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator* Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::ThreadedSeedGenerator::ThreadedSeedGenerator() {}
