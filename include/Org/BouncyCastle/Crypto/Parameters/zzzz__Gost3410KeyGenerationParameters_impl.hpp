#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/Gost3410KeyGenerationParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyGenerationParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410Parameters_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*)>(&::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3410d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::*)(
    ::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3410da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters.get_Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* (::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3410f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(), { "get_Parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters.get_PublicKeyParamSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::get_PublicKeyParamSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3410f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(), { "get_PublicKeyParamSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters.LookupParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(
    &::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::LookupParameters)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3410de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(),
                                                                                           { "LookupParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*& Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* const& Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::__cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::__cordl_internal_get_publicKeyParamSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyParamSet;
}
constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::__cordl_internal_get_publicKeyParamSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicKeyParamSet;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::__cordl_internal_set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___publicKeyParamSet = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                          ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(),
                          { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random, parameters);
}
inline void Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                          ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Security::SecureRandom*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, random, publicKeyParamSet);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::get_Parameters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(), { "get_Parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::get_PublicKeyParamSet() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(), { "get_PublicKeyParamSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*
Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::LookupParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(),
                                                                                         { "LookupParameters", {}, { ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*>(nullptr, ___internal_method, publicKeyParamSet);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                 ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(random, parameters));
}
inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*
Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::New_ctor(::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                 ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters*>(random, publicKeyParamSet));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyGenerationParameters::Gost3410KeyGenerationParameters() {}
