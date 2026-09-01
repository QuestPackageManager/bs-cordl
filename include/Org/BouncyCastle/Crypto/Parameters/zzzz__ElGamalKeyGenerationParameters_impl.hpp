#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\ElGamalKeyGenerationParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalKeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ElGamalParameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)>(&::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3412978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters.get_Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* (::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x34129e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>(), { "get_Parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters.GetStrength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*)>(
    &::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetStrength)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x34129b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>(),
                                                                                           { "GetStrength", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*& Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* const& Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::__cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                         ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random, parameters);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::get_Parameters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>(), { "get_Parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::GetStrength(::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>(),
                                                                                         { "GetStrength", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                ::Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters*>(random, parameters));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters::ElGamalKeyGenerationParameters() {}
