#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/Drbg/HashSP800Drbg.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__HashSP800Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/Prng/Drbg/zzzz__ISP80090Drbg_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IEntropySource_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(
    ::Org::BouncyCastle::Crypto::IDigest*, int32_t, ::Org::BouncyCastle::Crypto::IEntropySource*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::_ctor)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x3419638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>(),
                                                    ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.get_BlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)()>(&::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::get_BlockSize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3419b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(), { "get_BlockSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.Generate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Generate)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x3419c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                             { "Generate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.GetEntropy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)()>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::GetEntropy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3419a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(), { "GetEntropy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.AddTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::AddTo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x341a238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                                                           { "AddTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.Reseed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Reseed)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x3419f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(), { "Reseed", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Hash)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x341a140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(), { "Hash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.DoHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::DoHash)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x341a53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                                                           { "DoHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg.hashgen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::*)(::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::hashgen)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x341a2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                                                           { "hashgen", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr ::Org::BouncyCastle::Crypto::IDigest* const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mDigest = value;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource*& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mEntropySource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr ::Org::BouncyCastle::Crypto::IEntropySource* const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mEntropySource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mEntropySource;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mEntropySource(::Org::BouncyCastle::Crypto::IEntropySource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mEntropySource = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mSecurityStrength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mSecurityStrength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSecurityStrength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mSecurityStrength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSecurityStrength = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mSeedLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSeedLength;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mSeedLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSeedLength;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mSeedLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSeedLength = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mV;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mV(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mV = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mC() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mC;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mC() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mC;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mC(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mC = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mReseedCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_get_mReseedCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mReseedCounter;
}
constexpr void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::__cordl_internal_set_mReseedCounter(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mReseedCounter = value;
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::setStaticF_ONE(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "ONE", ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::getStaticF_ONE() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "ONE", ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::setStaticF_RESEED_MAX(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "RESEED_MAX", ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(std::forward<int64_t>(value));
}
inline int64_t Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::getStaticF_RESEED_MAX() {
  return ::cordl_internals::getStaticField<int64_t, "RESEED_MAX", ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::setStaticF_MAX_BITS_REQUEST(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAX_BITS_REQUEST", ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::getStaticF_MAX_BITS_REQUEST() {
  return ::cordl_internals::getStaticField<int32_t, "MAX_BITS_REQUEST", ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::setStaticF_seedlens(::System::Collections::IDictionary* value) {
  ::cordl_internals::setStaticField<::System::Collections::IDictionary*, "seedlens", ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(std::forward<::System::Collections::IDictionary*>(value));
}
inline ::System::Collections::IDictionary* Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::getStaticF_seedlens() {
  return ::cordl_internals::getStaticField<::System::Collections::IDictionary*, "seedlens", ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>();
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength,
                                                                        ::Org::BouncyCastle::Crypto::IEntropySource* entropySource, ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IEntropySource*>(),
                                                  ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, digest, securityStrength, entropySource, personalizationString, nonce);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(), { "get_BlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Generate(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> additionalInput, bool predictionResistant) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                           { "Generate", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, additionalInput, predictionResistant);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::GetEntropy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(), { "GetEntropy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::AddTo(::ArrayW<uint8_t> longer, ::ArrayW<uint8_t> shorter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                                                         { "AddTo", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, longer, shorter);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Reseed(::ArrayW<uint8_t> additionalInput) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(), { "Reseed", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, additionalInput);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::Hash(::ArrayW<uint8_t> input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(), { "Hash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::DoHash(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                                                         { "DoHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, output);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::hashgen(::ArrayW<uint8_t> input, int32_t lengthInBits) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(),
                                                                                         { "hashgen", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, input, lengthInBits);
}
inline ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg* Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength,
                                                                                                                              ::Org::BouncyCastle::Crypto::IEntropySource* entropySource,
                                                                                                                              ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg*>(digest, securityStrength, entropySource, personalizationString, nonce));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
constexpr Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::operator ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg"
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg* Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::i___Org__BouncyCastle__Crypto__Prng__Drbg__ISP80090Drbg() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg::HashSP800Drbg() {}
