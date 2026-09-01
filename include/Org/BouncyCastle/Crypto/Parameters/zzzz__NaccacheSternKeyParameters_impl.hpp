#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\NaccacheSternKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)(
    bool, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int32_t)>(&::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3414e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3414ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(), { "get_G", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_LowerSigmaBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_LowerSigmaBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3414eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(), { "get_LowerSigmaBound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters.get_Modulus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_Modulus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3414eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(), { "get_Modulus", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_get_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_get_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___g;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_set_g(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___g = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_set_n(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___n = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_get_lowerSigmaBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerSigmaBound;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_get_lowerSigmaBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lowerSigmaBound;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::__cordl_internal_set_lowerSigmaBound(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lowerSigmaBound = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::_ctor(bool privateKey, ::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                     int32_t lowerSigmaBound) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(),
          { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, privateKey, g, n, lowerSigmaBound);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_G() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(), { "get_G", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_LowerSigmaBound() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(), { "get_LowerSigmaBound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::get_Modulus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(), { "get_Modulus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters* Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::New_ctor(bool privateKey,
                                                                                                                                                        ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                                                                                        ::Org::BouncyCastle::Math::BigInteger* n,
                                                                                                                                                        int32_t lowerSigmaBound) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters*>(privateKey, g, n, lowerSigmaBound));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyParameters::NaccacheSternKeyParameters() {}
