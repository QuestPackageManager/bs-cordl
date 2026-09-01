#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\DHParametersHelper.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHParametersHelper_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper.ConstructBigPrimeProducts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (*)(::ArrayW<int32_t>)>(
    &::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::ConstructBigPrimeProducts)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x33d65d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(),
                                                                                           { "ConstructBigPrimeProducts", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper.GenerateSafePrimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (*)(int32_t, int32_t, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::GenerateSafePrimes)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x33d6018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(),
                                         { "GenerateSafePrimes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper.SelectGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::SelectGenerator)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x33d64e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(),
                                                             { "SelectGenerator",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::*)()>(&::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33d6798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Generators::DHParametersHelper::setStaticF_Six(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Six", ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DHParametersHelper::getStaticF_Six() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Six", ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>();
}
inline void Org::BouncyCastle::Crypto::Generators::DHParametersHelper::setStaticF_primeLists(::ArrayW<::ArrayW<int32_t>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "primeLists", ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
inline ::ArrayW<::ArrayW<int32_t>> Org::BouncyCastle::Crypto::Generators::DHParametersHelper::getStaticF_primeLists() {
  return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "primeLists", ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>();
}
inline void Org::BouncyCastle::Crypto::Generators::DHParametersHelper::setStaticF_primeProducts(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "primeProducts", ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Org::BouncyCastle::Crypto::Generators::DHParametersHelper::getStaticF_primeProducts() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "primeProducts", ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>();
}
inline void Org::BouncyCastle::Crypto::Generators::DHParametersHelper::setStaticF_BigPrimeProducts(::ArrayW<::Org::BouncyCastle::Math::BigInteger*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>, "BigPrimeProducts", ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(
      std::forward<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(value));
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Generators::DHParametersHelper::getStaticF_BigPrimeProducts() {
  return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>, "BigPrimeProducts", ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>();
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Generators::DHParametersHelper::ConstructBigPrimeProducts(::ArrayW<int32_t> primeProducts) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(), { "ConstructBigPrimeProducts", {}, { ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(nullptr, ___internal_method, primeProducts);
}
inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> Org::BouncyCastle::Crypto::Generators::DHParametersHelper::GenerateSafePrimes(int32_t size, int32_t certainty,
                                                                                                                                      ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(),
                                              { "GenerateSafePrimes", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger*>>(nullptr, ___internal_method, size, certainty, random);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DHParametersHelper::SelectGenerator(::Org::BouncyCastle::Math::BigInteger* p,
                                                                                                                         ::Org::BouncyCastle::Math::BigInteger* q,
                                                                                                                         ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(),
                                                           { "SelectGenerator",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(nullptr, ___internal_method, p, q, random);
}
inline void Org::BouncyCastle::Crypto::Generators::DHParametersHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper* Org::BouncyCastle::Crypto::Generators::DHParametersHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::DHParametersHelper() {}
