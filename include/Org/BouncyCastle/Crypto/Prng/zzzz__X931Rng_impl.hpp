#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/X931Rng.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/zzzz__X931Rng_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)(
    ::Org::BouncyCastle::Crypto::IBlockCipher*, ::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::IEntropySource*)>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::_ctor)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x341ec18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(),
            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)(::ArrayW<uint8_t>, bool)>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::Generate)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x341ee14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "Generate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.Reseed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)()>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::Reseed)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x341f42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "Reseed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.get_EntropySource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IEntropySource* (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::X931Rng::get_EntropySource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x341f5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "get_EntropySource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::X931Rng::Process)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x341f2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(),
                                                             { "Process", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.Increment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::X931Rng::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::Increment)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x341f3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "Increment", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::X931Rng.IsTooLarge
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Crypto::Prng::X931Rng::IsTooLarge)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x341f294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "IsTooLarge", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mEngine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEngine;
}
constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mEngine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEngine;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mEngine(::Org::BouncyCastle::Crypto::IBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEngine = value;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mEntropySource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource* const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mEntropySource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySource = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mDT() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDT;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mDT() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDT;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mDT(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDT = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mI;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mI;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mI(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mI = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mR;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mR;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mR(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mR = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mV = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mReseedCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_get_mReseedCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr void Org::BouncyCastle::Crypto::Prng::X931Rng::__cordl_internal_set_mReseedCounter(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReseedCounter = value;
}
inline void Org::BouncyCastle::Crypto::Prng::X931Rng::_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, ::ArrayW<uint8_t> dateTimeVector,
                                                            ::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(),
          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IBlockCipher*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, engine, dateTimeVector, entropySource);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::X931Rng::Generate(::ArrayW<uint8_t> output, bool predictionResistant) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "Generate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, predictionResistant);
}
inline void Org::BouncyCastle::Crypto::Prng::X931Rng::Reseed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "Reseed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IEntropySource* Org::BouncyCastle::Crypto::Prng::X931Rng::get_EntropySource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "get_EntropySource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IEntropySource*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::X931Rng::Process(::ArrayW<uint8_t> res, ::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(),
                                                           { "Process", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, res, a, b);
}
inline void Org::BouncyCastle::Crypto::Prng::X931Rng::Increment(::ArrayW<uint8_t> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "Increment", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline bool Org::BouncyCastle::Crypto::Prng::X931Rng::IsTooLarge(::ArrayW<uint8_t> bytes, int32_t maxBytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(), { "IsTooLarge", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bytes, maxBytes);
}
inline ::Org::BouncyCastle::Crypto::Prng::X931Rng* Org::BouncyCastle::Crypto::Prng::X931Rng::New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine, ::ArrayW<uint8_t> dateTimeVector,
                                                                                                      ::Org::BouncyCastle::Crypto::IEntropySource* entropySource) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::X931Rng*>(engine, dateTimeVector, entropySource));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::X931Rng::X931Rng() {}
