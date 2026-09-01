#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\Gost3410PublicKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410KeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410PublicKeyParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__Gost3410Parameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*)>(&::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x34138d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*>(),
                            { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3413988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters.get_Y
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::get_Y)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3413a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*>(), { "get_Y", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::__cordl_internal_get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::__cordl_internal_get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::__cordl_internal_set_y(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* y,
                                                                                      ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y, parameters);
}
inline void Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, y, publicKeyParamSet);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::get_Y() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*>(), { "get_Y", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*
Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*>(y, parameters));
}
inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*
Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*>(y, publicKeyParamSet));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::Gost3410PublicKeyParameters() {}
