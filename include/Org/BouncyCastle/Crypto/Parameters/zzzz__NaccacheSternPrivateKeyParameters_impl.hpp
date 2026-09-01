#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Parameters\NaccacheSternPrivateKeyParameters.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternKeyParameters_impl.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__NaccacheSternPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int32_t, ::System::Collections::ArrayList*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3414ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, int32_t, ::System::Collections::IList*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3414ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters.get_PhiN
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::get_PhiN)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3414eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(), { "get_PhiN", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters.get_SmallPrimes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::get_SmallPrimes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3414ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(), { "get_SmallPrimes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters.get_SmallPrimesList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IList* (::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::*)()>(
    &::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::get_SmallPrimesList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3414f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(), { "get_SmallPrimesList", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::__cordl_internal_get_phiN() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___phiN;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::__cordl_internal_get_phiN() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___phiN;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::__cordl_internal_set_phiN(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___phiN = value;
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::__cordl_internal_get_smallPrimes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smallPrimes;
}
constexpr ::System::Collections::IList* const& Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::__cordl_internal_get_smallPrimes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smallPrimes;
}
constexpr void Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::__cordl_internal_set_smallPrimes(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smallPrimes = value;
}
inline void Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n, int32_t lowerSigmaBound,
                                                                                            ::System::Collections::ArrayList* smallPrimes, ::Org::BouncyCastle::Math::BigInteger* phiN) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, g, n, lowerSigmaBound, smallPrimes, phiN);
}
inline void Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n, int32_t lowerSigmaBound,
                                                                                            ::System::Collections::IList* smallPrimes, ::Org::BouncyCastle::Math::BigInteger* phiN) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::System::Collections::IList*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, g, n, lowerSigmaBound, smallPrimes, phiN);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::get_PhiN() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(), { "get_PhiN", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::get_SmallPrimes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(), { "get_SmallPrimes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Collections::IList* Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::get_SmallPrimesList() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(), { "get_SmallPrimesList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IList*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*
Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n, int32_t lowerSigmaBound,
                                                                                   ::System::Collections::ArrayList* smallPrimes, ::Org::BouncyCastle::Math::BigInteger* phiN) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(g, n, lowerSigmaBound, smallPrimes, phiN));
}
inline ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*
Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* g, ::Org::BouncyCastle::Math::BigInteger* n, int32_t lowerSigmaBound,
                                                                                   ::System::Collections::IList* smallPrimes, ::Org::BouncyCastle::Math::BigInteger* phiN) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters*>(g, n, lowerSigmaBound, smallPrimes, phiN));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Parameters::NaccacheSternPrivateKeyParameters::NaccacheSternPrivateKeyParameters() {}
