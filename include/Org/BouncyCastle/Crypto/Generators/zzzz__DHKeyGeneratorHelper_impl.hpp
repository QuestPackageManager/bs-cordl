#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Generators\DHKeyGeneratorHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHKeyGeneratorHelper_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__DHParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x33d5c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper.CalculatePrivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePrivate)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x33d5a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(),
                            { "CalculatePrivate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper.CalculatePublic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (
    ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePublic)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x33d5c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(),
                            { "CalculatePublic", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::setStaticF_Instance(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*, "Instance", ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(
      std::forward<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(value));
}
inline ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*, "Instance", ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>();
}
inline void Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePrivate(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams,
                                                                                                                            ::Org::BouncyCastle::Security::SecureRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(),
                          { "CalculatePrivate", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, dhParams, random);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePublic(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams,
                                                                                                                           ::Org::BouncyCastle::Math::BigInteger* x) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>(),
                          { "CalculatePublic", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::DHParameters*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method, dhParams, x);
}
inline ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::DHKeyGeneratorHelper() {}
