#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Math\Primes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/zzzz__Primes_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__Primes_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_MROutput.ProbablyPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Primes_MROutput* (*)()>(&::Org::BouncyCastle::Math::Primes_MROutput::ProbablyPrime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3571858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "ProbablyPrime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_MROutput.ProvablyCompositeWithFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Primes_MROutput* (*)(::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::Primes_MROutput::ProvablyCompositeWithFactor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x35718b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(),
                                                                                           { "ProvablyCompositeWithFactor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_MROutput.ProvablyCompositeNotPrimePower
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Primes_MROutput* (*)()>(&::Org::BouncyCastle::Math::Primes_MROutput::ProvablyCompositeNotPrimePower)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x357190c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "ProvablyCompositeNotPrimePower", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_MROutput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::Primes_MROutput::*)(bool, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::Primes_MROutput::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x35718a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_MROutput.get_Factor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::Primes_MROutput::*)()>(
    &::Org::BouncyCastle::Math::Primes_MROutput::get_Factor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3571960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "get_Factor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_MROutput.get_IsProvablyComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::Primes_MROutput::*)()>(&::Org::BouncyCastle::Math::Primes_MROutput::get_IsProvablyComposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3571968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "get_IsProvablyComposite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_MROutput.get_IsNotPrimePower
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Math::Primes_MROutput::*)()>(&::Org::BouncyCastle::Math::Primes_MROutput::get_IsNotPrimePower)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3571970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "get_IsNotPrimePower", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Math::Primes_MROutput::__cordl_internal_get_mProvablyComposite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mProvablyComposite;
}
constexpr bool const& Org::BouncyCastle::Math::Primes_MROutput::__cordl_internal_get_mProvablyComposite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mProvablyComposite;
}
constexpr void Org::BouncyCastle::Math::Primes_MROutput::__cordl_internal_set_mProvablyComposite(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mProvablyComposite = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::Primes_MROutput::__cordl_internal_get_mFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mFactor;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::Primes_MROutput::__cordl_internal_get_mFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mFactor;
}
constexpr void Org::BouncyCastle::Math::Primes_MROutput::__cordl_internal_set_mFactor(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mFactor = value;
}
inline ::Org::BouncyCastle::Math::Primes_MROutput* Org::BouncyCastle::Math::Primes_MROutput::ProbablyPrime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "ProbablyPrime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Primes_MROutput*>(nullptr, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Primes_MROutput* Org::BouncyCastle::Math::Primes_MROutput::ProvablyCompositeWithFactor(::Org::BouncyCastle::Math::BigInteger* factor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(),
                                                                                         { "ProvablyCompositeWithFactor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Primes_MROutput*>(nullptr, ___internal_method, factor);
}
inline ::Org::BouncyCastle::Math::Primes_MROutput* Org::BouncyCastle::Math::Primes_MROutput::ProvablyCompositeNotPrimePower() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "ProvablyCompositeNotPrimePower", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Primes_MROutput*>(nullptr, ___internal_method);
}
inline void Org::BouncyCastle::Math::Primes_MROutput::_ctor(bool provablyComposite, ::Org::BouncyCastle::Math::BigInteger* factor) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provablyComposite, factor);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Primes_MROutput::get_Factor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "get_Factor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::Primes_MROutput::get_IsProvablyComposite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "get_IsProvablyComposite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Math::Primes_MROutput::get_IsNotPrimePower() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_MROutput*>(), { "get_IsNotPrimePower", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Primes_MROutput* Org::BouncyCastle::Math::Primes_MROutput::New_ctor(bool provablyComposite, ::Org::BouncyCastle::Math::BigInteger* factor) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::Primes_MROutput*>(provablyComposite, factor));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Primes_MROutput::Primes_MROutput() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_STOutput._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::Primes_STOutput::*)(::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::Primes_STOutput::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3571990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_STOutput*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_STOutput.get_Prime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::Primes_STOutput::*)()>(
    &::Org::BouncyCastle::Math::Primes_STOutput::get_Prime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x357199c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_STOutput*>(), { "get_Prime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_STOutput.get_PrimeSeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Math::Primes_STOutput::*)()>(&::Org::BouncyCastle::Math::Primes_STOutput::get_PrimeSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35719a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_STOutput*>(), { "get_PrimeSeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes_STOutput.get_PrimeGenCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Math::Primes_STOutput::*)()>(&::Org::BouncyCastle::Math::Primes_STOutput::get_PrimeGenCounter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x35719ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_STOutput*>(), { "get_PrimeGenCounter", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_get_mPrime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrime;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_get_mPrime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrime;
}
constexpr void Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_set_mPrime(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPrime = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_get_mPrimeSeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrimeSeed;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_get_mPrimeSeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrimeSeed;
}
constexpr void Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_set_mPrimeSeed(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPrimeSeed = value;
}
constexpr int32_t& Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_get_mPrimeGenCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrimeGenCounter;
}
constexpr int32_t const& Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_get_mPrimeGenCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mPrimeGenCounter;
}
constexpr void Org::BouncyCastle::Math::Primes_STOutput::__cordl_internal_set_mPrimeGenCounter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mPrimeGenCounter = value;
}
inline void Org::BouncyCastle::Math::Primes_STOutput::_ctor(::Org::BouncyCastle::Math::BigInteger* prime, ::ArrayW<uint8_t> primeSeed, int32_t primeGenCounter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_STOutput*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prime, primeSeed, primeGenCounter);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Primes_STOutput::get_Prime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_STOutput*>(), { "get_Prime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Math::Primes_STOutput::get_PrimeSeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_STOutput*>(), { "get_PrimeSeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Math::Primes_STOutput::get_PrimeGenCounter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes_STOutput*>(), { "get_PrimeGenCounter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Primes_STOutput* Org::BouncyCastle::Math::Primes_STOutput::New_ctor(::Org::BouncyCastle::Math::BigInteger* prime, ::ArrayW<uint8_t> primeSeed,
                                                                                                      int32_t primeGenCounter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::Primes_STOutput*>(prime, primeSeed, primeGenCounter));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Primes_STOutput::Primes_STOutput() {}
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.GenerateSTRandomPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Primes_STOutput* (*)(::Org::BouncyCastle::Crypto::IDigest*, int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Math::Primes::GenerateSTRandomPrime)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x356f690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                            { "GenerateSTRandomPrime", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.EnhancedMRProbablePrimeTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Primes_MROutput* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Math::Primes::EnhancedMRProbablePrimeTest)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x356fe6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                         { "EnhancedMRProbablePrimeTest",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.HasAnySmallFactors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::Primes::HasAnySmallFactors)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3570384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "HasAnySmallFactors", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.IsMRProbablePrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*, int32_t)>(
    &::Org::BouncyCastle::Math::Primes::IsMRProbablePrime)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x3570d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
            { "IsMRProbablePrime", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.IsMRProbablePrimeToBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Math::Primes::IsMRProbablePrimeToBase)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x35710c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                         { "IsMRProbablePrimeToBase", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.CheckCandidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Math::BigInteger*, ::StringW)>(&::Org::BouncyCastle::Math::Primes::CheckCandidate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3570304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                                             { "CheckCandidate", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.ImplHasAnySmallFactors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::Primes::ImplHasAnySmallFactors)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x3570400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "ImplHasAnySmallFactors", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.ImplMRProbablePrimeToBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int32_t,
                                                                ::Org::BouncyCastle::Math::BigInteger*)>(&::Org::BouncyCastle::Math::Primes::ImplMRProbablePrimeToBase)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3570f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                         { "ImplMRProbablePrimeToBase",
                                           {},
                                           { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                             ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.ImplSTRandomPrime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::Primes_STOutput* (*)(::Org::BouncyCastle::Crypto::IDigest*, int32_t, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Math::Primes::ImplSTRandomPrime)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x356f834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                         { "ImplSTRandomPrime", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.Extract32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Math::Primes::Extract32)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3571418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "Extract32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.Hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::Primes::Hash)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x357128c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
            { "Hash", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.HashGen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Crypto::IDigest*, ::ArrayW<uint8_t>, int32_t)>(
    &::Org::BouncyCastle::Math::Primes::HashGen)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x357163c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                                { "HashGen", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.Inc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t)>(&::Org::BouncyCastle::Math::Primes::Inc)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x35713c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "Inc", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes.IsPrime32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::Org::BouncyCastle::Math::Primes::IsPrime32)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x35714d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "IsPrime32", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Primes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Math::Primes::*)()>(&::Org::BouncyCastle::Math::Primes::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3571854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Math::Primes::setStaticF_SmallFactorLimit(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "SmallFactorLimit", ::Org::BouncyCastle::Math::Primes*>(std::forward<int32_t>(value));
}
inline int32_t Org::BouncyCastle::Math::Primes::getStaticF_SmallFactorLimit() {
  return ::cordl_internals::getStaticField<int32_t, "SmallFactorLimit", ::Org::BouncyCastle::Math::Primes*>();
}
inline void Org::BouncyCastle::Math::Primes::setStaticF_One(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "One", ::Org::BouncyCastle::Math::Primes*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Primes::getStaticF_One() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "One", ::Org::BouncyCastle::Math::Primes*>();
}
inline void Org::BouncyCastle::Math::Primes::setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two", ::Org::BouncyCastle::Math::Primes*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Primes::getStaticF_Two() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two", ::Org::BouncyCastle::Math::Primes*>();
}
inline void Org::BouncyCastle::Math::Primes::setStaticF_Three(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Three", ::Org::BouncyCastle::Math::Primes*>(std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Primes::getStaticF_Three() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Three", ::Org::BouncyCastle::Math::Primes*>();
}
inline ::Org::BouncyCastle::Math::Primes_STOutput* Org::BouncyCastle::Math::Primes::GenerateSTRandomPrime(::Org::BouncyCastle::Crypto::IDigest* hash, int32_t length, ::ArrayW<uint8_t> inputSeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                       { "GenerateSTRandomPrime", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Primes_STOutput*>(nullptr, ___internal_method, hash, length, inputSeed);
}
inline ::Org::BouncyCastle::Math::Primes_MROutput* Org::BouncyCastle::Math::Primes::EnhancedMRProbablePrimeTest(::Org::BouncyCastle::Math::BigInteger* candidate,
                                                                                                                ::Org::BouncyCastle::Security::SecureRandom* random, int32_t iterations) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                       { "EnhancedMRProbablePrimeTest",
                                         {},
                                         { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Primes_MROutput*>(nullptr, ___internal_method, candidate, random, iterations);
}
inline bool Org::BouncyCastle::Math::Primes::HasAnySmallFactors(::Org::BouncyCastle::Math::BigInteger* candidate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "HasAnySmallFactors", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, candidate);
}
inline bool Org::BouncyCastle::Math::Primes::IsMRProbablePrime(::Org::BouncyCastle::Math::BigInteger* candidate, ::Org::BouncyCastle::Security::SecureRandom* random, int32_t iterations) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
          { "IsMRProbablePrime", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, candidate, random, iterations);
}
inline bool Org::BouncyCastle::Math::Primes::IsMRProbablePrimeToBase(::Org::BouncyCastle::Math::BigInteger* candidate, ::Org::BouncyCastle::Math::BigInteger* baseValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                       { "IsMRProbablePrimeToBase", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, candidate, baseValue);
}
inline void Org::BouncyCastle::Math::Primes::CheckCandidate(::Org::BouncyCastle::Math::BigInteger* n, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "CheckCandidate", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, n, name);
}
inline bool Org::BouncyCastle::Math::Primes::ImplHasAnySmallFactors(::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "ImplHasAnySmallFactors", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x);
}
inline bool Org::BouncyCastle::Math::Primes::ImplMRProbablePrimeToBase(::Org::BouncyCastle::Math::BigInteger* w, ::Org::BouncyCastle::Math::BigInteger* wSubOne,
                                                                       ::Org::BouncyCastle::Math::BigInteger* m, int32_t a, ::Org::BouncyCastle::Math::BigInteger* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                              { "ImplMRProbablePrimeToBase",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                  ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, w, wSubOne, m, a, b);
}
inline ::Org::BouncyCastle::Math::Primes_STOutput* Org::BouncyCastle::Math::Primes::ImplSTRandomPrime(::Org::BouncyCastle::Crypto::IDigest* d, int32_t length, ::ArrayW<uint8_t> primeSeed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                       { "ImplSTRandomPrime", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Primes_STOutput*>(nullptr, ___internal_method, d, length, primeSeed);
}
inline uint32_t Org::BouncyCastle::Math::Primes::Extract32(::ArrayW<uint8_t> bs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "Extract32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bs);
}
inline void Org::BouncyCastle::Math::Primes::Hash(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, int32_t outPos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
          { "Hash", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, input, output, outPos);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::Primes::HashGen(::Org::BouncyCastle::Crypto::IDigest* d, ::ArrayW<uint8_t> seed, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(),
                                              { "HashGen", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IDigest*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, d, seed, count);
}
inline void Org::BouncyCastle::Math::Primes::Inc(::ArrayW<uint8_t> seed, int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "Inc", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, seed, c);
}
inline bool Org::BouncyCastle::Math::Primes::IsPrime32(uint32_t x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { "IsPrime32", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x);
}
inline void Org::BouncyCastle::Math::Primes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Math::Primes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::Primes* Org::BouncyCastle::Math::Primes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Math::Primes*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::Primes::Primes() {}
